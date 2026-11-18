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
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2A4(uint *param_1,uint param_2,int *param_3);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002C2D00(int *param_1);
extern int func_0036D0C8(int *param_1,int param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
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
extern int func_00533400(int param_1,int *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern undefined *DAT_00134e5c;
extern int DAT_00134e60;
extern undefined4 *DAT_00134e90;
extern int *DAT_00134e94;
extern undefined4 DAT_00134e98;
extern int DAT_00134e9c;
extern undefined4 DAT_00134ea0;
extern undefined4 DAT_00134ea4;
extern uint DAT_00134ea8;
extern float DAT_001352f8;
extern float DAT_001352fc;
extern float *DAT_00135300;
extern undefined1 DAT_00135470;
extern int *DAT_0013547c;
extern char s_MapActor__s_02d_kcl_00134e74[];
extern char s_MapActor__s_bch_00134e64[];
extern char s__s_02d_00134e88[];
extern char s_cf_00134e64[];
extern char s_cf_00134e74[];
extern char s_cf_00134e88[];

// USA 001349D4 <- EU 001349D4 (Ghidra, non-matching)
// GLOBAL DAT_00134e5c undefined *
// GLOBAL DAT_00134e60 int
// GLOBAL DAT_00134e90 undefined4 *
// GLOBAL DAT_00134e94 int *
// GLOBAL DAT_00134e98 undefined4
// GLOBAL DAT_00134e9c int
// GLOBAL DAT_00134ea0 undefined4
// GLOBAL DAT_00134ea4 undefined4
// GLOBAL DAT_00134ea8 uint
// GLOBAL DAT_001352f8 float
// GLOBAL DAT_001352fc float
// GLOBAL DAT_00135300 float *
// GLOBAL DAT_00135470 undefined1
// GLOBAL DAT_0013547c int *
// GLOBAL s_cf_00134e88 string
// GLOBAL s_cf_00134e74 string
// GLOBAL s_cf_00134e64 string

int * func_001349D4(undefined4 *param_1,uint *param_2)

{
  float *pfVar1;
  undefined1 *puVar2;
  bool bVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined2 uVar13;
  int iVar14;
  undefined4 uVar15;
  int *piVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  ulonglong uVar25;
  float fVar26;
  _Alignas(8) unsigned char albw_frame[0x200];
  #define local_200 (*(int *)(albw_frame + 0x0))
  #define local_1fc (*(undefined4 *)(albw_frame + 0x4))
  #define local_1f8 (*(int *)(albw_frame + 0x8))
  #define local_1f4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_1f0 (*(int *)(albw_frame + 0x10))
  #define local_1ec (*(undefined4 *)(albw_frame + 0x14))
  #define local_1e8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_1e4 (*(undefined1 *)(albw_frame + 0x1c))
  #define local_1e3 (*(undefined1 *)(albw_frame + 0x1d))
  #define local_1e0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1dc (*(undefined4 *)(albw_frame + 0x24))
  #define local_1d8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_1d4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_1d0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1cc (*(undefined4 *)(albw_frame + 0x34))
  #define local_1c8 (*(undefined1 *)(albw_frame + 0x38))
  #define local_1c7 (*(undefined1 *)(albw_frame + 0x39))
  #define local_1c4 (*(int *)(albw_frame + 0x3c))
  #define local_1c0 (*(undefined1 * *)(albw_frame + 0x40))
  #define local_178 (*(float *)(albw_frame + 0x88))
  #define local_174 (*(float *)(albw_frame + 0x8c))
  #define local_170 (*(float *)(albw_frame + 0x90))
  #define local_16c (*(float *)(albw_frame + 0x94))
  #define local_168 (*(float *)(albw_frame + 0x98))
  #define local_164 (*(float *)(albw_frame + 0x9c))
  #define local_160 (*(float *)(albw_frame + 0xa0))
  #define local_15c (*(float *)(albw_frame + 0xa4))
  #define local_158 (*(float *)(albw_frame + 0xa8))
  #define local_154 ((uint *)(albw_frame + 0xac))
  #define local_14c (*(undefined4 * *)(albw_frame + 0xb4))
  #define local_148 (*(undefined4 *)(albw_frame + 0xb8))
  #define local_144 (*(undefined4 *)(albw_frame + 0xbc))
  #define uStack_140 (*(undefined4 *)(albw_frame + 0xc0))
  #define uStack_13c (*(undefined4 *)(albw_frame + 0xc4))
  #define uStack_138 (*(undefined4 *)(albw_frame + 0xc8))
  #define local_134 (*(uint *)(albw_frame + 0xcc))
  #define local_100 (*(undefined4 *)(albw_frame + 0x100))
  #define local_fc (*(undefined1 *)(albw_frame + 0x104))
  #define auStack_f8 ((undefined4 *)(albw_frame + 0x108))
  #define local_ac (*(int *)(albw_frame + 0x154))
  #define auStack_a8 ((undefined4 *)(albw_frame + 0x158))
  #define local_5c (*(uint *)(albw_frame + 0x1a4))
  #define local_58 (*(int * *)(albw_frame + 0x1a8))
  #define local_48 (*(int *)(albw_frame + 0x1b8))
  #define local_44 (*(undefined1 * *)(albw_frame + 0x1bc))
  #define local_40 ((uint *)(albw_frame + 0x1c0))
  piVar5 = func_00150E40(param_1,param_2);
  piVar5[0x103] = 0;
  piVar5[0x104] = 10;
  piVar5[0x105] = 0;
  if (piVar5 + 0x106 != (int *)0x0) {
    piVar5[0x105] = (int)(piVar5 + 0x106);
  }
  uVar15 = 10;
  iVar6 = func_00100118((int)(piVar5 + 0x106),DAT_00134e5c,0x1c,10);
  piVar16 = (int *)(iVar6 + -0x418);
  iVar14 = DAT_00134e60 + 0x54;
  *piVar16 = DAT_00134e60;
  *(int *)(iVar6 + -0xf8) = iVar14;
  local_58 = (int *)(iVar6 + 0x118);
  piVar5 = (int *)(iVar6 + 0x11c);
  *(undefined4 *)(iVar6 + 0x118) = 0;
  piVar7 = (int *)(iVar6 + 0x120);
  *(undefined4 *)(iVar6 + 0x11c) = 0;
  *(undefined4 *)(iVar6 + 0x120) = 0;
  *(undefined4 *)(iVar6 + 0x124) = 0;
  piVar8 = (int *)(iVar6 + 300);
  *(undefined4 *)(iVar6 + 0x128) = 0;
  *(undefined4 *)(iVar6 + 300) = 0;
  *(undefined4 *)(iVar6 + 0x130) = 0;
  *(undefined4 *)(iVar6 + 0x134) = 0;
  *(undefined4 *)(iVar6 + 0x138) = 0;
  *(undefined4 *)(iVar6 + 0x13c) = 0;
  *(undefined1 *)(iVar6 + 0x140) = 0;
  func_0036D0C8((int *)(iVar6 + 0x138),0);
  func_0036D0C8((int *)(iVar6 + 0x13c),0);
  piVar17 = (int *)param_2[0xaf];
  (**(code **)(*piVar17 + 8))(piVar17);
  func_00689794(auStack_a8,s_MapActor__s_bch_00134e64,piVar17[1],uVar15);
  piVar17 = (int *)param_2[0xaf];
  uVar18 = param_2[10];
  (**(code **)(*piVar17 + 8))(piVar17);
  func_00689794(auStack_f8,s_MapActor__s_02d_kcl_00134e74,piVar17[1],(int)(short)uVar18);
  piVar17 = (int *)param_2[0xaf];
  uVar18 = param_2[10];
  (**(code **)(*piVar17 + 8))(piVar17);
  func_00689794(&local_1c4,s__s_02d_00134e88,piVar17[1],(int)(short)uVar18);
  puVar9 = func_00504CC0(*DAT_00134e90,auStack_a8,0xffffffff);
  iVar20 = puVar9[0x35];
  iVar14 = *(int *)(*DAT_00134e94 + 0x7728);
  if (iVar14 == 0) {
    iVar19 = 0;
  }
  else {
    iVar19 = *(int *)(iVar14 + 0xd4);
  }
  local_1f0 = func_00533400((int)puVar9,&local_1c4);
  local_1fc = DAT_00134e98;
  local_1f4 = DAT_00134e98;
  local_ac = DAT_00134e9c;
  local_1f8 = DAT_00134e9c;
  local_1c8 = 1;
  local_200 = DAT_00134e9c;
  local_1e4 = 0;
  local_1ec = 0;
  local_1e8 = 0;
  local_1e3 = 0;
  local_1cc = 0;
  local_1dc = 0;
  local_1d0 = 0;
  local_1d4 = 0;
  local_1c7 = 0xc4;
  if ((0 < iVar20 + iVar19) || (*(short *)((int)param_2 + 0x2a) == 1)) {
    local_1e8 = 1;
  }
  local_1e0 = *(undefined4 *)(iVar6 + 0x138);
  local_1d8 = *(undefined4 *)(iVar6 + 0x13c);
  piVar17 = func_002C2D00(&local_200);
  *(int **)(iVar6 + 0x118) = piVar17;
  piVar17[0x59] = piVar17[0x59] | 0x90000;
  *(undefined4 *)(iVar6 + -0xcc) = *(undefined4 *)(iVar6 + 0x118);
  if (0 < iVar19) {
    func_0010B380(piVar8,iVar19,(int *)0x0,4);
    uVar18 = 0;
    do {
      if (uVar18 < *(uint *)(iVar14 + 0xd4)) {
        piVar17 = *(int **)(*(int *)(iVar14 + 0xdc) + uVar18 * 4);
      }
      else {
        piVar17 = (int *)0x0;
      }
      if ((*(char *)(*piVar17 + 5) == '\x01') &&
         (uVar10 = func_0013388C(piVar17,*(int *)(iVar6 + 0x118)), uVar10 != 0)) {
        uVar15 = func_004AD670(*DAT_00134e94,piVar17);
        if (*piVar8 < *(int *)(iVar6 + 0x130)) {
          *(undefined4 *)(*(int *)(iVar6 + 0x134) + *piVar8 * 4) = uVar15;
          *piVar8 = *piVar8 + 1;
        }
      }
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < iVar19);
  }
  uVar23 = CONCAT44(DAT_00134ea0,DAT_00134ea4);
  if (0 < iVar20) {
    func_0010B380(piVar7,iVar20,(int *)0x0,4);
    uVar18 = 0;
    uVar25 = (ulonglong)DAT_00134ea8;
    do {
      if (uVar18 < (uint)puVar9[0x35]) {
        piVar8 = *(int **)(puVar9[0x37] + uVar18 * 4);
      }
      else {
        piVar8 = (int *)0x0;
      }
      if ((*(char *)(*piVar8 + 5) == '\x01') &&
         (uVar10 = func_0013388C(piVar8,*(int *)(iVar6 + 0x118)), uVar10 != 0)) {
        puVar11 = (undefined4 *)func_0010BAB4(0xa8);
        puVar12 = (uint *)0x0;
        if (puVar11 != (undefined4 *)0x0) {
          puVar12 = func_0016A2FC(puVar11,1,param_2[0xaf],1);
        }
        func_0016A2A4(puVar12,0,piVar8);
        func_0016A02C((int)puVar12,-1,(int *)0xffffffff,*(int *)(iVar6 + 0x118));
        local_14c = &local_148;
        uStack_140 = (undefined4)((ulonglong)uVar23 >> 0x20);
        local_154[1] = 3;
        local_134 = local_5c | 0xff;
        local_fc = 0;
        local_100 = 10;
        local_144 = (undefined4)uVar23;
        local_154[0] = 1;
        uStack_13c = (undefined4)uVar25;
        local_148 = 0;
        uStack_138 = uStack_140;
        local_5c = local_134;
        func_0016898C((int)puVar12,local_154);
        if (*piVar7 < *(int *)(iVar6 + 0x124)) {
          *(uint **)(*(int *)(iVar6 + 0x128) + *piVar7 * 4) = puVar12;
          *piVar7 = *piVar7 + 1;
        }
      }
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < iVar20);
  }
  func_004D18B4(*(int *)(iVar6 + 0x118));
  (**(code **)(*(int *)*local_58 + 0x10))((int *)*local_58,0x24);
  func_00491624(&local_178,param_2[7],param_2[8],param_2[9]);
  iVar14 = *local_58;
  *(uint *)(iVar14 + 0x164) = *(uint *)(iVar14 + 0x164) | 0x40000000;
  func_001151F8((undefined4 *)(iVar14 + 0x80),&local_178,param_2 + 1);
  iVar14 = *local_58;
  *(uint *)(iVar14 + 0x164) = *(uint *)(iVar14 + 0x164) | 0x40000000;
  *(uint *)(iVar14 + 0x74) = param_2[4];
  *(uint *)(iVar14 + 0x78) = param_2[5];
  *(uint *)(iVar14 + 0x7c) = param_2[6];
  func_004CEAF0(*local_58);
  if (*(short *)(iVar6 + -0x3e0) != 0) {
    bVar3 = func_00588BF0((int)piVar16,1);
    func_001340A4(iVar6 + -0xc,*(int *)(iVar6 + 0x118),(uint)bVar3);
  }
  puVar11 = (undefined4 *)func_0010BAB4(0x48);
  puVar9 = (undefined4 *)0x0;
  if (puVar11 != (undefined4 *)0x0) {
    puVar9 = func_004EDC9C(puVar11);
  }
  *(undefined4 **)(iVar6 + 0x11c) = puVar9;
  pfVar1 = DAT_00135300;
  uVar18 = param_2[7];
  bVar3 = uVar18 == 0;
  if (bVar3) {
    uVar18 = param_2[8];
  }
  bVar21 = bVar3 && uVar18 == 0;
  if (bVar3 && uVar18 == 0) {
    bVar21 = param_2[9] == 0;
  }
  if (((((bVar21) && (DAT_001352fc <= ALBW_AS_F32(param_2[4]) - *DAT_00135300)) &&
       (ALBW_AS_F32(param_2[4]) - *DAT_00135300 <= DAT_001352f8)) &&
      ((DAT_001352fc <= ALBW_AS_F32(param_2[5]) - DAT_00135300[1] &&
       (ALBW_AS_F32(param_2[5]) - DAT_00135300[1] <= DAT_001352f8)))) &&
     ((DAT_001352fc <= ALBW_AS_F32(param_2[6]) - DAT_00135300[2] &&
      (ALBW_AS_F32(param_2[6]) - DAT_00135300[2] <= DAT_001352f8)))) {
    func_004EDC5C((int)puVar9,(int)auStack_f8);
    goto LAB_00135374;
  }
  fVar24 = DAT_001352f8;
  fVar26 = DAT_001352fc;
  func_004EDB28((int)puVar9,(int)auStack_f8);
  iVar14 = *(int *)(*piVar5 + 0x14);
  fVar22 = local_178 - *(float *)(iVar14 + 0x18);
  bVar3 = fVar26 == fVar22;
  bVar21 = fVar22 <= fVar26;
  if (!bVar21 || bVar3) {
    bVar3 = fVar22 == fVar24;
    bVar21 = fVar24 <= fVar22;
  }
  if (bVar21 && !bVar3) {
LAB_00135160:
    bVar3 = false;
  }
  else {
    fVar22 = local_174 - *(float *)(iVar14 + 0x1c);
    bVar3 = fVar26 == fVar22;
    bVar21 = fVar22 <= fVar26;
    if (!bVar21 || bVar3) {
      bVar3 = fVar22 == fVar24;
      bVar21 = fVar24 <= fVar22;
    }
    if (bVar21 && !bVar3) goto LAB_00135160;
    fVar22 = local_170 - *(float *)(iVar14 + 0x20);
    bVar3 = fVar26 == fVar22;
    bVar21 = fVar22 <= fVar26;
    if (!bVar21 || bVar3) {
      bVar3 = fVar22 == fVar24;
      bVar21 = fVar24 <= fVar22;
    }
    if (bVar21 && !bVar3) goto LAB_00135160;
    fVar22 = local_16c - *(float *)(iVar14 + 0x24);
    bVar3 = fVar26 == fVar22;
    bVar21 = fVar22 <= fVar26;
    if (!bVar21 || bVar3) {
      bVar3 = fVar22 == fVar24;
      bVar21 = fVar24 <= fVar22;
    }
    if (bVar21 && !bVar3) goto LAB_00135160;
    fVar22 = local_168 - *(float *)(iVar14 + 0x28);
    bVar3 = fVar26 == fVar22;
    bVar21 = fVar22 <= fVar26;
    if (!bVar21 || bVar3) {
      bVar3 = fVar22 == fVar24;
      bVar21 = fVar24 <= fVar22;
    }
    if (bVar21 && !bVar3) goto LAB_00135160;
    fVar22 = local_164 - *(float *)(iVar14 + 0x2c);
    bVar3 = fVar26 == fVar22;
    bVar21 = fVar22 <= fVar26;
    if (!bVar21 || bVar3) {
      bVar3 = fVar22 == fVar24;
      bVar21 = fVar24 <= fVar22;
    }
    if (bVar21 && !bVar3) goto LAB_00135160;
    fVar22 = local_160 - *(float *)(iVar14 + 0x30);
    bVar3 = fVar26 == fVar22;
    bVar21 = fVar22 <= fVar26;
    if (!bVar21 || bVar3) {
      bVar3 = fVar22 == fVar24;
      bVar21 = fVar24 <= fVar22;
    }
    if (bVar21 && !bVar3) goto LAB_00135160;
    fVar22 = local_15c - *(float *)(iVar14 + 0x34);
    bVar3 = fVar26 == fVar22;
    bVar21 = fVar22 <= fVar26;
    if (!bVar21 || bVar3) {
      bVar3 = fVar22 == fVar24;
      bVar21 = fVar24 <= fVar22;
    }
    if (bVar21 && !bVar3) goto LAB_00135160;
    fVar22 = local_158 - *(float *)(iVar14 + 0x38);
    bVar3 = fVar26 == fVar22;
    bVar21 = fVar22 <= fVar26;
    if (!bVar21 || bVar3) {
      bVar3 = fVar22 == fVar24;
      bVar21 = fVar24 <= fVar22;
    }
    if (bVar21 && !bVar3) goto LAB_00135160;
    bVar3 = true;
  }
  if (!bVar3) {
    bVar4 = *(byte *)(iVar14 + 0xa8);
    *(byte *)(iVar14 + 0xa8) = bVar4 | 8;
    fVar22 = ALBW_AS_F32(uVar23);
    if (((local_178 == 1.0 && local_174 == fVar22) && (local_170 == fVar22 && local_16c == fVar22))
       && ((local_168 == 1.0 && local_164 == fVar22 &&
           ((local_160 == fVar22 && local_15c == fVar22) && local_158 == 1.0)))) {
      uVar15 = (undefined4)((ulonglong)uVar23 >> 0x20);
      *(undefined4 *)(iVar14 + 0x18) = uVar15;
      *(float *)(iVar14 + 0x1c) = fVar22;
      *(float *)(iVar14 + 0x20) = fVar22;
      *(float *)(iVar14 + 0x24) = fVar22;
      *(undefined4 *)(iVar14 + 0x28) = uVar15;
      bVar4 = bVar4 & 0xfb | 8;
      *(float *)(iVar14 + 0x2c) = fVar22;
      *(float *)(iVar14 + 0x30) = fVar22;
      *(float *)(iVar14 + 0x34) = fVar22;
      *(undefined4 *)(iVar14 + 0x38) = uVar15;
    }
    else {
      func_001151CC((undefined4 *)(iVar14 + 0x18),&local_178);
      bVar4 = *(byte *)(iVar14 + 0xa8) | 4;
    }
    *(byte *)(iVar14 + 0xa8) = bVar4;
  }
  iVar14 = *(int *)(*(int *)(iVar6 + 0x11c) + 0x14);
  fVar22 = ALBW_AS_F32(param_2[4]) - *(float *)(iVar14 + 4);
  bVar3 = fVar26 == fVar22;
  bVar21 = fVar22 <= fVar26;
  if (!bVar21 || bVar3) {
    bVar3 = fVar22 == fVar24;
    bVar21 = fVar24 <= fVar22;
  }
  if (bVar21 && !bVar3) {
LAB_00135274:
    bVar3 = false;
  }
  else {
    fVar22 = ALBW_AS_F32(param_2[5]) - *(float *)(iVar14 + 8);
    bVar3 = fVar26 == fVar22;
    bVar21 = fVar22 <= fVar26;
    if (!bVar21 || bVar3) {
      bVar3 = fVar22 == fVar24;
      bVar21 = fVar24 <= fVar22;
    }
    if (bVar21 && !bVar3) goto LAB_00135274;
    fVar22 = ALBW_AS_F32(param_2[6]) - *(float *)(iVar14 + 0xc);
    bVar3 = fVar26 == fVar22;
    bVar21 = fVar22 <= fVar26;
    if (!bVar21 || bVar3) {
      bVar3 = fVar22 == fVar24;
      bVar21 = fVar24 <= fVar22;
    }
    if (bVar21 && !bVar3) goto LAB_00135274;
    bVar3 = true;
  }
  if (bVar3) goto LAB_00135374;
  *(byte *)(iVar14 + 0xa8) = *(byte *)(iVar14 + 0xa8) | 8;
  fVar22 = ALBW_AS_F32(param_2[4]) - *pfVar1;
  bVar3 = fVar26 == fVar22;
  bVar21 = fVar22 <= fVar26;
  if (!bVar21 || bVar3) {
    bVar3 = fVar22 == fVar24;
    bVar21 = fVar24 <= fVar22;
  }
  if (bVar21 && !bVar3) {
LAB_00135354:
    *(uint *)(iVar14 + 4) = param_2[4];
    *(uint *)(iVar14 + 8) = param_2[5];
    *(uint *)(iVar14 + 0xc) = param_2[6];
    bVar4 = *(byte *)(iVar14 + 0xa8) | 2;
  }
  else {
    fVar22 = ALBW_AS_F32(param_2[5]) - pfVar1[1];
    bVar3 = fVar26 == fVar22;
    bVar21 = fVar22 <= fVar26;
    if (!bVar21 || bVar3) {
      bVar3 = fVar22 == fVar24;
      bVar21 = fVar24 <= fVar22;
    }
    if (bVar21 && !bVar3) goto LAB_00135354;
    fVar22 = ALBW_AS_F32(param_2[6]) - pfVar1[2];
    bVar3 = fVar26 == fVar22;
    bVar21 = fVar22 <= fVar26;
    if (!bVar21 || bVar3) {
      bVar3 = fVar22 == fVar24;
      bVar21 = fVar24 <= fVar22;
    }
    if (bVar21 && !bVar3) goto LAB_00135354;
    *(float *)(iVar14 + 4) = *pfVar1;
    *(float *)(iVar14 + 8) = pfVar1[1];
    *(float *)(iVar14 + 0xc) = pfVar1[2];
    bVar4 = *(byte *)(iVar14 + 0xa8) & 0xfd;
  }
  *(byte *)(iVar14 + 0xa8) = bVar4;
LAB_00135374:
  local_40[0] = *(uint *)(iVar6 + -0x14c);
  func_004EDAD0(*(int *)(iVar6 + 0x11c),local_40);
  local_44 = &DAT_00135470;
  local_48 = local_ac;
  (**(code **)(local_1c4 + 8))(&local_1c4);
  (**(code **)(local_1c4 + 8))(&local_1c4);
  puVar2 = local_1c0;
  (**(code **)(local_48 + 8))(&local_48);
  if (puVar2 == local_44) {
LAB_00135468:
    bVar3 = true;
  }
  else {
    iVar14 = 0;
    do {
      if (local_1c0[iVar14] != local_44[iVar14]) break;
      if (local_1c0[iVar14] == '\0') goto LAB_00135468;
      iVar14 = iVar14 + 1;
    } while (iVar14 < 0x40001);
    bVar3 = false;
  }
  if (bVar3) {
    uVar13 = 0xff9c;
  }
  else {
    uVar13 = (undefined2)param_2[0x14];
  }
  *(undefined2 *)(*(int *)(iVar6 + 0x11c) + 0x2c) = uVar13;
  func_004EDAB0(*(int *)(iVar6 + 0x11c),(undefined4 *)(iVar6 + -0x48));
  func_004ED9C8(*piVar5);
  func_004A879C(*DAT_0013547c,*piVar5,0);
  return piVar16;
}

