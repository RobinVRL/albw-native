#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_004D01E0(int param_1,int param_2,int param_3);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_005646CC(undefined1 *param_1,float *param_2);
extern int func_00584B94(int param_1,int param_2);
extern int func_00584CC8(int param_1,int *param_2);
extern int DAT_00331e44;
extern int DAT_00331e50;
extern undefined4 DAT_00331e54;
extern int *DAT_00331e58;
extern undefined4 DAT_00331e5c;
extern float DAT_00331e60;
extern undefined4 DAT_00331e64;
extern int *DAT_00331e68;
extern float *DAT_00331e6c;
extern float *DAT_00331e70;
extern float *DAT_00331e74;
extern float *DAT_00331e78;
extern float DAT_00331e98;
extern float DAT_00331e9c;
extern float *DAT_00332098;
extern int *DAT_0033209c;
extern char s_Actor_CaveZoraSpring_kcl_00331e7c[];
extern char s_cf_00331e7c[];
extern char s_m_water_00331e48[];

// USA 003319E4 <- EU 003319C0 (Ghidra, non-matching)
// GLOBAL DAT_00331e44 int
// GLOBAL DAT_00331e50 int
// GLOBAL DAT_00331e54 undefined4
// GLOBAL DAT_00331e58 int *
// GLOBAL DAT_00331e5c undefined4
// GLOBAL DAT_00331e60 float
// GLOBAL DAT_00331e64 undefined4
// GLOBAL DAT_00331e68 int *
// GLOBAL DAT_00331e6c float *
// GLOBAL DAT_00331e70 float *
// GLOBAL DAT_00331e74 float *
// GLOBAL DAT_00331e78 float *
// GLOBAL DAT_00331e98 float
// GLOBAL DAT_00331e9c float
// GLOBAL DAT_00332098 float *
// GLOBAL DAT_0033209c int *
// GLOBAL s_cf_00331e7c string
// GLOBAL s_m_water_00331e48 string

/* WARNING: Variable defined which should be unmapped: objStack_d0 */

int * func_003319E4(undefined4 *param_1,uint *param_2)

{
  float *pfVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define objStack_d0 ((uint *)(albw_frame + 0x0))
  #define local_c4 (*(float *)(albw_frame + 0xc))
  #define local_c0 (*(float *)(albw_frame + 0x10))
  #define local_bc (*(float *)(albw_frame + 0x14))
  #define local_b8 (*(float *)(albw_frame + 0x18))
  #define local_b4 (*(float *)(albw_frame + 0x1c))
  #define local_b0 (*(float *)(albw_frame + 0x20))
  #define local_ac (*(float *)(albw_frame + 0x24))
  #define local_a8 (*(float *)(albw_frame + 0x28))
  #define local_a4 (*(float *)(albw_frame + 0x2c))
  #define local_a0 ((uint *)(albw_frame + 0x30))
  #define local_98 (*(undefined4 * *)(albw_frame + 0x38))
  #define local_94 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_90 (*(float *)(albw_frame + 0x40))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_80 (*(uint *)(albw_frame + 0x50))
  #define local_4c (*(undefined4 *)(albw_frame + 0x84))
  #define local_48 (*(undefined1 *)(albw_frame + 0x88))
  #define local_44 (*(uint *)(albw_frame + 0x8c))
  #define local_40 (*(int *)(albw_frame + 0x90))
  #define local_3c (*(char * *)(albw_frame + 0x94))
  piVar4 = func_00150E40(param_1,param_2);
  iVar8 = DAT_00331e44 + 0x54;
  *piVar4 = DAT_00331e44;
  piVar4[200] = iVar8;
  piVar4[0x103] = *(int *)(piVar4[0xb4] + 0x1c8);
  objStack_d0[1] = 0;
  objStack_d0[0] = 1;
  objStack_d0[2] = 0;
  iVar8 = func_0014E428((int)piVar4,1,0,0,1,0,0);
  piVar9 = piVar4 + 0x104;
  *piVar9 = iVar8;
  piVar4[0x105] = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = func_004EDC9C(puVar5);
  }
  iVar8 = piVar4[0x104];
  piVar4[0x108] = 0;
  piVar10 = piVar4 + 0x106;
  piVar4[0x109] = 0;
  piVar4[0x10a] = 0;
  *piVar10 = (int)puVar5;
  piVar4[0x107] = -1;
  if (iVar8 == 0) {
    *(undefined1 *)((int)piVar4 + 0x2d7) = 1;
    return piVar4;
  }
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar8 + 0x80),piVar4[0xfa],(float *)(piVar4 + 0xf4));
  iVar8 = DAT_00331e50;
  local_3c = s_m_water_00331e48;
  local_40 = DAT_00331e50;
  iVar6 = func_00584CC8(*piVar9,&local_40);
  piVar4[0x107] = iVar6;
  (**(code **)(*(int *)*piVar9 + 0x10))((int *)*piVar9,0x24);
  *(uint *)(*piVar9 + 0x164) = *(uint *)(*piVar9 + 0x164) | 0x90000;
  func_004D01E0(piVar4[0x104],1,piVar4[0x107]);
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (uint *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar7 = func_0016A2FC(puVar5,1,DAT_00331e54,1);
  }
  piVar4[0x105] = (int)puVar7;
  func_00169608(puVar7,0,DAT_00331e58,piVar4[0x103]);
  uVar11 = 0x331b38;
  func_0016A02C(piVar4[0x105],-1,(int *)0xffffffff,0);
  local_98 = &local_94;
  local_a0[1] = 3;
  local_4c = 10;
  local_48 = 0;
  local_94 = 0;
  local_a0[0] = 1;
  local_80 = uVar11 | 0xff;
  local_90 = DAT_00331e60;
  uStack_8c = DAT_00331e5c;
  uStack_88 = DAT_00331e64;
  uStack_84 = DAT_00331e5c;
  uVar17 = DAT_00331e5c;
  fVar14 = DAT_00331e60;
  func_0016898C(piVar4[0x105],local_a0);
  bVar2 = func_00584B94(*DAT_00331e68,0x144);
  if (bVar2) {
    func_005646CC((undefined1 *)objStack_d0,DAT_00331e6c);
    func_004CF5DC(piVar4[0x104],piVar4[0x107],0,objStack_d0);
    func_005646CC((undefined1 *)objStack_d0,DAT_00331e70);
    func_004CF5DC(*piVar9,piVar4[0x107],1,objStack_d0);
    piVar4[0x108] = 2;
  }
  else {
    func_005646CC((undefined1 *)objStack_d0,DAT_00331e74);
    func_004CF5DC(piVar4[0x104],piVar4[0x107],0,objStack_d0);
    func_005646CC((undefined1 *)objStack_d0,DAT_00331e78);
    func_004CF5DC(*piVar9,piVar4[0x107],1,objStack_d0);
    piVar4[0x108] = 0;
  }
  func_00491624(&local_c4,param_2[7],param_2[8],param_2[9]);
  local_3c = s_Actor_CaveZoraSpring_kcl_00331e7c;
  local_40 = iVar8;
  func_004EDB28(piVar4[0x106],(int)&local_40);
  fVar16 = DAT_00331e9c;
  fVar15 = DAT_00331e98;
  iVar8 = *(int *)(*piVar10 + 0x14);
  fVar13 = local_c4 - *(float *)(iVar8 + 0x18);
  bVar2 = DAT_00331e9c == fVar13;
  bVar12 = fVar13 <= DAT_00331e9c;
  if (!bVar12 || bVar2) {
    bVar2 = fVar13 == DAT_00331e98;
    bVar12 = DAT_00331e98 <= fVar13;
  }
  if (bVar12 && !bVar2) {
LAB_00331dc4:
    bVar2 = false;
  }
  else {
    fVar13 = local_c0 - *(float *)(iVar8 + 0x1c);
    bVar2 = DAT_00331e9c == fVar13;
    bVar12 = fVar13 <= DAT_00331e9c;
    if (!bVar12 || bVar2) {
      bVar2 = fVar13 == DAT_00331e98;
      bVar12 = DAT_00331e98 <= fVar13;
    }
    if (bVar12 && !bVar2) goto LAB_00331dc4;
    fVar13 = local_bc - *(float *)(iVar8 + 0x20);
    bVar2 = DAT_00331e9c == fVar13;
    bVar12 = fVar13 <= DAT_00331e9c;
    if (!bVar12 || bVar2) {
      bVar2 = fVar13 == DAT_00331e98;
      bVar12 = DAT_00331e98 <= fVar13;
    }
    if (bVar12 && !bVar2) goto LAB_00331dc4;
    fVar13 = local_b8 - *(float *)(iVar8 + 0x24);
    bVar2 = DAT_00331e9c == fVar13;
    bVar12 = fVar13 <= DAT_00331e9c;
    if (!bVar12 || bVar2) {
      bVar2 = fVar13 == DAT_00331e98;
      bVar12 = DAT_00331e98 <= fVar13;
    }
    if (bVar12 && !bVar2) goto LAB_00331dc4;
    fVar13 = local_b4 - *(float *)(iVar8 + 0x28);
    bVar2 = DAT_00331e9c == fVar13;
    bVar12 = fVar13 <= DAT_00331e9c;
    if (!bVar12 || bVar2) {
      bVar2 = fVar13 == DAT_00331e98;
      bVar12 = DAT_00331e98 <= fVar13;
    }
    if (bVar12 && !bVar2) goto LAB_00331dc4;
    fVar13 = local_b0 - *(float *)(iVar8 + 0x2c);
    bVar2 = DAT_00331e9c == fVar13;
    bVar12 = fVar13 <= DAT_00331e9c;
    if (!bVar12 || bVar2) {
      bVar2 = fVar13 == DAT_00331e98;
      bVar12 = DAT_00331e98 <= fVar13;
    }
    if (bVar12 && !bVar2) goto LAB_00331dc4;
    fVar13 = local_ac - *(float *)(iVar8 + 0x30);
    bVar2 = DAT_00331e9c == fVar13;
    bVar12 = fVar13 <= DAT_00331e9c;
    if (!bVar12 || bVar2) {
      bVar2 = fVar13 == DAT_00331e98;
      bVar12 = DAT_00331e98 <= fVar13;
    }
    if (bVar12 && !bVar2) goto LAB_00331dc4;
    fVar13 = local_a8 - *(float *)(iVar8 + 0x34);
    bVar2 = DAT_00331e9c == fVar13;
    bVar12 = fVar13 <= DAT_00331e9c;
    if (!bVar12 || bVar2) {
      bVar2 = fVar13 == DAT_00331e98;
      bVar12 = DAT_00331e98 <= fVar13;
    }
    if (bVar12 && !bVar2) goto LAB_00331dc4;
    fVar13 = local_a4 - *(float *)(iVar8 + 0x38);
    bVar2 = DAT_00331e9c == fVar13;
    bVar12 = fVar13 <= DAT_00331e9c;
    if (!bVar12 || bVar2) {
      bVar2 = fVar13 == DAT_00331e98;
      bVar12 = DAT_00331e98 <= fVar13;
    }
    if (bVar12 && !bVar2) goto LAB_00331dc4;
    bVar2 = true;
  }
  if (!bVar2) {
    bVar3 = *(byte *)(iVar8 + 0xa8);
    *(byte *)(iVar8 + 0xa8) = bVar3 | 8;
    if ((((local_c4 == 1.0 && local_c0 == fVar14) && (local_bc == fVar14 && local_b8 == fVar14)) &&
        (local_b4 == 1.0 && local_b0 == fVar14)) &&
       ((local_ac == fVar14 && local_a8 == fVar14) && local_a4 == 1.0)) {
      *(undefined4 *)(iVar8 + 0x18) = uVar17;
      *(float *)(iVar8 + 0x1c) = fVar14;
      *(float *)(iVar8 + 0x20) = fVar14;
      *(float *)(iVar8 + 0x24) = fVar14;
      *(undefined4 *)(iVar8 + 0x28) = uVar17;
      *(float *)(iVar8 + 0x2c) = fVar14;
      *(float *)(iVar8 + 0x30) = fVar14;
      *(float *)(iVar8 + 0x34) = fVar14;
      *(undefined4 *)(iVar8 + 0x38) = uVar17;
      bVar3 = bVar3 & 0xfb | 8;
    }
    else {
      func_001151CC((undefined4 *)(iVar8 + 0x18),&local_c4);
      bVar3 = *(byte *)(iVar8 + 0xa8) | 4;
    }
    *(byte *)(iVar8 + 0xa8) = bVar3;
  }
  func_0043625C(*(int **)(piVar4[0x106] + 0x14),piVar4 + 0xf4);
  pfVar1 = DAT_00332098;
  iVar8 = *(int *)(*piVar10 + 0x14);
  fVar14 = ALBW_AS_F32(param_2[4]) - *(float *)(iVar8 + 4);
  bVar2 = fVar16 == fVar14;
  bVar12 = fVar14 <= fVar16;
  if (!bVar12 || bVar2) {
    bVar2 = fVar14 == fVar15;
    bVar12 = fVar15 <= fVar14;
  }
  if (bVar12 && !bVar2) {
LAB_00331f48:
    bVar2 = false;
  }
  else {
    fVar14 = ALBW_AS_F32(param_2[5]) - *(float *)(iVar8 + 8);
    bVar2 = fVar16 == fVar14;
    bVar12 = fVar14 <= fVar16;
    if (!bVar12 || bVar2) {
      bVar2 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar2) goto LAB_00331f48;
    fVar14 = ALBW_AS_F32(param_2[6]) - *(float *)(iVar8 + 0xc);
    bVar2 = fVar16 == fVar14;
    bVar12 = fVar14 <= fVar16;
    if (!bVar12 || bVar2) {
      bVar2 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar2) goto LAB_00331f48;
    bVar2 = true;
  }
  if (bVar2) goto LAB_0033203c;
  *(byte *)(iVar8 + 0xa8) = *(byte *)(iVar8 + 0xa8) | 8;
  fVar14 = ALBW_AS_F32(param_2[4]) - *pfVar1;
  bVar2 = fVar16 == fVar14;
  bVar12 = fVar14 <= fVar16;
  if (!bVar12 || bVar2) {
    bVar2 = fVar14 == fVar15;
    bVar12 = fVar15 <= fVar14;
  }
  if (bVar12 && !bVar2) {
LAB_0033201c:
    *(uint *)(iVar8 + 4) = param_2[4];
    *(uint *)(iVar8 + 8) = param_2[5];
    *(uint *)(iVar8 + 0xc) = param_2[6];
    bVar3 = *(byte *)(iVar8 + 0xa8) | 2;
  }
  else {
    fVar14 = ALBW_AS_F32(param_2[5]) - pfVar1[1];
    bVar2 = fVar16 == fVar14;
    bVar12 = fVar14 <= fVar16;
    if (!bVar12 || bVar2) {
      bVar2 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar2) goto LAB_0033201c;
    fVar14 = ALBW_AS_F32(param_2[6]) - pfVar1[2];
    bVar2 = fVar16 == fVar14;
    bVar12 = fVar14 <= fVar16;
    if (!bVar12 || bVar2) {
      bVar2 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar2) goto LAB_0033201c;
    *(float *)(iVar8 + 4) = *pfVar1;
    *(float *)(iVar8 + 8) = pfVar1[1];
    *(float *)(iVar8 + 0xc) = pfVar1[2];
    bVar3 = *(byte *)(iVar8 + 0xa8) & 0xfd;
  }
  *(byte *)(iVar8 + 0xa8) = bVar3;
LAB_0033203c:
  local_44 = piVar4[0xb3];
  func_004EDAD0(piVar4[0x106],&local_44);
  *(short *)(*piVar10 + 0x2c) = (short)piVar4[0x15];
  func_004A7F00(*DAT_0033209c,*piVar10,2);
  func_004ED9C8(*piVar10);
  piVar4[0xb8] = piVar4[0xb8] | 2;
  return piVar4;
}

