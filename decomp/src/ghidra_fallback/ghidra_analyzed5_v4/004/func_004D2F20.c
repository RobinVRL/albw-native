#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_001340A4(undefined4 param_1,int param_2,uint param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002C2D00(int *param_1);
extern int func_0036D0C8(int *param_1,int param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D18B4(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAB0(int param_1,undefined4 *param_2);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC5C(int param_1,int param_2);
extern int func_00504CC0(undefined4 param_1,undefined4 param_2,uint param_3);
extern int func_00521004(int param_1);
extern int func_00533400(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern undefined4 *DAT_004d3250;
extern int *DAT_004d3254;
extern int DAT_004d3258;
extern int *DAT_004d325c;
extern int *DAT_004d3260;
extern int *DAT_004d3264;
extern float DAT_004d3268;
extern float DAT_004d326c;
extern float DAT_004d3270;
extern int *DAT_004d3274;
extern float *DAT_004d3278;
extern int *DAT_004d3830;
extern int *DAT_004d3840;
extern undefined4 DAT_004d3844;
extern char s__s__s_bch_004d3238[];
extern char s__s__s_kcl_004d3244[];
extern char s_animator_004d3834[];
extern char s_cf_004d3238[];
extern char s_cf_004d3244[];

// USA 004D2F20 <- EU 004D2EF8 (Ghidra, non-matching)
// GLOBAL DAT_004d3250 undefined4 *
// GLOBAL DAT_004d3254 int *
// GLOBAL DAT_004d3258 int
// GLOBAL DAT_004d325c int *
// GLOBAL DAT_004d3260 int *
// GLOBAL DAT_004d3264 int *
// GLOBAL DAT_004d3268 float
// GLOBAL DAT_004d326c float
// GLOBAL DAT_004d3270 float
// GLOBAL DAT_004d3274 int *
// GLOBAL DAT_004d3278 float *
// GLOBAL DAT_004d3830 int *
// GLOBAL DAT_004d3840 int *
// GLOBAL DAT_004d3844 undefined4
// GLOBAL s_cf_004d3238 string
// GLOBAL s_cf_004d3244 string
// GLOBAL s_animator_004d3834 string

void func_004D2F20(int param_1)

{
  float *pfVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int *piVar16;
  float fVar17;
  _Alignas(8) unsigned char albw_frame[0x180];
  #define local_178 (*(uint *)(albw_frame + 0x8))
  #define local_174 (*(int *)(albw_frame + 0xc))
  #define local_170 (*(int * *)(albw_frame + 0x10))
  #define local_16c (*(int *)(albw_frame + 0x14))
  #define local_168 (*(int * *)(albw_frame + 0x18))
  #define local_164 (*(float *)(albw_frame + 0x1c))
  #define local_160 (*(undefined4 *)(albw_frame + 0x20))
  #define local_15c (*(float *)(albw_frame + 0x24))
  #define local_158 (*(undefined4 *)(albw_frame + 0x28))
  #define local_154 (*(int *)(albw_frame + 0x2c))
  #define local_150 (*(undefined4 *)(albw_frame + 0x30))
  #define local_14c (*(undefined4 *)(albw_frame + 0x34))
  #define local_148 (*(undefined4 *)(albw_frame + 0x38))
  #define local_144 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_140 (*(undefined4 *)(albw_frame + 0x40))
  #define local_13c (*(undefined1 *)(albw_frame + 0x44))
  #define local_13b (*(undefined1 *)(albw_frame + 0x45))
  #define local_124 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_120 (*(undefined1 *)(albw_frame + 0x60))
  #define local_11c (*(float *)(albw_frame + 0x64))
  #define local_118 (*(float *)(albw_frame + 0x68))
  #define local_114 (*(float *)(albw_frame + 0x6c))
  #define local_110 (*(float *)(albw_frame + 0x70))
  #define local_10c (*(float *)(albw_frame + 0x74))
  #define local_108 (*(float *)(albw_frame + 0x78))
  #define local_104 (*(float *)(albw_frame + 0x7c))
  #define local_100 (*(float *)(albw_frame + 0x80))
  #define local_fc (*(float *)(albw_frame + 0x84))
  #define auStack_f4 ((undefined4 *)(albw_frame + 0x8c))
  #define auStack_a0 ((undefined4 *)(albw_frame + 0xe0))
  #define local_50 (*(int *)(albw_frame + 0x130))
  #define local_4c (*(char * *)(albw_frame + 0x134))
  #define local_44 (*(undefined4 * *)(albw_frame + 0x13c))
  piVar8 = *(int **)(param_1 + 0x2c0);
  (**(code **)(*piVar8 + 8))(piVar8);
  iVar10 = piVar8[1];
  piVar8 = (int *)(param_1 + 0x53c);
  (**(code **)(*(int *)(param_1 + 0x53c) + 8))(piVar8);
  func_00689794(auStack_a0,s__s__s_bch_004d3238,*(uint *)(param_1 + 0x540),iVar10);
  piVar9 = *(int **)(param_1 + 0x2c0);
  (**(code **)(*piVar9 + 8))(piVar9);
  iVar10 = piVar9[1];
  (**(code **)(*piVar8 + 8))(piVar8);
  func_00689794(auStack_f4,s__s__s_kcl_004d3244,*(uint *)(param_1 + 0x540),iVar10);
  puVar4 = func_00504CC0(*DAT_004d3250,auStack_a0,0xffffffff);
  if (puVar4[0x32] == 1) {
    local_164 = *(float *)puVar4[0x34];
  }
  else {
    local_164 = ALBW_AS_F32(func_00533400((int)puVar4,*(int **)(param_1 + 0x2c0)));
  }
  iVar10 = DAT_004d3258;
  local_174 = DAT_004d3258;
  local_170 = DAT_004d3254;
  local_16c = DAT_004d3258;
  local_168 = DAT_004d3254;
  local_13c = 1;
  local_160 = 0;
  local_15c = 0.0;
  local_158 = local_158 & 0xffff0000;
  local_140 = 0;
  local_150 = 0;
  local_144 = 0;
  local_154 = 0;
  local_148 = 0;
  local_14c = 0;
  local_13b = 0xc4;
  iVar5 = func_00588BE4(param_1);
  if (iVar5 == *DAT_004d325c) {
    local_158 = CONCAT31((*(undefined4 *)((char *)&local_158 + 1) & 0xFFFFFF),1);
  }
  else {
    iVar5 = func_00588BE4(param_1);
    if ((iVar5 == *DAT_004d3260) || (iVar5 = func_00588BE4(param_1), iVar5 == *DAT_004d3264)) {
      (*(undefined2 *)((char *)&local_158 + 0)) = CONCAT11(1,(undefined1)local_158);
    }
  }
  if (0 < (int)puVar4[0x35]) {
    local_15c = ALBW_AS_F32(((uint)ALBW_AS_U32(local_15c) | 1));
  }
  func_0036D0C8((int *)(param_1 + 0x544),0);
  local_154 = *(int *)(param_1 + 0x544);
  piVar8 = func_002C2D00(&local_174);
  *(int **)(param_1 + 0x530) = piVar8;
  piVar9 = (int *)(param_1 + 0x530);
  *(int **)(param_1 + 0x34c) = piVar8;
  func_004D18B4((int)piVar8);
  (**(code **)(*(int *)*piVar9 + 0x10))((int *)*piVar9,0x24);
  *(uint *)(*piVar9 + 0x164) = *(uint *)(*piVar9 + 0x164) | 0x90000;
  if (*(short *)(param_1 + 0x2c) == 1) {
    func_001340A4(param_1 + 0x40c,*(int *)(param_1 + 0x530),(uint)(*(short *)(param_1 + 0x2e) == 1))
    ;
  }
  func_00491624(&local_11c,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x24),
                *(uint *)(param_1 + 0x28));
  iVar5 = *(int *)(param_1 + 0x530);
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  func_001151F8((undefined4 *)(iVar5 + 0x80),&local_11c,(undefined4 *)(param_1 + 8));
  iVar5 = *piVar9;
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(iVar5 + 0x78) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar5 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
  func_004CEAF0(*piVar9);
  iVar5 = *(int *)(param_1 + 0x20);
  bVar11 = iVar5 == 0;
  if (bVar11) {
    iVar5 = *(int *)(param_1 + 0x24);
  }
  bVar12 = bVar11 && iVar5 == 0;
  if (bVar11 && iVar5 == 0) {
    bVar12 = *(int *)(param_1 + 0x28) == 0;
  }
  piVar8 = (int *)(param_1 + 0x538);
  fVar17 = DAT_004d3270;
  piVar16 = DAT_004d3274;
  if (((((bVar12) && (fVar13 = *(float *)(param_1 + 0x14) - *DAT_004d3278, DAT_004d326c <= fVar13))
       && (fVar13 <= DAT_004d3268)) &&
      ((fVar13 = *(float *)(param_1 + 0x18) - DAT_004d3278[1], DAT_004d326c <= fVar13 &&
       (fVar13 <= DAT_004d3268)))) &&
     ((fVar13 = *(float *)(param_1 + 0x1c) - DAT_004d3278[2], DAT_004d326c <= fVar13 &&
      (fVar13 <= DAT_004d3268)))) {
    func_004EDC5C(*(int *)(param_1 + 0x538),(int)auStack_f4);
    goto LAB_004d35e4;
  }
  fVar13 = DAT_004d326c;
  fVar15 = DAT_004d3268;
  func_004EDB28(*(int *)(param_1 + 0x538),(int)auStack_f4);
  iVar5 = *(int *)(*piVar8 + 0x14);
  fVar14 = local_11c - *(float *)(iVar5 + 0x18);
  bVar11 = fVar13 == fVar14;
  bVar12 = fVar14 <= fVar13;
  if (!bVar12 || bVar11) {
    bVar11 = fVar14 == fVar15;
    bVar12 = fVar15 <= fVar14;
  }
  if (bVar12 && !bVar11) {
LAB_004d33dc:
    bVar11 = false;
  }
  else {
    fVar14 = local_118 - *(float *)(iVar5 + 0x1c);
    bVar11 = fVar13 == fVar14;
    bVar12 = fVar14 <= fVar13;
    if (!bVar12 || bVar11) {
      bVar11 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar11) goto LAB_004d33dc;
    fVar14 = local_114 - *(float *)(iVar5 + 0x20);
    bVar11 = fVar13 == fVar14;
    bVar12 = fVar14 <= fVar13;
    if (!bVar12 || bVar11) {
      bVar11 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar11) goto LAB_004d33dc;
    fVar14 = local_110 - *(float *)(iVar5 + 0x24);
    bVar11 = fVar13 == fVar14;
    bVar12 = fVar14 <= fVar13;
    if (!bVar12 || bVar11) {
      bVar11 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar11) goto LAB_004d33dc;
    fVar14 = local_10c - *(float *)(iVar5 + 0x28);
    bVar11 = fVar13 == fVar14;
    bVar12 = fVar14 <= fVar13;
    if (!bVar12 || bVar11) {
      bVar11 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar11) goto LAB_004d33dc;
    fVar14 = local_108 - *(float *)(iVar5 + 0x2c);
    bVar11 = fVar13 == fVar14;
    bVar12 = fVar14 <= fVar13;
    if (!bVar12 || bVar11) {
      bVar11 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar11) goto LAB_004d33dc;
    fVar14 = local_104 - *(float *)(iVar5 + 0x30);
    bVar11 = fVar13 == fVar14;
    bVar12 = fVar14 <= fVar13;
    if (!bVar12 || bVar11) {
      bVar11 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar11) goto LAB_004d33dc;
    fVar14 = local_100 - *(float *)(iVar5 + 0x34);
    bVar11 = fVar13 == fVar14;
    bVar12 = fVar14 <= fVar13;
    if (!bVar12 || bVar11) {
      bVar11 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar11) goto LAB_004d33dc;
    fVar14 = local_fc - *(float *)(iVar5 + 0x38);
    bVar11 = fVar13 == fVar14;
    bVar12 = fVar14 <= fVar13;
    if (!bVar12 || bVar11) {
      bVar11 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar11) goto LAB_004d33dc;
    bVar11 = true;
  }
  if (!bVar11) {
    bVar2 = *(byte *)(iVar5 + 0xa8);
    *(byte *)(iVar5 + 0xa8) = bVar2 | 8;
    if (((local_11c == 1.0 && local_118 == ALBW_AS_F32(piVar16)) &&
        (local_114 == ALBW_AS_F32(piVar16) && local_110 == ALBW_AS_F32(piVar16))) &&
       ((local_10c == 1.0 && local_108 == ALBW_AS_F32(piVar16) &&
        ((local_104 == ALBW_AS_F32(piVar16) && local_100 == ALBW_AS_F32(piVar16)) && local_fc == 1.0)))) {
      *(float *)(iVar5 + 0x18) = fVar17;
      *(int **)(iVar5 + 0x1c) = piVar16;
      *(int **)(iVar5 + 0x20) = piVar16;
      bVar2 = bVar2 & 0xfb | 8;
      *(int **)(iVar5 + 0x24) = piVar16;
      *(float *)(iVar5 + 0x28) = fVar17;
      *(int **)(iVar5 + 0x2c) = piVar16;
      *(int **)(iVar5 + 0x30) = piVar16;
      *(int **)(iVar5 + 0x34) = piVar16;
      *(float *)(iVar5 + 0x38) = fVar17;
    }
    else {
      func_001151CC((undefined4 *)(iVar5 + 0x18),&local_11c);
      bVar2 = *(byte *)(iVar5 + 0xa8) | 4;
    }
    *(byte *)(iVar5 + 0xa8) = bVar2;
  }
  pfVar1 = DAT_004d3278;
  iVar5 = *(int *)(*(int *)(param_1 + 0x538) + 0x14);
  fVar14 = *(float *)(param_1 + 0x14) - *(float *)(iVar5 + 4);
  bVar11 = fVar13 == fVar14;
  bVar12 = fVar14 <= fVar13;
  if (!bVar12 || bVar11) {
    bVar11 = fVar14 == fVar15;
    bVar12 = fVar15 <= fVar14;
  }
  if (bVar12 && !bVar11) {
LAB_004d34f0:
    bVar11 = false;
  }
  else {
    fVar14 = *(float *)(param_1 + 0x18) - *(float *)(iVar5 + 8);
    bVar11 = fVar13 == fVar14;
    bVar12 = fVar14 <= fVar13;
    if (!bVar12 || bVar11) {
      bVar11 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar11) goto LAB_004d34f0;
    fVar14 = *(float *)(param_1 + 0x1c) - *(float *)(iVar5 + 0xc);
    bVar11 = fVar13 == fVar14;
    bVar12 = fVar14 <= fVar13;
    if (!bVar12 || bVar11) {
      bVar11 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar11) goto LAB_004d34f0;
    bVar11 = true;
  }
  if (bVar11) goto LAB_004d35e4;
  *(byte *)(iVar5 + 0xa8) = *(byte *)(iVar5 + 0xa8) | 8;
  fVar14 = *(float *)(param_1 + 0x14) - *pfVar1;
  bVar11 = fVar13 == fVar14;
  bVar12 = fVar14 <= fVar13;
  if (!bVar12 || bVar11) {
    bVar11 = fVar14 == fVar15;
    bVar12 = fVar15 <= fVar14;
  }
  if (bVar12 && !bVar11) {
LAB_004d35c4:
    *(float *)(iVar5 + 4) = *(float *)(param_1 + 0x14);
    *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_1 + 0x1c);
    bVar2 = *(byte *)(iVar5 + 0xa8) | 2;
  }
  else {
    fVar14 = *(float *)(param_1 + 0x18) - pfVar1[1];
    bVar11 = fVar13 == fVar14;
    bVar12 = fVar14 <= fVar13;
    if (!bVar12 || bVar11) {
      bVar11 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar11) goto LAB_004d35c4;
    fVar14 = *(float *)(param_1 + 0x1c) - pfVar1[2];
    bVar11 = fVar13 == fVar14;
    bVar12 = fVar14 <= fVar13;
    if (!bVar12 || bVar11) {
      bVar11 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar11) goto LAB_004d35c4;
    *(float *)(iVar5 + 4) = *pfVar1;
    *(float *)(iVar5 + 8) = pfVar1[1];
    *(float *)(iVar5 + 0xc) = pfVar1[2];
    bVar2 = *(byte *)(iVar5 + 0xa8) & 0xfd;
  }
  *(byte *)(iVar5 + 0xa8) = bVar2;
LAB_004d35e4:
  *(undefined2 *)(*(int *)(param_1 + 0x538) + 0x2c) = *(undefined2 *)(param_1 + 0x54);
  local_168 = *(int **)(param_1 + 0x2cc);
  func_004EDAD0(*piVar8,(uint *)&local_168);
  func_004EDAB0(*piVar8,(undefined4 *)(param_1 + 0x3d0));
  func_004ED9C8(*piVar8);
  func_004A7F00(*DAT_004d3830,*piVar8,0);
  if (0 < (int)puVar4[0x35]) {
    local_44 = (undefined4 *)func_0010BAB4(0xa8);
    piVar8 = DAT_004d3840;
    puVar6 = (uint *)0x0;
    if (local_44 != (undefined4 *)0x0) {
      if (*(int *)(param_1 + 0x2d0) == 0) {
        local_4c = s_animator_004d3834;
      }
      else {
        (**(code **)(*DAT_004d3840 + 8))(DAT_004d3840);
        local_4c = (char *)piVar8[1];
      }
      local_50 = iVar10;
      puVar6 = func_0016A2FC(local_44,1,&local_50,1);
    }
    *(uint **)(param_1 + 0x534) = puVar6;
    func_00169608(puVar6,0,*(int **)(param_1 + 0x2c0),(int)puVar4);
    func_0016A02C(*(int *)(param_1 + 0x534),-1,(int *)0xffffffff,*(int *)(param_1 + 0x530));
    local_170 = &local_16c;
    local_174 = 3;
    local_124 = 10;
    local_120 = 0;
    local_16c = 0;
    local_178 = 1;
    local_158 = param_1 + 4U | 0xff;
    local_160 = DAT_004d3844;
    local_168 = piVar16;
    local_164 = fVar17;
    local_15c = fVar17;
    func_0016898C(*(int *)(param_1 + 0x534),&local_178);
    iVar10 = *(int *)(param_1 + 0x534);
    uVar7 = 0;
    if (0 < *(int *)(iVar10 + 0xc)) {
      do {
        iVar5 = *(int *)(iVar10 + 0x14);
        if (uVar7 < *(uint *)(iVar10 + 0xc)) {
          iVar5 = iVar5 + uVar7 * 0x28;
        }
        if (ALBW_AS_F32(piVar16) <= fVar17) {
          *(int **)(iVar5 + 0xc) = piVar16;
          *(float *)(iVar5 + 8) = ALBW_AS_F32(piVar16);
        }
        else {
          *(float *)(iVar5 + 0xc) = *(float *)(iVar5 + 0x14);
          *(float *)(iVar5 + 8) = *(float *)(iVar5 + 0x14);
        }
        *(float *)(iVar5 + 0x10) = fVar17;
        *(undefined4 *)(iVar5 + 0x18) = 0;
        *(undefined1 *)(iVar5 + 0x26) = 1;
        *(undefined1 *)(iVar5 + 0x25) = 1;
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < *(int *)(iVar10 + 0xc));
    }
    func_00168E9C(*(int **)(param_1 + 0x534),*(int *)(param_1 + 0x530),(int *)0x0);
    func_004CEAF0(*piVar9);
  }
  if (*(short *)(param_1 + 0x36) != 0) {
    bVar11 = func_00588BF0(param_1,0);
    iVar10 = *(int *)(param_1 + 0x538);
    if ((bVar11 == 0) || (iVar5 = func_00521004(param_1), iVar5 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(iVar10 + 0x44) = uVar3;
    func_004CF478(*(int *)(param_1 + 0x530),(uint)bVar11);
    func_004CEAF0(*piVar9);
  }
  return;
}

