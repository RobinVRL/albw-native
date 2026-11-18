#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern longlong func_001104E4(int param_1,int param_2);
extern int func_003F31AC(undefined4 param_1,uint *param_2,int param_3,float *param_4,int param_5, int param_6,int param_7);
extern undefined8 func_003F6E84(int param_1,uint *param_2);
extern int func_003F8518(int param_1,int param_2);
extern int *DAT_003f2784;
extern int DAT_003f2788;
extern float DAT_003f278c;
extern float DAT_003f2790;
extern undefined4 DAT_003f2794;
extern uint DAT_003f2e6c;
extern uint DAT_003f2e70;
extern int *DAT_003f2e74;

// USA 003F23C4 <- EU 003F23A4 (Ghidra, non-matching)
// GLOBAL DAT_003f2784 int *
// GLOBAL DAT_003f2788 int
// GLOBAL DAT_003f278c float
// GLOBAL DAT_003f2790 float
// GLOBAL DAT_003f2794 undefined4
// GLOBAL DAT_003f2e6c uint
// GLOBAL DAT_003f2e70 uint
// GLOBAL DAT_003f2e74 int *

uint * func_003F23C4(int param_1,uint *param_2,int *param_3)

{
  _Alignas(8) unsigned char albw_frame[0x130]; /* entry_sp - 0x130 .. entry_sp + 0x0 */
#define stack0xfffffed8 (*(undefined4 *)(albw_frame + 0x8))
  byte bVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  code *pcVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint in_fpscr;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined8 in_d8;
  undefined8 in_d9;
  undefined4 uVar38;
  undefined8 in_d10;
  undefined8 in_d11;
  float fVar39;
  undefined4 in_s24;
  float fVar41;
  undefined8 uVar40;
  undefined8 uVar42;
  undefined8 uVar43;
  longlong lVar44;
  undefined8 uVar45;
  #define local_dc (*(uint * *)(albw_frame + 0x54))
  #define local_d8 (*(uint *)(albw_frame + 0x58))
  #define local_a0 (*(float *)(albw_frame + 0x90))
  #define local_9c (*(float *)(albw_frame + 0x94))
  #define local_98 (*(float *)(albw_frame + 0x98))
  #define local_94 (*(undefined4 *)(albw_frame + 0x9c))
  #define local_7c (*(uint * *)(albw_frame + 0xb4))
  #define local_74 (*(int *)(albw_frame + 0xbc))
  #define local_70 (*(int *)(albw_frame + 0xc0))
  piVar5 = DAT_003f2784;
  puVar17 = (uint *)*DAT_003f2784;
  iVar7 = 0;
  if (param_3[3] != 0) {
    iVar7 = param_3[0x37];
  }
  if (param_3[3] != 0 && iVar7 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    param_3[0xa9] = 0;
    if (*(char *)(param_1 + 0x14) == '\0') {
      piVar5[1] = 0;
      *piVar5 = (int)param_2;
      iVar7 = param_3[0x37];
      uVar19 = param_3[3];
      piVar8 = (int *)((uint)*(ushort *)(DAT_003f2788 + *(int *)(iVar7 + 0x138)) +
                      *(int *)(iVar7 + 0x138));
      puVar12 = (uint *)piVar8[2];
      if (1 < uVar19) {
        iVar13 = param_3[0x39];
        if (puVar12 != (uint *)0x1) {
          puVar17 = puVar12;
        }
        iVar14 = uVar19 * 2;
        bVar2 = puVar12 == (uint *)0x1;
        local_d8 = uVar19;
        if (bVar2 || puVar17 == (uint *)0x2) {
          local_d8 = uVar19 + 1;
          iVar14 = iVar14 + 2;
        }
        if (iVar14 != 0) {
          iVar14 = local_d8 - 1;
          fVar21 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
          fVar21 = DAT_003f278c / fVar21;
          uVar40 = CONCAT44(fVar21,in_s24);
          fVar30 = DAT_003f2790;
          local_7c = puVar12;
          if (piVar8[3] == 1) {
            iVar9 = param_3[0x36];
            uVar24 = *(uint *)(iVar9 + 0x31c);
            if (*param_3 < (int)uVar24) {
              if ((*(int *)(iVar9 + 0x2cc) == 0x7fffffff) ||
                 (iVar15 = *(int *)(iVar9 + 0x2cc) - *(int *)(iVar9 + 0x2c8), (int)uVar24 <= iVar15)
                 ) {
                lVar44 = func_001104E4(uVar24,*(int *)(iVar9 + 0x2d0) + 1);
                uVar37 = (undefined4)uVar40;
                iVar15 = (int)lVar44 + 1;
              }
              else {
                lVar44 = func_001104E4(iVar15 + *(int *)(iVar9 + 0x2d0),*(int *)(iVar9 + 0x2d0) + 1)
                ;
                uVar37 = (undefined4)uVar40;
                iVar15 = (int)lVar44;
              }
              if (puVar12 != (uint *)0x0) {
                uVar19 = uVar19 + 1;
              }
              iVar15 = (int)*(float *)(iVar9 + 0x2c4) * iVar15;
              if (puVar12 != (uint *)0x0) {
                iVar15 = iVar15 + 1;
              }
              fVar22 = (float)VectorSignedToFloat(iVar15 + -1,(byte)(in_fpscr >> 0x15) & 3);
              fVar30 = (float)VectorSignedToFloat(uVar19 - 1,(byte)(in_fpscr >> 0x15) & 3);
              uVar40 = CONCAT44(DAT_003f278c / fVar22,uVar37);
              fVar30 = DAT_003f278c - (DAT_003f278c / fVar22) * fVar30;
            }
          }
          iVar9 = param_3[6];
          local_74 = *(int *)(iVar7 + 0x140);
          uVar19 = 0;
          local_dc = (uint *)0x0;
          local_94 = *(undefined4 *)(iVar9 + 0x238);
          fVar22 = ALBW_AS_F32(piVar8[6]) - ALBW_AS_F32(piVar8[5]);
          local_a0 = *(float *)(iVar9 + 0x22c) * *(float *)(param_3[0x36] + 0x4b8);
          local_9c = *(float *)(iVar9 + 0x230) * *(float *)(param_3[0x36] + 0x4b8);
          local_98 = *(float *)(iVar9 + 0x234) * *(float *)(param_3[0x36] + 0x4b8);
          iVar9 = param_3[0x9f];
          iVar15 = param_3[0xa0];
          local_70 = iVar7;
          uVar45 = func_003F6E84(param_3[0x3b],param_2);
          puVar12 = (uint *)uVar45;
          *piVar5 = (int)puVar12;
          if (puVar12 != (uint *)0x0) {
            iVar20 = param_3[0x97];
            if (iVar20 != 0 && (uint *)param_3[0x95] != (uint *)0x0) {
              func_0010E3C4(puVar12,(uint *)param_3[0x95],iVar20 << 2);
              puVar12 = puVar12 + iVar20;
            }
          }
          *DAT_003f2784 = (int)puVar12;
          iVar20 = func_003F8518(*(int *)param_3[6],(int)param_3);
          piVar5 = DAT_003f2784;
          if (iVar20 != 0) {
            pcVar10 = (code *)func_003F8518(*(int *)param_3[6],(int)param_3);
            iVar20 = (*pcVar10)(&stack0xfffffed8);
            *piVar5 = iVar20;
          }
          iVar20 = 0;
          if ((int)local_d8 < 1) {
LAB_003f2cfc:
            piVar5 = DAT_003f2784;
            if ((DAT_003f2784[1] != 0) && (2 < uVar19)) {
              puVar12 = (uint *)*DAT_003f2784;
              puVar17 = func_003F31AC(param_1,puVar12,iVar7,&local_a0,iVar9,iVar15,0);
              *piVar5 = (int)puVar17;
              iVar13 = *DAT_003f2e74;
              *(int *)(*(int *)(iVar13 + 0x970) + 0x10) = piVar5[1];
              func_0010E3C4(puVar17,*(uint **)(iVar13 + 0x970),*(int *)(iVar13 + 0x974) << 2);
              iVar13 = *(int *)(iVar13 + 0x974);
              *piVar5 = (int)(puVar17 + iVar13);
              if ((piVar8[1] == 1) && (*piVar8 != 0)) {
                iVar14 = (int)puVar12 - (int)local_dc >> 2;
                func_0010E3C4(puVar17 + iVar13,local_dc,iVar14 << 2);
                puVar17 = (uint *)(*piVar5 + iVar14 * 4);
                *piVar5 = (int)puVar17;
                puVar17 = func_003F31AC(param_1,puVar17,iVar7,&local_a0,iVar9,iVar15,1);
                piVar8 = DAT_003f2e74;
                *piVar5 = (int)puVar17;
                iVar7 = *piVar8;
                *(int *)(*(int *)(iVar7 + 0x970) + 0x10) = piVar5[1];
                func_0010E3C4(puVar17,*(uint **)(iVar7 + 0x970),*(int *)(iVar7 + 0x974) << 2);
                *piVar5 = (int)(puVar17 + *(int *)(iVar7 + 0x974));
                uVar19 = uVar19 + piVar5[1];
              }
              piVar5[1] = 0;
            }
            piVar8 = DAT_003f2e74;
            param_3[0xa9] = uVar19;
            *(uint *)(param_1 + 0xc) = uVar19;
            puVar17 = (uint *)*piVar5;
            iVar7 = *piVar8;
            func_0010E3C4(puVar17,*(uint **)(iVar7 + 0x958),*(int *)(iVar7 + 0x95c) << 2);
            return puVar17 + *(int *)(iVar7 + 0x95c);
          }
          uVar45 = CONCAT44(fVar30,(int)((ulonglong)uVar40 >> 0x20));
          uVar43 = CONCAT44(DAT_003f2794,fVar22);
          uVar40 = CONCAT44(DAT_003f2790,(int)uVar40);
          uVar42 = CONCAT44(fVar21,DAT_003f278c);
          do {
            local_dc = (uint *)*DAT_003f2784;
            do {
              uVar26 = DAT_003f2e70;
              piVar5 = DAT_003f2784;
              fVar22 = ALBW_AS_F32(uVar42);
              fVar30 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
              fVar33 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
              fVar21 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
              fVar41 = ALBW_AS_F32(((ulonglong)uVar40 >> 0x20));
              fVar33 = fVar33 * ALBW_AS_F32(((ulonglong)uVar42 >> 0x20));
              fVar30 = fVar33 * fVar30;
              fVar29 = (fVar22 - fVar21 * ALBW_AS_F32(uVar45)) - ALBW_AS_F32(((ulonglong)uVar45 >> 0x20));
              fVar21 = (float)VectorSignedToFloat((int)(fVar30 + ALBW_AS_F32(((ulonglong)uVar43 >> 0x20)))
                                                  ,(byte)(in_fpscr >> 0x15) & 3);
              fVar30 = fVar30 - fVar21;
              uVar24 = in_fpscr & 0xfffffff;
              in_fpscr = uVar24 | (uint)(fVar41 <= fVar30) << 0x1d;
              if (!SUB41(in_fpscr >> 0x1d,0)) {
                fVar30 = fVar41;
              }
              if (local_7c == (uint *)0x1) {
                if (iVar20 == 0) {
                  uVar38 = *(undefined4 *)(iVar13 + 0x34);
                  uVar37 = *(undefined4 *)(iVar7 + 0x34);
                  in_d10 = *(undefined8 *)(iVar13 + 0x2c);
                  iVar16 = iVar7;
                }
                else {
                  if (iVar7 != iVar13) goto LAB_003f27b8;
                  uVar38 = *(undefined4 *)(iVar13 + 0x34);
                  in_d10 = *(undefined8 *)(iVar13 + 0x2c);
                  uVar37 = *(undefined4 *)(local_70 + 0x34);
                  iVar16 = local_70;
                }
                in_d8 = CONCAT44(*(undefined4 *)(iVar16 + 0x2c),uVar37);
                in_d9 = CONCAT44(uVar38,*(undefined4 *)(iVar16 + 0x30));
              }
              else if ((local_7c == (uint *)0x2) && (iVar20 == 0)) {
                in_d10 = CONCAT44(param_3[0x1c],param_3[0x18]);
                in_d8 = CONCAT44(*(undefined4 *)(iVar7 + 0x2c),*(undefined4 *)(iVar7 + 0x34));
                in_d9 = CONCAT44(param_3[0x20],*(undefined4 *)(iVar7 + 0x30));
              }
              else {
LAB_003f27b8:
                if (local_74 == 0) {
                  fVar21 = ALBW_AS_F32(((ulonglong)in_d8 >> 0x20));
                  fVar23 = ALBW_AS_F32(in_d10);
                  uVar3 = (ulonglong)in_d10 >> 0x20;
                  uVar4 = (ulonglong)in_d9 >> 0x20;
                  in_d10 = *(undefined8 *)(iVar7 + 0x2c);
                  in_d9 = CONCAT44(*(undefined4 *)(iVar7 + 0x34),
                                   ALBW_AS_F32(in_d9) + (ALBW_AS_F32(in_d9) - ALBW_AS_F32(uVar3)));
                  in_d8 = CONCAT44(fVar21 + (fVar21 - fVar23),
                                   ALBW_AS_F32(in_d8) + (ALBW_AS_F32(in_d8) - ALBW_AS_F32(uVar4)));
                }
                else {
                  in_d8 = CONCAT44(*(undefined4 *)(local_74 + 0x2c),*(undefined4 *)(local_74 + 0x34)
                                  );
                  in_d9 = CONCAT44(*(undefined4 *)(iVar7 + 0x34),*(undefined4 *)(local_74 + 0x30));
                  in_d10 = *(undefined8 *)(iVar7 + 0x2c);
                }
              }
              fVar36 = *(float *)(iVar7 + 0x5c);
              fVar21 = ALBW_AS_F32(piVar8[9]);
              fVar23 = ALBW_AS_F32(((ulonglong)in_d8 >> 0x20)) - ALBW_AS_F32(in_d10);
              fVar32 = ALBW_AS_F32(((ulonglong)in_d10 >> 0x20));
              fVar25 = ALBW_AS_F32(in_d9) - fVar32;
              fVar31 = ALBW_AS_F32(((ulonglong)in_d9 >> 0x20));
              fVar27 = ALBW_AS_F32(in_d8) - fVar31;
              fVar34 = ALBW_AS_F32(in_d10) + fVar23 * fVar30;
              fVar32 = fVar32 + fVar25 * fVar30;
              fVar35 = ALBW_AS_F32(piVar8[5]);
              fVar31 = fVar31 + fVar27 * fVar30;
              if (fVar21 != 1.0) {
                if (iVar20 == 0) {
                  uVar40 = CONCAT44(fVar41,fVar23);
                  in_d11 = CONCAT44(fVar27,fVar25);
                }
                else {
                  fVar39 = ALBW_AS_F32(((ulonglong)in_d11 >> 0x20));
                  fVar23 = ALBW_AS_F32(uVar40) + (fVar23 - ALBW_AS_F32(uVar40)) * fVar21;
                  fVar25 = ALBW_AS_F32(in_d11) + (fVar25 - ALBW_AS_F32(in_d11)) * fVar21;
                  fVar39 = fVar39 + (fVar27 - fVar39) * fVar21;
                  in_d11 = CONCAT44(fVar39,fVar25);
                  fVar30 = SQRT(fVar23 * fVar23 + fVar25 * fVar25 + fVar39 * fVar39);
                  uVar24 = uVar24 | (uint)(fVar30 < fVar41) << 0x1f |
                           (uint)(fVar30 == fVar41) << 0x1e;
                  in_fpscr = uVar24 | (uint)(NAN(fVar30) || NAN(fVar41)) << 0x1c;
                  bVar1 = (byte)(uVar24 >> 0x18);
                  if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                    fVar30 = fVar22 / fVar30;
                    fVar23 = fVar23 * fVar30;
                    in_d11 = CONCAT44(fVar39 * fVar30,fVar25 * fVar30);
                  }
                  uVar40 = CONCAT44(fVar41,fVar23);
                  fVar25 = ALBW_AS_F32(in_d11);
                  fVar27 = ALBW_AS_F32(((ulonglong)in_d11 >> 0x20));
                }
              }
              iVar16 = DAT_003f2784[1];
              puVar12 = (uint *)*DAT_003f2784;
              puVar12[1] = DAT_003f2e6c;
              puVar12[3] = uVar26;
              *puVar12 = iVar16 * 4 + 1U | 0x80000000;
              fVar30 = *(float *)(*(int *)(iVar7 + 0x144) + 0x1a0) *
                       *(float *)(*(int *)(*(int *)(iVar7 + 0x144) + 0x18) + 0x238) *
                       (fVar35 + ALBW_AS_F32(uVar43) * fVar33) * fVar36;
              puVar12[2] = (uint)ALBW_AS_U32(fVar30);
              puVar12[0x13] = (uint)ALBW_AS_U32(fVar30);
              puVar12[4] = (uint)ALBW_AS_U32(fVar31);
              puVar12[5] = (uint)ALBW_AS_U32(fVar32);
              puVar12[6] = (uint)ALBW_AS_U32(fVar34);
              puVar12[0x14] = (uint)ALBW_AS_U32(fVar31);
              puVar12[0x15] = (uint)ALBW_AS_U32(fVar32);
              puVar12[0x16] = (uint)ALBW_AS_U32(fVar34);
              puVar12[7] = 0;
              puVar12[8] = (uint)ALBW_AS_U32(fVar27);
              puVar12[9] = (uint)ALBW_AS_U32(fVar25);
              puVar12[10] = (uint)ALBW_AS_U32(fVar23);
              puVar12[0x17] = 0;
              puVar12[0x18] = (uint)ALBW_AS_U32(fVar27);
              puVar12[0x19] = (uint)ALBW_AS_U32(fVar25);
              puVar12[0x1a] = (uint)ALBW_AS_U32(fVar23);
              iVar18 = *piVar8;
              if (iVar18 == 0) {
                fVar30 = *(float *)(iVar7 + 100);
                fVar21 = *(float *)(param_3[6] + 0x218);
                puVar12[0xb] = (uint)ALBW_AS_U32(-(fVar30 * fVar21));
                puVar12[0xc] = 0;
                puVar12[0xd] = 0;
                puVar12[0xe] = 0;
                puVar12[0x1b] = (uint)ALBW_AS_U32((fVar30 * fVar21));
                puVar12[0x1c] = 0;
                puVar12[0x1d] = 0;
                puVar12[0x1e] = 0;
              }
              else if (iVar18 == 2) {
                fVar30 = *(float *)(iVar7 + 100);
                fVar21 = *(float *)(param_3[6] + 0x218);
                puVar12[0xb] = (uint)ALBW_AS_U32(-(fVar30 * fVar21));
                puVar12[0x1b] = (uint)ALBW_AS_U32((fVar30 * fVar21));
                if (param_3[0x32] == 0) {
                  uVar24 = param_3[0x1e];
                  puVar12[0xc] = uVar24;
                  uVar26 = param_3[0x1a];
                  puVar12[0xd] = uVar26;
                  uVar28 = param_3[0x16];
                  puVar12[0xe] = uVar28;
                  puVar12[0x1c] = uVar24;
                  puVar12[0x1d] = uVar26;
                  puVar12[0x1e] = uVar28;
                }
                else {
                  uVar24 = *(uint *)(iVar7 + 0x124);
                  puVar12[0xc] = uVar24;
                  uVar26 = *(uint *)(iVar7 + 0x114);
                  puVar12[0xd] = uVar26;
                  uVar28 = *(uint *)(iVar7 + 0x104);
                  puVar12[0xe] = uVar28;
                  puVar12[0x1c] = uVar24;
                  puVar12[0x1d] = uVar26;
                  puVar12[0x1e] = uVar28;
                }
              }
              else if (iVar18 == 1) {
                if (param_3[0x32] == 0) {
                  fVar30 = ALBW_AS_F32(param_3[0x1a]);
                  fVar21 = ALBW_AS_F32(param_3[0x16]);
                }
                else {
                  fVar30 = *(float *)(iVar7 + 0x114);
                  fVar21 = *(float *)(iVar7 + 0x104);
                }
                if (param_3[0x32] == 0) {
                  fVar33 = ALBW_AS_F32(param_3[0x1e]);
                }
                else {
                  fVar33 = *(float *)(iVar7 + 0x124);
                }
                fVar31 = fVar30 * fVar27 - fVar33 * fVar25;
                fVar25 = fVar21 * fVar25 - fVar30 * fVar23;
                fVar30 = fVar33 * fVar23 - fVar21 * fVar27;
                fVar21 = SQRT(fVar31 * fVar31 + fVar30 * fVar30 + fVar25 * fVar25);
                uVar24 = in_fpscr & 0xfffffff | (uint)(fVar21 < fVar41) << 0x1f |
                         (uint)(fVar21 == fVar41) << 0x1e;
                in_fpscr = uVar24 | (uint)(NAN(fVar21) || NAN(fVar41)) << 0x1c;
                bVar1 = (byte)(uVar24 >> 0x18);
                if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                  fVar21 = fVar22 / SQRT(fVar31 * fVar31 + fVar30 * fVar30 + fVar25 * fVar25);
                  fVar31 = fVar31 * fVar21;
                  fVar30 = fVar30 * fVar21;
                  fVar25 = fVar25 * fVar21;
                }
                fVar21 = *(float *)(iVar7 + 100);
                fVar33 = *(float *)(param_3[6] + 0x218);
                puVar12[0xb] = (uint)ALBW_AS_U32(-(fVar21 * fVar33));
                puVar12[0xc] = (uint)ALBW_AS_U32(fVar25);
                puVar12[0x1b] = (uint)ALBW_AS_U32((fVar21 * fVar33));
                puVar12[0x1c] = (uint)ALBW_AS_U32(fVar25);
                puVar12[0xd] = (uint)ALBW_AS_U32(fVar30);
                puVar12[0xe] = (uint)ALBW_AS_U32(fVar31);
                puVar12[0x1d] = (uint)ALBW_AS_U32(fVar30);
                puVar12[0x1e] = (uint)ALBW_AS_U32(fVar31);
              }
              iVar16 = iVar16 + 2;
              uVar19 = uVar19 + 2;
              fVar30 = fVar22 - fVar29 * *(float *)(param_3[0x36] + 0x3e4);
              puVar12[0xf] = (uint)ALBW_AS_U32(fVar30);
              puVar12[0x10] = *(uint *)(param_3[0x36] + 0x3e0);
              fVar22 = fVar22 - fVar29 * *(float *)(param_3[0x36] + 0x36c);
              puVar12[0x11] = (uint)ALBW_AS_U32(fVar22);
              puVar12[0x12] = *(uint *)(param_3[0x36] + 0x368);
              puVar12[0x1f] = (uint)ALBW_AS_U32(fVar30);
              puVar12[0x20] = 0;
              puVar12[0x21] = (uint)ALBW_AS_U32(fVar22);
              puVar12[0x22] = 0;
              puVar12[0x23] = 0;
              *piVar5 = (int)(puVar12 + 0x24);
              piVar5[1] = iVar16;
              if (iVar16 == 0x12) {
                puVar11 = func_003F31AC(param_1,puVar12 + 0x24,iVar7,&local_a0,iVar9,iVar15,0);
                *DAT_003f2784 = (int)puVar11;
                iVar16 = *DAT_003f2e74;
                func_0010E3C4(puVar11,*(uint **)(iVar16 + 0x964),*(int *)(iVar16 + 0x968) << 2);
                iVar16 = *(int *)(iVar16 + 0x968);
                *DAT_003f2784 = (int)(puVar11 + iVar16);
                piVar5 = DAT_003f2784;
                if ((piVar8[1] == 1) && (*piVar8 != 0)) {
                  func_0010E3C4(puVar11 + iVar16,local_dc,0x510);
                  iVar16 = *piVar5;
                  *piVar5 = iVar16 + 0x510;
                  puVar11 = func_003F31AC(param_1,(uint *)(iVar16 + 0x510),iVar7,&local_a0,iVar9,
                                          iVar15,1);
                  piVar6 = DAT_003f2e74;
                  *piVar5 = (int)puVar11;
                  iVar16 = *piVar6;
                  func_0010E3C4(puVar11,*(uint **)(iVar16 + 0x964),*(int *)(iVar16 + 0x968) << 2);
                  *piVar5 = (int)(puVar11 + *(int *)(iVar16 + 0x968));
                  uVar19 = uVar19 + piVar5[1];
                }
                piVar5 = DAT_003f2784;
                DAT_003f2784[1] = 0;
                local_dc = (uint *)*piVar5;
                func_0010E3C4(local_dc,puVar12,0x90);
                iVar16 = piVar5[1];
                puVar12 = (uint *)*piVar5;
                *puVar12 = iVar16 * 4 + 1U | 0x80000000;
                *piVar5 = (int)(puVar12 + 0x24);
                if (iVar20 != iVar14) {
                  uVar19 = uVar19 + 2;
                  piVar5[1] = iVar16 + 2;
                }
              }
              if (!bVar2 && puVar17 != (uint *)0x2 || iVar20 != 0) {
                if (local_74 != 0) {
                  iVar7 = local_74;
                  local_74 = *(int *)(local_74 + 0x140);
                }
                *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
                *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
                *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
              }
              iVar20 = iVar20 + 1;
              if ((int)local_d8 <= iVar20) goto LAB_003f2cfc;
            } while (local_dc != (uint *)0x0);
          } while( true );
        }
      }
      return param_2;
    }
  }
  return puVar17;
}

