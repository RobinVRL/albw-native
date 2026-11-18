/* compilefix: USA 004BA6BC (EU 004BA694), mass-pot update: lost SafeString stores restored (BOOT_LOG 151). */
// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0014EC00(int param_1,undefined4 *param_2,undefined4 param_3,int param_4);
extern int func_00150CD0(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_001E4BE4(char param_1,float *param_2);
extern int func_002DFFF4(uint *param_1,uint param_2);
extern int func_0034CA24(undefined4 *param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_00556B54(int param_1);
extern int func_00588BE4(int param_1);
extern undefined4 *puRam004baef4;
extern int *DAT_004baa6c;
extern float DAT_004baa70;
extern float DAT_004baa74;
extern uint DAT_004baa78;
extern undefined4 DAT_004baa7c;
extern undefined4 DAT_004baa80;
extern float DAT_004baa84;
extern float DAT_004baa88;
extern float DAT_004baa8c;
extern int DAT_004baa90;
extern int DAT_004baa94;
extern int *DAT_004baa98;
extern int *DAT_004baaa8;
extern int *DAT_004baaac;
extern float DAT_004baab0;
extern int DAT_004baab4;
extern int DAT_004baab8;
extern undefined4 *DAT_004baedc;
extern int *DAT_004baee0;
extern undefined4 DAT_004baee4;
extern undefined4 DAT_004baee8;
extern float DAT_004baeec;
extern int *DAT_004baef0;
extern char s_SE_Pot_ROLL_004baa9c[];

// USA 004BA6BC <- EU 004BA694 (Ghidra, non-matching)
// GLOBAL DAT_004baa6c int *
// GLOBAL DAT_004baa70 float
// GLOBAL DAT_004baa74 float
// GLOBAL DAT_004baa78 uint
// GLOBAL DAT_004baa7c undefined4
// GLOBAL DAT_004baa80 undefined4
// GLOBAL DAT_004baa84 float
// GLOBAL DAT_004baa88 float
// GLOBAL DAT_004baa8c float
// GLOBAL DAT_004baa90 int
// GLOBAL DAT_004baa94 int
// GLOBAL DAT_004baa98 int *
// GLOBAL DAT_004baaa8 int *
// GLOBAL DAT_004baaac int *
// GLOBAL DAT_004baab0 float
// GLOBAL DAT_004baab4 int
// GLOBAL DAT_004baab8 int
// GLOBAL DAT_004baedc undefined4 *
// GLOBAL DAT_004baee0 int *
// GLOBAL DAT_004baee4 undefined4
// GLOBAL DAT_004baee8 undefined4
// GLOBAL DAT_004baeec float
// GLOBAL DAT_004baef0 int *
// GLOBAL UNK_004baef4 undefined4 *
// GLOBAL s_SE_Pot_ROLL_004baa9c string

void func_004BA6BC(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x70]; /* entry_sp - 0x70 .. entry_sp + 0x0 */
#define stack0xffffff90 (*(undefined4 *)(albw_frame + 0x0))
  char cVar1;
  byte bVar2;
  bool bVar3;
  float fVar4;
  bool bVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint in_fpscr;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  ulonglong uVar34;
  #define local_64 (*(uint * *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(char * *)(albw_frame + 0x14))
  #define local_58 (*(uint *)(albw_frame + 0x18))
  #define local_54 (*(int *)(albw_frame + 0x1c))
  #define local_28 (*(int * *)(albw_frame + 0x48))
  fVar4 = DAT_004baa8c;
  iVar16 = 0;
  uVar18 = 0xffffffff;
  iVar21 = param_1[0x188];
  iVar17 = param_1[0x189];
  local_58 = 0x1600;
  local_54 = *DAT_004baa6c;
  if (iVar21 != 0) {
    uVar34 = (ulonglong)DAT_004baa78;
    uVar29 = CONCAT44(DAT_004baa80,DAT_004baa7c);
    fVar32 = DAT_004baa70;
    fVar33 = DAT_004baa74;
    fVar30 = DAT_004baa84;
    fVar31 = DAT_004baa88;
    local_28 = param_1;
    do {
      uVar18 = uVar18 + 1;
      pcVar6 = (char *)(iVar17 + iVar16 * 0x104);
      iVar19 = *(int *)(pcVar6 + 8);
      if (*pcVar6 != '\x04') {
        bVar3 = false;
        if (uVar18 < (uint)param_1[0x11e]) {
          iVar20 = *(int *)(param_1[0x120] + uVar18 * 4);
        }
        else {
          iVar20 = 0;
        }
        func_0034CA24(*(undefined4 **)(pcVar6 + 0xc0));
        iVar7 = iVar17 + iVar16 * 0x104;
        if ((*(uint *)(*(int *)(iVar7 + 8) + 0x164) & 0x20000) == 0) {
          iVar7 = *(int *)(iVar7 + 0x10);
          iVar13 = iVar17 + iVar16 * 0x104;
          *(uint *)(iVar7 + 0x2c) = *(uint *)(iVar7 + 0x2c) & 0xfffff8ff | 0x500;
          iVar7 = func_0014E2A0((int)local_28,*(undefined4 *)(iVar13 + 0x10),iVar13 + 0xc4,local_58,
                                0,0);
          iVar13 = *(int *)(iVar17 + iVar16 * 0x104 + 0x10);
          *(uint *)(iVar13 + 0x2c) = *(uint *)(iVar13 + 0x2c) & 0xfffff8ff | 0x300;
          iVar13 = *(int *)(iVar17 + iVar16 * 0x104 + 0xc0);
          cVar1 = *(char *)(iVar13 + 0x21);
          if (iVar7 != 0) {
            if (cVar1 == '\x05') {
              iVar7 = func_001E4BE4((byte)((uint)*(undefined4 *)(iVar13 + 0x38) >> 0x1c),
                                    (float *)(iVar20 + 4));
              if ((iVar7 != 0) || (bVar5 = func_00556B54(local_54), bVar5)) goto LAB_004ba838;
            }
            else if ((cVar1 == '\v') && (*(char *)(iVar17 + DAT_004baa90 + iVar16 * 0x104) == '\0'))
            {
              pcVar6 = (char *)(iVar17 + iVar16 * 0x104);
              if (*pcVar6 == '\x02') goto LAB_004ba83c;
              pfVar11 = (float *)(iVar17 + iVar16 * 0x104 + 0xf4);
              *pcVar6 = '\x03';
              fVar22 = *pfVar11;
              fVar15 = (fVar32 - fVar22) * fVar33;
              uVar12 = in_fpscr & 0xfffffff;
              fVar23 = ALBW_AS_F32(uVar34);
              if (fVar15 <= ALBW_AS_F32(uVar29)) {
                fVar15 = -fVar15;
              }
              if ((fVar23 <= fVar15) && (fVar23 = fVar15, DAT_004baa94 < (int)ALBW_AS_U32(fVar15))) {
                fVar23 = fVar31;
              }
              uVar28 = uVar12 | (uint)(fVar22 < fVar32) << 0x1f | (uint)(fVar22 == fVar32) << 0x1e |
                       (uint)(fVar32 <= fVar22) << 0x1d;
              in_fpscr = uVar28 | (uint)(NAN(fVar22) || NAN(fVar32)) << 0x1c;
              bVar2 = (byte)(uVar28 >> 0x18);
              if ((bool)(bVar2 >> 5 & 1)) {
                if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                  fVar23 = fVar22 - fVar23;
                  in_fpscr = uVar12 | (uint)(fVar23 == fVar32) << 0x1e |
                             (uint)(fVar32 <= fVar23) << 0x1d;
                  bVar2 = (byte)(in_fpscr >> 0x18);
                  if ((!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) ||
                     (uVar12 = uVar12 | (uint)(fVar23 < fVar22) << 0x1f |
                               (uint)(fVar23 == fVar22) << 0x1e,
                     in_fpscr = uVar12 | (uint)(NAN(fVar23) || NAN(fVar22)) << 0x1c,
                     bVar2 = (byte)(uVar12 >> 0x18),
                     !(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)))
                  goto LAB_004ba908;
                  goto LAB_004ba910;
                }
              }
              else {
                fVar23 = fVar22 + fVar23;
                in_fpscr = uVar12 | (uint)(fVar32 == fVar23) << 0x1e |
                           (uint)(fVar23 <= fVar32) << 0x1d;
                bVar2 = (byte)(in_fpscr >> 0x18);
                if ((!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) ||
                   (uVar12 = uVar12 | (uint)(fVar22 < fVar23) << 0x1f |
                             (uint)(fVar22 == fVar23) << 0x1e,
                   in_fpscr = uVar12 | (uint)(NAN(fVar22) || NAN(fVar23)) << 0x1c,
                   bVar2 = (byte)(uVar12 >> 0x18),
                   !(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
LAB_004ba908:
                  *pfVar11 = fVar32;
                }
                else {
LAB_004ba910:
                  *pfVar11 = fVar23;
                }
              }
              bVar3 = true;
            }
            else {
LAB_004ba838:
              *(undefined1 *)(iVar17 + iVar16 * 0x104) = 1;
            }
          }
        }
LAB_004ba83c:
        pcVar6 = (char *)(iVar17 + iVar16 * 0x104);
        if (*pcVar6 == '\x03') {
          if (bVar3) {
            iVar7 = func_00588BE4((int)local_28);
            if (iVar7 == *DAT_004baa98) {
              local_60 = fVar4;
              local_5c = s_SE_Pot_ROLL_004baa9c;
              func_00150CD0((int)local_28,(int *)&local_60,iVar17 + iVar16 * 0x104 + 0xe8,uVar18,0);
            }
          }
          else {
            pfVar11 = (float *)(pcVar6 + 0xf4);
            fVar15 = *pfVar11;
            fVar23 = -fVar15 * ALBW_AS_F32(((ulonglong)uVar29 >> 0x20));
            fVar22 = ALBW_AS_F32(uVar29);
            uVar12 = in_fpscr & 0xfffffff;
            if (fVar23 <= fVar22) {
              fVar23 = -fVar23;
            }
            fVar24 = fVar30;
            if ((fVar30 <= fVar23) && (fVar24 = fVar23, DAT_004baa94 < (int)ALBW_AS_U32(fVar23))) {
              fVar24 = fVar31;
            }
            uVar28 = uVar12 | (uint)(fVar15 < fVar22) << 0x1f | (uint)(fVar15 == fVar22) << 0x1e |
                     (uint)(fVar22 <= fVar15) << 0x1d;
            in_fpscr = uVar28 | (uint)(NAN(fVar15) || NAN(fVar22)) << 0x1c;
            bVar2 = (byte)(uVar28 >> 0x18);
            if ((bool)(bVar2 >> 5 & 1)) {
              if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                fVar24 = fVar15 - fVar24;
                in_fpscr = uVar12 | (uint)(fVar24 == fVar22) << 0x1e |
                           (uint)(fVar22 <= fVar24) << 0x1d;
                bVar2 = (byte)(in_fpscr >> 0x18);
                if ((!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) ||
                   (uVar12 = uVar12 | (uint)(fVar24 < fVar15) << 0x1f |
                             (uint)(fVar24 == fVar15) << 0x1e,
                   in_fpscr = uVar12 | (uint)(NAN(fVar24) || NAN(fVar15)) << 0x1c,
                   bVar2 = (byte)(uVar12 >> 0x18),
                   !(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)))
                goto LAB_004bab84;
                goto LAB_004bab8c;
              }
            }
            else {
              fVar24 = fVar15 + fVar24;
              in_fpscr = uVar12 | (uint)(fVar22 == fVar24) << 0x1e |
                         (uint)(fVar24 <= fVar22) << 0x1d;
              bVar2 = (byte)(in_fpscr >> 0x18);
              if ((!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) ||
                 (uVar12 = uVar12 | (uint)(fVar15 < fVar24) << 0x1f |
                           (uint)(fVar15 == fVar24) << 0x1e,
                 in_fpscr = uVar12 | (uint)(NAN(fVar15) || NAN(fVar24)) << 0x1c,
                 bVar2 = (byte)(uVar12 >> 0x18),
                 !(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
LAB_004bab84:
                *pfVar11 = fVar22;
              }
              else {
LAB_004bab8c:
                *pfVar11 = fVar24;
              }
            }
          }
          iVar7 = iVar17 + iVar16 * 0x104;
          *(int *)(iVar7 + 0xf8) = *DAT_004baaa8 + *(int *)(iVar7 + 0xf8);
          iVar7 = DAT_004baab4;
          fVar23 = DAT_004baab0;
          iVar14 = iVar17 + iVar16 * 0x104;
          iVar13 = iVar17 + iVar16 * 0x104;
          local_64 = (uint *)(iVar17 + iVar16 * 0x104 + 0xfc);
          iVar10 = iVar17 + iVar16 * 0x104;
          *(int *)(iVar14 + 0xfc) = *(int *)(iVar14 + 0xfc) + *DAT_004baaac;
          *(undefined4 *)(iVar10 + 0xe8) = *(undefined4 *)(iVar20 + 4);
          *(undefined4 *)(iVar10 + 0xec) = *(undefined4 *)(iVar20 + 8);
          *(undefined4 *)(iVar10 + 0xf0) = *(undefined4 *)(iVar20 + 0xc);
          fVar15 = *(float *)(iVar13 + 0xf4);
          pfVar11 = (float *)(DAT_004baab8 + (*local_64 >> 0x18) * 0x10);
          fVar22 = (float)VectorUnsignedToFloat(*local_64 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
          fVar22 = *pfVar11 + pfVar11[1] * fVar22 * fVar23;
          if ((int)ALBW_AS_U32(fVar15) < iVar7) {
            func_001512B4(*(int *)(iVar13 + 0xe4),(float *)(iVar13 + 0xe8));
            *(uint *)(iVar19 + 0x164) = *(uint *)(iVar19 + 0x164) | 0x40000000;
            func_00491E80((float *)(iVar19 + 0x80),0,
                          *(int *)(iVar20 + 0x20) + *(int *)(iVar17 + iVar16 * 0x104 + 4),0);
            iVar7 = iVar17 + iVar16 * 0x104;
            *(uint *)(iVar19 + 0x164) = *(uint *)(iVar19 + 0x164) | 0x40000000;
            *(undefined4 *)(iVar19 + 0x8c) = *(undefined4 *)(iVar7 + 0xe8);
            *(undefined4 *)(iVar19 + 0x9c) = *(undefined4 *)(iVar7 + 0xec);
            *(undefined4 *)(iVar19 + 0xac) = *(undefined4 *)(iVar7 + 0xf0);
            func_004CEAF0(iVar19);
            *(undefined1 *)(iVar17 + iVar16 * 0x104) = 0;
          }
          else {
            fVar24 = (float)VectorSignedToFloat(*DAT_004baedc,(byte)(in_fpscr >> 0x15) & 3);
            uVar12 = *(uint *)(iVar17 + iVar16 * 0x104 + 0xf8);
            fVar27 = (float)VectorSignedToFloat(*DAT_004baedc,(byte)(in_fpscr >> 0x15) & 3);
            fVar26 = (float)VectorUnsignedToFloat(uVar12 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
            iVar7 = DAT_004baab8 + (uVar12 >> 0x18) * 0x10;
            pfVar11 = (float *)(DAT_004baab8 + (uVar12 >> 0x18) * 0x10);
            fVar25 = (float)VectorUnsignedToFloat(uVar12 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
            uVar28 = (uint)(fVar15 * fVar24 *
                           (*(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc) * fVar25 * fVar23) *
                           fVar22);
            uVar12 = (uint)(fVar15 * fVar27 * (*pfVar11 + pfVar11[1] * fVar26 * fVar23) * fVar22);
            func_001512B4(*(int *)(iVar13 + 0xe4),(float *)(iVar13 + 0xe8));
            *(uint *)(iVar19 + 0x164) = *(uint *)(iVar19 + 0x164) | 0x40000000;
            func_00491E80((float *)(iVar19 + 0x80),uVar28,
                          *(int *)(iVar17 + iVar16 * 0x104 + 4) + *(int *)(iVar20 + 0x20),uVar12);
            iVar7 = iVar17 + iVar16 * 0x104;
            *(uint *)(iVar19 + 0x164) = *(uint *)(iVar19 + 0x164) | 0x40000000;
            *(undefined4 *)(iVar19 + 0x8c) = *(undefined4 *)(iVar7 + 0xe8);
            *(undefined4 *)(iVar19 + 0x9c) = *(undefined4 *)(iVar7 + 0xec);
            *(undefined4 *)(iVar19 + 0xac) = *(undefined4 *)(iVar7 + 0xf0);
            func_004CEAF0(iVar19);
          }
        }
        piVar9 = local_28;
        if (*(char *)(iVar17 + iVar16 * 0x104) == '\x01') {
          puVar8 = (undefined4 *)(iVar16 * 0x104 + 0xe8 + iVar17);
          local_64 = (uint *)*puVar8;
          local_60 = ALBW_AS_F32(puVar8[1]);
          local_5c = (char *)puVar8[2];
          iVar19 = func_00588BE4((int)local_28);
          /* EU 4BAD20 / 4BAD48: sp[0..1] = SafeString {vtable data_006F5988 (= the word stored at
           * sp+8 = DAT_004baab4), "SE_Skull_BREAK" / "SE_Pot_BREAK"}; the text lost both stores and
           * the callee called through a NULL vtable (crash when a sword hit a skull, BOOT_LOG 151) */
          { extern char data_006F5988[]; *(int *)(albw_frame + 0) = (int)(intptr_t)data_006F5988; }
          if (iVar19 == *DAT_004baee0) {
            *(const char **)(albw_frame + 4) = "SE_Skull_BREAK";
            func_0014DBF4(piVar9,(int *)&stack0xffffff90,&local_64,0);
          }
          else {
            *(const char **)(albw_frame + 4) = "SE_Pot_BREAK";
            func_0014DBF4(piVar9,(int *)&stack0xffffff90,&local_64,0);
          }
          if (uVar18 < (uint)piVar9[0x188]) {
            iVar19 = piVar9[0x189] + uVar18 * 0x104;
          }
          else {
            iVar19 = piVar9[0x189];
          }
          if (*(short *)(iVar19 + 0x100) == 0xf) {
            if (uVar18 < (uint)piVar9[0x184]) {
              iVar19 = *(int *)(piVar9[0x186] + uVar18 * 4);
            }
            else {
              iVar19 = 0;
            }
            func_003521F0(iVar19 + 4,1);
          }
          else {
            if (uVar18 < (uint)piVar9[0x184]) {
              iVar19 = *(int *)(piVar9[0x186] + uVar18 * 4);
            }
            else {
              iVar19 = 0;
            }
            func_003521F0(iVar19 + 4,0);
          }
          if (uVar18 < (uint)piVar9[0x184]) {
            piVar9 = *(int **)(piVar9[0x186] + uVar18 * 4);
          }
          else {
            piVar9 = (int *)0x0;
          }
          (**(code **)(*piVar9 + 0x30))(piVar9);
          local_60 = local_60 + DAT_004baeec;
          func_0014EC00((int)local_28,&local_64,*(undefined4 *)(iVar20 + 0x20),
                        (int)(char)*(undefined2 *)(iVar17 + iVar16 * 0x104 + 0x100));
          *(undefined1 *)(iVar17 + iVar16 * 0x104) = 2;
        }
        pcVar6 = (char *)(iVar17 + iVar16 * 0x104);
        if (*pcVar6 == '\x02') {
          iVar19 = *(int *)(*DAT_004baef0 + 0x3dbe4);
          func_004CF478(*(int *)(pcVar6 + 8),0);
          func_00151148(*(int *)(pcVar6 + 0xe4),0);
          *pcVar6 = '\x04';
          puVar8 = puRam004baef4;
          if (pcVar6[0x102] == '\x01') {
            pcVar6[0x102] = '\0';
            func_004A9120(*puVar8,(int)(pcVar6 + 0x14));
            func_004A8304(*puVar8,(int)(pcVar6 + 0x78));
          }
          func_002DFFF4((uint *)(iVar19 + 0xc),uVar18);
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != iVar21);
  }
  return;
}

