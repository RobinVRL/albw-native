#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_004356B4(int *param_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00658D9C(undefined4 *param_1,undefined1 param_2);
extern int DAT_00175f68;
extern undefined4 *DAT_00175f6c;
extern undefined4 DAT_00175f70;
extern undefined4 DAT_00175f74;
extern int DAT_00175f84;
extern uint DAT_00175f88;
extern undefined4 DAT_00175f8c;
extern undefined4 DAT_00175f90;
extern uint DAT_00175f94;
extern undefined *DAT_00175f98;
extern char s_Sunlight_00175f78[];
extern char s_cState_Hide_00175f9c[];
extern char s_cState_Long_001762cc[];
extern char s_cState_ToLong_001762d8[];
extern char s_cState_Wait_00175fa8[];

// USA 00175B08 <- EU 00175B08 (Ghidra, non-matching)
// GLOBAL DAT_00175f68 int
// GLOBAL DAT_00175f6c undefined4 *
// GLOBAL DAT_00175f70 undefined4
// GLOBAL DAT_00175f74 undefined4
// GLOBAL DAT_00175f84 int
// GLOBAL DAT_00175f88 uint
// GLOBAL DAT_00175f8c undefined4
// GLOBAL DAT_00175f90 undefined4
// GLOBAL DAT_00175f94 uint
// GLOBAL DAT_00175f98 undefined *
// GLOBAL s_Sunlight_00175f78 string
// GLOBAL s_cState_Hide_00175f9c string
// GLOBAL s_cState_Long_001762cc string
// GLOBAL s_cState_ToLong_001762d8 string
// GLOBAL s_cState_Wait_00175fa8 string

/* WARNING: Variable defined which should be unmapped: objStack_b8 */

int func_00175B08(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  uint *puVar20;
  undefined4 uVar21;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define objStack_b8 ((uint *)(albw_frame + 0x8))
  #define local_ac (*(undefined4 *)(albw_frame + 0x14))
  #define local_a8 (*(uint *)(albw_frame + 0x18))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_9c (*(undefined4 *)(albw_frame + 0x24))
  #define local_98 (*(uint *)(albw_frame + 0x28))
  #define local_64 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_60 (*(undefined1 *)(albw_frame + 0x60))
  #define local_58 (*(int *)(albw_frame + 0x68))
  #define local_54 (*(uint * *)(albw_frame + 0x6c))
  #define local_4c ((uint *)(albw_frame + 0x74))
  #define local_40 (*(int *)(albw_frame + 0x80))
  #define local_3c (*(char * *)(albw_frame + 0x84))
  piVar5 = func_00150E40(param_1,param_2);
  iVar7 = DAT_00175f68;
  *piVar5 = DAT_00175f68;
  piVar5[200] = iVar7 + 0x54;
  puVar6 = func_0010A794(piVar5 + 0x103);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  iVar7 = func_0054D964((int)(puVar6 + -0x103),0);
  puVar2 = DAT_00175f6c;
  puVar6[0xb] = iVar7;
  uVar13 = puVar2[1];
  puVar6[0xe] = *puVar2;
  puVar6[0xf] = uVar13;
  puVar6[0xc] = DAT_00175f70;
  puVar6[0xd] = puVar6 + -0x103;
  iVar7 = func_004EE484(puVar6 + 0x10);
  iVar17 = iVar7 + -0x44c;
  objStack_b8[1] = 0;
  objStack_b8[0] = 1;
  objStack_b8[2] = 0;
  uVar13 = func_0014E428(iVar17,1,0,0,1,0,0);
  *(undefined4 *)(iVar7 + -0x1c) = uVar13;
  puVar8 = (undefined4 *)func_0010BAB4(0xa8);
  puVar6 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar6 = func_0016A2FC(puVar8,1,DAT_00175f74,1);
  }
  *(undefined4 **)(iVar7 + -0x18) = puVar6;
  iVar12 = DAT_00175f84;
  local_3c = s_Sunlight_00175f78;
  local_40 = DAT_00175f84;
  func_00169608(*(uint **)(iVar7 + -0x18),0,&local_40,*(int *)(*(int *)(iVar7 + -0x17c) + 0x1c8));
  func_00133870(*(int *)(iVar7 + -0x18),0,*(int *)(iVar7 + -0x1c));
  uVar15 = 0;
  func_0016A02C(*(int *)(iVar7 + -0x18),-1,(int *)0xffffffff,0);
  objStack_b8[2] = (uint)&local_ac;
  objStack_b8[1] = 3;
  local_64 = 10;
  local_60 = 0;
  local_ac = 0;
  objStack_b8[0] = 1;
  local_a0 = DAT_00175f90;
  local_9c = DAT_00175f8c;
  local_98 = uVar15 | 0xff;
  local_a8 = DAT_00175f88;
  uStack_a4 = DAT_00175f8c;
  uVar15 = DAT_00175f88;
  func_0016898C(*(int *)(iVar7 + -0x18),objStack_b8);
  uVar18 = *(uint *)(iVar7 + -100);
  fparam_0 = func_0054DE3C(iVar17,0,2);
  func_004D80A4((float *)objStack_b8,uVar18,fparam_0);
  objStack_b8[1] = uVar15;
  func_00115C54((float *)objStack_b8,(float *)objStack_b8,(float *)(iVar7 + -0x7c));
  iVar9 = *(int *)(iVar7 + -0x14);
  *(uint *)(iVar9 + 4) = objStack_b8[0];
  *(uint *)(iVar9 + 8) = objStack_b8[1];
  *(uint *)(iVar9 + 0xc) = objStack_b8[2];
  func_004356B4(*(int **)(iVar7 + -0x14));
  local_4c[0] = *(uint *)(iVar7 + -0x180);
  objStack_b8[0] = (uint)*(short *)(iVar7 + -0x3f8);
  objStack_b8[1] = iVar7 - 0x10;
  objStack_b8[2] = DAT_00175f94;
  uVar15 = objStack_b8[2];
  (*(undefined2 *)((char *)&objStack_b8[2] + 0)) = (undefined2)DAT_00175f94;
  uVar3 = (undefined2)objStack_b8[2];
  objStack_b8[2] = uVar15;
  func_0014EB8C(iVar7,*(undefined4 *)(iVar7 + -0x14),*(undefined2 **)(iVar7 + -0xac),local_4c,
                *(short *)(iVar7 + -0x3f8),objStack_b8[1],uVar3);
  *(undefined1 *)(iVar7 + -0x3a) = 4;
  puVar8 = (undefined4 *)(iVar7 + -0x40);
  *(int *)(iVar7 + -0x2c) = iVar17;
  iVar9 = func_0010BA78(0x40);
  *(int *)(iVar7 + -0x28) = iVar9;
  *(uint *)(iVar7 + -0x24) = iVar9 + (uint)*(byte *)(iVar7 + -0x3a) * 8;
  iVar11 = 4;
  puVar6 = (undefined4 *)(iVar9 + -8);
  do {
    uVar13 = puVar2[0x15];
    iVar11 = iVar11 + -1;
    puVar6[2] = puVar2[0x14];
    puVar6[3] = uVar13;
    uVar13 = puVar2[0x15];
    puVar6[4] = puVar2[0x14];
    puVar6[5] = uVar13;
    puVar6 = puVar6 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)(iVar7 + -0x3a);
  uVar15 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar15 << 3);
  *(undefined4 **)(iVar7 + -0x20) = puVar6;
  if (uVar15 != 0) {
    puVar10 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar2[7];
      *puVar6 = puVar2[6];
      puVar6[1] = uVar13;
      puVar10 = puVar6;
    }
    for (iVar9 = (int)uVar15 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar13 = puVar2[7];
      puVar10[2] = puVar2[6];
      puVar10[3] = uVar13;
      uVar13 = puVar2[7];
      puVar10[4] = puVar2[6];
      puVar10[5] = uVar13;
      puVar10 = puVar10 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar9 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 4;
    iVar9 = func_00100118((int)(puVar6 + 2),DAT_00175f98,0x24,4);
  }
  if (iVar9 != 0) {
    *(int *)(iVar7 + -0x34) = iVar9;
    *(undefined4 *)(iVar7 + -0x38) = 4;
  }
  *(undefined4 **)(iVar7 + -0xf8) = puVar8;
  *(undefined2 *)(iVar7 + -0xf2) = 4;
  local_54 = (uint *)s_cState_Hide_00175f9c;
  local_58 = iVar12;
  iVar9 = *(int *)(iVar7 + -0x34);
  puVar20 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar12 + 8))(&local_58);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_54 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00175ea4;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00175ea4:
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 <= (int)uVar15) {
    uVar15 = iVar9 - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar20,local_54,uVar15);
  *(undefined1 *)((int)puVar20 + uVar15) = 0;
  puVar6 = *(undefined4 **)(iVar7 + -0x28);
  uVar16 = DAT_00175f6c[6];
  uVar14 = DAT_00175f6c[3];
  uVar21 = DAT_00175f6c[4];
  uVar19 = DAT_00175f6c[5];
  uVar13 = DAT_00175f6c[7];
  *puVar6 = DAT_00175f6c[2];
  puVar6[1] = uVar14;
  puVar6 = *(undefined4 **)(iVar7 + -0x24);
  puVar6[1] = uVar19;
  *puVar6 = uVar21;
  puVar6 = *(undefined4 **)(iVar7 + -0x20);
  puVar6[1] = uVar13;
  *puVar6 = uVar16;
  local_54 = (uint *)s_cState_Wait_00175fa8;
  local_58 = iVar12;
  if (*(uint *)(iVar7 + -0x38) < 2) {
    iVar9 = *(int *)(iVar7 + -0x34);
  }
  else {
    iVar9 = *(int *)(iVar7 + -0x34) + 0x24;
  }
  puVar20 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar12 + 8))(&local_58);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_54 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00175fc0;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00175fc0:
  if (*(int *)(iVar9 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar20,local_54,uVar15);
  puVar6 = DAT_00175f6c;
  *(undefined1 *)((int)puVar20 + uVar15) = 0;
  uVar16 = puVar6[0xb];
  uVar21 = puVar6[6];
  iVar9 = *(int *)(iVar7 + -0x28);
  uVar13 = puVar6[7];
  uVar14 = puVar6[9];
  uVar19 = puVar6[10];
  *(undefined4 *)(iVar9 + 8) = puVar6[8];
  *(undefined4 *)(iVar9 + 0xc) = uVar14;
  iVar9 = *(int *)(iVar7 + -0x24);
  *(undefined4 *)(iVar9 + 8) = uVar19;
  *(undefined4 *)(iVar9 + 0xc) = uVar16;
  iVar9 = *(int *)(iVar7 + -0x20);
  *(undefined4 *)(iVar9 + 8) = uVar21;
  *(undefined4 *)(iVar9 + 0xc) = uVar13;
  local_54 = (uint *)s_cState_Long_001762cc;
  local_58 = iVar12;
  if (*(uint *)(iVar7 + -0x38) < 4) {
    iVar9 = *(int *)(iVar7 + -0x34);
  }
  else {
    iVar9 = *(int *)(iVar7 + -0x34) + 0x6c;
  }
  puVar20 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar12 + 8))(&local_58);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_54 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00176098;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00176098:
  if (*(int *)(iVar9 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar20,local_54,uVar15);
  *(undefined1 *)((int)puVar20 + uVar15) = 0;
  puVar6 = DAT_00175f6c;
  iVar9 = *(int *)(iVar7 + -0x28);
  uVar13 = DAT_00175f6c[0xe];
  uVar19 = DAT_00175f6c[0xf];
  uVar14 = DAT_00175f6c[6];
  uVar16 = DAT_00175f6c[7];
  uVar21 = DAT_00175f6c[0xd];
  *(undefined4 *)(iVar9 + 0x18) = DAT_00175f6c[0xc];
  *(undefined4 *)(iVar9 + 0x1c) = uVar21;
  iVar9 = *(int *)(iVar7 + -0x24);
  *(undefined4 *)(iVar9 + 0x18) = uVar13;
  *(undefined4 *)(iVar9 + 0x1c) = uVar19;
  iVar9 = *(int *)(iVar7 + -0x20);
  *(undefined4 *)(iVar9 + 0x18) = uVar14;
  *(undefined4 *)(iVar9 + 0x1c) = uVar16;
  local_54 = (uint *)s_cState_ToLong_001762d8;
  local_58 = iVar12;
  uVar15 = *(uint *)(iVar7 + -0x38);
  if (uVar15 < 3) {
    iVar9 = *(int *)(iVar7 + -0x34);
    uVar18 = uVar15;
  }
  else {
    iVar9 = iVar12;
    uVar18 = *(uint *)(iVar7 + -0x34);
  }
  if (2 < uVar15) {
    iVar9 = uVar18 + 0x48;
  }
  puVar20 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar12 + 8))(&local_58);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_54 + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00176168;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00176168:
  if (*(int *)(iVar9 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar20,local_54,uVar15);
  *(undefined1 *)((int)puVar20 + uVar15) = 0;
  iVar12 = *(int *)(iVar7 + -0x28);
  uVar13 = puVar6[0x12];
  uVar16 = puVar6[6];
  uVar19 = puVar6[0x11];
  uVar21 = puVar6[0x13];
  uVar14 = puVar6[7];
  *(undefined4 *)(iVar12 + 0x10) = puVar6[0x10];
  *(undefined4 *)(iVar12 + 0x14) = uVar19;
  iVar12 = *(int *)(iVar7 + -0x24);
  *(undefined4 *)(iVar12 + 0x10) = uVar13;
  *(undefined4 *)(iVar12 + 0x14) = uVar21;
  iVar12 = *(int *)(iVar7 + -0x20);
  *(undefined4 *)(iVar12 + 0x10) = uVar16;
  *(undefined4 *)(iVar12 + 0x14) = uVar14;
  if ((*(short *)(iVar7 + -0x420) != 0) || (bVar4 = func_00588BF0(iVar17,0), bVar4)) {
    bVar4 = func_00588BF0(iVar17,1);
    if (bVar4) {
      func_00658D9C(puVar8,3);
    }
    else {
      func_00658D9C(puVar8,1);
    }
  }
  else {
    func_00658D9C(puVar8,0);
  }
  iVar12 = *(int *)(iVar7 + -0x1c);
  *(uint *)(iVar12 + 0x164) = *(uint *)(iVar12 + 0x164) | 0x40000000;
  uVar15 = *(uint *)(iVar7 + -100);
  piVar5 = (int *)0x0;
  func_00491E80((float *)(iVar12 + 0x80),0,uVar15,0);
  iVar12 = *(int *)(iVar7 + -0x1c);
  *(uint *)(iVar12 + 0x164) = *(uint *)(iVar12 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar12 + 0x8c) = *(undefined4 *)(iVar7 + -0x7c);
  *(undefined4 *)(iVar12 + 0x9c) = *(undefined4 *)(iVar7 + -0x78);
  uVar13 = *(undefined4 *)(iVar7 + -0x74);
  *(undefined4 *)(iVar12 + 0xac) = uVar13;
  func_00169A80(*(int **)(iVar7 + -0x18),uVar13,uVar15,piVar5);
  func_00168E9C(*(int **)(iVar7 + -0x18),*(int *)(iVar7 + -0x1c),(int *)0x0);
  func_004CEAF0(*(int *)(iVar7 + -0x1c));
  return iVar17;
}

