#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_0013388C(int *param_1,int param_2);
extern int func_001340A4(undefined4 param_1,int param_2,uint param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2A4(uint *param_1,uint param_2,int *param_3);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001B975C(int *param_1);
extern int func_001E2444(int param_1,int *param_2,int param_3,undefined4 param_4);
extern int func_002C2D00(int *param_1);
extern int func_0036D0C8(int *param_1,int param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004AD554(int param_1,undefined4 param_2);
extern int func_004AD670(int param_1,int *param_2);
extern int func_004CEAF0(int param_1);
extern int func_004D18B4(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAB0(int param_1,undefined4 *param_2);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC5C(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00504CC0(undefined4 param_1,undefined4 param_2,uint param_3);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_006901E4(undefined4 *param_1,int param_2);
extern undefined *DAT_004d2344;
extern int DAT_004d2348;
extern undefined1 DAT_004d236c;
extern int DAT_004d2370;
extern int *DAT_004d2374;
extern int *DAT_004d2378;
extern undefined4 *DAT_004d237c;
extern undefined4 *DAT_004d2380;
extern undefined4 DAT_004d2384;
extern int *DAT_004d2880;
extern uint DAT_004d2884;
extern uint DAT_004d2888;
extern undefined4 DAT_004d288c;
extern int *DAT_004d2890;
extern int *DAT_004d2894;
extern float DAT_004d2898;
extern float DAT_004d289c;
extern float *DAT_004d28a0;
extern int *DAT_004d2ca4;
extern char s_MapActor__s_bch_004d234c[];
extern char s_MapActor__s_kcl_004d235c[];
extern char s_cf_004d234c[];
extern char s_cf_004d235c[];

// USA 004D1E9C <- EU 004D1E74 (Ghidra, non-matching)
// GLOBAL DAT_004d2344 undefined *
// GLOBAL DAT_004d2348 int
// GLOBAL DAT_004d236c undefined1
// GLOBAL DAT_004d2370 int
// GLOBAL DAT_004d2374 int *
// GLOBAL DAT_004d2378 int *
// GLOBAL DAT_004d237c undefined4 *
// GLOBAL DAT_004d2380 undefined4 *
// GLOBAL DAT_004d2384 undefined4
// GLOBAL DAT_004d2880 int *
// GLOBAL DAT_004d2884 uint
// GLOBAL DAT_004d2888 uint
// GLOBAL DAT_004d288c undefined4
// GLOBAL DAT_004d2890 int *
// GLOBAL DAT_004d2894 int *
// GLOBAL DAT_004d2898 float
// GLOBAL DAT_004d289c float
// GLOBAL DAT_004d28a0 float *
// GLOBAL DAT_004d2ca4 int *
// GLOBAL s_cf_004d234c string
// GLOBAL s_cf_004d235c string

int * func_004D1E9C(undefined4 *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  undefined1 *puVar4;
  bool bVar5;
  byte bVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  int *piVar23;
  uint in_r12;
  bool bVar24;
  float fVar25;
  float fVar26;
  ulonglong uVar27;
  float fVar28;
  ulonglong uVar29;
  float fVar30;
  _Alignas(8) unsigned char albw_frame[0x1d0];
  #define local_1c8 (*(float *)(albw_frame + 0x8))
  #define local_1c4 (*(float *)(albw_frame + 0xc))
  #define local_1c0 (*(float *)(albw_frame + 0x10))
  #define local_1bc (*(float *)(albw_frame + 0x14))
  #define local_1b8 (*(float *)(albw_frame + 0x18))
  #define local_1b4 (*(float *)(albw_frame + 0x1c))
  #define local_1b0 (*(float *)(albw_frame + 0x20))
  #define local_1ac (*(float *)(albw_frame + 0x24))
  #define local_1a8 (*(float *)(albw_frame + 0x28))
  #define aiStack_1a4 ((int *)(albw_frame + 0x2c))
  #define local_158 (*(int * *)(albw_frame + 0x78))
  #define local_154 (*(int *)(albw_frame + 0x7c))
  #define local_150 (*(int *)(albw_frame + 0x80))
  #define local_14c ((undefined1 * *)(albw_frame + 0x84))
  #define local_144 (*(int * *)(albw_frame + 0x8c))
  #define local_140 (*(uint *)(albw_frame + 0x90))
  #define local_13c (*(undefined4 *)(albw_frame + 0x94))
  #define local_138 (*(int ** *)(albw_frame + 0x98))
  #define local_134 (*(int * *)(albw_frame + 0x9c))
  #define local_130 (*(int * *)(albw_frame + 0xa0))
  #define local_12c (*(int *)(albw_frame + 0xa4))
  #define uStack_128 (*(undefined4 *)(albw_frame + 0xa8))
  #define iStack_124 (*(int *)(albw_frame + 0xac))
  #define local_120 (*(int * *)(albw_frame + 0xb0))
  #define local_ec (*(undefined4 *)(albw_frame + 0xe4))
  #define local_e8 (*(undefined1 *)(albw_frame + 0xe8))
  #define auStack_e4 ((undefined4 *)(albw_frame + 0xec))
  #define local_98 (*(uint * *)(albw_frame + 0x138))
  #define local_94 (*(int *)(albw_frame + 0x13c))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x140))
  #define iStack_8c (*(int *)(albw_frame + 0x144))
  #define local_88 (*(undefined4 *)(albw_frame + 0x148))
  #define local_84 (*(undefined4 *)(albw_frame + 0x14c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x150))
  #define local_7c (*(undefined4 *)(albw_frame + 0x154))
  #define local_78 (*(undefined1 *)(albw_frame + 0x158))
  #define local_77 (*(undefined1 *)(albw_frame + 0x159))
  #define local_74 (*(undefined4 *)(albw_frame + 0x15c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x160))
  #define local_6c (*(undefined4 *)(albw_frame + 0x164))
  #define local_68 (*(undefined4 *)(albw_frame + 0x168))
  #define local_64 (*(undefined4 *)(albw_frame + 0x16c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x170))
  #define local_5c (*(undefined1 *)(albw_frame + 0x174))
  #define local_5b (*(undefined1 *)(albw_frame + 0x175))
  #define local_58 (*(int * *)(albw_frame + 0x178))
  #define local_54 (*(int * *)(albw_frame + 0x17c))
  #define local_50 (*(int *)(albw_frame + 0x180))
  #define local_4c (*(undefined1 * *)(albw_frame + 0x184))
  #define local_48 (*(int *)(albw_frame + 0x188))
  piVar7 = func_00150E40(param_1,param_2);
  piVar7[0x103] = 0;
  piVar7[0x104] = 10;
  piVar7[0x105] = 0;
  if (piVar7 + 0x106 != (int *)0x0) {
    piVar7[0x105] = (int)(piVar7 + 0x106);
  }
  uVar17 = 10;
  iVar8 = func_00100118((int)(piVar7 + 0x106),DAT_004d2344,0x1c,10);
  piVar18 = (int *)(iVar8 + -0x418);
  iVar14 = DAT_004d2348 + 0x54;
  *piVar18 = DAT_004d2348;
  *(int *)(iVar8 + -0xf8) = iVar14;
  local_54 = (int *)(iVar8 + 0x118);
  local_58 = (int *)(iVar8 + 0x11c);
  *(undefined4 *)(iVar8 + 0x118) = 0;
  local_98 = (uint *)(iVar8 + 0x120);
  *(undefined4 *)(iVar8 + 0x11c) = 0;
  *(undefined4 *)(iVar8 + 0x120) = 0;
  *(undefined4 *)(iVar8 + 0x124) = 0;
  local_130 = (int *)(iVar8 + 300);
  *(undefined4 *)(iVar8 + 0x128) = 0;
  *(undefined4 *)(iVar8 + 300) = 0;
  *(undefined4 *)(iVar8 + 0x130) = 0;
  *(undefined4 *)(iVar8 + 0x134) = 0;
  *(undefined4 *)(iVar8 + 0x138) = 0;
  *(undefined4 *)(iVar8 + 0x13c) = 0;
  *(undefined4 *)(iVar8 + 0x140) = 0;
  *(undefined4 *)(iVar8 + 0x144) = 0;
  *(undefined4 *)(iVar8 + 0x148) = 0;
  *(undefined1 *)(iVar8 + 0x14c) = 0;
  *(undefined1 *)(iVar8 + 0x14d) = 1;
  *(undefined1 *)(iVar8 + 0x14e) = 0;
  *(undefined1 *)(iVar8 + 0x14f) = 0;
  func_0036D0C8((int *)(iVar8 + 0x138),0);
  func_0036D0C8((int *)(iVar8 + 0x13c),0);
  func_0036D0C8((int *)(iVar8 + 0x140),0);
  func_0036D0C8((int *)(iVar8 + 0x144),0);
  piVar7 = (int *)param_2[0xaf];
  (**(code **)(*piVar7 + 8))(piVar7);
  func_00689794(auStack_e4,s_MapActor__s_bch_004d234c,piVar7[1],uVar17);
  piVar7 = (int *)param_2[0xaf];
  (**(code **)(*piVar7 + 8))(piVar7);
  func_00689794(aiStack_1a4,s_MapActor__s_kcl_004d235c,piVar7[1],uVar17);
  iVar14 = DAT_004d2370;
  piVar19 = (int *)param_2[0xaf];
  local_4c = &DAT_004d236c;
  local_50 = DAT_004d2370;
  piVar7 = &local_50;
  local_120 = piVar19;
  (**(code **)(*piVar19 + 8))(piVar19);
  local_12c = 0;
  do {
    if (*(char *)(piVar19[1] + local_12c) == '\0') {
      if (local_12c < 0x40001) goto LAB_004d2040;
      break;
    }
    local_12c = local_12c + 1;
  } while (local_12c < 0x40001);
  local_12c = 0;
LAB_004d2040:
  (**(code **)(local_50 + 8))(piVar7);
  iVar22 = 0;
  do {
    if (local_4c[iVar22] == '\0') {
      if (iVar22 < 0x40001) goto LAB_004d2080;
      break;
    }
    iVar22 = iVar22 + 1;
  } while (iVar22 < 0x40001);
  iVar22 = 0;
LAB_004d2080:
  local_12c = local_12c - iVar22;
  iVar20 = 0;
  if (-1 < local_12c) {
    do {
      local_150 = iVar14;
      local_14c[0] = (undefined1 *)(local_120[1] + iVar20);
      (**(code **)(iVar14 + 8))(&local_150);
      (**(code **)(local_150 + 8))(&local_150);
      puVar4 = local_14c[0];
      (**(code **)(local_50 + 8))(piVar7);
      if (puVar4 != local_4c) {
        if (iVar22 < 0x40001) {
          iVar2 = iVar22;
          if (iVar22 < 1) goto LAB_004d2144;
        }
        else {
          iVar2 = 0x40000;
        }
        iVar9 = 0;
        do {
          uVar15 = (uint)(char)local_14c[0][iVar9];
          if (uVar15 == 0) {
            in_r12 = (uint)(byte)local_4c[iVar9];
          }
          if (uVar15 == 0 && in_r12 == 0) break;
          if (((uVar15 == 0) || (in_r12 = (uint)(char)local_4c[iVar9], in_r12 == 0)) ||
             (uVar15 != in_r12)) {
            bVar5 = false;
            goto LAB_004d2150;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar2);
      }
LAB_004d2144:
      bVar5 = true;
LAB_004d2150:
      if (bVar5) {
        if (iVar20 != -1) {
          bVar5 = true;
          goto LAB_004d217c;
        }
        break;
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 <= local_12c);
  }
  bVar5 = false;
LAB_004d217c:
  *(bool *)(iVar8 + 0x14c) = bVar5;
  local_48 = iVar8 + 0xe8;
  if (bVar5) {
    if (*(char *)(*DAT_004d2374 + 0x25) == '\x03') {
      *(undefined1 *)(iVar8 + -0x141) = 1;
      return piVar18;
    }
    local_154 = *DAT_004d2378;
    piVar19 = (int *)func_005841A8(local_154,*DAT_004d237c,*(int **)(local_154 + 0x3dbc0));
    piVar21 = *(int **)(local_154 + 0x3dbc8);
    for (; piVar19 != piVar21; piVar19 = (int *)func_005841A8(local_154,*DAT_004d237c,piVar19 + 1))
    {
      piVar7 = (int *)*piVar19;
      if (((piVar7 != (int *)0x0) && (*(char *)((int)piVar7 + 0x2d7) == '\0')) &&
         ((char)piVar7[0x159] != '\0')) {
        piVar23 = (int *)piVar7[0xb0];
        local_134 = (int *)param_2[0xaf];
        (**(code **)(*piVar23 + 8))(piVar23);
        (**(code **)(*piVar23 + 8))(piVar23);
        iVar22 = piVar23[1];
        local_158 = local_134;
        (**(code **)(*local_134 + 8))(local_134);
        if (iVar22 == local_158[1]) {
LAB_004d2440:
          *(undefined1 *)((int)piVar7 + 0x2d7) = 1;
          break;
        }
        iVar22 = 0;
        do {
          if (*(char *)(piVar23[1] + iVar22) != *(char *)(local_158[1] + iVar22)) break;
          if (*(char *)(piVar23[1] + iVar22) == '\0') goto LAB_004d2440;
          iVar22 = iVar22 + 1;
        } while (iVar22 < 0x40001);
      }
    }
  }
  puVar10 = func_00504CC0(*DAT_004d2380,auStack_e4,0xffffffff);
  local_84 = 0;
  if (puVar10[0x32] != 0) {
    local_84 = *(undefined4 *)puVar10[0x34];
  }
  local_94 = iVar14;
  uStack_90 = DAT_004d2384;
  iStack_8c = iVar14;
  if (puVar10[0x32] == 0) {
    local_84 = 0;
  }
  local_88 = DAT_004d2384;
  local_78 = 0;
  local_5c = 1;
  local_77 = 0;
  local_60 = 0;
  local_80 = 0;
  local_64 = 0;
  local_5b = 0xc4;
  local_7c = 1;
  local_74 = *(undefined4 *)(iVar8 + 0x138);
  local_70 = *(undefined4 *)(iVar8 + 0x144);
  local_6c = *(undefined4 *)(iVar8 + 0x13c);
  local_68 = *(undefined4 *)(iVar8 + 0x140);
  piVar19 = func_002C2D00(&local_94);
  *(int **)(iVar8 + 0x118) = piVar19;
  piVar19[0x59] = piVar19[0x59] | 0x90000;
  *(undefined4 *)(iVar8 + -0xcc) = *(undefined4 *)(iVar8 + 0x118);
  iVar14 = *(int *)(*DAT_004d2880 + 0x7728);
  piVar19 = (int *)0x0;
  if (iVar14 != 0) {
    piVar19 = *(int **)(iVar14 + 0xd4);
    piVar7 = piVar19;
  }
  if ((iVar14 != 0 && piVar7 != (int *)0x0) && -1 < (int)piVar19) {
    func_0010B380(local_130,(int)piVar7,(int *)0x0,4);
    piVar19 = DAT_004d2880;
    uVar15 = 0;
    do {
      if (uVar15 < *(uint *)(iVar14 + 0xd4)) {
        piVar21 = *(int **)(*(int *)(iVar14 + 0xdc) + uVar15 * 4);
      }
      else {
        piVar21 = (int *)0x0;
      }
      if ((*(char *)(*piVar21 + 5) == '\x01') &&
         (uVar11 = func_0013388C(piVar21,*(int *)(iVar8 + 0x118)), uVar11 != 0)) {
        uVar17 = func_004AD670(*piVar19,piVar21);
        if (*local_130 < local_130[1]) {
          *(undefined4 *)(local_130[2] + *local_130 * 4) = uVar17;
          *local_130 = *local_130 + 1;
        }
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)piVar7);
  }
  iVar14 = puVar10[0x35];
  uVar27 = (ulonglong)DAT_004d2884;
  uVar29 = (ulonglong)DAT_004d2888;
  if (0 < iVar14) {
    uVar15 = DAT_004d2884;
    func_0010B380(local_98,iVar14,(int *)0x0,4);
    uVar11 = 0;
    uVar27 = CONCAT44(DAT_004d288c,uVar15);
    do {
      if (uVar11 < (uint)puVar10[0x35]) {
        piVar7 = *(int **)(puVar10[0x37] + uVar11 * 4);
      }
      else {
        piVar7 = (int *)0x0;
      }
      if ((*(char *)(*piVar7 + 5) == '\x01') &&
         (uVar15 = func_0013388C(piVar7,*(int *)(iVar8 + 0x118)), uVar15 != 0)) {
        puVar12 = (undefined4 *)func_0010BAB4(0xa8);
        puVar13 = (uint *)0x0;
        if (puVar12 != (undefined4 *)0x0) {
          puVar13 = func_0016A2FC(puVar12,1,param_2[0xaf],1);
        }
        func_0016A2A4(puVar13,0,piVar7);
        func_0016A02C((int)puVar13,-1,(int *)0xffffffff,*(int *)(iVar8 + 0x118));
        local_12c = (int)uVar27;
        local_138 = &local_134;
        local_144 = (int *)((uint)local_144 | 0xff);
        local_13c = 3;
        local_ec = 10;
        local_e8 = 0;
        local_130 = (int *)uVar29;
        local_140 = 1;
        uStack_128 = (undefined4)(uVar27 >> 0x20);
        local_134 = (int *)0x0;
        iStack_124 = local_12c;
        local_120 = local_144;
        func_0016898C((int)puVar13,&local_140);
        if ((int)*local_98 < (int)local_98[1]) {
          *(uint **)(local_98[2] + *local_98 * 4) = puVar13;
          *local_98 = *local_98 + 1;
        }
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar14);
  }
  bVar6 = *(byte *)(*DAT_004d2890 + 0x18);
  if (bVar6 < 2 || bVar6 == 0x20) {
    uVar15 = func_001B975C((int *)param_2[0xaf]);
    *(uint *)(iVar8 + 0x148) = uVar15;
    if ((uVar15 != 0) && (*(char *)(local_48 + 100) == '\0')) {
      func_004AD554(*DAT_004d2880,uVar15);
    }
  }
  if ((bVar6 == 0 || bVar6 == 2) || bVar6 == 4) {
    func_004D18B4(*(int *)(iVar8 + 0x118));
  }
  if (*(short *)(iVar8 + -0x3e2) != 0) {
    bVar5 = func_00588BF0((int)piVar18,0);
    func_001340A4(iVar8 + -0xc,*(int *)(iVar8 + 0x118),(uint)bVar5);
  }
  (**(code **)(**(int **)(iVar8 + 0x118) + 0x10))(*(int **)(iVar8 + 0x118),0x24);
  piVar7 = (int *)param_2[9];
  func_00491624(&local_1c8,param_2[7],param_2[8],(uint)piVar7);
  puVar16 = param_2 + 1;
  iVar14 = *local_54;
  *(uint *)(iVar14 + 0x164) = *(uint *)(iVar14 + 0x164) | 0x40000000;
  func_001151F8((undefined4 *)(iVar14 + 0x80),&local_1c8,puVar16);
  iVar14 = *local_54;
  *(uint *)(iVar14 + 0x164) = *(uint *)(iVar14 + 0x164) | 0x40000000;
  *(uint *)(iVar14 + 0x74) = param_2[4];
  *(uint *)(iVar14 + 0x78) = param_2[5];
  *(uint *)(iVar14 + 0x7c) = param_2[6];
  func_004CEAF0(*local_54);
  puVar13 = local_98;
  uVar11 = 0;
  cVar1 = *(char *)(*(int *)(iVar8 + 0x118) + 0x30);
  uVar15 = extraout_r1;
  if (0 < *(int *)(iVar8 + 0x120)) {
    do {
      if (uVar11 < *puVar13) {
        uVar15 = puVar13[2];
        piVar19 = *(int **)(uVar15 + uVar11 * 4);
      }
      else {
        piVar19 = (int *)0x0;
      }
      func_00169A80(piVar19,uVar15,puVar16,piVar7);
      uVar15 = extraout_r1_00;
      if (cVar1 != '\0') {
        puVar16 = (uint *)0x0;
        func_00168E9C(piVar19,*(int *)(iVar8 + 0x118),(int *)0x0);
        uVar15 = extraout_r1_01;
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < *(int *)(iVar8 + 0x120));
  }
  fVar26 = ALBW_AS_F32(uVar29);
  uVar17 = (undefined4)uVar27;
  if (cVar1 != '\0') {
    uVar15 = 0;
    if (0 < *(int *)(iVar8 + 300)) {
      do {
        if (uVar15 < *(uint *)(iVar8 + 300)) {
          puVar10 = *(undefined4 **)(*(int *)(iVar8 + 0x134) + uVar15 * 4);
        }
        else {
          puVar10 = (undefined4 *)0x0;
        }
        func_006901E4(puVar10,*(int *)(iVar8 + 0x118));
        fVar26 = ALBW_AS_F32(uVar29);
        uVar17 = (undefined4)uVar27;
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < *(int *)(iVar8 + 300));
    }
  }
  piVar7 = func_001E2444(*DAT_004d2894,aiStack_1a4,4,piVar7);
  if (piVar7 == (int *)0x0) {
    return piVar18;
  }
  puVar12 = (undefined4 *)func_0010BAB4(0x48);
  puVar10 = (undefined4 *)0x0;
  if (puVar12 != (undefined4 *)0x0) {
    puVar10 = func_004EDC9C(puVar12);
  }
  *(undefined4 **)(iVar8 + 0x11c) = puVar10;
  pfVar3 = DAT_004d28a0;
  uVar15 = param_2[7];
  bVar5 = uVar15 == 0;
  if (bVar5) {
    uVar15 = param_2[8];
  }
  bVar24 = bVar5 && uVar15 == 0;
  if (bVar5 && uVar15 == 0) {
    bVar24 = param_2[9] == 0;
  }
  if (((((bVar24) && (DAT_004d289c <= ALBW_AS_F32(param_2[4]) - *DAT_004d28a0)) &&
       (ALBW_AS_F32(param_2[4]) - *DAT_004d28a0 <= DAT_004d2898)) &&
      ((DAT_004d289c <= ALBW_AS_F32(param_2[5]) - DAT_004d28a0[1] &&
       (ALBW_AS_F32(param_2[5]) - DAT_004d28a0[1] <= DAT_004d2898)))) &&
     ((DAT_004d289c <= ALBW_AS_F32(param_2[6]) - DAT_004d28a0[2] &&
      (ALBW_AS_F32(param_2[6]) - DAT_004d28a0[2] <= DAT_004d2898)))) {
    func_004EDC5C((int)puVar10,(int)aiStack_1a4);
    goto LAB_004d2c3c;
  }
  fVar30 = DAT_004d289c;
  fVar28 = DAT_004d2898;
  func_004EDB28((int)puVar10,(int)aiStack_1a4);
  iVar14 = *(int *)(*local_58 + 0x14);
  fVar25 = local_1c8 - *(float *)(iVar14 + 0x18);
  bVar5 = fVar30 == fVar25;
  bVar24 = fVar25 <= fVar30;
  if (!bVar24 || bVar5) {
    bVar5 = fVar25 == fVar28;
    bVar24 = fVar28 <= fVar25;
  }
  if (bVar24 && !bVar5) {
LAB_004d2a38:
    bVar5 = false;
  }
  else {
    fVar25 = local_1c4 - *(float *)(iVar14 + 0x1c);
    bVar5 = fVar30 == fVar25;
    bVar24 = fVar25 <= fVar30;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == fVar28;
      bVar24 = fVar28 <= fVar25;
    }
    if (bVar24 && !bVar5) goto LAB_004d2a38;
    fVar25 = local_1c0 - *(float *)(iVar14 + 0x20);
    bVar5 = fVar30 == fVar25;
    bVar24 = fVar25 <= fVar30;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == fVar28;
      bVar24 = fVar28 <= fVar25;
    }
    if (bVar24 && !bVar5) goto LAB_004d2a38;
    fVar25 = local_1bc - *(float *)(iVar14 + 0x24);
    bVar5 = fVar30 == fVar25;
    bVar24 = fVar25 <= fVar30;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == fVar28;
      bVar24 = fVar28 <= fVar25;
    }
    if (bVar24 && !bVar5) goto LAB_004d2a38;
    fVar25 = local_1b8 - *(float *)(iVar14 + 0x28);
    bVar5 = fVar30 == fVar25;
    bVar24 = fVar25 <= fVar30;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == fVar28;
      bVar24 = fVar28 <= fVar25;
    }
    if (bVar24 && !bVar5) goto LAB_004d2a38;
    fVar25 = local_1b4 - *(float *)(iVar14 + 0x2c);
    bVar5 = fVar30 == fVar25;
    bVar24 = fVar25 <= fVar30;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == fVar28;
      bVar24 = fVar28 <= fVar25;
    }
    if (bVar24 && !bVar5) goto LAB_004d2a38;
    fVar25 = local_1b0 - *(float *)(iVar14 + 0x30);
    bVar5 = fVar30 == fVar25;
    bVar24 = fVar25 <= fVar30;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == fVar28;
      bVar24 = fVar28 <= fVar25;
    }
    if (bVar24 && !bVar5) goto LAB_004d2a38;
    fVar25 = local_1ac - *(float *)(iVar14 + 0x34);
    bVar5 = fVar30 == fVar25;
    bVar24 = fVar25 <= fVar30;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == fVar28;
      bVar24 = fVar28 <= fVar25;
    }
    if (bVar24 && !bVar5) goto LAB_004d2a38;
    fVar25 = local_1a8 - *(float *)(iVar14 + 0x38);
    bVar5 = fVar30 == fVar25;
    bVar24 = fVar25 <= fVar30;
    if (!bVar24 || bVar5) {
      bVar5 = fVar25 == fVar28;
      bVar24 = fVar28 <= fVar25;
    }
    if (bVar24 && !bVar5) goto LAB_004d2a38;
    bVar5 = true;
  }
  if (!bVar5) {
    bVar6 = *(byte *)(iVar14 + 0xa8);
    *(byte *)(iVar14 + 0xa8) = bVar6 | 8;
    if (((local_1c8 == 1.0 && local_1c4 == fVar26) && (local_1c0 == fVar26 && local_1bc == fVar26))
       && ((local_1b8 == 1.0 && local_1b4 == fVar26 &&
           ((local_1b0 == fVar26 && local_1ac == fVar26) && local_1a8 == 1.0)))) {
      *(undefined4 *)(iVar14 + 0x18) = uVar17;
      *(float *)(iVar14 + 0x1c) = fVar26;
      *(float *)(iVar14 + 0x20) = fVar26;
      *(float *)(iVar14 + 0x24) = fVar26;
      *(undefined4 *)(iVar14 + 0x28) = uVar17;
      *(float *)(iVar14 + 0x2c) = fVar26;
      *(float *)(iVar14 + 0x30) = fVar26;
      *(float *)(iVar14 + 0x34) = fVar26;
      *(undefined4 *)(iVar14 + 0x38) = uVar17;
      bVar6 = bVar6 & 0xfb | 8;
    }
    else {
      func_001151CC((undefined4 *)(iVar14 + 0x18),&local_1c8);
      bVar6 = *(byte *)(iVar14 + 0xa8) | 4;
    }
    *(byte *)(iVar14 + 0xa8) = bVar6;
  }
  iVar14 = *(int *)(*(int *)(iVar8 + 0x11c) + 0x14);
  fVar26 = ALBW_AS_F32(param_2[4]) - *(float *)(iVar14 + 4);
  bVar5 = fVar30 == fVar26;
  bVar24 = fVar26 <= fVar30;
  if (!bVar24 || bVar5) {
    bVar5 = fVar26 == fVar28;
    bVar24 = fVar28 <= fVar26;
  }
  if (bVar24 && !bVar5) {
LAB_004d2b4c:
    bVar5 = false;
  }
  else {
    fVar26 = ALBW_AS_F32(param_2[5]) - *(float *)(iVar14 + 8);
    bVar5 = fVar30 == fVar26;
    bVar24 = fVar26 <= fVar30;
    if (!bVar24 || bVar5) {
      bVar5 = fVar26 == fVar28;
      bVar24 = fVar28 <= fVar26;
    }
    if (bVar24 && !bVar5) goto LAB_004d2b4c;
    fVar26 = ALBW_AS_F32(param_2[6]) - *(float *)(iVar14 + 0xc);
    bVar5 = fVar30 == fVar26;
    bVar24 = fVar26 <= fVar30;
    if (!bVar24 || bVar5) {
      bVar5 = fVar26 == fVar28;
      bVar24 = fVar28 <= fVar26;
    }
    if (bVar24 && !bVar5) goto LAB_004d2b4c;
    bVar5 = true;
  }
  if (bVar5) goto LAB_004d2c3c;
  *(byte *)(iVar14 + 0xa8) = *(byte *)(iVar14 + 0xa8) | 8;
  fVar26 = ALBW_AS_F32(param_2[4]) - *pfVar3;
  bVar5 = fVar30 == fVar26;
  bVar24 = fVar26 <= fVar30;
  if (!bVar24 || bVar5) {
    bVar5 = fVar26 == fVar28;
    bVar24 = fVar28 <= fVar26;
  }
  if (bVar24 && !bVar5) {
LAB_004d2c1c:
    *(uint *)(iVar14 + 4) = param_2[4];
    *(uint *)(iVar14 + 8) = param_2[5];
    *(uint *)(iVar14 + 0xc) = param_2[6];
    bVar6 = *(byte *)(iVar14 + 0xa8) | 2;
  }
  else {
    fVar26 = ALBW_AS_F32(param_2[5]) - pfVar3[1];
    bVar5 = fVar30 == fVar26;
    bVar24 = fVar26 <= fVar30;
    if (!bVar24 || bVar5) {
      bVar5 = fVar26 == fVar28;
      bVar24 = fVar28 <= fVar26;
    }
    if (bVar24 && !bVar5) goto LAB_004d2c1c;
    fVar26 = ALBW_AS_F32(param_2[6]) - pfVar3[2];
    bVar5 = fVar30 == fVar26;
    bVar24 = fVar26 <= fVar30;
    if (!bVar24 || bVar5) {
      bVar5 = fVar26 == fVar28;
      bVar24 = fVar28 <= fVar26;
    }
    if (bVar24 && !bVar5) goto LAB_004d2c1c;
    *(float *)(iVar14 + 4) = *pfVar3;
    *(float *)(iVar14 + 8) = pfVar3[1];
    *(float *)(iVar14 + 0xc) = pfVar3[2];
    bVar6 = *(byte *)(iVar14 + 0xa8) & 0xfd;
  }
  *(byte *)(iVar14 + 0xa8) = bVar6;
LAB_004d2c3c:
  *(undefined2 *)(*(int *)(iVar8 + 0x11c) + 0x2c) = *(undefined2 *)(iVar8 + -0x3c4);
  local_14c[0] = *(undefined1 **)(iVar8 + -0x14c);
  func_004EDAD0(*local_58,(uint *)local_14c);
  func_004EDAB0(*local_58,(undefined4 *)(iVar8 + -0x48));
  func_004ED9C8(*local_58);
  func_004A7F00(*DAT_004d2ca4,*local_58,0);
  return piVar18;
}

