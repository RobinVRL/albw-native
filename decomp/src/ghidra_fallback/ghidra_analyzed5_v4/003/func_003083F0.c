#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_00307CDC(int param_1);
extern int func_004356B4(int *param_1);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004ECF6C(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00664B0C(undefined4 *param_1,undefined1 param_2);
extern int DAT_003087a0;
extern undefined *DAT_003087a4;
extern undefined4 DAT_003087a8;
extern undefined DAT_003087ac;
extern int DAT_003087c0;
extern float DAT_003087c4;
extern int *DAT_003087c8;
extern undefined4 *DAT_003087cc;
extern undefined *DAT_003087d0;
extern int DAT_003087d4;
extern float *DAT_00308ae0;
extern char s_cState_OnBreak_00308ac0[];
extern char s_cState_OnStart_003087e4[];
extern char s_cState_WaitOpen_00308ad0[];
extern char s_cState_Wait_003087d8[];

// USA 003083F0 <- EU 003083CC (Ghidra, non-matching)
// GLOBAL DAT_003087a0 int
// GLOBAL DAT_003087a4 undefined *
// GLOBAL DAT_003087a8 undefined4
// GLOBAL DAT_003087ac undefined
// GLOBAL DAT_003087c0 int
// GLOBAL DAT_003087c4 float
// GLOBAL DAT_003087c8 int *
// GLOBAL DAT_003087cc undefined4 *
// GLOBAL DAT_003087d0 undefined *
// GLOBAL DAT_003087d4 int
// GLOBAL DAT_00308ae0 float *
// GLOBAL s_cState_OnBreak_00308ac0 string
// GLOBAL s_cState_OnStart_003087e4 string
// GLOBAL s_cState_WaitOpen_00308ad0 string
// GLOBAL s_cState_Wait_003087d8 string

/* WARNING: Variable defined which should be unmapped: objStack_50 */
/* WARNING: Variable defined which should be unmapped: objStack_4c */

int func_003083F0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  float fparam_0;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 uVar16;
  int iVar17;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define objStack_4c ((uint *)(albw_frame + 0x4))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(uint * *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define uStack_34 (*(uint *)(albw_frame + 0x1c))
  #define uStack_30 (*(uint *)(albw_frame + 0x20))
  piVar2 = func_00150E40(param_1,param_2);
  iVar17 = DAT_003087a0;
  *piVar2 = DAT_003087a0;
  piVar2[200] = iVar17 + 0x54;
  puVar3 = func_0010A794(piVar2 + 0x103);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  iVar4 = func_00100118((int)(puVar3 + 0xb),DAT_003087a4,8,2);
  uVar8 = DAT_003087a8;
  *(undefined4 *)(iVar4 + 0x10) = 0;
  *(undefined4 *)(iVar4 + 0x14) = 0;
  *(undefined4 *)(iVar4 + 0x18) = 0;
  iVar17 = DAT_003087c0;
  *(undefined4 *)(iVar4 + 0x1c) = uVar8;
  local_3c = (uint *)&DAT_003087ac;
  local_40 = iVar17;
  objStack_50[0] = 1;
  iVar4 = func_001663BC((undefined4 *)(iVar4 + 0x20),&local_40,*(undefined4 *)(iVar4 + -0x16c),0,1);
  *(undefined1 *)(iVar4 + 0x108) = 0;
  iVar12 = iVar4 + -0x458;
  *(undefined4 *)(iVar4 + 0x10c) = 0;
  piVar2 = (int *)func_0054D964(iVar12,0);
  iVar7 = *(int *)(iVar4 + -0x84);
  iVar9 = *(int *)(iVar4 + -0x80);
  piVar2[1] = *(int *)(iVar4 + -0x88);
  piVar2[2] = iVar7;
  piVar2[3] = iVar9;
  func_004356B4(piVar2);
  iVar7 = func_0054D964(iVar12,0);
  *(int *)(iVar4 + -0x28) = iVar7;
  fparam_0 = DAT_003087c4;
  uVar8 = *(undefined4 *)(iVar4 + -0x84);
  uVar10 = *(undefined4 *)(iVar4 + -0x80);
  *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar4 + -0x88);
  *(undefined4 *)(iVar7 + 8) = uVar8;
  *(undefined4 *)(iVar7 + 0xc) = uVar10;
  iVar7 = *(int *)(iVar4 + -0x28);
  func_00115D70(&local_38,(float *)(piVar2 + 0x16),fparam_0);
  *(float *)(iVar7 + 0x58) = local_38;
  *(uint *)(iVar7 + 0x5c) = uStack_34;
  *(uint *)(iVar7 + 0x60) = uStack_30;
  func_004356B4(*(int **)(iVar4 + -0x28));
  objStack_4c[2] = CONCAT22((*(undefined2 *)((char *)&objStack_4c[2] + 2)),0xa4);
  *(undefined2 *)(*(int *)(iVar4 + -0x28) + 0x28) = 0xa4;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar3 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar3 = func_004EDC9C(puVar5);
  }
  *(undefined4 **)(iVar4 + -0x24) = puVar3;
  puVar3[6] = *(undefined4 *)(iVar4 + -0x28);
  objStack_50[0] = *(uint *)(iVar4 + -0x18c);
  func_004EDAD0(*(int *)(iVar4 + -0x24),objStack_50);
  *(undefined2 *)(*(int *)(iVar4 + -0x24) + 0x2c) = *(undefined2 *)(iVar4 + -0x404);
  func_004A879C(*DAT_003087c8,*(int *)(iVar4 + -0x24),2);
  *(undefined1 *)(iVar4 + -0x46) = 4;
  *(int *)(iVar4 + -0x38) = iVar12;
  iVar7 = func_0010BA78(0x40);
  *(int *)(iVar4 + -0x34) = iVar7;
  puVar3 = DAT_003087cc;
  *(uint *)(iVar4 + -0x30) = iVar7 + (uint)*(byte *)(iVar4 + -0x46) * 8;
  iVar9 = 4;
  puVar5 = (undefined4 *)(iVar7 + -8);
  do {
    uVar8 = puVar3[0x13];
    iVar9 = iVar9 + -1;
    puVar5[2] = puVar3[0x12];
    puVar5[3] = uVar8;
    uVar8 = puVar3[0x13];
    puVar5[4] = puVar3[0x12];
    puVar5[5] = uVar8;
    puVar5 = puVar5 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)(iVar4 + -0x46);
  uVar13 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar13 << 3);
  *(undefined4 **)(iVar4 + -0x2c) = puVar5;
  if (uVar13 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar8 = puVar3[5];
      *puVar5 = puVar3[4];
      puVar5[1] = uVar8;
      puVar6 = puVar5;
    }
    for (iVar7 = (int)uVar13 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar8 = puVar3[5];
      puVar6[2] = puVar3[4];
      puVar6[3] = uVar8;
      uVar8 = puVar3[5];
      puVar6[4] = puVar3[4];
      puVar6[5] = uVar8;
      puVar6 = puVar6 + 4;
    }
  }
  puVar3 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar7 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0x24;
    puVar3[1] = 4;
    iVar7 = func_00100118((int)(puVar3 + 2),DAT_003087d0,0x24,4);
  }
  if (iVar7 != 0) {
    *(int *)(iVar4 + -0x40) = iVar7;
    *(undefined4 *)(iVar4 + -0x44) = 4;
  }
  iVar7 = DAT_003087d4;
  *(undefined4 **)(iVar4 + -0x104) = (undefined4 *)(iVar4 + -0x4c);
  *(undefined2 *)(iVar7 + iVar12) = 4;
  local_3c = (uint *)s_cState_Wait_003087d8;
  local_40 = iVar17;
  iVar7 = *(int *)(iVar4 + -0x40);
  puVar15 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar17 + 8))(&local_40);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_3c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_003086e4;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_003086e4:
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 <= (int)uVar13) {
    uVar13 = iVar7 - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar15,local_3c,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  puVar3 = *(undefined4 **)(iVar4 + -0x34);
  uVar16 = DAT_003087cc[1];
  uVar10 = DAT_003087cc[2];
  uVar11 = DAT_003087cc[3];
  uVar14 = DAT_003087cc[4];
  uVar8 = DAT_003087cc[5];
  *puVar3 = *DAT_003087cc;
  puVar3[1] = uVar16;
  puVar3 = *(undefined4 **)(iVar4 + -0x30);
  *puVar3 = uVar10;
  puVar3[1] = uVar11;
  puVar3 = *(undefined4 **)(iVar4 + -0x2c);
  puVar3[1] = uVar8;
  *puVar3 = uVar14;
  local_3c = (uint *)s_cState_OnStart_003087e4;
  local_40 = iVar17;
  if (*(uint *)(iVar4 + -0x44) < 2) {
    iVar7 = *(int *)(iVar4 + -0x40);
  }
  else {
    iVar7 = *(int *)(iVar4 + -0x40) + 0x24;
  }
  puVar15 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar17 + 8))(&local_40);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_3c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00308800;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00308800:
  if (*(int *)(iVar7 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar15,local_3c,uVar13);
  puVar3 = DAT_003087cc;
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  uVar10 = puVar3[4];
  iVar7 = *(int *)(iVar4 + -0x34);
  uVar8 = puVar3[5];
  uVar14 = puVar3[7];
  uVar11 = puVar3[8];
  uVar16 = puVar3[9];
  *(undefined4 *)(iVar7 + 8) = puVar3[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar14;
  iVar7 = *(int *)(iVar4 + -0x30);
  *(undefined4 *)(iVar7 + 8) = uVar11;
  *(undefined4 *)(iVar7 + 0xc) = uVar16;
  iVar7 = *(int *)(iVar4 + -0x2c);
  *(undefined4 *)(iVar7 + 8) = uVar10;
  *(undefined4 *)(iVar7 + 0xc) = uVar8;
  local_3c = (uint *)s_cState_OnBreak_00308ac0;
  local_40 = iVar17;
  if (*(uint *)(iVar4 + -0x44) < 3) {
    iVar7 = *(int *)(iVar4 + -0x40);
  }
  else {
    iVar7 = *(int *)(iVar4 + -0x40) + 0x48;
  }
  puVar15 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar17 + 8))(&local_40);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_3c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_003088d4;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_003088d4:
  if (*(int *)(iVar7 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar15,local_3c,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  puVar3 = DAT_003087cc;
  iVar7 = *(int *)(iVar4 + -0x34);
  uVar11 = DAT_003087cc[0xb];
  uVar8 = DAT_003087cc[0xc];
  uVar14 = DAT_003087cc[0xd];
  uVar10 = DAT_003087cc[4];
  uVar16 = DAT_003087cc[5];
  *(undefined4 *)(iVar7 + 0x10) = DAT_003087cc[10];
  *(undefined4 *)(iVar7 + 0x14) = uVar11;
  iVar7 = *(int *)(iVar4 + -0x30);
  *(undefined4 *)(iVar7 + 0x10) = uVar8;
  *(undefined4 *)(iVar7 + 0x14) = uVar14;
  iVar7 = *(int *)(iVar4 + -0x2c);
  *(undefined4 *)(iVar7 + 0x10) = uVar10;
  *(undefined4 *)(iVar7 + 0x14) = uVar16;
  local_3c = (uint *)s_cState_WaitOpen_00308ad0;
  local_40 = iVar17;
  if (*(uint *)(iVar4 + -0x44) < 4) {
    iVar7 = *(int *)(iVar4 + -0x40);
  }
  else {
    iVar7 = *(int *)(iVar4 + -0x40) + 0x6c;
  }
  puVar15 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar17 + 8))(&local_40);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_3c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_003089ac;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_003089ac:
  if (*(int *)(iVar7 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar15,local_3c,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  uVar8 = puVar3[5];
  uVar11 = puVar3[4];
  iVar17 = *(int *)(iVar4 + -0x34);
  uVar14 = puVar3[0xf];
  uVar10 = puVar3[0x10];
  uVar16 = puVar3[0x11];
  *(undefined4 *)(iVar17 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar17 + 0x1c) = uVar14;
  iVar17 = *(int *)(iVar4 + -0x30);
  *(undefined4 *)(iVar17 + 0x18) = uVar10;
  *(undefined4 *)(iVar17 + 0x1c) = uVar16;
  iVar17 = *(int *)(iVar4 + -0x2c);
  *(undefined4 *)(iVar17 + 0x18) = uVar11;
  *(undefined4 *)(iVar17 + 0x1c) = uVar8;
  func_00664B0C((undefined4 *)(iVar4 + -0x4c),0);
  objStack_50[0] = 0;
  objStack_4c[0] = 0;
  objStack_4c[1] = 0;
  uVar8 = func_0014E428(iVar12,1,0,0,0,0,0);
  *(undefined4 *)(iVar4 + -0x10) = uVar8;
  func_00115C54(&local_38,(float *)(iVar4 + -0x88),DAT_00308ae0);
  objStack_4c[0] = (uint)ALBW_AS_U32(local_38);
  objStack_4c[1] = uStack_34;
  objStack_4c[2] = uStack_30;
  iVar17 = *(int *)(iVar4 + -0x10);
  *(uint *)(iVar17 + 0x164) = *(uint *)(iVar17 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar17 + 0x80),*(uint *)(iVar4 + -0x70),(float *)objStack_4c);
  func_004CEAF0(*(int *)(iVar4 + -0x10));
  func_00307CDC(iVar12);
  *(uint *)(iVar4 + -0x178) = *(uint *)(iVar4 + -0x178) | 2;
  func_004ECF6C(iVar12);
  return iVar12;
}

