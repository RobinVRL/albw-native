#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern longlong func_001104E4(int param_1,int param_2);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00114F58(float *param_1,float *param_2);
extern int func_00115074(float *param_1,float *param_2,float *param_3);
extern int func_003F80EC(int param_1,int param_2,undefined4 param_3);
extern int DAT_003e7670;
extern float DAT_003e7674;
extern float DAT_003e7678;
extern float DAT_003e767c;
extern int *DAT_003e7680;
extern float DAT_003e7684;
extern float DAT_003e7688;
extern float DAT_003e768c;
extern float DAT_003e7690;
extern float DAT_003e7694;
extern int DAT_003e7698;
extern float DAT_003e769c;
extern int *DAT_003e76a0;
extern int DAT_003e825c;
extern uint *DAT_003e8260;
extern float *DAT_003e8264;
extern uint DAT_003e8268;
extern float DAT_003e826c;
extern int *DAT_003e8384;
extern undefined4 DAT_003e8388;

// USA 003E728C <- EU 003E726C (Ghidra, non-matching)
// GLOBAL DAT_003e7670 int
// GLOBAL DAT_003e7674 float
// GLOBAL DAT_003e7678 float
// GLOBAL DAT_003e767c float
// GLOBAL DAT_003e7680 int *
// GLOBAL DAT_003e7684 float
// GLOBAL DAT_003e7688 float
// GLOBAL DAT_003e768c float
// GLOBAL DAT_003e7690 float
// GLOBAL DAT_003e7694 float
// GLOBAL DAT_003e7698 int
// GLOBAL DAT_003e769c float
// GLOBAL DAT_003e76a0 int *
// GLOBAL DAT_003e825c int
// GLOBAL DAT_003e8260 uint *
// GLOBAL DAT_003e8264 float *
// GLOBAL DAT_003e8268 uint
// GLOBAL DAT_003e826c float
// GLOBAL DAT_003e8384 int *
// GLOBAL DAT_003e8388 undefined4

void func_003E728C(int param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
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
  float fVar32;
  undefined8 uVar33;
  longlong lVar34;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define fStack_d0 (*(float *)(albw_frame + 0x0))
  #define local_cc (*(int *)(albw_frame + 0x4))
  #define local_b0 (*(float *)(albw_frame + 0x20))
  #define local_ac (*(float *)(albw_frame + 0x24))
  #define local_a8 (*(float *)(albw_frame + 0x28))
  #define local_94 (*(float *)(albw_frame + 0x3c))
  #define fStack_90 (*(float *)(albw_frame + 0x40))
  #define local_8c (*(float *)(albw_frame + 0x44))
  #define local_88 (*(float *)(albw_frame + 0x48))
  #define local_84 (*(float *)(albw_frame + 0x4c))
  #define local_80 (*(float *)(albw_frame + 0x50))
  #define local_7c (*(float *)(albw_frame + 0x54))
  #define local_78 (*(float *)(albw_frame + 0x58))
  #define local_74 (*(float *)(albw_frame + 0x5c))
  #define local_70 (*(float *)(albw_frame + 0x60))
  #define fStack_6c (*(float *)(albw_frame + 0x64))
  #define local_68 (*(float *)(albw_frame + 0x68))
  #define local_64 (*(float *)(albw_frame + 0x6c))
  #define local_60 (*(float *)(albw_frame + 0x70))
  #define local_5c (*(float *)(albw_frame + 0x74))
  #define local_58 (*(float *)(albw_frame + 0x78))
  #define local_54 (*(float *)(albw_frame + 0x7c))
  #define local_50 (*(float *)(albw_frame + 0x80))
  #define local_4c (*(float *)(albw_frame + 0x84))
  #define local_48 (*(float *)(albw_frame + 0x88))
  fVar31 = DAT_003e7678;
  fVar19 = DAT_003e7674;
  iVar14 = *(int *)(param_1 + 0xd8);
  iVar15 = *(int *)(param_1 + 0x18);
  fVar18 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x15) & 3);
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * DAT_003e7670 + 0x3039;
  fVar32 = *(float *)(param_1 + 0x1a8) * *(float *)(iVar15 + 0x240);
  fVar18 = fVar31 - *(float *)(iVar14 + 0x2e0) * *(float *)(iVar15 + 0x244) * fVar18 * fVar19;
  if (*(int *)(param_1 + 200) == 0) {
    param_2[0x4c] = param_1 + 0x24;
    param_2[0x4d] = param_1 + 0x54;
  }
  else {
    func_001119F4(param_2 + 0x34,(undefined4 *)(param_1 + 0x24));
    func_001119F4(param_2 + 0x40,(undefined4 *)(param_1 + 0x54));
    param_2[0x4c] = param_2 + 0x34;
    param_2[0x4d] = param_2 + 0x40;
  }
  fVar30 = DAT_003e767c;
  uVar17 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar14 + 0x314) == DAT_003e767c) << 0x1e;
  if (!SUB41(uVar17 >> 0x1e,0)) {
    iVar11 = *DAT_003e7680;
    uVar3 = *(ushort *)(param_1 + 0x86);
    *(ushort *)(param_1 + 0x86) = uVar3 + 1;
    pfVar6 = (float *)(iVar11 + (uVar3 & 0xffff01ff) * 0xc);
    fVar20 = *(float *)(iVar14 + 0x314);
    fVar21 = pfVar6[1];
    fVar24 = pfVar6[2];
    param_2[2] = ALBW_AS_U32(ALBW_AS_F32(param_2[2]) + *pfVar6 * fVar20);
    param_2[3] = ALBW_AS_U32(ALBW_AS_F32(param_2[3]) + fVar21 * fVar20);
    param_2[4] = ALBW_AS_U32(ALBW_AS_F32(param_2[4]) + fVar24 * fVar20);
  }
  fVar21 = DAT_003e768c;
  fVar20 = DAT_003e7684;
  if (*(char *)(iVar15 + 0x281) == '\0') {
    uVar17 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar14 + 0x2f0) == fVar30) << 0x1e;
    if (SUB41(uVar17 >> 0x1e,0)) {
      fVar20 = *(float *)(iVar14 + 0x2e8);
      fVar21 = *(float *)(iVar14 + 0x2ec);
      param_2[8] = ALBW_AS_U32((ALBW_AS_F32(param_2[8]) + *(float *)(iVar14 + 0x2e4) * fVar32) * fVar18);
      param_2[9] = ALBW_AS_U32((ALBW_AS_F32(param_2[9]) + fVar20 * fVar32) * fVar18);
      param_2[10] = ALBW_AS_U32((ALBW_AS_F32(param_2[10]) + fVar21 * fVar32) * fVar18);
    }
    else {
      iVar11 = *(int *)(param_1 + 0x88);
      fVar24 = *(float *)(iVar14 + 0x2f0) * DAT_003e7688;
      uVar7 = iVar11 * DAT_003e7670;
      iVar4 = uVar7 + 0x3039;
      *(int *)(param_1 + 0x88) = iVar4;
      fVar24 = fVar31 - fVar24;
      fVar28 = (float)VectorUnsignedToFloat(iVar11,(byte)(uVar17 >> 0x15) & 3);
      uVar33 = func_00114608((uint)ALBW_AS_U32((fVar28 * fVar19 * fVar20 * fVar21 * DAT_003e7690)),uVar7);
      pfVar6 = (float *)(DAT_003e7698 + ((uint)uVar33 >> 0x18) * 0x10);
      fVar21 = (float)VectorUnsignedToFloat((uint)uVar33 & 0xffffff,(byte)(uVar17 >> 0x15) & 3);
      fVar23 = *pfVar6;
      fVar29 = pfVar6[1];
      fVar25 = pfVar6[2];
      fVar21 = fVar21 * DAT_003e7694;
      fVar22 = pfVar6[3];
      *(int *)(param_1 + 0x88) = iVar4 * DAT_003e7670 + 0x3039;
      fVar28 = (float)VectorUnsignedToFloat(iVar4,(byte)(uVar17 >> 0x15) & 3);
      local_ac = fVar24 + fVar28 * fVar19 * (fVar31 - fVar24);
      fVar24 = fVar31 - local_ac * local_ac;
      uVar17 = uVar17 & 0xfffffff | (uint)(fVar24 == fVar30) << 0x1e |
               (uint)(fVar30 <= fVar24) << 0x1d;
      bVar2 = (byte)(uVar17 >> 0x18);
      local_a8 = fVar30;
      if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) {
        local_a8 = SQRT(fVar24);
      }
      local_b0 = local_a8 * (fVar25 + fVar22 * fVar21);
      local_a8 = local_a8 * (fVar23 + fVar29 * fVar21);
      fVar25 = *(float *)(iVar14 + 0x2e8);
      fVar26 = *(float *)(iVar14 + 0x2ec);
      fVar23 = fVar30 * *(float *)(iVar14 + 0x2e4);
      fVar29 = fVar23 + fVar31 * fVar25 + fVar30 * fVar26 + fVar31;
      fVar21 = fVar30;
      fVar24 = fVar30;
      fVar28 = fVar30;
      fVar22 = fVar31;
      if (0x34000000 < (int)ALBW_AS_U32(fVar29)) {
        fVar24 = SQRT(fVar29 * fVar20);
        fVar22 = fVar31 / fVar24;
        fVar21 = (fVar23 - fVar30 * fVar26) * fVar22;
        fVar24 = fVar24 * DAT_003e769c;
        fVar28 = (fVar30 * fVar25 - fVar31 * *(float *)(iVar14 + 0x2e4)) * fVar22;
        fVar22 = (fVar31 * fVar26 - fVar30 * fVar25) * fVar22;
      }
      fVar20 = fVar20 / (fVar22 * fVar22 + fVar21 * fVar21 + fVar28 * fVar28 + fVar24 * fVar24);
      fVar25 = fVar21 * fVar20;
      fVar29 = fVar28 * fVar20;
      fVar23 = fVar22 * fVar22 * fVar20;
      local_5c = fVar24 * fVar22 * fVar20;
      local_7c = fVar22 * fVar25 - fVar24 * fVar29;
      local_70 = fVar22 * fVar25 + fVar24 * fVar29;
      local_78 = fVar22 * fVar29 + fVar24 * fVar25;
      local_60 = fVar22 * fVar29 - fVar24 * fVar25;
      local_80 = fVar31 - (fVar21 * fVar25 + fVar28 * fVar29);
      local_68 = fVar21 * fVar29 - local_5c;
      local_5c = fVar21 * fVar29 + local_5c;
      fStack_6c = fVar31 - (fVar23 + fVar28 * fVar29);
      local_58 = fVar31 - (fVar23 + fVar21 * fVar25);
      local_74 = fVar30;
      local_64 = fVar30;
      local_54 = fVar30;
      local_50 = local_b0;
      local_4c = local_ac;
      local_48 = local_a8;
      func_00115074(&local_b0,&local_80,&local_50);
      param_2[8] = ALBW_AS_U32((ALBW_AS_F32(param_2[8]) + local_b0 * fVar32) * fVar18);
      param_2[9] = ALBW_AS_U32((ALBW_AS_F32(param_2[9]) + local_ac * fVar32) * fVar18);
      param_2[10] = ALBW_AS_U32((ALBW_AS_F32(param_2[10]) + local_a8 * fVar32) * fVar18);
    }
  }
  else {
    fVar20 = *(float *)(iVar15 + 600);
    fVar21 = *(float *)(iVar15 + 0x25c);
    param_2[8] = ALBW_AS_U32((ALBW_AS_F32(param_2[8]) + *(float *)(iVar15 + 0x254) * fVar32) * fVar18);
    param_2[9] = ALBW_AS_U32((ALBW_AS_F32(param_2[9]) + fVar20 * fVar32) * fVar18);
    param_2[10] = ALBW_AS_U32((ALBW_AS_F32(param_2[10]) + fVar21 * fVar32) * fVar18);
  }
  iVar11 = *DAT_003e76a0;
  uVar3 = *(ushort *)(param_1 + 0x84);
  *(ushort *)(param_1 + 0x84) = uVar3 + 1;
  pfVar6 = (float *)(iVar11 + (uVar3 & 0xffff01ff) * 0xc);
  fVar32 = *(float *)(iVar14 + 0x2f8);
  fVar18 = *(float *)(iVar14 + 0x2fc);
  fVar20 = pfVar6[1];
  fVar21 = pfVar6[2];
  uVar17 = uVar17 & 0xfffffff | (uint)(*(float *)(iVar14 + 0x318) == fVar30) << 0x1e;
  param_2[8] = ALBW_AS_U32(ALBW_AS_F32(param_2[8]) + *pfVar6 * *(float *)(iVar14 + 0x2f4));
  param_2[9] = ALBW_AS_U32(ALBW_AS_F32(param_2[9]) + fVar20 * fVar32);
  param_2[10] = ALBW_AS_U32(ALBW_AS_F32(param_2[10]) + fVar21 * fVar18);
  if (!SUB41(uVar17 >> 0x1e,0)) {
    local_7c = *(float *)(param_1 + 0x30);
    local_78 = *(float *)(param_1 + 0x40);
    local_74 = *(float *)(param_1 + 0x50);
    if (*(int *)(param_1 + 200) == 0) {
      func_00114F58(&fStack_d0,(float *)(param_1 + 0x54));
    }
    else {
      func_00114F58(&fStack_d0,(float *)(param_2 + 0x40));
    }
    func_00115074(&local_94,&fStack_d0,&local_7c);
    if (*(int *)(param_1 + 200) == 0) {
      func_00114F58(&fStack_d0,(float *)(param_1 + 0x54));
    }
    else {
      func_00114F58(&fStack_d0,(float *)(param_2 + 0x40));
    }
    func_00115074(&local_88,&fStack_d0,(float *)(param_1 + 0x94));
    fVar18 = *(float *)(iVar14 + 0x318);
    param_2[10] = ALBW_AS_U32(ALBW_AS_F32(param_2[10]) + (local_8c - local_80) * fVar18);
    param_2[8] = ALBW_AS_U32(ALBW_AS_F32(param_2[8]) + (local_94 - local_88) * fVar18);
    param_2[9] = ALBW_AS_U32(ALBW_AS_F32(param_2[9]) + (fStack_90 - local_84) * fVar18);
  }
  fVar18 = *(float *)(iVar15 + 0x24c);
  fVar24 = *(float *)(iVar15 + 0x250);
  fVar20 = *(float *)(iVar15 + 0x248);
  fVar32 = fVar18 * *(float *)(iVar15 + 0x1e4) + fVar24 * *(float *)(iVar15 + 500) +
           ALBW_AS_F32(param_2[10]) + fVar20 * *(float *)(iVar15 + 0x1d4);
  fVar21 = fVar18 * *(float *)(iVar15 + 0x1dc) + fVar24 * *(float *)(iVar15 + 0x1ec) +
           ALBW_AS_F32(param_2[8]) + fVar20 * *(float *)(iVar15 + 0x1cc);
  fVar18 = fVar18 * *(float *)(iVar15 + 0x1e0) + fVar24 * *(float *)(iVar15 + 0x1f0) +
           ALBW_AS_F32(param_2[9]) + fVar20 * *(float *)(iVar15 + 0x1d0);
  param_2[10] = ALBW_AS_U32(fVar32);
  param_2[8] = ALBW_AS_U32(fVar21);
  param_2[9] = ALBW_AS_U32(fVar18);
  *param_2 = 0;
  param_2[7] = ALBW_AS_U32(fVar32);
  iVar11 = DAT_003e7670;
  param_2[5] = ALBW_AS_U32(fVar21);
  param_2[6] = ALBW_AS_U32(fVar18);
  iVar4 = *(int *)(param_1 + 0x88);
  uVar7 = iVar4 * iVar11 + 0x3039;
  *(uint *)(param_1 + 0x88) = uVar7;
  iVar11 = *(int *)(iVar14 + 0x31c);
  param_2[0x54] = iVar4;
  if (iVar11 == 0x7fffffff) {
    param_2[1] = 0x7fffffff;
  }
  else {
    uVar8 = *(uint *)(iVar14 + 800);
    *(uint *)(param_1 + 0x88) = uVar7 * DAT_003e7670 + 0x3039;
    fVar18 = (float)VectorSignedToFloat(uVar7 * ((int)uVar8 >> 0x1f) +
                                        (int)((ulonglong)uVar8 * (ulonglong)uVar7 >> 0x20),
                                        (byte)(uVar17 >> 0x15) & 3);
    param_2[1] = (int)((*(float *)(param_1 + 0x16c) - fVar18) *
                      *(float *)(*(int *)(param_1 + 0x1c) + 8));
  }
  fVar18 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x88),(byte)(uVar17 >> 0x15) & 3);
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * DAT_003e7670 + 0x3039;
  iVar11 = DAT_003e825c;
  local_cc = param_2[1] + -1;
  fVar18 = fVar31 - *(float *)(iVar14 + 0x4e0) * fVar18 * fVar19;
  fVar32 = *(float *)(iVar15 + 0x210) * fVar18;
  fVar18 = *(float *)(iVar15 + 0x214) * fVar18;
  uVar33 = CONCAT44(fVar18,fVar32);
  if (local_cc == 0) {
    pfVar6 = (float *)param_2[0x18];
    iVar11 = param_2[0x1b];
    pfVar6[3] = ALBW_NAN_POS;
    pfVar6[2] = ALBW_NAN_NEG;
    *pfVar6 = fVar30;
    pfVar6[1] = fVar30;
    uVar10 = *(undefined4 *)(iVar14 + 0x4bc);
    *(undefined4 *)(iVar11 + 0x10) = 0xffffffff;
    *(undefined4 *)(iVar11 + 0x14) = 0x7fffffff;
    uVar7 = *DAT_003e8260;
    param_2[0x17] = uVar10;
    if (((uVar7 & 1) == 0) &&
       (iVar11 = func_00100174((int *)DAT_003e8260), pfVar6 = DAT_003e8264, iVar11 != 0)) {
      *DAT_003e8264 = fVar30;
      pfVar6[1] = fVar30;
    }
    pfVar6 = DAT_003e8264;
    pfVar9 = (float *)param_2[0x1b];
    fVar18 = DAT_003e8264[1];
    *pfVar9 = *DAT_003e8264;
    pfVar9[1] = fVar18;
    if (((*DAT_003e8260 & 1) == 0) && (iVar11 = func_00100174((int *)DAT_003e8260), iVar11 != 0)) {
      *pfVar6 = fVar30;
      pfVar6[1] = fVar30;
    }
    iVar11 = param_2[0x1b];
    fVar18 = *pfVar6;
    fVar32 = pfVar6[1];
    *(float *)(iVar11 + 8) = fVar18;
    *(float *)(iVar11 + 0xc) = fVar32;
    iVar11 = *(int *)(param_1 + 0xfc);
    bVar16 = iVar11 == 0;
    if (!bVar16) {
      fVar18 = ALBW_AS_F32((iVar11 + 8));
      bVar16 = fVar18 == 0.0;
    }
    fVar32 = ALBW_AS_F32(((ulonglong)uVar33 >> 0x20));
    if (!bVar16) {
      uVar7 = 0;
      if (*(uint *)(iVar11 + 4) != 0) {
        while (*(int *)((int)ALBW_AS_U32(fVar18) + 8) != 0x11) {
          uVar7 = uVar7 + 1;
          if (*(uint *)(iVar11 + 4) <= uVar7) goto LAB_003e7bf8;
          if (uVar7 != 0) {
            fVar18 = ALBW_AS_F32(((int)ALBW_AS_U32(fVar18) + *(int *)((int)ALBW_AS_U32(fVar18) + 0x10)));
          }
        }
        fVar18 = *(float *)(iVar14 + 0x4f0);
        fVar20 = *(float *)(param_1 + 0x1b0);
        param_2[0x19] = ALBW_AS_U32(*(float *)(iVar14 + 0x4ec) * *(float *)(param_1 + 0x1ac) * ALBW_AS_F32(uVar33));
        param_2[0x1a] = ALBW_AS_U32(fVar18 * fVar20 * fVar32);
        goto LAB_003e7d10;
      }
    }
LAB_003e7bf8:
    fVar18 = *(float *)(iVar14 + 0x4f0);
    fVar20 = *(float *)(iVar14 + 0x4e8);
    param_2[0x19] = ALBW_AS_U32(*(float *)(iVar14 + 0x4ec) * *(float *)(iVar14 + 0x4e4) * ALBW_AS_F32(uVar33));
    param_2[0x1a] = ALBW_AS_U32(fVar18 * fVar20 * fVar32);
  }
  else {
    pfVar6 = (float *)param_2[0x18];
    iVar4 = (int)((ulonglong)
                  ((longlong)DAT_003e825c * (longlong)(*(int *)(iVar14 + 0x4c8) * local_cc)) >> 0x20
                 );
    iVar12 = (int)((ulonglong)
                   ((longlong)DAT_003e825c * (longlong)(*(int *)(iVar14 + 0x4cc) * local_cc)) >>
                  0x20);
    fVar20 = ALBW_AS_F32(((iVar4 >> 5) - (iVar4 >> 0x1f)));
    pfVar6[2] = fVar20;
    pfVar6[3] = ALBW_AS_F32(((iVar12 >> 5) - (iVar12 >> 0x1f)));
    if (fVar20 == 0.0) {
      *pfVar6 = fVar30;
    }
    else {
      fVar20 = (float)VectorSignedToFloat(ALBW_AS_U32(fVar20),(byte)(uVar17 >> 0x15) & 3);
      *pfVar6 = *(float *)(iVar14 + 0x4c0) / fVar20;
    }
    iVar4 = param_2[0x18];
    if (*(int *)(iVar14 + 0x4cc) == 100) {
      *(float *)(iVar4 + 4) = fVar30;
    }
    else {
      fVar20 = (float)VectorSignedToFloat(local_cc - *(int *)(iVar4 + 0xc),
                                          (byte)(uVar17 >> 0x15) & 3);
      *(float *)(iVar4 + 4) = *(float *)(iVar14 + 0x4c4) / fVar20;
    }
    fVar22 = *(float *)(iVar14 + 0x4bc);
    fVar25 = *(float *)param_2[0x18];
    iVar4 = (int)((ulonglong)((longlong)iVar11 * (longlong)(*(int *)(iVar14 + 0x4d8) * local_cc)) >>
                 0x20);
    iVar11 = (int)((ulonglong)((longlong)iVar11 * (longlong)(*(int *)(iVar14 + 0x4dc) * local_cc))
                  >> 0x20);
    pfVar6 = (float *)param_2[0x1b];
    fVar20 = ALBW_AS_F32(((iVar11 >> 5) - (iVar11 >> 0x1f)));
    pfVar6[4] = ALBW_AS_F32(((iVar4 >> 5) - (iVar4 >> 0x1f)));
    pfVar6[5] = fVar20;
    fVar24 = *(float *)(iVar14 + 0x4f8);
    iVar11 = local_cc - (int)ALBW_AS_U32(fVar20);
    fVar27 = (float)VectorSignedToFloat(ALBW_AS_U32(pfVar6[4]),(byte)(uVar17 >> 0x15) & 3);
    fVar20 = *(float *)(iVar14 + 0x4f4);
    fVar29 = *(float *)(iVar14 + 0x4fc);
    fVar21 = (float)VectorSignedToFloat(iVar11,(byte)(uVar17 >> 0x15) & 3);
    fVar23 = *(float *)(iVar14 + 0x4f0);
    fVar26 = *(float *)(iVar14 + 0x500) * (fVar31 / fVar21);
    fVar28 = *(float *)(iVar14 + 0x4ec);
    param_2[0x17] = ALBW_AS_U32(fVar22 - fVar25);
    iVar4 = *(int *)(param_1 + 0xfc);
    fVar20 = fVar20 * (fVar31 / fVar27);
    fVar24 = fVar24 * (fVar31 / fVar27);
    fVar29 = fVar29 * (fVar31 / fVar21);
    bVar16 = iVar4 == 0;
    if (!bVar16) {
      iVar11 = iVar4 + 8;
      bVar16 = iVar11 == 0;
    }
    fVar28 = fVar28 - fVar20;
    fVar23 = fVar23 - fVar24;
    if (!bVar16) {
      uVar7 = 0;
      if (*(uint *)(iVar4 + 4) != 0) {
        while (*(int *)(iVar11 + 8) != 0x11) {
          uVar7 = uVar7 + 1;
          if (*(uint *)(iVar4 + 4) <= uVar7) goto LAB_003e7cac;
          if (uVar7 != 0) {
            iVar11 = iVar11 + *(int *)(iVar11 + 0x10);
          }
        }
        fVar21 = *(float *)(param_1 + 0x1b0);
        fVar22 = *(float *)(param_1 + 0x1ac);
        iVar11 = param_2[0x1b];
        *pfVar6 = fVar22 * fVar20 * fVar32;
        *(float *)(iVar11 + 4) = fVar21 * fVar24 * fVar18;
        *(float *)(iVar11 + 8) = fVar22 * fVar29 * fVar32;
        *(float *)(iVar11 + 0xc) = fVar21 * fVar26 * fVar18;
        param_2[0x19] = ALBW_AS_U32(fVar22 * fVar28 * fVar32);
        param_2[0x1a] = ALBW_AS_U32(fVar21 * fVar23 * fVar18);
        goto LAB_003e7d10;
      }
    }
LAB_003e7cac:
    iVar11 = param_2[0x1b];
    *pfVar6 = *(float *)(iVar14 + 0x4e4) * fVar20 * fVar32;
    *(float *)(iVar11 + 4) = *(float *)(iVar14 + 0x4e8) * fVar24 * fVar18;
    *(float *)(iVar11 + 8) = *(float *)(iVar14 + 0x4e4) * fVar29 * fVar32;
    *(float *)(iVar11 + 0xc) = *(float *)(iVar14 + 0x4e8) * fVar26 * fVar18;
    fVar20 = *(float *)(iVar14 + 0x4e8);
    param_2[0x19] = ALBW_AS_U32(*(float *)(iVar14 + 0x4e4) * fVar28 * fVar32);
    param_2[0x1a] = ALBW_AS_U32(fVar20 * fVar23 * fVar18);
  }
LAB_003e7d10:
  fVar18 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x88),(byte)(uVar17 >> 0x15) & 3);
  iVar11 = *(int *)(param_1 + 0x88) * DAT_003e7670 + 0x3039;
  fVar20 = *(float *)(iVar14 + 0x508) + *(float *)(iVar15 + 0x264) +
           *(float *)(iVar14 + 0x514) * fVar18 * fVar19;
  fVar18 = (float)VectorUnsignedToFloat(iVar11,(byte)(uVar17 >> 0x15) & 3);
  iVar12 = iVar11 * DAT_003e7670 + 0x3039;
  param_2[0x11] = ALBW_AS_U32(fVar20);
  iVar11 = DAT_003e7670;
  iVar4 = iVar12 * DAT_003e7670 + 0x3039;
  fVar21 = *(float *)(iVar14 + 0x50c) + *(float *)(iVar15 + 0x268) +
           *(float *)(iVar14 + 0x518) * fVar18 * fVar19;
  fVar18 = (float)VectorUnsignedToFloat(iVar12,(byte)(uVar17 >> 0x15) & 3);
  param_2[0x12] = ALBW_AS_U32(fVar21);
  fVar32 = *(float *)(iVar14 + 0x510) + *(float *)(iVar15 + 0x26c) +
           *(float *)(iVar14 + 0x51c) * fVar18 * fVar19;
  fVar18 = (float)VectorUnsignedToFloat(iVar4,(byte)(uVar17 >> 0x15) & 3);
  iVar11 = iVar4 * iVar11 + 0x3039;
  param_2[0x13] = ALBW_AS_U32(fVar32);
  iVar4 = iVar11 * DAT_003e7670 + 0x3039;
  fVar28 = *(float *)(iVar14 + 0x520) + *(float *)(iVar14 + 0x52c) * fVar18 * fVar19;
  iVar15 = iVar4 * DAT_003e7670 + 0x3039;
  fVar18 = (float)VectorUnsignedToFloat(iVar11,(byte)(uVar17 >> 0x15) & 3);
  param_2[0x14] = ALBW_AS_U32(fVar28);
  fVar24 = *(float *)(iVar14 + 0x524) + *(float *)(iVar14 + 0x530) * fVar18 * fVar19;
  fVar18 = (float)VectorUnsignedToFloat(iVar4,(byte)(uVar17 >> 0x15) & 3);
  param_2[0x15] = ALBW_AS_U32(fVar24);
  *(int *)(param_1 + 0x88) = iVar15;
  cVar1 = *(char *)(iVar14 + 0x184);
  fVar18 = *(float *)(iVar14 + 0x528) + *(float *)(iVar14 + 0x534) * fVar18 * fVar19;
  param_2[0x16] = ALBW_AS_U32(fVar18);
  if (cVar1 != '\0') {
    fVar22 = (float)VectorUnsignedToFloat(iVar15,(byte)(uVar17 >> 0x15) & 3);
    *(int *)(param_1 + 0x88) = iVar15 * DAT_003e7670 + 0x3039;
    if (0x3f000000 < (int)ALBW_AS_U32((fVar22 * fVar19))) {
      param_2[0x11] = ALBW_AS_U32(-fVar20);
      param_2[0x14] = ALBW_AS_U32(-fVar28);
    }
  }
  if (*(char *)(iVar14 + 0x185) != '\0') {
    fVar20 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x88),(byte)(uVar17 >> 0x15) & 3);
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * DAT_003e7670 + 0x3039;
    if (0x3f000000 < (int)ALBW_AS_U32((fVar20 * fVar19))) {
      param_2[0x12] = ALBW_AS_U32(-fVar21);
      param_2[0x15] = ALBW_AS_U32(-fVar24);
    }
  }
  if (*(char *)(iVar14 + 0x186) != '\0') {
    fVar20 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x88),(byte)(uVar17 >> 0x15) & 3);
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * DAT_003e7670 + 0x3039;
    if (0x3f000000 < (int)ALBW_AS_U32((fVar20 * fVar19))) {
      param_2[0x13] = ALBW_AS_U32(-fVar32);
      param_2[0x16] = ALBW_AS_U32(-fVar18);
    }
  }
  uVar7 = DAT_003e8268;
  if (*(int *)(iVar14 + 0x428) == 1) {
    iVar15 = iVar14 + (param_2[0x54] +
                      (uint)((ulonglong)(uint)param_2[0x54] * (ulonglong)DAT_003e8268 >> 0x21) * -3)
                      * 0x10;
    uVar10 = *(undefined4 *)(iVar15 + 0x430);
    uVar13 = *(undefined4 *)(iVar15 + 0x434);
    param_2[0x2e] = *(undefined4 *)(iVar15 + 0x438);
    param_2[0x2c] = uVar10;
    param_2[0x2d] = uVar13;
  }
  else {
    uVar10 = *(undefined4 *)(iVar14 + 0x434);
    uVar13 = *(undefined4 *)(iVar14 + 0x438);
    param_2[0x2c] = *(undefined4 *)(iVar14 + 0x430);
    param_2[0x2d] = uVar10;
    param_2[0x2e] = uVar13;
  }
  if (*(int *)(iVar14 + 0x42c) == 1) {
    iVar15 = iVar14 + (param_2[0x54] +
                      (uint)((ulonglong)(uint)param_2[0x54] * (ulonglong)uVar7 >> 0x21) * -3) * 0x10
    ;
    uVar10 = *(undefined4 *)(iVar15 + 0x460);
    uVar13 = *(undefined4 *)(iVar15 + 0x464);
    param_2[0x32] = *(undefined4 *)(iVar15 + 0x468);
    param_2[0x30] = uVar10;
    param_2[0x31] = uVar13;
  }
  else {
    uVar10 = *(undefined4 *)(iVar14 + 0x464);
    uVar13 = *(undefined4 *)(iVar14 + 0x468);
    param_2[0x30] = *(undefined4 *)(iVar14 + 0x460);
    param_2[0x31] = uVar10;
    param_2[0x32] = uVar13;
  }
  fVar19 = DAT_003e826c;
  iVar15 = DAT_003e7670;
  fVar18 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x88),(byte)(uVar17 >> 0x15) & 3);
  iVar4 = *(int *)(param_1 + 0x88) * DAT_003e7670 + 0x3039;
  param_2[0x1f] =
       ALBW_AS_U32((*(float *)(iVar14 + 0x37c) + *(float *)(iVar14 + 900)) -
       fVar18 * *(float *)(iVar14 + 900) * DAT_003e826c);
  iVar11 = DAT_003e7670;
  fVar18 = (float)VectorUnsignedToFloat(iVar4,(byte)(uVar17 >> 0x15) & 3);
  iVar15 = iVar4 * iVar15 + 0x3039;
  iVar4 = iVar15 * DAT_003e7670 + 0x3039;
  fVar32 = (float)VectorUnsignedToFloat(iVar15,(byte)(uVar17 >> 0x15) & 3);
  param_2[0x20] =
       ALBW_AS_U32((*(float *)(iVar14 + 0x380) + *(float *)(iVar14 + 0x388)) -
       fVar18 * *(float *)(iVar14 + 0x388) * fVar19);
  param_2[0x21] =
       ALBW_AS_U32((*(float *)(iVar14 + 0x394) + *(float *)(iVar14 + 0x39c)) -
       fVar32 * *(float *)(iVar14 + 0x39c) * fVar19);
  iVar15 = DAT_003e7670;
  fVar18 = (float)VectorUnsignedToFloat(iVar4,(byte)(uVar17 >> 0x15) & 3);
  iVar11 = iVar4 * iVar11 + 0x3039;
  iVar12 = iVar11 * DAT_003e7670 + 0x3039;
  fVar32 = (float)VectorUnsignedToFloat(iVar11,(byte)(uVar17 >> 0x15) & 3);
  iVar4 = iVar12 * DAT_003e7670 + 0x3039;
  param_2[0x22] =
       ALBW_AS_U32((*(float *)(iVar14 + 0x398) + *(float *)(iVar14 + 0x3a0)) -
       fVar18 * *(float *)(iVar14 + 0x3a0) * fVar19);
  param_2[0x1c] =
       ALBW_AS_U32((*(float *)(iVar14 + 0x3a8) + *(float *)(iVar14 + 0x3ac)) -
       fVar32 * *(float *)(iVar14 + 0x3ac) * fVar19);
  fVar18 = (float)VectorUnsignedToFloat(iVar12,(byte)(uVar17 >> 0x15) & 3);
  param_2[0x26] =
       ALBW_AS_U32((*(float *)(iVar14 + 0x3f4) + *(float *)(iVar14 + 0x3fc)) -
       fVar18 * *(float *)(iVar14 + 0x3fc) * fVar19);
  iVar11 = DAT_003e7670;
  fVar18 = (float)VectorUnsignedToFloat(iVar4,(byte)(uVar17 >> 0x15) & 3);
  iVar4 = iVar4 * iVar15 + 0x3039;
  iVar15 = iVar4 * DAT_003e7670 + 0x3039;
  fVar32 = (float)VectorUnsignedToFloat(iVar4,(byte)(uVar17 >> 0x15) & 3);
  param_2[0x27] =
       ALBW_AS_U32((*(float *)(iVar14 + 0x3f8) + *(float *)(iVar14 + 0x400)) -
       fVar18 * *(float *)(iVar14 + 0x400) * fVar19);
  param_2[0x28] =
       ALBW_AS_U32((*(float *)(iVar14 + 0x40c) + *(float *)(iVar14 + 0x414)) -
       fVar32 * *(float *)(iVar14 + 0x414) * fVar19);
  fVar18 = (float)VectorUnsignedToFloat(iVar15,(byte)(uVar17 >> 0x15) & 3);
  iVar15 = iVar15 * iVar11 + 0x3039;
  uVar7 = iVar15 * DAT_003e7670 + 0x3039;
  fVar32 = (float)VectorUnsignedToFloat(iVar15,(byte)(uVar17 >> 0x15) & 3);
  param_2[0x29] =
       ALBW_AS_U32((*(float *)(iVar14 + 0x410) + *(float *)(iVar14 + 0x418)) -
       fVar18 * *(float *)(iVar14 + 0x418) * fVar19);
  *(uint *)(param_1 + 0x88) = uVar7;
  bVar2 = *(byte *)(iVar14 + 0x33d);
  param_2[0x23] =
       ALBW_AS_U32((*(float *)(iVar14 + 0x420) + *(float *)(iVar14 + 0x424)) -
       fVar32 * *(float *)(iVar14 + 0x424) * fVar19);
  if (bVar2 < 2) {
    param_2[0x1d] = ALBW_AS_U32(fVar30);
    param_2[0x1e] = ALBW_AS_U32(fVar30);
  }
  else {
    *(uint *)(param_1 + 0x88) = uVar7 * DAT_003e7670 + 0x3039;
    lVar34 = func_001104E4((uint)((ulonglong)(uint)bVar2 * (ulonglong)uVar7 >> 0x20),
                           (uint)*(byte *)(iVar14 + 0x33b));
    fVar32 = *(float *)(iVar14 + 0x36c);
    fVar18 = (float)VectorSignedToFloat((int)lVar34,(byte)(uVar17 >> 0x15) & 3);
    fVar19 = (float)VectorSignedToFloat((int)((ulonglong)lVar34 >> 0x20),(byte)(uVar17 >> 0x15) & 3)
    ;
    param_2[0x1d] = ALBW_AS_U32(*(float *)(iVar14 + 0x368) * fVar19);
    param_2[0x1e] = ALBW_AS_U32(fVar32 * fVar18);
  }
  bVar2 = *(byte *)(iVar14 + 0x3b5);
  if (bVar2 < 2) {
    param_2[0x24] = ALBW_AS_U32(fVar30);
    param_2[0x25] = ALBW_AS_U32(fVar30);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x88) = uVar7 * DAT_003e7670 + 0x3039;
    lVar34 = func_001104E4((uint)((ulonglong)(uint)bVar2 * (ulonglong)uVar7 >> 0x20),
                           (uint)*(byte *)(iVar14 + 0x3b3));
    fVar32 = *(float *)(iVar14 + 0x3e4);
    fVar18 = (float)VectorSignedToFloat((int)lVar34,(byte)(uVar17 >> 0x15) & 3);
    fVar19 = (float)VectorSignedToFloat((int)((ulonglong)lVar34 >> 0x20),(byte)(uVar17 >> 0x15) & 3)
    ;
    param_2[0x24] = ALBW_AS_U32(*(float *)(iVar14 + 0x3e0) * fVar19);
    param_2[0x25] = ALBW_AS_U32(fVar32 * fVar18);
  }
  if (*(int *)(iVar14 + 0x328) == 5) {
    puVar5 = func_003F80EC(*DAT_003e8384,param_1,param_2);
    param_2[0x52] = puVar5;
  }
  uVar10 = DAT_003e8388;
  param_2[0x51] = param_1;
  param_2[0x55] = uVar10;
  param_2[0x2a] = ALBW_AS_U32(fVar31);
  param_2[0x2b] = ALBW_AS_U32(fVar31);
  if ((*(uint *)(*(int *)(param_1 + 0xd8) + 4) & 0x400) == 0) {
    iVar14 = *(int *)(param_1 + 0xdc);
    if (iVar14 == 0) {
      *(undefined4 **)(param_1 + 0xdc) = param_2;
      param_2[0x4f] = 0;
      param_2[0x50] = 0;
    }
    else {
      *(undefined4 **)(iVar14 + 0x13c) = param_2;
      *(undefined4 **)(param_1 + 0xdc) = param_2;
      param_2[0x4f] = 0;
      param_2[0x50] = iVar14;
    }
    if (*(int *)(param_1 + 0xe4) == 0) {
      *(undefined4 **)(param_1 + 0xe4) = param_2;
    }
  }
  else {
    iVar14 = *(int *)(param_1 + 0xe4);
    if (iVar14 == 0) {
      *(undefined4 **)(param_1 + 0xe4) = param_2;
      param_2[0x4f] = 0;
      param_2[0x50] = 0;
    }
    else {
      *(undefined4 **)(iVar14 + 0x140) = param_2;
      *(undefined4 **)(param_1 + 0xe4) = param_2;
      param_2[0x4f] = iVar14;
      param_2[0x50] = 0;
    }
    if (*(int *)(param_1 + 0xdc) == 0) {
      *(undefined4 **)(param_1 + 0xdc) = param_2;
    }
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}

