#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_002B04F4(int param_1,float fparam_0);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F7640(void);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC78C(int param_1,undefined2 param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0066ADE8(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_004fe92c;
extern int DAT_004fe930;
extern int DAT_004fe934;
extern int *DAT_004fe938;
extern float DAT_004fe93c;
extern int DAT_004fe940;
extern float DAT_004fe944;
extern int DAT_004fe948;
extern undefined *DAT_004fe94c;
extern int DAT_004fe950;
extern int DAT_004fe960;
extern float DAT_004feb74;
extern float DAT_004feb78;
extern char s_cState_Die_004feb68[];
extern char s_cState_Reaction_004fe964[];
extern char s_cState_Walk_004fe954[];

// USA 004FE5CC <- EU 004FE5A4 (Ghidra, non-matching)
// GLOBAL DAT_004fe92c uint *
// GLOBAL DAT_004fe930 int
// GLOBAL DAT_004fe934 int
// GLOBAL DAT_004fe938 int *
// GLOBAL DAT_004fe93c float
// GLOBAL DAT_004fe940 int
// GLOBAL DAT_004fe944 float
// GLOBAL DAT_004fe948 int
// GLOBAL DAT_004fe94c undefined *
// GLOBAL DAT_004fe950 int
// GLOBAL DAT_004fe960 int
// GLOBAL DAT_004feb74 float
// GLOBAL DAT_004feb78 float
// GLOBAL s_cState_Die_004feb68 string
// GLOBAL s_cState_Reaction_004fe964 string
// GLOBAL s_cState_Walk_004fe954 string

undefined4 * func_004FE5CC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float *in_r3;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 uVar17;
  float fVar18;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  piVar3 = func_004FD464(param_1,param_2,DAT_004fe92c);
  iVar10 = DAT_004fe930;
  *piVar3 = DAT_004fe930;
  piVar3[200] = iVar10 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar5 = puVar4 + -0x22f;
  puVar4[0xc] = 2;
  *(undefined1 *)(puVar4 + 0xd) = 0;
  func_004FB344((int)puVar5,5);
  iVar10 = DAT_004fe934;
  uVar14 = 0;
  do {
    func_004FACA4((int)puVar5,uVar14,(int *)(iVar10 + uVar14 * 8));
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 5);
  func_004FB468((int)puVar5);
  func_004FB30C((int)puVar5,1);
  func_004FAC70((int)puVar5,0,DAT_004fe938);
  func_004FB408((int)puVar5);
  fVar18 = DAT_004fe93c;
  func_004FB4C4((int)puVar5,DAT_004fe93c);
  uVar12 = 0;
  func_004F5BD8((int)puVar5,(uint *)0x0,(int **)0x0,in_r3);
  uVar2 = *(ushort *)((int)param_2 + 0x2a);
  *(char *)(puVar4 + 0xd) = (char)uVar2;
  if ((uVar2 & 0xff) == 0) {
    func_004FB070((int)puVar5,fVar18);
    func_004FACD4((int)puVar5,(int *)0x0,uVar12,(int *)in_r3);
  }
  else if ((uVar2 & 0xff) == 1) {
    func_004FC78C((int)puVar5,*(short *)(DAT_004fe940 + (int)puVar5) << 1);
    func_004FB070((int)puVar5,DAT_004fe944);
    func_004FACD4((int)puVar5,(int *)0x0,uVar12,(int *)in_r3);
  }
  puVar4[5] = puVar5;
  *(undefined1 *)((int)puVar4 + 6) = 3;
  iVar6 = func_0010BA78(0x30);
  iVar10 = DAT_004fe948;
  puVar4[6] = iVar6;
  puVar4[7] = iVar6 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar7 = 3;
  puVar8 = (undefined4 *)(iVar6 + -8);
  do {
    uVar12 = *(undefined4 *)(iVar10 + 0x40);
    iVar7 = iVar7 + -1;
    puVar8[2] = *(undefined4 *)(iVar10 + 0x3c);
    puVar8[3] = uVar12;
    uVar12 = *(undefined4 *)(iVar10 + 0x40);
    puVar8[4] = *(undefined4 *)(iVar10 + 0x3c);
    puVar8[5] = uVar12;
    puVar8 = puVar8 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar14 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar4[8] = puVar8;
  if (uVar14 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = *(undefined4 *)(iVar10 + 0x18);
      *puVar8 = *(undefined4 *)(iVar10 + 0x14);
      puVar8[1] = uVar12;
      puVar9 = puVar8;
    }
    for (iVar6 = (int)uVar14 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar12 = *(undefined4 *)(iVar10 + 0x18);
      puVar9[2] = *(undefined4 *)(iVar10 + 0x14);
      puVar9[3] = uVar12;
      uVar12 = *(undefined4 *)(iVar10 + 0x18);
      puVar9[4] = *(undefined4 *)(iVar10 + 0x14);
      puVar9[5] = uVar12;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar10 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 3;
    iVar10 = func_00100118((int)(puVar8 + 2),DAT_004fe94c,0x24,3);
  }
  if (iVar10 != 0) {
    puVar4[3] = iVar10;
    puVar4[2] = 3;
  }
  iVar10 = DAT_004fe950;
  puVar4[-0x15a] = puVar4;
  iVar6 = DAT_004fe960;
  *(undefined2 *)(iVar10 + (int)puVar5) = 3;
  local_34 = (uint *)s_cState_Walk_004fe954;
  local_38 = iVar6;
  iVar10 = puVar4[3];
  puVar16 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar6 + 8))(&local_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_004fe868;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_004fe868:
  iVar10 = *(int *)(iVar10 + 8);
  if (iVar10 <= (int)uVar14) {
    uVar14 = iVar10 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar16,local_34,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  puVar8 = (undefined4 *)puVar4[6];
  uVar17 = *(undefined4 *)(DAT_004fe948 + 8);
  uVar13 = *(undefined4 *)(DAT_004fe948 + 0x14);
  uVar11 = *(undefined4 *)(DAT_004fe948 + 0xc);
  uVar15 = *(undefined4 *)(DAT_004fe948 + 0x10);
  uVar12 = *(undefined4 *)(DAT_004fe948 + 0x18);
  *puVar8 = *(undefined4 *)(DAT_004fe948 + 4);
  puVar8[1] = uVar17;
  puVar8 = (undefined4 *)puVar4[7];
  *puVar8 = uVar11;
  puVar8[1] = uVar15;
  puVar8 = (undefined4 *)puVar4[8];
  puVar8[1] = uVar12;
  *puVar8 = uVar13;
  local_34 = (uint *)s_cState_Reaction_004fe964;
  local_38 = iVar6;
  if ((uint)puVar4[2] < 2) {
    iVar10 = puVar4[3];
  }
  else {
    iVar10 = puVar4[3] + 0x24;
  }
  puVar16 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar6 + 8))(&local_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_004fe980;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_004fe980:
  if (*(int *)(iVar10 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar16,local_34,uVar14);
  iVar10 = DAT_004fe948;
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  iVar7 = puVar4[6];
  uVar11 = *(undefined4 *)(iVar10 + 0x20);
  uVar12 = *(undefined4 *)(iVar10 + 0x14);
  uVar13 = *(undefined4 *)(iVar10 + 0x28);
  uVar17 = *(undefined4 *)(iVar10 + 0x24);
  uVar15 = *(undefined4 *)(iVar10 + 0x18);
  *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar10 + 0x1c);
  *(undefined4 *)(iVar7 + 0xc) = uVar11;
  iVar10 = puVar4[7];
  *(undefined4 *)(iVar10 + 8) = uVar17;
  *(undefined4 *)(iVar10 + 0xc) = uVar13;
  iVar10 = puVar4[8];
  *(undefined4 *)(iVar10 + 8) = uVar12;
  *(undefined4 *)(iVar10 + 0xc) = uVar15;
  local_34 = (uint *)s_cState_Die_004feb68;
  local_38 = iVar6;
  if ((uint)puVar4[2] < 3) {
    iVar10 = puVar4[3];
  }
  else {
    iVar10 = puVar4[3] + 0x48;
  }
  puVar16 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar6 + 8))(&local_38);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_34 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_004fea58;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_004fea58:
  if (*(int *)(iVar10 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar16,local_34,uVar14);
  iVar10 = DAT_004fe948;
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  iVar6 = puVar4[6];
  uVar15 = *(undefined4 *)(iVar10 + 0x30);
  uVar12 = *(undefined4 *)(iVar10 + 0x14);
  uVar13 = *(undefined4 *)(iVar10 + 0x34);
  uVar17 = *(undefined4 *)(iVar10 + 0x38);
  uVar11 = *(undefined4 *)(iVar10 + 0x18);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar10 + 0x2c);
  *(undefined4 *)(iVar6 + 0x14) = uVar15;
  iVar10 = puVar4[7];
  *(undefined4 *)(iVar10 + 0x10) = uVar13;
  *(undefined4 *)(iVar10 + 0x14) = uVar17;
  iVar10 = puVar4[8];
  *(undefined4 *)(iVar10 + 0x10) = uVar12;
  *(undefined4 *)(iVar10 + 0x14) = uVar11;
  func_0066ADE8(puVar4,0);
  fVar18 = DAT_004feb74;
  puVar4[-200] = puVar4[-200] | 0x8000;
  func_004FBA18((int)puVar5,3,0xff,-1,-1,0,0x7fff,fVar18,fVar18);
  *(undefined1 *)((int)puVar4 + -0x13f) = 4;
  *(undefined1 *)((int)puVar4 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x13d) = 0;
  func_002AF5FC((int)puVar5,2,-1);
  func_002B04F4((int)puVar5,DAT_004feb78);
  *(uint *)(puVar4[-0x123] + 0x2c) = *(uint *)(puVar4[-0x123] + 0x2c) & 0xfffff8ff | 0x200;
  iVar10 = func_004F7640();
  if (iVar10 != 0) {
    *(undefined1 *)((int)puVar4 + -0x1f) = 1;
  }
  return puVar5;
}

