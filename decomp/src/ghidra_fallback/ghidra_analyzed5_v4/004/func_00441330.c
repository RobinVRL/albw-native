#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_00254ECC(int param_1,undefined4 param_2);
extern int func_00254EFC(undefined4 *param_1,int *param_2,int *param_3);
extern int func_004B948C(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0066C748(undefined4 *param_1,undefined1 param_2);
extern int DAT_004416fc;
extern int DAT_00441700;
extern int DAT_00441704;
extern undefined4 DAT_00441708;
extern undefined4 DAT_0044170c;
extern undefined4 DAT_00441710;
extern undefined1 *DAT_00441714;
extern int *DAT_00441718;
extern undefined4 *DAT_0044171c;
extern undefined *DAT_00441720;
extern char s_cBaseState_EndMsg_004418cc[];
extern char s_cBaseState_Invalid_00441724[];
extern char s_cBaseState_Reset_004418e0[];
extern char s_cBaseState_RunMsg_00441738[];
extern char s_cBaseState_WaitChoice_004418b4[];
extern char s_cBaseState_WaitNext_0044174c[];

// USA 00441330 <- EU 00441310 (Ghidra, non-matching)
// GLOBAL DAT_004416fc int
// GLOBAL DAT_00441700 int
// GLOBAL DAT_00441704 int
// GLOBAL DAT_00441708 undefined4
// GLOBAL DAT_0044170c undefined4
// GLOBAL DAT_00441710 undefined4
// GLOBAL DAT_00441714 undefined1 *
// GLOBAL DAT_00441718 int *
// GLOBAL DAT_0044171c undefined4 *
// GLOBAL DAT_00441720 undefined *
// GLOBAL s_cBaseState_EndMsg_004418cc string
// GLOBAL s_cBaseState_Invalid_00441724 string
// GLOBAL s_cBaseState_Reset_004418e0 string
// GLOBAL s_cBaseState_RunMsg_00441738 string
// GLOBAL s_cBaseState_WaitChoice_004418b4 string
// GLOBAL s_cBaseState_WaitNext_0044174c string

undefined4 * func_00441330(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(char * *)(albw_frame + 0xc))
  #define puStack_34 (*(undefined4 * *)(albw_frame + 0x1c))
  #define piStack_30 (*(int * *)(albw_frame + 0x20))
  #define local_2c (*(int * *)(albw_frame + 0x24))
  #define piStack_28 (*(int * *)(albw_frame + 0x28))
  puStack_34 = param_1;
  piStack_30 = param_2;
  local_2c = param_3;
  piStack_28 = param_4;
  piVar4 = func_004B9A10(param_1,1);
  iVar14 = DAT_004416fc + 0xac;
  *piVar4 = DAT_004416fc;
  piVar4[0xe] = iVar14;
  puVar5 = (undefined4 *)func_0010BAB4(0x78);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_0017A520(puVar5,0x400,(int *)0x0,0);
  }
  piVar4[0x1d] = (int)puVar6;
  piVar4[0x1e] = 0;
  iVar14 = DAT_00441700;
  piVar4[0x1f] = DAT_00441700;
  piVar4[0x20] = iVar14;
  *(undefined1 *)(piVar4 + 0x21) = 0;
  *(undefined1 *)(piVar4 + 0x22) = 0;
  *(undefined1 *)((int)piVar4 + 0x89) = 0;
  *(undefined1 *)((int)piVar4 + 0x8a) = 0xff;
  puVar6 = func_0010A794(piVar4 + 0x23);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar5 = puVar6 + 9;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[10] = puVar6 + 0xc;
  puVar6[0xb] = 0x20;
  iVar14 = DAT_00441704;
  *(undefined1 *)(puVar6[10] + 0x1f) = 0;
  *puVar5 = DAT_0044170c;
  puVar17 = (uint *)puVar6[10];
  (**(code **)(*param_2 + 8))(param_2);
  uVar15 = 0;
  do {
    if (*(char *)(param_2[1] + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_0044141c;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_0044141c:
  if ((int)puVar6[0xb] <= (int)uVar15) {
    uVar15 = puVar6[0xb] - 1;
  }
  (**(code **)(*param_2 + 8))(param_2);
  func_0010E3C4(puVar17,(uint *)param_2[1],uVar15);
  uVar18 = DAT_00441710;
  *(undefined1 *)((int)puVar17 + uVar15) = 0;
  puVar2 = DAT_00441714;
  *puVar5 = uVar18;
  puVar6[0x14] = 0;
  *(undefined2 *)(puVar6 + 0x15) = 0x1e;
  *(undefined1 *)((int)puVar6 + 0x56) = 0;
  *(undefined1 *)((int)puVar6 + 0x57) = 0;
  *puVar2 = 1;
  puVar16 = puVar6 + -0x23;
  (**(code **)(puVar6[-0x23] + 0x38))(puVar16,puVar5,0);
  piVar7 = (int *)puVar6[-0x1c];
  piVar8 = (int *)func_005229AC(piVar7,local_2c);
  piVar4 = DAT_00441718;
  if (piVar8 != (int *)0x0) {
    piVar9 = (int *)(**(code **)(*piVar8 + 8))(piVar8);
    do {
      if (piVar9 == piVar4) goto LAB_004414d4;
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)0x0);
  }
  piVar8 = (int *)0x0;
LAB_004414d4:
  puVar6[-5] = piVar8;
  puVar6[-4] = piVar8[0x30];
  puVar6[-3] = piVar8[0x42];
  piVar8[0x4a] = puVar6[-6];
  puVar5 = (undefined4 *)puVar6[-6];
  *puVar5 = piVar8 + 0x45;
  piVar8[0x4a] = (int)puVar5;
  if (*(char *)param_4[1] != '\0') {
    puVar10 = (undefined4 *)func_0010BAB4(0x44);
    puVar5 = (undefined4 *)0x0;
    if (puVar10 != (undefined4 *)0x0) {
      puVar5 = func_00254EFC(puVar10,piVar7,param_4);
    }
    puVar6[0x14] = puVar5;
    func_00254ECC((int)puVar5,3);
    func_004B948C((int)puVar16,puVar6[0x14]);
  }
  puVar6[5] = puVar16;
  *(undefined1 *)((int)puVar6 + 6) = 6;
  iVar11 = func_0010BA78(0x60);
  puVar5 = DAT_0044171c;
  puVar6[6] = iVar11;
  puVar6[7] = iVar11 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar13 = 6;
  puVar10 = (undefined4 *)(iVar11 + -8);
  do {
    uVar18 = puVar5[0x1d];
    iVar13 = iVar13 + -1;
    puVar10[2] = puVar5[0x1c];
    puVar10[3] = uVar18;
    uVar18 = puVar5[0x1d];
    puVar10[4] = puVar5[0x1c];
    puVar10[5] = uVar18;
    puVar10 = puVar10 + 4;
  } while (iVar13 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar15 = (uint)bVar1;
  puVar10 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar6[8] = puVar10;
  if (uVar15 != 0) {
    puVar12 = puVar10 + -2;
    if ((bVar1 & 1) != 0) {
      uVar18 = puVar5[5];
      *puVar10 = puVar5[4];
      puVar10[1] = uVar18;
      puVar12 = puVar10;
    }
    for (iVar11 = (int)uVar15 >> 1; iVar11 != 0; iVar11 = iVar11 + -1) {
      uVar18 = puVar5[5];
      puVar12[2] = puVar5[4];
      puVar12[3] = uVar18;
      uVar18 = puVar5[5];
      puVar12[4] = puVar5[4];
      puVar12[5] = uVar18;
      puVar12 = puVar12 + 4;
    }
  }
  puVar10 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  puVar3 = DAT_00441720;
  iVar11 = 0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar10[1] = 6;
    *puVar10 = 0x24;
    iVar11 = func_00100118((int)(puVar10 + 2),puVar3,0x24,6);
  }
  if (iVar11 != 0) {
    puVar6[3] = iVar11;
    puVar6[2] = 6;
  }
  local_44 = s_cBaseState_Invalid_00441724;
  local_48 = iVar14;
  func_0010BEC4((int)puVar6,0,&local_48);
  uVar18 = puVar5[1];
  uVar19 = puVar5[2];
  uVar20 = puVar5[3];
  uVar21 = puVar5[4];
  uVar22 = puVar5[5];
  puVar10 = (undefined4 *)puVar6[6];
  *puVar10 = *puVar5;
  puVar10[1] = uVar18;
  puVar10 = (undefined4 *)puVar6[7];
  *puVar10 = uVar19;
  puVar10[1] = uVar20;
  puVar10 = (undefined4 *)puVar6[8];
  *puVar10 = uVar21;
  puVar10[1] = uVar22;
  local_44 = s_cBaseState_RunMsg_00441738;
  local_48 = iVar14;
  func_0010BEC4((int)puVar6,1,&local_48);
  iVar11 = puVar6[6];
  uVar19 = puVar5[7];
  uVar20 = puVar5[8];
  uVar22 = puVar5[9];
  uVar18 = puVar5[10];
  uVar21 = puVar5[0xb];
  *(undefined4 *)(iVar11 + 8) = puVar5[6];
  *(undefined4 *)(iVar11 + 0xc) = uVar19;
  iVar11 = puVar6[7];
  *(undefined4 *)(iVar11 + 8) = uVar20;
  *(undefined4 *)(iVar11 + 0xc) = uVar22;
  iVar11 = puVar6[8];
  *(undefined4 *)(iVar11 + 8) = uVar18;
  *(undefined4 *)(iVar11 + 0xc) = uVar21;
  local_44 = s_cBaseState_WaitNext_0044174c;
  local_48 = iVar14;
  func_0010BEC4((int)puVar6,2,&local_48);
  iVar11 = puVar6[6];
  uVar19 = puVar5[0xd];
  uVar18 = puVar5[0xe];
  uVar20 = puVar5[0xf];
  uVar23 = *(undefined8 *)(puVar5 + 4);
  *(undefined4 *)(iVar11 + 0x10) = puVar5[0xc];
  *(undefined4 *)(iVar11 + 0x14) = uVar19;
  iVar11 = puVar6[7];
  *(undefined4 *)(iVar11 + 0x10) = uVar18;
  *(undefined4 *)(iVar11 + 0x14) = uVar20;
  iVar11 = puVar6[8];
  *(int *)(iVar11 + 0x10) = (int)uVar23;
  *(int *)(iVar11 + 0x14) = (int)((ulonglong)uVar23 >> 0x20);
  local_44 = s_cBaseState_WaitChoice_004418b4;
  local_48 = iVar14;
  func_0010BEC4((int)puVar6,3,&local_48);
  iVar11 = puVar6[6];
  uVar19 = puVar5[0x11];
  uVar18 = puVar5[0x12];
  uVar20 = puVar5[0x13];
  *(undefined4 *)(iVar11 + 0x18) = puVar5[0x10];
  *(undefined4 *)(iVar11 + 0x1c) = uVar19;
  iVar11 = puVar6[7];
  *(undefined4 *)(iVar11 + 0x18) = uVar18;
  *(undefined4 *)(iVar11 + 0x1c) = uVar20;
  iVar11 = puVar6[8];
  *(int *)(iVar11 + 0x18) = (int)uVar23;
  *(int *)(iVar11 + 0x1c) = (int)((ulonglong)uVar23 >> 0x20);
  local_44 = s_cBaseState_EndMsg_004418cc;
  local_48 = iVar14;
  func_0010BEC4((int)puVar6,4,&local_48);
  iVar11 = puVar6[6];
  uVar18 = puVar5[0x15];
  uVar19 = puVar5[0x16];
  uVar20 = puVar5[0x17];
  *(undefined4 *)(iVar11 + 0x20) = puVar5[0x14];
  *(undefined4 *)(iVar11 + 0x24) = uVar18;
  iVar11 = puVar6[7];
  *(undefined4 *)(iVar11 + 0x20) = uVar19;
  *(undefined4 *)(iVar11 + 0x24) = uVar20;
  iVar11 = puVar6[8];
  *(int *)(iVar11 + 0x20) = (int)uVar23;
  *(int *)(iVar11 + 0x24) = (int)((ulonglong)uVar23 >> 0x20);
  local_44 = s_cBaseState_Reset_004418e0;
  local_48 = iVar14;
  func_0010BEC4((int)puVar6,5,&local_48);
  iVar14 = puVar6[6];
  uVar19 = puVar5[0x19];
  uVar18 = puVar5[0x1a];
  uVar20 = puVar5[0x1b];
  *(undefined4 *)(iVar14 + 0x28) = puVar5[0x18];
  *(undefined4 *)(iVar14 + 0x2c) = uVar19;
  iVar14 = puVar6[7];
  *(undefined4 *)(iVar14 + 0x28) = uVar18;
  *(undefined4 *)(iVar14 + 0x2c) = uVar20;
  iVar14 = puVar6[8];
  *(int *)(iVar14 + 0x28) = (int)uVar23;
  *(int *)(iVar14 + 0x2c) = (int)((ulonglong)uVar23 >> 0x20);
  func_0066C748(puVar6,0);
  *puVar2 = 0;
  return puVar16;
}

