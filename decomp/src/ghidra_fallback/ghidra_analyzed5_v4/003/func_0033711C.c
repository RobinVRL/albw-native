#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00111A20(int param_1,undefined4 param_2,uint *param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0014E398(int param_1,int *param_2,int param_3);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_00336564(int param_1,int *param_2,int *param_3);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00584CC8(int param_1,int *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00665A3C(undefined4 *param_1,undefined1 param_2);
extern int DAT_00337624;
extern undefined *DAT_00337628;
extern undefined4 *DAT_0033762c;
extern undefined4 DAT_00337630;
extern int DAT_00337634;
extern undefined4 DAT_00337654;
extern undefined4 DAT_00337658;
extern undefined4 DAT_0033765c;
extern int DAT_00337670;
extern undefined4 DAT_003376ac;
extern float DAT_003376b0;
extern float DAT_003376b4;
extern int *DAT_00337a8c;
extern undefined8 *DAT_00337a90;
extern undefined *DAT_00337a94;
extern int DAT_00337a98;
extern char s_Actor_SagesPlaceStep_A_kcl_00337690[];
extern char s_Actor_SagesPlaceStep_B_kcl_00337674[];
extern char s_Mt_Stair_00337638[];
extern char s_SagesPlaceStep_00337644[];
extern char s_StepEnergyFlow_00337660[];
extern char s_cState_Appear_00337aa8[];
extern char s_cState_Wait_00337a9c[];
extern char s_cf_00337674[];
extern char s_cf_00337690[];

// USA 0033711C <- EU 003370F8 (Ghidra, non-matching)
// GLOBAL DAT_00337624 int
// GLOBAL DAT_00337628 undefined *
// GLOBAL DAT_0033762c undefined4 *
// GLOBAL DAT_00337630 undefined4
// GLOBAL DAT_00337634 int
// GLOBAL DAT_00337654 undefined4
// GLOBAL DAT_00337658 undefined4
// GLOBAL DAT_0033765c undefined4
// GLOBAL DAT_00337670 int
// GLOBAL DAT_003376ac undefined4
// GLOBAL DAT_003376b0 float
// GLOBAL DAT_003376b4 float
// GLOBAL DAT_00337a8c int *
// GLOBAL DAT_00337a90 undefined8 *
// GLOBAL DAT_00337a94 undefined *
// GLOBAL DAT_00337a98 int
// GLOBAL s_cf_00337690 string
// GLOBAL s_cf_00337674 string
// GLOBAL s_Mt_Stair_00337638 string
// GLOBAL s_SagesPlaceStep_00337644 string
// GLOBAL s_StepEnergyFlow_00337660 string
// GLOBAL s_cState_Appear_00337aa8 string
// GLOBAL s_cState_Wait_00337a9c string

int func_0033711C(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  byte bVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  bool bVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  _Alignas(8) unsigned char albw_frame[0x160];
  #define auStack_160 ((uint *)(albw_frame + 0x0))
  #define local_158 ((uint *)(albw_frame + 0x8))
  #define local_150 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_14c (*(undefined4 *)(albw_frame + 0x14))
  #define local_148 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_144 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_140 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_13c (*(undefined4 *)(albw_frame + 0x24))
  #define local_138 (*(uint *)(albw_frame + 0x28))
  #define local_104 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_100 (*(undefined1 *)(albw_frame + 0x60))
  #define local_fc (*(int *)(albw_frame + 0x64))
  #define uStack_f8 (*(undefined4 *)(albw_frame + 0x68))
  #define iStack_f4 (*(int *)(albw_frame + 0x6c))
  #define uStack_f0 (*(undefined4 *)(albw_frame + 0x70))
  #define uStack_ec (*(undefined4 *)(albw_frame + 0x74))
  #define uStack_e8 (*(undefined4 *)(albw_frame + 0x78))
  #define local_e4 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_e0 (*(undefined1 *)(albw_frame + 0x80))
  #define local_df (*(undefined1 *)(albw_frame + 0x81))
  #define local_dc (*(undefined4 *)(albw_frame + 0x84))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x88))
  #define local_d4 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x90))
  #define local_cc (*(undefined4 *)(albw_frame + 0x94))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x98))
  #define local_c4 (*(undefined1 *)(albw_frame + 0x9c))
  #define local_c3 (*(undefined1 *)(albw_frame + 0x9d))
  #define local_c0 (*(float *)(albw_frame + 0xa0))
  #define local_bc (*(float *)(albw_frame + 0xa4))
  #define local_b8 (*(float *)(albw_frame + 0xa8))
  #define local_b4 (*(float *)(albw_frame + 0xac))
  #define local_b0 (*(float *)(albw_frame + 0xb0))
  #define local_ac (*(float *)(albw_frame + 0xb4))
  #define local_a8 (*(float *)(albw_frame + 0xb8))
  #define local_a4 (*(float *)(albw_frame + 0xbc))
  #define local_a0 (*(float *)(albw_frame + 0xc0))
  #define local_98 (*(int *)(albw_frame + 0xc8))
  #define local_94 (*(uint * *)(albw_frame + 0xcc))
  #define local_90 (*(undefined4 *)(albw_frame + 0xd0))
  #define local_8c (*(undefined1 * *)(albw_frame + 0xd4))
  #define local_88 (*(undefined4 *)(albw_frame + 0xd8))
  #define local_84 ((undefined1 *)(albw_frame + 0xdc))
  #define uStack_45 (*(undefined1 *)(albw_frame + 0x11b))
  #define local_44 (*(float *)(albw_frame + 0x11c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x120))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x124))
  #define local_34 ((uint *)(albw_frame + 0x12c))
  piVar6 = func_00150E40(param_1,param_2);
  iVar8 = DAT_00337624;
  piVar6[200] = DAT_00337624 + 0x54;
  *piVar6 = iVar8;
  piVar6[0x103] = 0;
  piVar6[0x104] = 0;
  puVar7 = func_0010A794(piVar6 + 0x105);
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  iVar8 = func_00100118((int)(puVar7 + 0x16),DAT_00337628,4,7);
  *(undefined4 *)(iVar8 + 0x1c) = 0;
  *(undefined2 *)(iVar8 + 0x20) = 0;
  *(undefined1 *)(iVar8 + 0x22) = 0;
  *(undefined4 *)(iVar8 + -0x1c) = 0;
  *(undefined4 *)(iVar8 + -0x18) = 0;
  *(undefined4 *)(iVar8 + -0x14) = 0;
  *(undefined4 *)(iVar8 + -0x10) = 0;
  *(undefined4 *)(iVar8 + -0xc) = 0;
  *(undefined4 *)(iVar8 + -8) = 0;
  *(undefined4 *)(iVar8 + -4) = 0;
  iVar13 = iVar8 + -0x46c;
  func_0036D0C8((int *)(iVar8 + -0x60),0);
  func_0036D0C8((int *)(iVar8 + -0x5c),0);
  puVar7 = DAT_0033762c;
  if (*(int *)(iVar8 + -0x60) == 0) {
    iVar14 = 1;
  }
  else {
    iVar14 = func_0010983C(*DAT_0033762c,*(int *)(iVar8 + -0x60));
  }
  iVar2 = DAT_00337634;
  iVar9 = *(int *)(*(int *)(iVar8 + -0x19c) + 0x1c8);
  *(int *)(iVar8 + -0x34) = iVar9;
  if (*(int *)(iVar9 + 200) == 0) {
    uStack_ec = 0;
  }
  else {
    uStack_ec = **(undefined4 **)(iVar9 + 0xd0);
  }
  local_fc = iVar2;
  uStack_f8 = DAT_00337630;
  iStack_f4 = iVar2;
  uStack_f0 = DAT_00337630;
  uStack_e8 = 0;
  local_c4 = 1;
  local_df = 0;
  local_cc = 0;
  local_c8 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_d4 = 0;
  local_c3 = 0xc4;
  local_e4 = 1;
  local_e0 = 1;
  local_dc = *(undefined4 *)(iVar8 + -0x5c);
  uVar10 = func_0014E398(iVar13,&local_fc,1);
  *(undefined4 *)(iVar8 + -0x2c) = uVar10;
  if (iVar14 != 1) {
    func_0010983C(*puVar7,iVar14);
  }
  local_94 = (uint *)s_Mt_Stair_00337638;
  local_98 = iVar2;
  uVar10 = func_00584CC8(*(int *)(iVar8 + -0x2c),&local_98);
  *(undefined4 *)(iVar8 + 0x1c) = uVar10;
  uVar10 = func_0014E904(iVar13,1,1);
  *(undefined4 *)(iVar8 + -0x28) = uVar10;
  local_94 = (uint *)s_SagesPlaceStep_00337644;
  local_98 = iVar2;
  func_00169688(*(uint **)(iVar8 + -0x28),0,&local_98,*(int *)(iVar8 + -0x34));
  func_0016A02C(*(int *)(iVar8 + -0x28),-1,(int *)0xffffffff,0);
  local_158[1] = 3;
  uVar23 = CONCAT44(DAT_00337654,DAT_00337658);
  local_150 = &local_14c;
  local_104 = 0;
  local_100 = 0;
  local_158[0] = 1;
  local_14c = 0;
  local_138 = (uint)puVar7 | 0xff;
  local_148 = DAT_00337658;
  uStack_144 = DAT_00337654;
  uStack_140 = DAT_0033765c;
  uStack_13c = DAT_00337654;
  func_0016898C(*(int *)(iVar8 + -0x28),local_158);
  *(int *)(*(int *)(*(int *)(iVar8 + -0x28) + 0x14) + 0x10) = (int)uVar23;
  func_00168E9C(*(int **)(iVar8 + -0x28),*(int *)(iVar8 + -0x2c),(int *)0x0);
  local_94 = (uint *)s_SagesPlaceStep_00337644;
  local_98 = iVar2;
  func_00336564(iVar13,(int *)(iVar8 + -0x24),&local_98);
  local_94 = (uint *)s_StepEnergyFlow_00337660;
  local_98 = iVar2;
  func_00336564(iVar13,(int *)(iVar8 + -0x20),&local_98);
  iVar14 = DAT_00337670;
  uVar15 = 0;
  do {
    piVar6 = (int *)(iVar8 + -0x1c);
    if (uVar15 < 7) {
      piVar6 = piVar6 + uVar15;
    }
    func_00336564(iVar13,piVar6,(int *)(iVar14 + uVar15 * 8));
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 7);
  func_004CEAF0(*(int *)(iVar8 + -0x2c));
  puVar11 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar11 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar11);
  }
  *(undefined4 **)(iVar8 + -0x30) = puVar7;
  piVar6 = (int *)(iVar8 + -0x30);
  bVar4 = func_00588BF0(iVar13,0);
  if (bVar4) {
    pcVar12 = s_Actor_SagesPlaceStep_B_kcl_00337674;
  }
  else {
    pcVar12 = s_Actor_SagesPlaceStep_A_kcl_00337690;
  }
  local_8c = local_84;
  local_88 = 0x40;
  uStack_45 = 0;
  local_84[0] = 0;
  local_90 = DAT_003376ac;
  func_00111A20((int)&local_90,pcVar12,auStack_160);
  func_004EDB28(*(int *)(iVar8 + -0x30),(int)&local_90);
  func_00491624(&local_c0,param_2[7],param_2[8],param_2[9]);
  iVar14 = *(int *)(*piVar6 + 0x14);
  fVar19 = local_c0 - *(float *)(iVar14 + 0x18);
  bVar4 = DAT_003376b4 == fVar19;
  bVar18 = fVar19 <= DAT_003376b4;
  if (!bVar18 || bVar4) {
    bVar4 = fVar19 == DAT_003376b0;
    bVar18 = DAT_003376b0 <= fVar19;
  }
  if (!bVar18 || bVar4) {
    fVar19 = local_bc - *(float *)(iVar14 + 0x1c);
    bVar4 = DAT_003376b4 == fVar19;
    bVar18 = fVar19 <= DAT_003376b4;
    if (!bVar18 || bVar4) {
      bVar4 = fVar19 == DAT_003376b0;
      bVar18 = DAT_003376b0 <= fVar19;
    }
    if (!bVar18 || bVar4) {
      fVar19 = local_b8 - *(float *)(iVar14 + 0x20);
      bVar4 = DAT_003376b4 == fVar19;
      bVar18 = fVar19 <= DAT_003376b4;
      if (!bVar18 || bVar4) {
        bVar4 = fVar19 == DAT_003376b0;
        bVar18 = DAT_003376b0 <= fVar19;
      }
      if (!bVar18 || bVar4) {
        fVar19 = local_b4 - *(float *)(iVar14 + 0x24);
        bVar4 = DAT_003376b4 == fVar19;
        bVar18 = fVar19 <= DAT_003376b4;
        if (!bVar18 || bVar4) {
          bVar4 = fVar19 == DAT_003376b0;
          bVar18 = DAT_003376b0 <= fVar19;
        }
        if (!bVar18 || bVar4) {
          fVar19 = local_b0 - *(float *)(iVar14 + 0x28);
          bVar4 = DAT_003376b4 == fVar19;
          bVar18 = fVar19 <= DAT_003376b4;
          if (!bVar18 || bVar4) {
            bVar4 = fVar19 == DAT_003376b0;
            bVar18 = DAT_003376b0 <= fVar19;
          }
          if (!bVar18 || bVar4) {
            fVar19 = local_ac - *(float *)(iVar14 + 0x2c);
            bVar4 = DAT_003376b4 == fVar19;
            bVar18 = fVar19 <= DAT_003376b4;
            if (!bVar18 || bVar4) {
              bVar4 = fVar19 == DAT_003376b0;
              bVar18 = DAT_003376b0 <= fVar19;
            }
            if (!bVar18 || bVar4) {
              fVar19 = local_a8 - *(float *)(iVar14 + 0x30);
              bVar4 = DAT_003376b4 == fVar19;
              bVar18 = fVar19 <= DAT_003376b4;
              if (!bVar18 || bVar4) {
                bVar4 = fVar19 == DAT_003376b0;
                bVar18 = DAT_003376b0 <= fVar19;
              }
              if (!bVar18 || bVar4) {
                fVar19 = local_a4 - *(float *)(iVar14 + 0x34);
                bVar4 = DAT_003376b4 == fVar19;
                bVar18 = fVar19 <= DAT_003376b4;
                if (!bVar18 || bVar4) {
                  bVar4 = fVar19 == DAT_003376b0;
                  bVar18 = DAT_003376b0 <= fVar19;
                }
                if (!bVar18 || bVar4) {
                  fVar19 = local_a0 - *(float *)(iVar14 + 0x38);
                  bVar4 = DAT_003376b4 == fVar19;
                  bVar18 = fVar19 <= DAT_003376b4;
                  if (!bVar18 || bVar4) {
                    bVar4 = fVar19 == DAT_003376b0;
                    bVar18 = DAT_003376b0 <= fVar19;
                  }
                  if (!bVar18 || bVar4) {
                    bVar4 = true;
                    goto LAB_003375d8;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_003375d8:
  if (!bVar4) {
    bVar5 = *(byte *)(iVar14 + 0xa8);
    *(byte *)(iVar14 + 0xa8) = bVar5 | 8;
    fVar19 = ALBW_AS_F32(uVar23);
    if ((((local_c0 == 1.0 && local_bc == fVar19) && (local_b8 == fVar19 && local_b4 == fVar19)) &&
        (local_b0 == 1.0 && local_ac == fVar19)) &&
       ((local_a8 == fVar19 && local_a4 == fVar19) && local_a0 == 1.0)) {
      uVar10 = (undefined4)((ulonglong)uVar23 >> 0x20);
      *(undefined4 *)(iVar14 + 0x18) = uVar10;
      *(float *)(iVar14 + 0x1c) = fVar19;
      *(float *)(iVar14 + 0x20) = fVar19;
      bVar5 = bVar5 & 0xfb | 8;
      *(float *)(iVar14 + 0x24) = fVar19;
      *(undefined4 *)(iVar14 + 0x28) = uVar10;
      *(float *)(iVar14 + 0x2c) = fVar19;
      *(float *)(iVar14 + 0x30) = fVar19;
      *(float *)(iVar14 + 0x34) = fVar19;
      *(undefined4 *)(iVar14 + 0x38) = uVar10;
    }
    else {
      func_001151CC((undefined4 *)(iVar14 + 0x18),&local_c0);
      bVar5 = *(byte *)(iVar14 + 0xa8) | 4;
    }
    *(byte *)(iVar14 + 0xa8) = bVar5;
  }
  func_0043625C(*(int **)(*(int *)(iVar8 + -0x30) + 0x14),(undefined4 *)(iVar8 + -0x9c));
  local_34[0] = *(uint *)(iVar8 + -0x1a0);
  func_004EDAD0(*piVar6,local_34);
  *(undefined2 *)(*piVar6 + 0x2c) = *(undefined2 *)(iVar8 + -0x418);
  func_004ED9C8(*piVar6);
  local_44 = *(float *)(iVar8 + -0x9c);
  uStack_40 = *(undefined4 *)(iVar8 + -0x98);
  uStack_3c = *(undefined4 *)(iVar8 + -0x94);
  iVar14 = *(int *)(iVar8 + -0x2c);
  *(uint *)(iVar14 + 0x164) = *(uint *)(iVar14 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar14 + 0x80),*(uint *)(iVar8 + -0x84),&local_44);
  func_004CEAF0(*(int *)(iVar8 + -0x2c));
  func_004A879C(*DAT_00337a8c,*piVar6,2);
  *(undefined1 *)(iVar8 + -0x52) = 2;
  *(int *)(iVar8 + -0x44) = iVar13;
  iVar14 = func_0010BA78(0x20);
  *(int *)(iVar8 + -0x40) = iVar14;
  puVar3 = DAT_00337a90;
  *(uint *)(iVar8 + -0x3c) = iVar14 + (uint)*(byte *)(iVar8 + -0x52) * 8;
  iVar9 = 2;
  puVar7 = (undefined4 *)(iVar14 + -8);
  do {
    uVar10 = *(undefined4 *)((int)puVar3 + 0x2c);
    iVar9 = iVar9 + -1;
    puVar7[2] = *(undefined4 *)(puVar3 + 5);
    puVar7[3] = uVar10;
    uVar10 = *(undefined4 *)((int)puVar3 + 0x2c);
    puVar7[4] = *(undefined4 *)(puVar3 + 5);
    puVar7[5] = uVar10;
    puVar7 = puVar7 + 4;
  } while (iVar9 != 0);
  bVar5 = *(byte *)(iVar8 + -0x52);
  uVar15 = (uint)bVar5;
  puVar7 = (undefined4 *)func_0010BA78(uVar15 << 3);
  *(undefined4 **)(iVar8 + -0x38) = puVar7;
  if (uVar15 != 0) {
    puVar11 = puVar7 + -2;
    if ((bVar5 & 1) != 0) {
      uVar10 = *(undefined4 *)((int)puVar3 + 0x14);
      *puVar7 = *(undefined4 *)(puVar3 + 2);
      puVar7[1] = uVar10;
      puVar11 = puVar7;
    }
    for (iVar14 = (int)uVar15 >> 1; iVar14 != 0; iVar14 = iVar14 + -1) {
      uVar10 = *(undefined4 *)((int)puVar3 + 0x14);
      puVar11[2] = *(undefined4 *)(puVar3 + 2);
      puVar11[3] = uVar10;
      uVar10 = *(undefined4 *)((int)puVar3 + 0x14);
      puVar11[4] = *(undefined4 *)(puVar3 + 2);
      puVar11[5] = uVar10;
      puVar11 = puVar11 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar14 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 2;
    iVar14 = func_00100118((int)(puVar7 + 2),DAT_00337a94,0x24,2);
  }
  if (iVar14 != 0) {
    *(int *)(iVar8 + -0x4c) = iVar14;
    *(undefined4 *)(iVar8 + -0x50) = 2;
  }
  iVar14 = DAT_00337a98;
  *(undefined4 **)(iVar8 + -0x118) = (undefined4 *)(iVar8 + -0x58);
  *(undefined2 *)(iVar14 + iVar13) = 2;
  local_94 = (uint *)s_cState_Wait_00337a9c;
  local_98 = iVar2;
  iVar14 = *(int *)(iVar8 + -0x4c);
  puVar16 = *(uint **)(iVar14 + 4);
  (**(code **)(iVar2 + 8))(&local_98);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_94 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00337940;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00337940:
  iVar14 = *(int *)(iVar14 + 8);
  if (iVar14 <= (int)uVar15) {
    uVar15 = iVar14 - 1;
  }
  (**(code **)(local_98 + 8))(&local_98);
  func_0010E3C4(puVar16,local_94,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  puVar7 = *(undefined4 **)(iVar8 + -0x40);
  uVar23 = *puVar3;
  uVar10 = *(undefined4 *)(puVar3 + 1);
  uVar20 = *(undefined4 *)((int)puVar3 + 0xc);
  uVar21 = *(undefined4 *)(puVar3 + 2);
  uVar22 = *(undefined4 *)((int)puVar3 + 0x14);
  *puVar7 = (int)uVar23;
  puVar7[1] = (int)((ulonglong)uVar23 >> 0x20);
  puVar7 = *(undefined4 **)(iVar8 + -0x3c);
  *puVar7 = uVar10;
  puVar7[1] = uVar20;
  puVar7 = *(undefined4 **)(iVar8 + -0x38);
  *puVar7 = uVar21;
  puVar7[1] = uVar22;
  local_94 = (uint *)s_cState_Appear_00337aa8;
  local_98 = iVar2;
  uVar15 = *(uint *)(iVar8 + -0x50);
  if (uVar15 < 2) {
    iVar14 = *(int *)(iVar8 + -0x4c);
    uVar1 = uVar15;
  }
  else {
    iVar14 = iVar2;
    uVar1 = *(uint *)(iVar8 + -0x4c);
  }
  if (1 < uVar15) {
    iVar14 = uVar1 + 0x24;
  }
  puVar16 = *(uint **)(iVar14 + 4);
  (**(code **)(iVar2 + 8))(&local_98);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_94 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_003379f8;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_003379f8:
  if (*(int *)(iVar14 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar14 + 8) - 1;
  }
  (**(code **)(local_98 + 8))(&local_98);
  func_0010E3C4(puVar16,local_94,uVar15);
  *(undefined1 *)((int)puVar16 + uVar15) = 0;
  iVar14 = *(int *)(iVar8 + -0x40);
  uVar10 = *(undefined4 *)((int)puVar3 + 0x1c);
  uVar21 = *(undefined4 *)(puVar3 + 4);
  uVar17 = *(undefined4 *)((int)puVar3 + 0x24);
  uVar20 = *(undefined4 *)(puVar3 + 2);
  uVar22 = *(undefined4 *)((int)puVar3 + 0x14);
  *(undefined4 *)(iVar14 + 8) = *(undefined4 *)(puVar3 + 3);
  *(undefined4 *)(iVar14 + 0xc) = uVar10;
  iVar14 = *(int *)(iVar8 + -0x3c);
  *(undefined4 *)(iVar14 + 8) = uVar21;
  *(undefined4 *)(iVar14 + 0xc) = uVar17;
  iVar14 = *(int *)(iVar8 + -0x38);
  *(undefined4 *)(iVar14 + 8) = uVar20;
  *(undefined4 *)(iVar14 + 0xc) = uVar22;
  func_00665A3C((undefined4 *)(iVar8 + -0x58),0);
  *(uint *)(iVar8 + -0x18c) = *(uint *)(iVar8 + -0x18c) | 2;
  return iVar13;
}

