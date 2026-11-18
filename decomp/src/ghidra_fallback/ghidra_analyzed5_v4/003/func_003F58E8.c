#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern longlong func_001104E4(int param_1,int param_2);
extern int func_00112388(void);
extern int func_003F856C(int param_1,undefined4 param_2);
extern undefined4 DAT_003f5c04;
extern undefined4 DAT_003f5c08;
extern uint DAT_003f5c0c;
extern int *DAT_003f5c10;
extern uint *DAT_003f5c14;
extern undefined4 *DAT_003f5c18;
extern int DAT_003f5c1c;
extern int *DAT_003f62b4;
extern int *DAT_003f62b8;

// USA 003F58E8 <- EU 003F58C8 (Ghidra, non-matching)
// GLOBAL DAT_003f5c04 undefined4
// GLOBAL DAT_003f5c08 undefined4
// GLOBAL DAT_003f5c0c uint
// GLOBAL DAT_003f5c10 int *
// GLOBAL DAT_003f5c14 uint *
// GLOBAL DAT_003f5c18 undefined4 *
// GLOBAL DAT_003f5c1c int
// GLOBAL DAT_003f62b4 int *
// GLOBAL DAT_003f62b8 int *

void func_003F58E8(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float *pfVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  ulonglong uVar31;
  longlong lVar32;
  
  iVar14 = 0;
  iVar13 = *(int *)(param_1 + 0xd8);
  if (0 < *(int *)(iVar13 + 0x560)) {
    uVar30 = CONCAT44(DAT_003f5c04,DAT_003f5c08);
    uVar31 = (ulonglong)DAT_003f5c0c;
    do {
      puVar3 = (undefined4 *)func_003F856C(*DAT_003f5c10,2);
      if (puVar3 != (undefined4 *)0x0) {
        uVar4 = *(uint *)(iVar13 + 0x548);
        uVar8 = *(undefined4 *)(iVar13 + 0x568);
        puVar3[0x52] = 0;
        puVar3[1] = uVar8;
        puVar3[0x51] = param_1;
        puVar3[0x4e] = iVar13;
        if ((uVar4 & 0x20) == 0) {
          if (((*DAT_003f5c14 & 1) == 0) &&
             (iVar5 = func_00100174((int *)DAT_003f5c14), puVar2 = DAT_003f5c18, iVar5 != 0)) {
            uVar8 = (undefined4)uVar31;
            *DAT_003f5c18 = uVar8;
            puVar2[1] = uVar8;
            puVar2[2] = uVar8;
          }
          uVar8 = DAT_003f5c18[1];
          uVar9 = DAT_003f5c18[2];
          puVar3[8] = *DAT_003f5c18;
          puVar3[9] = uVar8;
          puVar3[10] = uVar9;
        }
        else {
          fVar18 = *(float *)(iVar13 + 0x574);
          puVar3[8] = ALBW_AS_U32(*(float *)(param_2 + 0x14) * fVar18);
          puVar3[9] = ALBW_AS_U32(*(float *)(param_2 + 0x18) * fVar18);
          puVar3[10] = ALBW_AS_U32(*(float *)(param_2 + 0x1c) * fVar18);
        }
        if ((*(uint *)(iVar13 + 0x548) & 4) == 0) {
          fVar18 = *(float *)(iVar13 + 0x64c);
        }
        else {
          fVar18 = *(float *)(param_2 + 0x5c) * *(float *)(param_2 + 0xa8);
        }
        fVar16 = ALBW_AS_F32(uVar30);
        fVar15 = ALBW_AS_F32(((ulonglong)uVar30 >> 0x20));
        if ((*(uint *)(iVar13 + 0x548) & 8) == 0) {
          fVar20 = *(float *)(iVar13 + 0x65c);
          fVar23 = *(float *)(iVar13 + 0x660);
          fVar19 = *(float *)(iVar13 + 0x664);
          fVar17 = (float)VectorUnsignedToFloat
                                    (*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x15) & 3);
          *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * DAT_003f5c1c + 0x3039;
          fVar17 = fVar16 - fVar19 * fVar17 * fVar15;
          puVar3[0x19] = ALBW_AS_U32(fVar20 * fVar17);
          puVar3[0x1a] = ALBW_AS_U32(fVar23 * fVar17);
        }
        else {
          fVar23 = *(float *)(iVar13 + 0x664);
          fVar20 = *(float *)(iVar13 + 0x658);
          fVar17 = (float)VectorUnsignedToFloat
                                    (*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x15) & 3);
          *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * DAT_003f5c1c + 0x3039;
          fVar17 = fVar16 - fVar23 * fVar17 * fVar15;
          puVar3[0x19] = ALBW_AS_U32(*(float *)(param_2 + 100) * fVar20 * *(float *)(param_2 + 0xac) * fVar17 *
                         *(float *)(param_1 + 0x1ac));
          puVar3[0x1a] = ALBW_AS_U32(*(float *)(param_2 + 0x68) * fVar20 * *(float *)(param_2 + 0xac) * fVar17 *
                         *(float *)(param_1 + 0x1b0));
        }
        iVar5 = DAT_003f5c1c;
        fVar17 = ALBW_AS_F32(uVar31);
        if ((*(uint *)(iVar13 + 0x548) & 0x10) == 0) {
          fVar24 = *(float *)(iVar13 + 0x66c);
          fVar26 = *(float *)(iVar13 + 0x678);
          fVar19 = *(float *)(iVar13 + 0x670);
          fVar21 = *(float *)(iVar13 + 0x67c);
          fVar20 = *(float *)(iVar13 + 0x674);
          fVar28 = (float)VectorUnsignedToFloat
                                    (*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x15) & 3);
          fVar23 = *(float *)(iVar13 + 0x680);
          *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * DAT_003f5c1c + 0x3039;
          puVar3[0x11] = ALBW_AS_U32(fVar24 + fVar26 * fVar28 * fVar15);
          fVar24 = (float)VectorUnsignedToFloat
                                    (*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x15) & 3);
          *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * iVar5 + 0x3039;
          puVar3[0x12] = ALBW_AS_U32(fVar19 + fVar21 * fVar24 * fVar15);
          fVar19 = (float)VectorUnsignedToFloat
                                    (*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x15) & 3);
          *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * iVar5 + 0x3039;
          puVar3[0x13] = ALBW_AS_U32(fVar20 + fVar23 * fVar19 * fVar15);
        }
        else {
          iVar5 = *(int *)(iVar13 + 0x668);
          if (iVar5 == 1) {
            puVar3[0x11] = *(undefined4 *)(param_2 + 0x44);
            puVar3[0x12] = ALBW_AS_U32(fVar17);
          }
          else {
            if (iVar5 != 2) {
              if (iVar5 == 3) {
                puVar3[0x11] = ALBW_AS_U32(fVar17);
                puVar3[0x12] = ALBW_AS_U32(fVar17);
                puVar3[0x13] = *(undefined4 *)(param_2 + 0x4c);
              }
              else {
                uVar8 = *(undefined4 *)(param_2 + 0x48);
                uVar9 = *(undefined4 *)(param_2 + 0x4c);
                puVar3[0x11] = *(undefined4 *)(param_2 + 0x44);
                puVar3[0x12] = uVar8;
                puVar3[0x13] = uVar9;
              }
              goto LAB_003f5be4;
            }
            puVar3[0x11] = ALBW_AS_U32(fVar17);
            puVar3[0x12] = *(undefined4 *)(param_2 + 0x48);
          }
          puVar3[0x13] = ALBW_AS_U32(fVar17);
        }
LAB_003f5be4:
        if ((*(uint *)(iVar13 + 0x548) & 2) == 0) {
          uVar8 = *(undefined4 *)(iVar13 + 0x634);
          uVar9 = *(undefined4 *)(iVar13 + 0x638);
          puVar3[0x2c] = *(undefined4 *)(iVar13 + 0x630);
          puVar3[0x2d] = uVar8;
          puVar3[0x2e] = uVar9;
          puVar3[0x2f] = ALBW_AS_U32(fVar16);
        }
        else {
          uVar8 = *(undefined4 *)(param_2 + 0xb4);
          uVar9 = *(undefined4 *)(param_2 + 0xb8);
          uVar12 = *(undefined4 *)(param_2 + 0xbc);
          puVar3[0x2c] = *(undefined4 *)(param_2 + 0xb0);
          puVar3[0x2d] = uVar8;
          puVar3[0x2e] = uVar9;
          puVar3[0x2f] = uVar12;
        }
        if ((*(uint *)(iVar13 + 0x548) & 0x8000) == 0) {
          uVar8 = *(undefined4 *)(iVar13 + 0x640);
          uVar9 = *(undefined4 *)(iVar13 + 0x644);
          puVar3[0x30] = *(undefined4 *)(iVar13 + 0x63c);
          puVar3[0x31] = uVar8;
          puVar3[0x32] = uVar9;
          puVar3[0x33] = ALBW_AS_U32(fVar16);
        }
        else {
          uVar8 = *(undefined4 *)(param_2 + 0xc4);
          uVar9 = *(undefined4 *)(param_2 + 200);
          uVar12 = *(undefined4 *)(param_2 + 0xcc);
          puVar3[0x30] = *(undefined4 *)(param_2 + 0xc0);
          puVar3[0x31] = uVar8;
          puVar3[0x32] = uVar9;
          puVar3[0x33] = uVar12;
        }
        iVar5 = DAT_003f5c1c;
        fVar24 = *(float *)(iVar13 + 0x684);
        fVar26 = *(float *)(iVar13 + 0x690);
        uVar4 = *(uint *)(iVar13 + 0x548);
        fVar19 = *(float *)(iVar13 + 0x688);
        fVar28 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x15) & 3)
        ;
        fVar21 = *(float *)(iVar13 + 0x694);
        fVar20 = *(float *)(iVar13 + 0x68c);
        fVar23 = *(float *)(iVar13 + 0x698);
        *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * DAT_003f5c1c + 0x3039;
        puVar3[0x14] = ALBW_AS_U32(fVar24 + fVar26 * fVar28 * fVar15);
        fVar24 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x15) & 3)
        ;
        *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * iVar5 + 0x3039;
        puVar3[0x15] = ALBW_AS_U32(fVar19 + fVar21 * fVar24 * fVar15);
        fVar19 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x15) & 3)
        ;
        *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * iVar5 + 0x3039;
        puVar3[0x16] = ALBW_AS_U32(fVar20 + fVar23 * fVar19 * fVar15);
        if ((uVar4 & 0x10) == 0) {
          if (*(char *)(iVar13 + 0x6a0) != '\0') {
            fVar20 = (float)VectorUnsignedToFloat
                                      (*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x15) & 3);
            *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * DAT_003f5c1c + 0x3039;
            if (0x3f000000 < (int)ALBW_AS_U32((fVar20 * fVar15))) {
              puVar3[0x11] = ALBW_AS_U32(-ALBW_AS_F32(puVar3[0x11]));
              puVar3[0x14] = ALBW_AS_U32(-ALBW_AS_F32(puVar3[0x14]));
            }
          }
          if (*(char *)(iVar13 + 0x6a1) != '\0') {
            fVar20 = (float)VectorUnsignedToFloat
                                      (*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x15) & 3);
            *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * DAT_003f5c1c + 0x3039;
            if (0x3f000000 < (int)ALBW_AS_U32((fVar20 * fVar15))) {
              puVar3[0x12] = ALBW_AS_U32(-ALBW_AS_F32(puVar3[0x12]));
              puVar3[0x15] = ALBW_AS_U32(-ALBW_AS_F32(puVar3[0x15]));
            }
          }
          if (*(char *)(iVar13 + 0x6a2) != '\0') {
            fVar20 = (float)VectorUnsignedToFloat
                                      (*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x15) & 3);
            *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * DAT_003f5c1c + 0x3039;
            if (0x3f000000 < (int)ALBW_AS_U32((fVar20 * fVar15))) {
              puVar3[0x13] = ALBW_AS_U32(-ALBW_AS_F32(puVar3[0x13]));
              puVar3[0x16] = ALBW_AS_U32(-ALBW_AS_F32(puVar3[0x16]));
            }
          }
        }
        else {
          if (*(char *)(iVar13 + 0x6a0) != '\0') {
            fVar20 = (float)VectorUnsignedToFloat
                                      (*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x15) & 3);
            *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * iVar5 + 0x3039;
            if (0x3f000000 < (int)ALBW_AS_U32((fVar20 * fVar15))) {
              puVar3[0x14] = ALBW_AS_U32(-ALBW_AS_F32(puVar3[0x14]));
            }
          }
          if (*(char *)(iVar13 + 0x6a1) != '\0') {
            fVar20 = (float)VectorUnsignedToFloat
                                      (*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x15) & 3);
            *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * DAT_003f5c1c + 0x3039;
            if (0x3f000000 < (int)ALBW_AS_U32((fVar20 * fVar15))) {
              puVar3[0x15] = ALBW_AS_U32(-ALBW_AS_F32(puVar3[0x15]));
            }
          }
          if (*(char *)(iVar13 + 0x6a2) != '\0') {
            fVar20 = (float)VectorUnsignedToFloat
                                      (*(int *)(param_1 + 0x88),(byte)(in_fpscr >> 0x15) & 3);
            *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) * DAT_003f5c1c + 0x3039;
            if (0x3f000000 < (int)ALBW_AS_U32((fVar20 * fVar15))) {
              puVar3[0x16] = ALBW_AS_U32(-ALBW_AS_F32(puVar3[0x16]));
            }
          }
        }
        iVar5 = *(int *)(iVar13 + 0x6bc);
        puVar3[0x1f] = ALBW_AS_U32(fVar17);
        puVar3[0x20] = ALBW_AS_U32(fVar17);
        puVar3[0x1c] = ALBW_AS_U32(fVar17);
        puVar3[0x21] = ALBW_AS_U32(fVar16);
        puVar3[0x22] = ALBW_AS_U32(fVar16);
        if (iVar5 == 0) {
          *(float *)puVar3[0x18] = fVar17;
          puVar3[0x17] = ALBW_AS_U32(fVar18);
        }
        else {
          fVar20 = *(float *)(iVar13 + 0x654);
          fVar15 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
          *(float *)puVar3[0x18] = (fVar18 - fVar20) / fVar15;
          puVar3[0x17] = ALBW_AS_U32(fVar20);
        }
        fVar20 = (float)VectorSignedToFloat(puVar3[1] - *(int *)(iVar13 + 0x6b8),
                                            (byte)(in_fpscr >> 0x15) & 3);
        uVar4 = in_fpscr & 0xfffffff | (uint)(fVar20 == fVar17) << 0x1e;
        fVar15 = fVar17;
        if (!SUB41(uVar4 >> 0x1e,0)) {
          fVar15 = fVar16 / fVar20;
        }
        iVar5 = *(int *)(iVar13 + 0x6c0);
        *(float *)(puVar3[0x18] + 4) = (*(float *)(iVar13 + 0x650) - fVar18) * fVar15;
        fVar15 = (float)VectorSignedToFloat(puVar3[1] - iVar5,(byte)(uVar4 >> 0x15) & 3);
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar15 == fVar17) << 0x1e;
        fVar18 = fVar17;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar18 = fVar16 / fVar15;
        }
        fVar15 = *(float *)(iVar13 + 0x6c8);
        *(float *)puVar3[0x1b] =
             ALBW_AS_F32(puVar3[0x19]) * (*(float *)(iVar13 + 0x6c4) - fVar16) * fVar18;
        *(float *)(puVar3[0x1b] + 4) = ALBW_AS_F32(puVar3[0x1a]) * (fVar15 - fVar16) * fVar18;
        puVar3[0x2a] = ALBW_AS_U32(fVar16);
        puVar3[0x2b] = ALBW_AS_U32(fVar16);
        uVar1 = *(ushort *)(iVar13 + 0x6cc);
        if (uVar1 < 2) {
          puVar3[0x1d] = ALBW_AS_U32(fVar17);
          puVar3[0x1e] = ALBW_AS_U32(fVar17);
        }
        else {
          uVar4 = *(uint *)(param_1 + 0x88);
          *(uint *)(param_1 + 0x88) = uVar4 * DAT_003f5c1c + 0x3039;
          lVar32 = func_001104E4((uint)((ulonglong)(uint)uVar1 * (ulonglong)uVar4 >> 0x20),
                                 (uint)*(byte *)(iVar13 + 0x6ce));
          fVar15 = *(float *)(iVar13 + 0x6d4);
          fVar16 = (float)VectorSignedToFloat((int)((ulonglong)lVar32 >> 0x20),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar18 = (float)VectorSignedToFloat((int)lVar32,(byte)(in_fpscr >> 0x15) & 3);
          puVar3[0x1d] = ALBW_AS_U32(*(float *)(iVar13 + 0x6d0) * fVar16);
          puVar3[0x1e] = ALBW_AS_U32(fVar15 * fVar18);
        }
        iVar5 = *DAT_003f62b4;
        uVar1 = *(ushort *)(param_1 + 0x86);
        *(ushort *)(param_1 + 0x86) = uVar1 + 1;
        pfVar10 = (float *)(iVar5 + (uVar1 & 0xffff01ff) * 0xc);
        iVar5 = *DAT_003f62b8;
        uVar1 = *(ushort *)(param_1 + 0x84);
        fVar18 = *pfVar10;
        fVar16 = pfVar10[1];
        fVar15 = pfVar10[2];
        *(ushort *)(param_1 + 0x84) = uVar1 + 1;
        fVar23 = *(float *)(iVar13 + 0x578);
        fVar21 = *(float *)(iVar13 + 0x580);
        fVar24 = *(float *)(iVar13 + 0x584);
        fVar26 = *(float *)(iVar13 + 0x588);
        pfVar10 = (float *)(iVar5 + (uVar1 & 0xffff01ff) * 0xc);
        fVar20 = pfVar10[1];
        fVar19 = pfVar10[2];
        fVar17 = fVar18 * fVar23 + *pfVar10 * *(float *)(iVar13 + 0x57c) + ALBW_AS_F32(puVar3[8]);
        puVar3[8] = ALBW_AS_U32(fVar17);
        fVar20 = fVar16 * fVar23 + fVar20 * fVar21 + ALBW_AS_F32(puVar3[9]);
        puVar3[9] = ALBW_AS_U32(fVar20);
        fVar23 = fVar15 * fVar23 + fVar19 * fVar24 + ALBW_AS_F32(puVar3[10]);
        puVar3[10] = ALBW_AS_U32(fVar23);
        puVar3[5] = ALBW_AS_U32(fVar17);
        puVar3[6] = ALBW_AS_U32(fVar20);
        puVar3[7] = ALBW_AS_U32(fVar23);
        puVar3[2] = ALBW_AS_U32((*(float *)(param_2 + 8) + fVar18 * fVar26) - fVar17);
        puVar3[3] = ALBW_AS_U32((*(float *)(param_2 + 0xc) + fVar16 * fVar26) - fVar20);
        puVar3[4] = ALBW_AS_U32((*(float *)(param_2 + 0x10) + fVar15 * fVar26) - fVar23);
        *puVar3 = 0;
        puVar6 = (uint *)func_00112388();
        uVar4 = *puVar6;
        uVar11 = *(uint *)(iVar13 + 0x548);
        *puVar6 = puVar6[1];
        uVar4 = uVar4 ^ uVar4 << 0xb;
        puVar6[1] = puVar6[2];
        uVar7 = puVar6[3];
        puVar6[2] = uVar7;
        uVar4 = uVar7 ^ uVar7 >> 0x13 ^ uVar4 ^ uVar4 >> 8;
        puVar6[3] = uVar4;
        puVar3[0x54] = uVar4;
        if ((uVar11 & 0x40) == 0) {
          if (*(int *)(param_1 + 200) == 0) {
            uVar8 = *(undefined4 *)(param_1 + 0x28);
            uVar9 = *(undefined4 *)(param_1 + 0x2c);
            uVar12 = *(undefined4 *)(param_1 + 0x30);
            uVar22 = *(undefined4 *)(param_1 + 0x34);
            uVar25 = *(undefined4 *)(param_1 + 0x38);
            uVar27 = *(undefined4 *)(param_1 + 0x3c);
            uVar29 = *(undefined4 *)(param_1 + 0x40);
            puVar3[0x34] = *(undefined4 *)(param_1 + 0x24);
            puVar3[0x35] = uVar8;
            puVar3[0x36] = uVar9;
            puVar3[0x37] = uVar12;
            puVar3[0x38] = uVar22;
            puVar3[0x39] = uVar25;
            puVar3[0x3a] = uVar27;
            puVar3[0x3b] = uVar29;
            uVar8 = *(undefined4 *)(param_1 + 0x48);
            uVar9 = *(undefined4 *)(param_1 + 0x4c);
            uVar12 = *(undefined4 *)(param_1 + 0x50);
            puVar3[0x3c] = *(undefined4 *)(param_1 + 0x44);
            puVar3[0x3d] = uVar8;
            puVar3[0x3e] = uVar9;
            puVar3[0x3f] = uVar12;
            uVar8 = *(undefined4 *)(param_1 + 0x58);
            uVar9 = *(undefined4 *)(param_1 + 0x5c);
            uVar12 = *(undefined4 *)(param_1 + 0x60);
            uVar22 = *(undefined4 *)(param_1 + 100);
            uVar25 = *(undefined4 *)(param_1 + 0x68);
            uVar27 = *(undefined4 *)(param_1 + 0x6c);
            uVar29 = *(undefined4 *)(param_1 + 0x70);
            puVar3[0x40] = *(undefined4 *)(param_1 + 0x54);
            puVar3[0x41] = uVar8;
            puVar3[0x42] = uVar9;
            puVar3[0x43] = uVar12;
            puVar3[0x44] = uVar22;
            puVar3[0x45] = uVar25;
            puVar3[0x46] = uVar27;
            puVar3[0x47] = uVar29;
            uVar8 = *(undefined4 *)(param_1 + 0x78);
            uVar9 = *(undefined4 *)(param_1 + 0x7c);
            uVar12 = *(undefined4 *)(param_1 + 0x80);
            puVar3[0x48] = *(undefined4 *)(param_1 + 0x74);
            puVar3[0x49] = uVar8;
            puVar3[0x4a] = uVar9;
            puVar3[0x4b] = uVar12;
            puVar3[0x4c] = param_1 + 0x24;
            iVar5 = param_1 + 0x54;
          }
          else {
            uVar8 = *(undefined4 *)(param_2 + 0xd4);
            uVar9 = *(undefined4 *)(param_2 + 0xd8);
            uVar12 = *(undefined4 *)(param_2 + 0xdc);
            uVar22 = *(undefined4 *)(param_2 + 0xe0);
            uVar25 = *(undefined4 *)(param_2 + 0xe4);
            uVar27 = *(undefined4 *)(param_2 + 0xe8);
            uVar29 = *(undefined4 *)(param_2 + 0xec);
            puVar3[0x34] = *(undefined4 *)(param_2 + 0xd0);
            puVar3[0x35] = uVar8;
            puVar3[0x36] = uVar9;
            puVar3[0x37] = uVar12;
            puVar3[0x38] = uVar22;
            puVar3[0x39] = uVar25;
            puVar3[0x3a] = uVar27;
            puVar3[0x3b] = uVar29;
            uVar8 = *(undefined4 *)(param_2 + 0xf4);
            uVar9 = *(undefined4 *)(param_2 + 0xf8);
            uVar12 = *(undefined4 *)(param_2 + 0xfc);
            puVar3[0x3c] = *(undefined4 *)(param_2 + 0xf0);
            puVar3[0x3d] = uVar8;
            puVar3[0x3e] = uVar9;
            puVar3[0x3f] = uVar12;
            uVar8 = *(undefined4 *)(param_2 + 0x104);
            uVar9 = *(undefined4 *)(param_2 + 0x108);
            uVar12 = *(undefined4 *)(param_2 + 0x10c);
            uVar22 = *(undefined4 *)(param_2 + 0x110);
            uVar25 = *(undefined4 *)(param_2 + 0x114);
            uVar27 = *(undefined4 *)(param_2 + 0x118);
            uVar29 = *(undefined4 *)(param_2 + 0x11c);
            puVar3[0x40] = *(undefined4 *)(param_2 + 0x100);
            puVar3[0x41] = uVar8;
            puVar3[0x42] = uVar9;
            puVar3[0x43] = uVar12;
            puVar3[0x44] = uVar22;
            puVar3[0x45] = uVar25;
            puVar3[0x46] = uVar27;
            puVar3[0x47] = uVar29;
            uVar8 = *(undefined4 *)(param_2 + 0x124);
            uVar9 = *(undefined4 *)(param_2 + 0x128);
            uVar12 = *(undefined4 *)(param_2 + 300);
            puVar3[0x48] = *(undefined4 *)(param_2 + 0x120);
            puVar3[0x49] = uVar8;
            puVar3[0x4a] = uVar9;
            puVar3[0x4b] = uVar12;
            puVar3[0x4c] = param_2 + 0xd0;
            iVar5 = param_2 + 0x100;
          }
          puVar3[0x4d] = iVar5;
        }
        else {
          puVar3[0x4c] = param_1 + 0x24;
          puVar3[0x4d] = param_1 + 0x54;
        }
        iVar5 = *(int *)(param_1 + 0x88);
        *(int *)(param_1 + 0x88) = iVar5 * DAT_003f5c1c + 0x3039;
        puVar3[0x54] = iVar5;
        if (*(int *)(param_1 + 0xe0) == 0) {
          *(undefined4 **)(param_1 + 0xe0) = puVar3;
          puVar3[0x50] = 0;
        }
        else {
          *(undefined4 **)(*(int *)(param_1 + 0xe0) + 0x13c) = puVar3;
          puVar3[0x50] = *(undefined4 *)(param_1 + 0xe0);
          *(undefined4 **)(param_1 + 0xe0) = puVar3;
        }
        puVar3[0x4f] = 0;
        if (*(int *)(param_1 + 0xe8) == 0) {
          *(undefined4 **)(param_1 + 0xe8) = puVar3;
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(iVar13 + 0x560));
  }
  return;
}

