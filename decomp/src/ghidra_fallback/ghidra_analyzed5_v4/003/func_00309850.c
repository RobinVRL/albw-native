#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00111A20(int param_1,undefined4 param_2,uint *param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D18(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00308C2C(int param_1,float *param_2,int param_3);
extern int func_003095F0(int param_1,float *param_2,int param_3);
extern int func_004356B4(int *param_1);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_00491938(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int DAT_00309ebc;
extern int *DAT_00309ec0;
extern int DAT_00309ec4;
extern float *DAT_00309ec8;
extern uint DAT_00309ecc;
extern int *DAT_00309ed0;
extern int *DAT_00309ed4;
extern int *DAT_00309ed8;
extern undefined4 DAT_00309edc;
extern int *DAT_00309ee0;
extern int *DAT_00309ee4;
extern int DAT_00309ee8;
extern uint DAT_00309eec;
extern float DAT_00309ef0;
extern float DAT_00309ef4;
extern float DAT_00309ef8;
extern float *DAT_00309efc;
extern undefined4 DAT_0030a05c;
extern int *DAT_0030a060;

// USA 00309850 <- EU 0030982C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_00309ebc int
// GLOBAL DAT_00309ec0 int *
// GLOBAL DAT_00309ec4 int
// GLOBAL DAT_00309ec8 float *
// GLOBAL DAT_00309ecc uint
// GLOBAL DAT_00309ed0 int *
// GLOBAL DAT_00309ed4 int *
// GLOBAL DAT_00309ed8 int *
// GLOBAL DAT_00309edc undefined4
// GLOBAL DAT_00309ee0 int *
// GLOBAL DAT_00309ee4 int *
// GLOBAL DAT_00309ee8 int
// GLOBAL DAT_00309eec uint
// GLOBAL DAT_00309ef0 float
// GLOBAL DAT_00309ef4 float
// GLOBAL DAT_00309ef8 float
// GLOBAL DAT_00309efc float *
// GLOBAL DAT_0030a05c undefined4
// GLOBAL DAT_0030a060 int *

/* WARNING: Variable defined which should be unmapped: objStack_e0 */
/* WARNING: Variable defined which should be unmapped: objStack_d8 */

int * func_00309850(undefined4 *param_1,uint *param_2,undefined4 param_3,int param_4,float *param_5,
                   int param_6,int param_7)

{
  int *piVar1;
  float *pfVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define objStack_e0 ((uint *)(albw_frame + 0x0))
  #define objStack_d8 ((uint *)(albw_frame + 0x8))
  #define local_cc (*(float *)(albw_frame + 0x14))
  #define local_c8 (*(int *)(albw_frame + 0x18))
  #define local_c4 (*(int *)(albw_frame + 0x1c))
  #define local_bc (*(float * *)(albw_frame + 0x24))
  #define local_b8 (*(float *)(albw_frame + 0x28))
  #define uStack_b4 (*(uint *)(albw_frame + 0x2c))
  #define uStack_b0 (*(uint *)(albw_frame + 0x30))
  #define uStack_95 (*(undefined1 *)(albw_frame + 0x4b))
  #define local_90 (*(float *)(albw_frame + 0x50))
  #define local_8c (*(float *)(albw_frame + 0x54))
  #define local_88 (*(float *)(albw_frame + 0x58))
  #define local_84 (*(float *)(albw_frame + 0x5c))
  #define local_80 (*(float *)(albw_frame + 0x60))
  #define local_7c (*(float *)(albw_frame + 0x64))
  #define local_78 (*(float *)(albw_frame + 0x68))
  #define local_74 (*(float *)(albw_frame + 0x6c))
  #define local_70 (*(float *)(albw_frame + 0x70))
  #define local_68 (*(int *)(albw_frame + 0x78))
  #define local_64 ((uint *)(albw_frame + 0x7c))
  #define local_58 (*(float *)(albw_frame + 0x88))
  #define iStack_54 (*(int *)(albw_frame + 0x8c))
  #define iStack_50 (*(int *)(albw_frame + 0x90))
  #define afStack_4c ((float *)(albw_frame + 0x94))
  #define puStack_34 (*(undefined4 * *)(albw_frame + 0xac))
  #define puStack_30 (*(uint * *)(albw_frame + 0xb0))
  #define local_2c (*(undefined4 *)(albw_frame + 0xb4))
  #define local_28 (*(int *)(albw_frame + 0xb8))
  puStack_34 = param_1;
  puStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  piVar6 = func_00150E40(param_1,param_2);
  iVar9 = DAT_00309ebc;
  piVar6[200] = DAT_00309ebc + 0x54;
  *piVar6 = iVar9;
  piVar10 = piVar6 + 0x103;
  piVar6[0x103] = 0;
  puVar7 = (undefined4 *)func_0010BAB4(0x48);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_004EDC9C(puVar7);
  }
  piVar6[0x104] = (int)puVar8;
  piVar11 = piVar6 + 0x104;
  puVar7 = (undefined4 *)func_0010BAB4(0x48);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_004EDC9C(puVar7);
  }
  piVar6[0x105] = (int)puVar8;
  piVar12 = piVar6 + 0x105;
  iVar9 = func_0054D964((int)piVar6,0);
  piVar6[0x106] = iVar9;
  iVar9 = func_0054D964((int)piVar6,1);
  piVar6[0x107] = iVar9;
  iVar9 = func_0054D964((int)piVar6,0);
  piVar6[0x108] = iVar9;
  piVar6[0x109] = piVar6[0xf4];
  piVar6[0x10a] = piVar6[0xf5];
  piVar6[0x10b] = piVar6[0xf6];
  piVar6[0x10c] = 0;
  piVar1 = DAT_00309ec0;
  *(char *)(piVar6 + 0x10d) = (char)local_2c;
  *(undefined1 *)((int)piVar6 + 0x435) = 0;
  *(undefined1 *)((int)piVar6 + 0x436) = 1;
  *(undefined1 *)((int)piVar6 + 0x437) = 0;
  iVar9 = piVar1[1];
  piVar6[0x110] = *piVar1;
  piVar6[0x111] = iVar9;
  iVar9 = DAT_00309ec4;
  piVar6[0x10e] = DAT_00309ec4;
  piVar6[0x10f] = (int)piVar6;
  iVar13 = piVar1[2];
  piVar6[0x115] = piVar1[3];
  piVar6[0x112] = iVar9;
  piVar6[0x113] = (int)piVar6;
  piVar6[0x114] = iVar13;
  objStack_e0[0] = 1;
  objStack_e0[1] = 0;
  objStack_d8[0] = 0;
  iVar9 = func_0014E428((int)piVar6,0,0,0,1,0,0);
  piVar6[0x103] = iVar9;
  *(uint *)(iVar9 + 0x164) = *(uint *)(iVar9 + 0x164) | 0x40000000;
  func_00491938((float *)(iVar9 + 0x80),0,piVar6[0xfa],0);
  iVar9 = *piVar10;
  *(uint *)(iVar9 + 0x164) = *(uint *)(iVar9 + 0x164) | 0x40000000;
  *(int *)(iVar9 + 0x8c) = piVar6[0xf4];
  *(int *)(iVar9 + 0x9c) = piVar6[0xf5];
  *(int *)(iVar9 + 0xac) = piVar6[0xf6];
  (**(code **)(*(int *)*piVar10 + 0x10))((int *)*piVar10,0x24);
  *(uint *)(*piVar10 + 0x164) = *(uint *)(*piVar10 + 0x164) | 0x10000;
  local_58 = ALBW_AS_F32(piVar6[0xf4]);
  iStack_54 = piVar6[0xf5];
  iStack_50 = piVar6[0xf6];
  iVar9 = piVar6[0x103];
  *(uint *)(iVar9 + 0x164) = *(uint *)(iVar9 + 0x164) | 0x40000000;
  func_00115D18(afStack_4c,(float *)(iVar9 + 0x80),param_5);
  func_00115C54(&local_58,&local_58,afStack_4c);
  if (param_6 == 0) {
    func_00308C2C((int)piVar6,&local_58,param_7);
    func_003095F0((int)piVar6,&local_58,local_28);
    *(int *)(piVar6[0x104] + 0x18) = piVar6[0x106];
    goto LAB_00309fc4;
  }
  piVar10 = (int *)piVar6[0x108];
  local_bc = DAT_00309ec8;
  fVar16 = func_0054DE3C(piVar6,0,1);
  func_00115D70(&local_b8,local_bc,fVar16);
  objStack_d8[0] = (uint)ALBW_AS_U32(local_b8);
  objStack_d8[1] = uStack_b4;
  objStack_d8[2] = uStack_b0;
  func_00115CE4(&local_cc,(float *)(piVar10 + 0x19),(float *)objStack_d8);
  func_00115C54(&local_cc,&local_cc,&local_58);
  objStack_e0[1] = DAT_00309ecc;
  piVar10[1] = (int)ALBW_AS_U32(local_cc);
  piVar10[2] = local_c8;
  piVar10[3] = local_c4;
  uVar4 = objStack_e0[1];
  *(undefined2 *)(piVar10 + 10) = (undefined2)objStack_e0[1];
  objStack_e0[1] = uVar4;
  func_004356B4(piVar10);
  func_00308C2C((int)piVar6,&local_58,param_7);
  func_003095F0((int)piVar6,&local_58,local_28);
  iVar13 = -1;
  iVar9 = func_00588BE4((int)piVar6);
  if (iVar9 == *DAT_00309ed0) {
    iVar13 = 0;
  }
  else if (iVar9 == *DAT_00309ed4) {
    iVar13 = 1;
  }
  else if (iVar9 == *DAT_00309ed8) {
    iVar13 = 2;
    *(undefined4 *)(piVar6[0x103] + 0x14c) = DAT_00309edc;
  }
  else if (iVar9 == *DAT_00309ee0) {
    iVar13 = 3;
    *(undefined4 *)(piVar6[0x103] + 0x14c) = DAT_00309edc;
  }
  else if (iVar9 == *DAT_00309ee4) {
    iVar13 = 4;
    *(undefined4 *)(piVar6[0x103] + 0x14c) = DAT_00309edc;
  }
  piVar10 = (int *)(DAT_00309ee8 + iVar13 * 8);
  (**(code **)(*piVar10 + 8))(piVar10);
  local_68 = piVar10[1];
  objStack_e0[1] = (uint)(objStack_d8 + 1);
  objStack_d8[0] = 0x40;
  uStack_95 = 0;
  objStack_d8[1] = objStack_d8[1] & 0xffffff00;
  objStack_e0[0] = DAT_00309eec;
  func_00111A20((int)objStack_e0,local_68,local_64);
  func_004EDB28(piVar6[0x104],(int)objStack_e0);
  func_00491624(&local_90,0,piVar6[0xfa],0);
  fVar18 = DAT_00309ef4;
  fVar16 = DAT_00309ef0;
  iVar9 = *(int *)(*piVar11 + 0x14);
  fVar17 = local_90 - *(float *)(iVar9 + 0x18);
  bVar14 = DAT_00309ef4 == fVar17;
  bVar15 = fVar17 <= DAT_00309ef4;
  if (!bVar15 || bVar14) {
    bVar14 = fVar17 == DAT_00309ef0;
    bVar15 = DAT_00309ef0 <= fVar17;
  }
  if (bVar15 && !bVar14) {
LAB_00309d58:
    bVar14 = false;
  }
  else {
    fVar17 = local_8c - *(float *)(iVar9 + 0x1c);
    bVar14 = DAT_00309ef4 == fVar17;
    bVar15 = fVar17 <= DAT_00309ef4;
    if (!bVar15 || bVar14) {
      bVar14 = fVar17 == DAT_00309ef0;
      bVar15 = DAT_00309ef0 <= fVar17;
    }
    if (bVar15 && !bVar14) goto LAB_00309d58;
    fVar17 = local_88 - *(float *)(iVar9 + 0x20);
    bVar14 = DAT_00309ef4 == fVar17;
    bVar15 = fVar17 <= DAT_00309ef4;
    if (!bVar15 || bVar14) {
      bVar14 = fVar17 == DAT_00309ef0;
      bVar15 = DAT_00309ef0 <= fVar17;
    }
    if (bVar15 && !bVar14) goto LAB_00309d58;
    fVar17 = local_84 - *(float *)(iVar9 + 0x24);
    bVar14 = DAT_00309ef4 == fVar17;
    bVar15 = fVar17 <= DAT_00309ef4;
    if (!bVar15 || bVar14) {
      bVar14 = fVar17 == DAT_00309ef0;
      bVar15 = DAT_00309ef0 <= fVar17;
    }
    if (bVar15 && !bVar14) goto LAB_00309d58;
    fVar17 = local_80 - *(float *)(iVar9 + 0x28);
    bVar14 = DAT_00309ef4 == fVar17;
    bVar15 = fVar17 <= DAT_00309ef4;
    if (!bVar15 || bVar14) {
      bVar14 = fVar17 == DAT_00309ef0;
      bVar15 = DAT_00309ef0 <= fVar17;
    }
    if (bVar15 && !bVar14) goto LAB_00309d58;
    fVar17 = local_7c - *(float *)(iVar9 + 0x2c);
    bVar14 = DAT_00309ef4 == fVar17;
    bVar15 = fVar17 <= DAT_00309ef4;
    if (!bVar15 || bVar14) {
      bVar14 = fVar17 == DAT_00309ef0;
      bVar15 = DAT_00309ef0 <= fVar17;
    }
    if (bVar15 && !bVar14) goto LAB_00309d58;
    fVar17 = local_78 - *(float *)(iVar9 + 0x30);
    bVar14 = DAT_00309ef4 == fVar17;
    bVar15 = fVar17 <= DAT_00309ef4;
    if (!bVar15 || bVar14) {
      bVar14 = fVar17 == DAT_00309ef0;
      bVar15 = DAT_00309ef0 <= fVar17;
    }
    if (bVar15 && !bVar14) goto LAB_00309d58;
    fVar17 = local_74 - *(float *)(iVar9 + 0x34);
    bVar14 = DAT_00309ef4 == fVar17;
    bVar15 = fVar17 <= DAT_00309ef4;
    if (!bVar15 || bVar14) {
      bVar14 = fVar17 == DAT_00309ef0;
      bVar15 = DAT_00309ef0 <= fVar17;
    }
    if (bVar15 && !bVar14) goto LAB_00309d58;
    fVar17 = local_70 - *(float *)(iVar9 + 0x38);
    bVar14 = DAT_00309ef4 == fVar17;
    bVar15 = fVar17 <= DAT_00309ef4;
    if (!bVar15 || bVar14) {
      bVar14 = fVar17 == DAT_00309ef0;
      bVar15 = DAT_00309ef0 <= fVar17;
    }
    if (bVar15 && !bVar14) goto LAB_00309d58;
    bVar14 = true;
  }
  if (!bVar14) {
    bVar5 = *(byte *)(iVar9 + 0xa8);
    *(byte *)(iVar9 + 0xa8) = bVar5 | 8;
    uVar3 = DAT_0030a05c;
    fVar17 = DAT_00309ef8;
    if ((((local_90 == 1.0) && (local_8c == DAT_00309ef8 && local_88 == DAT_00309ef8)) &&
        (local_84 == DAT_00309ef8 && local_80 == 1.0)) &&
       ((local_7c == DAT_00309ef8 && local_78 == DAT_00309ef8 &&
        (local_74 == DAT_00309ef8 && local_70 == 1.0)))) {
      *(undefined4 *)(iVar9 + 0x18) = DAT_0030a05c;
      *(float *)(iVar9 + 0x1c) = fVar17;
      *(float *)(iVar9 + 0x20) = fVar17;
      *(float *)(iVar9 + 0x24) = fVar17;
      *(undefined4 *)(iVar9 + 0x28) = uVar3;
      bVar5 = bVar5 & 0xfb | 8;
      *(float *)(iVar9 + 0x2c) = fVar17;
      *(float *)(iVar9 + 0x30) = fVar17;
      *(float *)(iVar9 + 0x34) = fVar17;
      *(undefined4 *)(iVar9 + 0x38) = uVar3;
    }
    else {
      func_001151CC((undefined4 *)(iVar9 + 0x18),&local_90);
      bVar5 = *(byte *)(iVar9 + 0xa8) | 4;
    }
    *(byte *)(iVar9 + 0xa8) = bVar5;
  }
  pfVar2 = DAT_00309efc;
  iVar9 = *(int *)(piVar6[0x104] + 0x14);
  fVar17 = ALBW_AS_F32(param_2[4]) - *(float *)(iVar9 + 4);
  bVar14 = fVar18 == fVar17;
  bVar15 = fVar17 <= fVar18;
  if (!bVar15 || bVar14) {
    bVar14 = fVar17 == fVar16;
    bVar15 = fVar16 <= fVar17;
  }
  if (bVar15 && !bVar14) {
LAB_00309e74:
    bVar14 = false;
  }
  else {
    fVar17 = ALBW_AS_F32(param_2[5]) - *(float *)(iVar9 + 8);
    bVar14 = fVar18 == fVar17;
    bVar15 = fVar17 <= fVar18;
    if (!bVar15 || bVar14) {
      bVar14 = fVar17 == fVar16;
      bVar15 = fVar16 <= fVar17;
    }
    if (bVar15 && !bVar14) goto LAB_00309e74;
    fVar17 = ALBW_AS_F32(param_2[6]) - *(float *)(iVar9 + 0xc);
    bVar14 = fVar18 == fVar17;
    bVar15 = fVar17 <= fVar18;
    if (!bVar15 || bVar14) {
      bVar14 = fVar17 == fVar16;
      bVar15 = fVar16 <= fVar17;
    }
    if (bVar15 && !bVar14) goto LAB_00309e74;
    bVar14 = true;
  }
  if (!bVar14) {
    *(byte *)(iVar9 + 0xa8) = *(byte *)(iVar9 + 0xa8) | 8;
    fVar17 = ALBW_AS_F32(param_2[4]) - *pfVar2;
    bVar14 = fVar18 == fVar17;
    bVar15 = fVar17 <= fVar18;
    if (!bVar15 || bVar14) {
      bVar14 = fVar17 == fVar16;
      bVar15 = fVar16 <= fVar17;
    }
    if (bVar15 && !bVar14) {
LAB_00309f94:
      *(uint *)(iVar9 + 4) = param_2[4];
      *(uint *)(iVar9 + 8) = param_2[5];
      *(uint *)(iVar9 + 0xc) = param_2[6];
      bVar5 = *(byte *)(iVar9 + 0xa8) | 2;
    }
    else {
      fVar17 = ALBW_AS_F32(param_2[5]) - pfVar2[1];
      bVar14 = fVar18 == fVar17;
      bVar15 = fVar17 <= fVar18;
      if (!bVar15 || bVar14) {
        bVar14 = fVar17 == fVar16;
        bVar15 = fVar16 <= fVar17;
      }
      if (bVar15 && !bVar14) goto LAB_00309f94;
      fVar17 = ALBW_AS_F32(param_2[6]) - pfVar2[2];
      bVar14 = fVar18 == fVar17;
      bVar15 = fVar17 <= fVar18;
      if (!bVar15 || bVar14) {
        bVar14 = fVar17 == fVar16;
        bVar15 = fVar16 <= fVar17;
      }
      if (bVar15 && !bVar14) goto LAB_00309f94;
      *(float *)(iVar9 + 4) = *pfVar2;
      *(float *)(iVar9 + 8) = pfVar2[1];
      *(float *)(iVar9 + 0xc) = pfVar2[2];
      bVar5 = *(byte *)(iVar9 + 0xa8) & 0xfd;
    }
    *(byte *)(iVar9 + 0xa8) = bVar5;
  }
  func_0043625C(*(int **)(piVar6[0x104] + 0x14),piVar6 + 0xf4);
LAB_00309fc4:
  func_004ED9C8(piVar6[0x104]);
  local_64[0] = piVar6[0xb3];
  func_004EDAD0(*piVar11,local_64);
  piVar10 = DAT_0030a060;
  *(short *)(*piVar11 + 0x2c) = (short)piVar6[0x15];
  func_004A879C(*piVar10,*piVar11,2);
  *(int *)(piVar6[0x105] + 0x18) = piVar6[0x108];
  func_004ED9C8(*piVar12);
  local_64[0] = piVar6[0xb3];
  func_004EDAD0(*piVar12,local_64);
  *(short *)(*piVar12 + 0x2c) = (short)piVar6[0x15];
  func_004A879C(*piVar10,*piVar12,2);
  return piVar6;
}

