#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_002C2D00(int *param_1);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAB0(int param_1,undefined4 *param_2);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC5C(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00504D48(int param_1,int param_2);
extern int func_00521028(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00689794(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_0027e510;
extern uint *DAT_0027e514;
extern undefined4 DAT_0027e538;
extern int DAT_0027e53c;
extern int *DAT_0027e548;
extern float DAT_0027e54c;
extern float DAT_0027e550;
extern float *DAT_0027e554;
extern float DAT_0027e7fc;
extern undefined4 DAT_0027e800;
extern int *DAT_0027e804;
extern char s_MapActor__s_bch_0027e518[];
extern char s_MapActor__s_kcl_0027e528[];
extern char s_World_0027e540[];
extern char s_cf_0027e518[];
extern char s_cf_0027e528[];

// USA 0027E0C8 <- EU 0027E0F0 (Ghidra, non-matching)
// GLOBAL DAT_0027e510 int
// GLOBAL DAT_0027e514 uint *
// GLOBAL DAT_0027e538 undefined4
// GLOBAL DAT_0027e53c int
// GLOBAL DAT_0027e548 int *
// GLOBAL DAT_0027e54c float
// GLOBAL DAT_0027e550 float
// GLOBAL DAT_0027e554 float *
// GLOBAL DAT_0027e7fc float
// GLOBAL DAT_0027e800 undefined4
// GLOBAL DAT_0027e804 int *
// GLOBAL s_cf_0027e518 string
// GLOBAL s_cf_0027e528 string
// GLOBAL s_World_0027e540 string

int * func_0027E0C8(undefined4 *param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  float *pfVar3;
  bool bVar4;
  byte bVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 in_r3;
  uint uVar12;
  int *piVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  _Alignas(8) unsigned char albw_frame[0x1b0];
  #define iStack_1a8 (*(int *)(albw_frame + 0x8))
  #define uStack_1a4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_1a0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_19c (*(undefined4 *)(albw_frame + 0x14))
  #define local_198 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_194 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_190 (*(undefined4 *)(albw_frame + 0x20))
  #define local_18c (*(undefined4 *)(albw_frame + 0x24))
  #define local_188 (*(undefined4 *)(albw_frame + 0x28))
  #define local_184 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_180 (*(undefined4 *)(albw_frame + 0x30))
  #define local_17c (*(int *)(albw_frame + 0x34))
  #define local_178 (*(char * *)(albw_frame + 0x38))
  #define local_174 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_173 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_172 (*(undefined1 *)(albw_frame + 0x3e))
  #define local_171 (*(undefined1 *)(albw_frame + 0x3f))
  #define local_170 (*(undefined1 *)(albw_frame + 0x40))
  #define local_16c (*(int *)(albw_frame + 0x44))
  #define local_168 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_164 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_160 (*(undefined4 *)(albw_frame + 0x50))
  #define local_15c (*(undefined1 *)(albw_frame + 0x54))
  #define local_158 (*(float *)(albw_frame + 0x58))
  #define local_154 (*(float *)(albw_frame + 0x5c))
  #define local_150 (*(float *)(albw_frame + 0x60))
  #define local_14c (*(float *)(albw_frame + 0x64))
  #define local_148 (*(float *)(albw_frame + 0x68))
  #define local_144 (*(float *)(albw_frame + 0x6c))
  #define local_140 (*(float *)(albw_frame + 0x70))
  #define local_13c (*(float *)(albw_frame + 0x74))
  #define local_138 (*(float *)(albw_frame + 0x78))
  #define uStack_134 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_130 (*(undefined4 *)(albw_frame + 0x80))
  #define iStack_e8 (*(int *)(albw_frame + 0xc8))
  #define uStack_e4 (*(undefined4 *)(albw_frame + 0xcc))
  #define iStack_e0 (*(int *)(albw_frame + 0xd0))
  #define uStack_dc (*(undefined4 *)(albw_frame + 0xd4))
  #define local_d8 (*(undefined4 * *)(albw_frame + 0xd8))
  #define uStack_d4 (*(undefined4 *)(albw_frame + 0xdc))
  #define local_d0 (*(undefined4 *)(albw_frame + 0xe0))
  #define local_cc (*(undefined1 *)(albw_frame + 0xe4))
  #define local_cb (*(undefined1 *)(albw_frame + 0xe5))
  #define local_c8 (*(undefined4 *)(albw_frame + 0xe8))
  #define local_c4 (*(undefined4 *)(albw_frame + 0xec))
  #define local_c0 (*(undefined4 *)(albw_frame + 0xf0))
  #define local_bc (*(undefined4 *)(albw_frame + 0xf4))
  #define local_b8 (*(undefined4 *)(albw_frame + 0xf8))
  #define local_b4 (*(undefined4 *)(albw_frame + 0xfc))
  #define local_b0 (*(undefined1 *)(albw_frame + 0x100))
  #define local_af (*(undefined1 *)(albw_frame + 0x101))
  #define auStack_ac ((undefined4 *)(albw_frame + 0x104))
  #define auStack_60 ((undefined4 *)(albw_frame + 0x150))
  #define local_48 (*(uint *)(albw_frame + 0x168))
  #define local_30 ((uint *)(albw_frame + 0x180))
  piVar6 = func_00150E40(param_1,param_2);
  puVar1 = DAT_0027e514;
  iVar8 = DAT_0027e510;
  piVar6[200] = DAT_0027e510 + 0x54;
  *piVar6 = iVar8;
  piVar6[0x103] = 0;
  piVar6[0x104] = 0;
  uVar12 = *puVar1;
  piVar13 = piVar6 + 0x103;
  piVar11 = piVar6 + 0x104;
  bVar4 = func_00588BF0((int)piVar6,0);
  if (bVar4) {
    uVar12 = puVar1[1];
  }
  func_00689794(&uStack_134,s_MapActor__s_bch_0027e518,uVar12,in_r3);
  func_00689794(auStack_ac,s_MapActor__s_kcl_0027e528,uVar12,in_r3);
  iVar8 = DAT_0027e53c;
  uVar2 = DAT_0027e538;
  local_1a0 = 0;
  local_19c = 0;
  local_198 = 0x20;
  uStack_194 = 0;
  local_190 = 0;
  local_18c = 0;
  local_188 = 0;
  local_184 = 0;
  local_180 = 0;
  iStack_1a8 = DAT_0027e53c;
  uStack_1a4 = DAT_0027e538;
  local_178 = s_World_0027e540;
  local_174 = 7;
  local_16c = DAT_0027e53c;
  local_173 = 4;
  local_17c = DAT_0027e53c;
  local_171 = 0;
  local_170 = 0;
  local_168 = local_130;
  uStack_164 = 0;
  local_160 = 0;
  local_15c = 1;
  local_172 = 1;
  local_d8 = func_00504D48(*DAT_0027e548,(int)&iStack_1a8);
  piVar7 = local_d8 + 0x32;
  if (*piVar7 != 0) {
    local_d8 = *(undefined4 **)local_d8[0x34];
  }
  iStack_e8 = iVar8;
  uStack_e4 = uVar2;
  if (*piVar7 == 0) {
    local_d8 = (undefined4 *)0x0;
  }
  uStack_d4 = 0;
  local_d0 = 0;
  iStack_e0 = iVar8;
  uStack_dc = uVar2;
  local_b0 = 1;
  local_cc = 0;
  local_c4 = 0;
  local_cb = 0;
  local_b4 = 0;
  local_af = 0xc4;
  local_b8 = 0;
  local_c8 = 0;
  local_bc = 0;
  local_c0 = 0;
  piVar7 = func_002C2D00(&iStack_e8);
  piVar6[0x103] = (int)piVar7;
  piVar6[0xd3] = (int)piVar7;
  (**(code **)(*piVar7 + 0x10))(piVar7,0x24);
  func_00491624(&local_158,param_2[7],param_2[8],param_2[9]);
  iVar8 = *piVar13;
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  func_001151F8((undefined4 *)(iVar8 + 0x80),&local_158,param_2 + 1);
  iVar8 = *piVar13;
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  *(uint *)(iVar8 + 0x74) = param_2[4];
  *(uint *)(iVar8 + 0x78) = param_2[5];
  *(uint *)(iVar8 + 0x7c) = param_2[6];
  func_004CEAF0(*piVar13);
  puVar9 = (undefined4 *)func_0010BAB4(0x48);
  puVar10 = (undefined4 *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar10 = func_004EDC9C(puVar9);
  }
  piVar6[0x104] = (int)puVar10;
  pfVar3 = DAT_0027e554;
  uVar12 = param_2[7];
  bVar4 = uVar12 == 0;
  if (bVar4) {
    uVar12 = param_2[8];
  }
  bVar14 = bVar4 && uVar12 == 0;
  if (bVar4 && uVar12 == 0) {
    bVar14 = param_2[9] == 0;
  }
  if (((((bVar14) && (DAT_0027e550 <= ALBW_AS_F32(param_2[4]) - *DAT_0027e554)) &&
       (ALBW_AS_F32(param_2[4]) - *DAT_0027e554 <= DAT_0027e54c)) &&
      ((DAT_0027e550 <= ALBW_AS_F32(param_2[5]) - DAT_0027e554[1] &&
       (ALBW_AS_F32(param_2[5]) - DAT_0027e554[1] <= DAT_0027e54c)))) &&
     ((DAT_0027e550 <= ALBW_AS_F32(param_2[6]) - DAT_0027e554[2] &&
      (ALBW_AS_F32(param_2[6]) - DAT_0027e554[2] <= DAT_0027e54c)))) {
    func_004EDC5C((int)puVar10,(int)auStack_ac);
    goto LAB_0027e750;
  }
  fVar16 = DAT_0027e54c;
  fVar17 = DAT_0027e550;
  func_004EDB28((int)puVar10,(int)auStack_ac);
  iVar8 = *(int *)(*piVar11 + 0x14);
  fVar15 = local_158 - *(float *)(iVar8 + 0x18);
  bVar4 = fVar17 == fVar15;
  bVar14 = fVar15 <= fVar17;
  if (!bVar14 || bVar4) {
    bVar4 = fVar15 == fVar16;
    bVar14 = fVar16 <= fVar15;
  }
  if (bVar14 && !bVar4) {
LAB_0027e4f4:
    bVar4 = false;
  }
  else {
    fVar15 = local_154 - *(float *)(iVar8 + 0x1c);
    bVar4 = fVar17 == fVar15;
    bVar14 = fVar15 <= fVar17;
    if (!bVar14 || bVar4) {
      bVar4 = fVar15 == fVar16;
      bVar14 = fVar16 <= fVar15;
    }
    if (bVar14 && !bVar4) goto LAB_0027e4f4;
    fVar15 = local_150 - *(float *)(iVar8 + 0x20);
    bVar4 = fVar17 == fVar15;
    bVar14 = fVar15 <= fVar17;
    if (!bVar14 || bVar4) {
      bVar4 = fVar15 == fVar16;
      bVar14 = fVar16 <= fVar15;
    }
    if (bVar14 && !bVar4) goto LAB_0027e4f4;
    fVar15 = local_14c - *(float *)(iVar8 + 0x24);
    bVar4 = fVar17 == fVar15;
    bVar14 = fVar15 <= fVar17;
    if (!bVar14 || bVar4) {
      bVar4 = fVar15 == fVar16;
      bVar14 = fVar16 <= fVar15;
    }
    if (bVar14 && !bVar4) goto LAB_0027e4f4;
    fVar15 = local_148 - *(float *)(iVar8 + 0x28);
    bVar4 = fVar17 == fVar15;
    bVar14 = fVar15 <= fVar17;
    if (!bVar14 || bVar4) {
      bVar4 = fVar15 == fVar16;
      bVar14 = fVar16 <= fVar15;
    }
    if (bVar14 && !bVar4) goto LAB_0027e4f4;
    fVar15 = local_144 - *(float *)(iVar8 + 0x2c);
    bVar4 = fVar17 == fVar15;
    bVar14 = fVar15 <= fVar17;
    if (!bVar14 || bVar4) {
      bVar4 = fVar15 == fVar16;
      bVar14 = fVar16 <= fVar15;
    }
    if (bVar14 && !bVar4) goto LAB_0027e4f4;
    fVar15 = local_140 - *(float *)(iVar8 + 0x30);
    bVar4 = fVar17 == fVar15;
    bVar14 = fVar15 <= fVar17;
    if (!bVar14 || bVar4) {
      bVar4 = fVar15 == fVar16;
      bVar14 = fVar16 <= fVar15;
    }
    if (bVar14 && !bVar4) goto LAB_0027e4f4;
    fVar15 = local_13c - *(float *)(iVar8 + 0x34);
    bVar4 = fVar17 == fVar15;
    bVar14 = fVar15 <= fVar17;
    if (!bVar14 || bVar4) {
      bVar4 = fVar15 == fVar16;
      bVar14 = fVar16 <= fVar15;
    }
    if (bVar14 && !bVar4) goto LAB_0027e4f4;
    fVar15 = local_138 - *(float *)(iVar8 + 0x38);
    bVar4 = fVar17 == fVar15;
    bVar14 = fVar15 <= fVar17;
    if (!bVar14 || bVar4) {
      bVar4 = fVar15 == fVar16;
      bVar14 = fVar16 <= fVar15;
    }
    if (bVar14 && !bVar4) goto LAB_0027e4f4;
    bVar4 = true;
  }
  if (!bVar4) {
    bVar5 = *(byte *)(iVar8 + 0xa8);
    *(byte *)(iVar8 + 0xa8) = bVar5 | 8;
    uVar2 = DAT_0027e800;
    fVar15 = DAT_0027e7fc;
    if (((local_158 == 1.0) && (local_154 == DAT_0027e7fc && local_150 == DAT_0027e7fc)) &&
       ((local_14c == DAT_0027e7fc && local_148 == 1.0 &&
        ((local_144 == DAT_0027e7fc && local_140 == DAT_0027e7fc &&
         (local_13c == DAT_0027e7fc && local_138 == 1.0)))))) {
      *(undefined4 *)(iVar8 + 0x18) = DAT_0027e800;
      *(float *)(iVar8 + 0x1c) = fVar15;
      *(float *)(iVar8 + 0x20) = fVar15;
      *(float *)(iVar8 + 0x24) = fVar15;
      *(undefined4 *)(iVar8 + 0x28) = uVar2;
      bVar5 = bVar5 & 0xfb | 8;
      *(float *)(iVar8 + 0x2c) = fVar15;
      *(float *)(iVar8 + 0x30) = fVar15;
      *(float *)(iVar8 + 0x34) = fVar15;
      *(undefined4 *)(iVar8 + 0x38) = uVar2;
    }
    else {
      func_001151CC((undefined4 *)(iVar8 + 0x18),&local_158);
      bVar5 = *(byte *)(iVar8 + 0xa8) | 4;
    }
    *(byte *)(iVar8 + 0xa8) = bVar5;
  }
  iVar8 = *(int *)(piVar6[0x104] + 0x14);
  fVar15 = ALBW_AS_F32(param_2[4]) - *(float *)(iVar8 + 4);
  bVar4 = fVar17 == fVar15;
  bVar14 = fVar15 <= fVar17;
  if (!bVar14 || bVar4) {
    bVar4 = fVar15 == fVar16;
    bVar14 = fVar16 <= fVar15;
  }
  if (bVar14 && !bVar4) {
LAB_0027e65c:
    bVar4 = false;
  }
  else {
    fVar15 = ALBW_AS_F32(param_2[5]) - *(float *)(iVar8 + 8);
    bVar4 = fVar17 == fVar15;
    bVar14 = fVar15 <= fVar17;
    if (!bVar14 || bVar4) {
      bVar4 = fVar15 == fVar16;
      bVar14 = fVar16 <= fVar15;
    }
    if (bVar14 && !bVar4) goto LAB_0027e65c;
    fVar15 = ALBW_AS_F32(param_2[6]) - *(float *)(iVar8 + 0xc);
    bVar4 = fVar17 == fVar15;
    bVar14 = fVar15 <= fVar17;
    if (!bVar14 || bVar4) {
      bVar4 = fVar15 == fVar16;
      bVar14 = fVar16 <= fVar15;
    }
    if (bVar14 && !bVar4) goto LAB_0027e65c;
    bVar4 = true;
  }
  if (bVar4) goto LAB_0027e750;
  *(byte *)(iVar8 + 0xa8) = *(byte *)(iVar8 + 0xa8) | 8;
  fVar15 = ALBW_AS_F32(param_2[4]) - *pfVar3;
  bVar4 = fVar17 == fVar15;
  bVar14 = fVar15 <= fVar17;
  if (!bVar14 || bVar4) {
    bVar4 = fVar15 == fVar16;
    bVar14 = fVar16 <= fVar15;
  }
  if (bVar14 && !bVar4) {
LAB_0027e730:
    *(uint *)(iVar8 + 4) = param_2[4];
    *(uint *)(iVar8 + 8) = param_2[5];
    *(uint *)(iVar8 + 0xc) = param_2[6];
    bVar5 = *(byte *)(iVar8 + 0xa8) | 2;
  }
  else {
    fVar15 = ALBW_AS_F32(param_2[5]) - pfVar3[1];
    bVar4 = fVar17 == fVar15;
    bVar14 = fVar15 <= fVar17;
    if (!bVar14 || bVar4) {
      bVar4 = fVar15 == fVar16;
      bVar14 = fVar16 <= fVar15;
    }
    if (bVar14 && !bVar4) goto LAB_0027e730;
    fVar15 = ALBW_AS_F32(param_2[6]) - pfVar3[2];
    bVar4 = fVar17 == fVar15;
    bVar14 = fVar15 <= fVar17;
    if (!bVar14 || bVar4) {
      bVar4 = fVar15 == fVar16;
      bVar14 = fVar16 <= fVar15;
    }
    if (bVar14 && !bVar4) goto LAB_0027e730;
    *(float *)(iVar8 + 4) = *pfVar3;
    *(float *)(iVar8 + 8) = pfVar3[1];
    *(float *)(iVar8 + 0xc) = pfVar3[2];
    bVar5 = *(byte *)(iVar8 + 0xa8) & 0xfd;
  }
  *(byte *)(iVar8 + 0xa8) = bVar5;
LAB_0027e750:
  *(short *)(piVar6[0x104] + 0x2c) = (short)piVar6[0x15];
  func_004A7F00(*DAT_0027e804,*piVar11,0);
  local_30[0] = piVar6[0xb3];
  func_004EDAD0(*piVar11,local_30);
  func_004EDAB0(*piVar11,piVar6 + 0xf4);
  func_004ED9C8(*piVar11);
  piVar11 = (int *)func_00521028((int)piVar6);
  (**(code **)(*piVar11 + 8))(piVar11);
  func_003529A0(auStack_60,piVar11[1],piVar6 + 200);
  bVar4 = func_00588BF0((int)piVar6,0);
  local_48 = (uint)bVar4;
  func_002C41BC(piVar6 + 200,auStack_60,0);
  return piVar6;
}

