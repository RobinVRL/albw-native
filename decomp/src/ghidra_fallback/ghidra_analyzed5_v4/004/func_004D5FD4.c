#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0014EC00(int param_1,undefined4 *param_2,undefined4 param_3,int param_4);
extern int func_001E4BE4(char param_1,float *param_2);
extern int func_0034CA24(undefined4 *param_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004A9F98(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D5810(uint param_1,int param_2,int param_3);
extern int func_004D5A48(int param_1,int *param_2,int param_3,uint param_4);
extern int func_00513148(int param_1);
extern int func_0052FCA4(int param_1,undefined4 *param_2,int *param_3);
extern int func_00588BE4(int param_1);
extern int *piRam004d6a3c;
extern undefined4 *puRam004d6a40;
extern undefined4 DAT_004d62fc;
extern undefined4 DAT_004d6300;
extern undefined4 DAT_004d6304;
extern undefined4 DAT_004d6308;
extern undefined4 DAT_004d630c;
extern undefined4 DAT_004d6310;
extern float DAT_004d6314;
extern uint DAT_004d6318;
extern int DAT_004d631c;
extern int DAT_004d6320;
extern int *DAT_004d632c;
extern int DAT_004d6330;
extern int *DAT_004d69f8;
extern int DAT_004d69fc;
extern int DAT_004d6a00;
extern int *DAT_004d6a04;
extern undefined4 *DAT_004d6a08;
extern undefined4 DAT_004d6a1c;
extern uint DAT_004d6a20;
extern undefined4 DAT_004d6a24;
extern float DAT_004d6a28;
extern float DAT_004d6a2c;
extern int *DAT_004d6a30;
extern int DAT_004d6a34;
extern int DAT_004d6a38;
extern char s_SE_Skull_BREAK_004d6a0c[];
extern char s_Twinkle_004d6324[];

// USA 004D5FD4 <- EU 004D5FAC (Ghidra, non-matching)
// GLOBAL DAT_004d62fc undefined4
// GLOBAL DAT_004d6300 undefined4
// GLOBAL DAT_004d6304 undefined4
// GLOBAL DAT_004d6308 undefined4
// GLOBAL DAT_004d630c undefined4
// GLOBAL DAT_004d6310 undefined4
// GLOBAL DAT_004d6314 float
// GLOBAL DAT_004d6318 uint
// GLOBAL DAT_004d631c int
// GLOBAL DAT_004d6320 int
// GLOBAL DAT_004d632c int *
// GLOBAL DAT_004d6330 int
// GLOBAL DAT_004d69f8 int *
// GLOBAL DAT_004d69fc int
// GLOBAL DAT_004d6a00 int
// GLOBAL DAT_004d6a04 int *
// GLOBAL DAT_004d6a08 undefined4 *
// GLOBAL DAT_004d6a1c undefined4
// GLOBAL DAT_004d6a20 uint
// GLOBAL DAT_004d6a24 undefined4
// GLOBAL DAT_004d6a28 float
// GLOBAL DAT_004d6a2c float
// GLOBAL DAT_004d6a30 int *
// GLOBAL DAT_004d6a34 int
// GLOBAL DAT_004d6a38 int
// GLOBAL UNK_004d6a3c int *
// GLOBAL UNK_004d6a40 undefined4 *
// GLOBAL s_SE_Skull_BREAK_004d6a0c string
// GLOBAL s_Twinkle_004d6324 string

void func_004D5FD4(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  float *pfVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  uint in_fpscr;
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
  longlong lVar30;
  undefined4 uVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  _Alignas(8) unsigned char albw_frame[0x130];
  #define local_12c (*(float *)(albw_frame + 0x4))
  #define local_128 (*(undefined4 *)(albw_frame + 0x8))
  #define local_124 (*(float *)(albw_frame + 0xc))
  #define local_11c (*(undefined4 *)(albw_frame + 0x14))
  #define local_118 (*(float *)(albw_frame + 0x18))
  #define local_114 (*(uint *)(albw_frame + 0x1c))
  #define local_10c (*(uint *)(albw_frame + 0x24))
  #define local_104 (*(uint *)(albw_frame + 0x2c))
  #define local_100 (*(int *)(albw_frame + 0x30))
  #define local_f8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_f4 (*(undefined2 *)(albw_frame + 0x3c))
  #define local_f0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_e8 (*(undefined4 * *)(albw_frame + 0x48))
  #define local_e4 (*(undefined4 * *)(albw_frame + 0x4c))
  #define local_d8 (*(float *)(albw_frame + 0x58))
  #define local_d4 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x60))
  #define local_cc (*(undefined4 *)(albw_frame + 0x64))
  #define local_c8 ((byte *)(albw_frame + 0x68))
  #define uStack_b8 (*(uint *)(albw_frame + 0x78))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x80))
  #define local_ac (*(undefined4 *)(albw_frame + 0x84))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x88))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_a0 (*(undefined1 *)(albw_frame + 0x90))
  #define local_9f (*(undefined1 *)(albw_frame + 0x91))
  #define local_9c (*(undefined4 *)(albw_frame + 0x94))
  #define fStack_98 (*(float *)(albw_frame + 0x98))
  #define uStack_94 (*(uint *)(albw_frame + 0x9c))
  #define afStack_90 ((float *)(albw_frame + 0xa0))
  #define local_80 (*(int *)(albw_frame + 0xb0))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0xb4))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0xb8))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0xbc))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0xc0))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0xc4))
  #define local_64 (*(int *)(albw_frame + 0xcc))
  #define local_60 (*(int *)(albw_frame + 0xd0))
  #define local_58 (*(int *)(albw_frame + 0xd8))
  #define local_54 (*(char * *)(albw_frame + 0xdc))
  iVar13 = 0;
  uVar15 = 0;
  iVar17 = param_1[0x188];
  iVar14 = param_1[0x189];
  local_10c = 0x1600;
  if (iVar17 != 0) {
    uVar35 = CONCAT44(DAT_004d6300,DAT_004d62fc);
    local_64 = DAT_004d631c;
    uVar34 = CONCAT44(DAT_004d630c,DAT_004d6304);
    uVar33 = CONCAT44(DAT_004d6308,DAT_004d6310);
    lVar30 = (ulonglong)DAT_004d6318 << 0x20;
    puVar16 = (uint *)(param_1 + 0x11e);
    local_60 = DAT_004d6320;
    fVar32 = DAT_004d6314;
    do {
      pcVar3 = (char *)(iVar14 + iVar13 * 0x118);
      local_80 = *(int *)(pcVar3 + 8);
      if (*pcVar3 != '\x04') {
        if (uVar15 < *puVar16) {
          iVar18 = *(int *)(param_1[0x120] + uVar15 * 4);
        }
        else {
          iVar18 = 0;
        }
        if (pcVar3[0x10c] != '\0') {
          if (pcVar3[0x10c] == '\x01') {
            pcVar3[0x10c] = '\x02';
            if (uVar15 < (uint)param_1[0x184]) {
              iVar4 = *(int *)(param_1[0x186] + uVar15 * 4);
            }
            else {
              iVar4 = 0;
            }
            iVar5 = iVar4 + 4;
            pcVar3 = s_Twinkle_004d6324;
            iVar8 = iVar14 + iVar13 * 0x118;
            pfVar10 = (float *)(iVar8 + 0xc4);
            if (*(int *)(iVar4 + 0x24) == 0) {
              *pfVar10 = 0.0;
              *(undefined4 *)(iVar8 + 200) = 0;
            }
            else {
              fVar9 = *pfVar10;
              if ((fVar9 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar9) + 0x1c) == *(int *)(iVar8 + 200))) {
                func_00110848((int)ALBW_AS_U32(fVar9));
              }
              func_004A1B9C((int *)&local_118,*(int *)(iVar5 + 0x20),(uint *)pcVar3);
              *pfVar10 = local_118;
              *(uint *)(iVar8 + 200) = local_114;
            }
          }
          func_004D5A48(iVar14 + iVar13 * 0x118,param_1,iVar18,param_4);
        }
        iVar4 = func_00588BE4((int)param_1);
        if (iVar4 == *DAT_004d632c) {
          uVar11 = 0;
          func_0034CA24(*(undefined4 **)(iVar14 + iVar13 * 0x118 + 0xfc));
          iVar4 = iVar14 + iVar13 * 0x118;
          if ((*(uint *)(*(int *)(iVar4 + 8) + 0x164) & 0x20000) == 0) {
            iVar5 = *(int *)(iVar4 + 0x14);
            iVar4 = iVar14 + iVar13 * 0x118;
            *(uint *)(iVar5 + 0x2c) = *(uint *)(iVar5 + 0x2c) & 0xfffff8ff | 0x500;
            iVar4 = func_0014E2A0((int)param_1,*(undefined4 *)(iVar4 + 0x14),iVar4 + 0xdc,local_10c,
                                  0,0);
            iVar5 = *(int *)(iVar14 + iVar13 * 0x118 + 0x14);
            param_4 = *(uint *)(iVar5 + 0x2c) & 0xfffff8ff | 0x300;
            *(uint *)(iVar5 + 0x2c) = param_4;
            iVar5 = *(int *)(iVar14 + iVar13 * 0x118 + 0xfc);
            cVar1 = *(char *)(iVar5 + 0x21);
            if (iVar4 != 0) {
              if (cVar1 == '\x05') {
                uVar6 = *(uint *)(iVar5 + 0x38);
                if ((uVar6 >> 0x1c == 1) ||
                   (iVar4 = func_001E4BE4((byte)(uVar6 >> 0x1c),(float *)(iVar18 + 4)), iVar4 != 0))
                goto LAB_004d6248;
              }
              else if ((cVar1 == '\v') && (*(char *)(iVar14 + iVar13 * 0x118 + 0x110) == '\0')) {
                pcVar3 = (char *)(iVar14 + iVar13 * 0x118);
                if (*pcVar3 == '\x03') goto LAB_004d624c;
                pfVar10 = (float *)(iVar14 + iVar13 * 0x118 + 0x100);
                *pcVar3 = '\x01';
                fVar20 = *pfVar10;
                fVar21 = (fVar32 - fVar20) * ALBW_AS_F32(uVar35);
                uVar11 = in_fpscr & 0xfffffff;
                fVar9 = ALBW_AS_F32(((ulonglong)uVar35 >> 0x20));
                if (fVar21 <= ALBW_AS_F32(((ulonglong)lVar30 >> 0x20))) {
                  fVar21 = -fVar21;
                }
                if ((fVar9 <= fVar21) && (fVar9 = fVar21, DAT_004d6330 < (int)ALBW_AS_U32(fVar21))) {
                  fVar9 = ALBW_AS_F32(((ulonglong)uVar34 >> 0x20));
                }
                uVar6 = uVar11 | (uint)(fVar20 < fVar32) << 0x1f | (uint)(fVar20 == fVar32) << 0x1e
                        | (uint)(fVar32 <= fVar20) << 0x1d;
                in_fpscr = uVar6 | (uint)(NAN(fVar20) || NAN(fVar32)) << 0x1c;
                bVar2 = (byte)(uVar6 >> 0x18);
                if ((bool)(bVar2 >> 5 & 1)) {
                  if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                    fVar9 = fVar20 - fVar9;
                    in_fpscr = uVar11 | (uint)(fVar9 == fVar32) << 0x1e |
                               (uint)(fVar32 <= fVar9) << 0x1d;
                    bVar2 = (byte)(in_fpscr >> 0x18);
                    if ((!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) ||
                       (uVar11 = uVar11 | (uint)(fVar9 < fVar20) << 0x1f |
                                 (uint)(fVar9 == fVar20) << 0x1e,
                       in_fpscr = uVar11 | (uint)(NAN(fVar9) || NAN(fVar20)) << 0x1c,
                       bVar2 = (byte)(uVar11 >> 0x18),
                       !(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)))
                    goto LAB_004d6358;
                    goto LAB_004d6360;
                  }
                }
                else {
                  fVar9 = fVar20 + fVar9;
                  in_fpscr = uVar11 | (uint)(fVar32 == fVar9) << 0x1e |
                             (uint)(fVar9 <= fVar32) << 0x1d;
                  bVar2 = (byte)(in_fpscr >> 0x18);
                  if ((!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) ||
                     (uVar11 = uVar11 | (uint)(fVar20 < fVar9) << 0x1f |
                               (uint)(fVar20 == fVar9) << 0x1e,
                     in_fpscr = uVar11 | (uint)(NAN(fVar20) || NAN(fVar9)) << 0x1c,
                     bVar2 = (byte)(uVar11 >> 0x18),
                     !(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
LAB_004d6358:
                    *pfVar10 = fVar32;
                  }
                  else {
LAB_004d6360:
                    *pfVar10 = fVar9;
                  }
                }
                uVar11 = 1;
              }
              else {
LAB_004d6248:
                *(undefined1 *)(iVar14 + iVar13 * 0x118) = 2;
              }
            }
          }
LAB_004d624c:
          pcVar3 = (char *)(iVar14 + iVar13 * 0x118);
          if (*pcVar3 == '\x01') {
            if (uVar11 == 0) {
              pfVar10 = (float *)(pcVar3 + 0x100);
              fVar22 = ALBW_AS_F32(((ulonglong)lVar30 >> 0x20));
              fVar20 = *pfVar10;
              fVar21 = -fVar20 * ALBW_AS_F32(uVar34);
              uVar11 = in_fpscr & 0xfffffff;
              fVar9 = ALBW_AS_F32(((ulonglong)uVar33 >> 0x20));
              if (fVar21 <= fVar22) {
                fVar21 = -fVar21;
              }
              if ((fVar9 <= fVar21) && (fVar9 = fVar21, DAT_004d6330 < (int)ALBW_AS_U32(fVar21))) {
                fVar9 = ALBW_AS_F32(((ulonglong)uVar34 >> 0x20));
              }
              uVar6 = uVar11 | (uint)(fVar20 < fVar22) << 0x1f | (uint)(fVar20 == fVar22) << 0x1e |
                      (uint)(fVar22 <= fVar20) << 0x1d;
              in_fpscr = uVar6 | (uint)(NAN(fVar20) || NAN(fVar22)) << 0x1c;
              bVar2 = (byte)(uVar6 >> 0x18);
              if ((bool)(bVar2 >> 5 & 1)) {
                if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                  fVar9 = fVar20 - fVar9;
                  in_fpscr = uVar11 | (uint)(fVar9 == fVar22) << 0x1e |
                             (uint)(fVar22 <= fVar9) << 0x1d;
                  bVar2 = (byte)(in_fpscr >> 0x18);
                  if ((!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) ||
                     (uVar11 = uVar11 | (uint)(fVar9 < fVar20) << 0x1f |
                               (uint)(fVar9 == fVar20) << 0x1e,
                     in_fpscr = uVar11 | (uint)(NAN(fVar9) || NAN(fVar20)) << 0x1c,
                     bVar2 = (byte)(uVar11 >> 0x18),
                     !(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)))
                  goto LAB_004d63e0;
                  goto LAB_004d63e8;
                }
              }
              else {
                fVar9 = fVar20 + fVar9;
                in_fpscr = uVar11 | (uint)(fVar22 == fVar9) << 0x1e |
                           (uint)(fVar9 <= fVar22) << 0x1d;
                bVar2 = (byte)(in_fpscr >> 0x18);
                if ((!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) ||
                   (uVar11 = uVar11 | (uint)(fVar20 < fVar9) << 0x1f |
                             (uint)(fVar20 == fVar9) << 0x1e,
                   in_fpscr = uVar11 | (uint)(NAN(fVar20) || NAN(fVar9)) << 0x1c,
                   bVar2 = (byte)(uVar11 >> 0x18),
                   !(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
LAB_004d63e0:
                  *pfVar10 = fVar22;
                }
                else {
LAB_004d63e8:
                  *pfVar10 = fVar9;
                }
              }
            }
            iVar4 = iVar14 + iVar13 * 0x118;
            *(int *)(iVar4 + 0x104) = *DAT_004d69f8 + *(int *)(iVar4 + 0x104);
            iVar4 = DAT_004d69fc;
            iVar8 = iVar14 + iVar13 * 0x118;
            iVar5 = iVar14 + iVar13 * 0x118;
            *(int *)(iVar8 + 0x108) = *(int *)(iVar8 + 0x108) + *DAT_004d6a04;
            uVar11 = *(uint *)(iVar14 + iVar13 * 0x118 + 0x108);
            fVar9 = *(float *)(iVar5 + 0x100);
            pfVar10 = (float *)(iVar4 + (uVar11 >> 0x18) * 0x10);
            fVar20 = (float)VectorUnsignedToFloat(uVar11 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
            fVar21 = ALBW_AS_F32(uVar33);
            fVar20 = *pfVar10 + pfVar10[1] * fVar20 * fVar21;
            if ((int)ALBW_AS_U32(fVar9) < DAT_004d6a00) {
              iVar4 = *(int *)(iVar5 + 8);
              *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
              func_00491E80((float *)(iVar4 + 0x80),0,*(uint *)(iVar18 + 0x20),0);
              uVar11 = iVar13 * 0x23;
              iVar4 = *(int *)(iVar14 + iVar13 * 0x118 + 8);
              param_4 = iVar4 + 0x80;
              *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
              *(undefined4 *)(iVar4 + 0x8c) = *(undefined4 *)(iVar18 + 4);
              *(undefined4 *)(iVar4 + 0x9c) = *(undefined4 *)(iVar18 + 8);
              *(undefined4 *)(iVar4 + 0xac) = *(undefined4 *)(iVar18 + 0xc);
              func_004CEAF0(*(int *)(iVar14 + iVar13 * 0x118 + 8));
              *(undefined1 *)(iVar14 + iVar13 * 0x118) = 0;
            }
            else {
              iVar5 = *(int *)(iVar5 + 8);
              uVar11 = *(uint *)(iVar14 + iVar13 * 0x118 + 0x104);
              fVar28 = (float)VectorSignedToFloat(*DAT_004d6a08,(byte)(in_fpscr >> 0x15) & 3);
              iVar4 = DAT_004d69fc + (uVar11 >> 0x18) * 0x10;
              pfVar10 = (float *)(DAT_004d69fc + (uVar11 >> 0x18) * 0x10);
              fVar23 = (float)VectorUnsignedToFloat(uVar11 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
              fVar25 = (float)VectorUnsignedToFloat(uVar11 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
              fVar27 = *(float *)(iVar4 + 0xc);
              fVar29 = pfVar10[1];
              fVar22 = (float)VectorSignedToFloat(*DAT_004d6a08,(byte)(in_fpscr >> 0x15) & 3);
              fVar24 = *(float *)(iVar4 + 8);
              fVar26 = *pfVar10;
              *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
              func_00491E80((float *)(iVar5 + 0x80),
                            (int)(fVar9 * fVar28 * (fVar24 + fVar27 * fVar23 * fVar21) * fVar20),
                            *(uint *)(iVar18 + 0x20),
                            (int)(fVar9 * fVar22 * (fVar26 + fVar29 * fVar25 * fVar21) * fVar20));
              uVar11 = iVar13 * 0x23;
              iVar4 = *(int *)(iVar14 + iVar13 * 0x118 + 8);
              param_4 = iVar4 + 0x80;
              *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
              *(undefined4 *)(iVar4 + 0x8c) = *(undefined4 *)(iVar18 + 4);
              *(undefined4 *)(iVar4 + 0x9c) = *(undefined4 *)(iVar18 + 8);
              *(undefined4 *)(iVar4 + 0xac) = *(undefined4 *)(iVar18 + 0xc);
              func_004CEAF0(*(int *)(iVar14 + iVar13 * 0x118 + 8));
            }
          }
          fVar9 = ALBW_AS_F32(((ulonglong)lVar30 >> 0x20));
          if (*(char *)(iVar14 + iVar13 * 0x118) == '\x02') {
            local_58 = local_64;
            local_54 = s_SE_Skull_BREAK_004d6a0c;
            func_0014DBF4(param_1,&local_58,iVar18 + 4,0);
            lVar30 = CONCAT44(fVar9,fVar9);
            local_128 = DAT_004d6a1c;
            uVar31 = DAT_004d6a1c;
            local_12c = fVar9;
            local_124 = fVar9;
            func_00115C54(afStack_90,(float *)(iVar18 + 4),&local_12c);
            if (uVar15 < *puVar16) {
              iVar4 = *(int *)(param_1[0x120] + uVar15 * 4);
            }
            else {
              iVar4 = 0;
            }
            func_0014EC00((int)param_1,afStack_90,*(undefined4 *)(iVar4 + 0x20),1);
            uStack_b8 = uVar11 & 0xffff0000 | DAT_004d6a20;
            local_c8[0] = 0;
            local_c8[1] = 0;
            local_c8[2] = 0;
            local_c8[3] = 0;
            local_b4 = 0xff;
            local_c8[4] = 0;
            local_c8[5] = 0;
            local_c8[6] = 0;
            local_c8[7] = 0;
            local_c8[8] = 0;
            local_c8[9] = 0;
            local_c8[10] = 0;
            local_c8[0xb] = 0;
            local_c8[0xc] = 0;
            local_c8[0xd] = 0;
            local_c8[0xe] = 0;
            local_c8[0xf] = 0;
            local_b0 = 0;
            local_ac = 0;
            local_a8 = 0;
            local_a4 = (undefined4)lVar30;
            local_a0 = 0;
            local_9f = 1;
            func_00110D44(&local_104,local_c8,0x2a);
            local_d4 = (undefined4)lVar30;
            if (uVar15 < (uint)param_1[0x11e]) {
              iVar4 = *(int *)(param_1[0x120] + uVar15 * 4);
            }
            else {
              iVar4 = 0;
            }
            fStack_98 = *(float *)(iVar4 + 8);
            local_11c = *(undefined4 *)(iVar4 + 4);
            param_4 = *(uint *)(iVar4 + 0xc);
            local_100 = iVar14 + iVar13 * 0x118 + 0xcc;
            local_118 = fStack_98 + fVar32;
            local_e4 = &local_11c;
            local_e8 = &local_9c;
            local_104 = 0;
            local_f0 = 7;
            local_f8 = 0;
            local_f4 = (undefined2)param_1[0x15];
            local_114 = param_4;
            local_d8 = fVar32;
            local_d0 = local_d4;
            local_cc = local_d4;
            local_9c = local_11c;
            uStack_94 = param_4;
            func_004A9F98(*DAT_004d6a30,&local_104,0xf,DAT_004d6a2c,DAT_004d6a28);
            if ((*(char *)(iVar14 + DAT_004d6a34 + iVar13 * 0x118) == '\0') &&
               (*(char *)(iVar14 + DAT_004d6a38 + iVar13 * 0x118) == '\0')) {
              func_004CF478(local_80,0);
            }
            else {
              func_004CF478(local_80,0);
              func_004CF478(*(int *)(iVar14 + iVar13 * 0x118 + 0xc),1);
              iVar4 = func_00588BE4((int)param_1);
              if (iVar4 == *DAT_004d632c) {
                *(int *)(*(int *)(iVar14 + iVar13 * 0x118 + 0xc) + 0x134) = (int)lVar30;
              }
            }
            if (uVar15 < (uint)param_1[0x184]) {
              piVar7 = *(int **)(param_1[0x186] + uVar15 * 4);
            }
            else {
              piVar7 = (int *)0x0;
            }
            (**(code **)(*piVar7 + 0x30))(piVar7);
            iVar4 = iVar14 + iVar13 * 0x118;
            *(undefined1 *)(iVar14 + iVar13 * 0x118) = 4;
            if (*(char *)(iVar4 + 0x10f) == '\x01') {
              *(undefined1 *)(iVar4 + 0x10f) = 0;
              piVar7 = DAT_004d6a30;
              func_004A9120(*DAT_004d6a30,iVar14 + iVar13 * 0x118 + 0x18);
              func_004A8304(*piVar7,iVar14 + iVar13 * 0x118 + 0x7c);
            }
            if ((iVar18 != 0) && (*(short *)(iVar18 + 0x2e) == 1)) {
              uStack_7c = *puRam004d6a40;
              local_80 = local_60;
              uStack_78 = *(undefined4 *)(iVar18 + 4);
              uStack_74 = *(undefined4 *)(iVar18 + 8);
              uStack_70 = *(undefined4 *)(iVar18 + 0xc);
              iVar18 = *piRam004d6a3c;
              param_4 = iVar18 + 0x3dbbc;
              piVar12 = *(int **)(iVar18 + 0x3dbc8);
              uStack_6c = uVar31;
              piVar7 = func_0052FCA4(param_4,&local_80,*(int **)(iVar18 + 0x3dbc0));
              bVar19 = piVar7 != piVar12;
              if (bVar19) {
                piVar7 = (int *)*piVar7;
              }
              if (bVar19 && piVar7 != (int *)0x0) {
                func_00513148((int)piVar7);
              }
            }
          }
        }
        pcVar3 = (char *)(iVar14 + iVar13 * 0x118);
        if (*pcVar3 == '\x03') {
          if (uVar15 < *puVar16) {
            iVar18 = *(int *)(param_1[0x120] + uVar15 * 4);
          }
          else {
            iVar18 = 0;
          }
          func_004D5810((uint)pcVar3,(int)param_1,iVar18);
        }
      }
      iVar13 = iVar13 + 1;
      uVar15 = uVar15 + 1;
    } while (iVar13 != iVar17);
  }
  return;
}

