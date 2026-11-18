#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FA890(int param_1);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_006645FC(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_00302b28;
extern int DAT_00302b2c;
extern undefined4 DAT_00302b30;
extern undefined4 DAT_00302b34;
extern int DAT_00302b38;
extern int DAT_00302b3c;
extern undefined *DAT_00302b40;
extern int DAT_00302b44;
extern int DAT_00302b58;
extern undefined4 *DAT_00302b5c;
extern undefined4 *DAT_00302b70;
extern float DAT_00302c7c;
extern char s_cState_Attack_00302b48[];
extern char s_cState_Die_00302b74[];
extern char s_cState_Reaction_00302b60[];

// USA 003027B4 <- EU 00302790 (Ghidra, non-matching)
// GLOBAL DAT_00302b28 uint *
// GLOBAL DAT_00302b2c int
// GLOBAL DAT_00302b30 undefined4
// GLOBAL DAT_00302b34 undefined4
// GLOBAL DAT_00302b38 int
// GLOBAL DAT_00302b3c int
// GLOBAL DAT_00302b40 undefined *
// GLOBAL DAT_00302b44 int
// GLOBAL DAT_00302b58 int
// GLOBAL DAT_00302b5c undefined4 *
// GLOBAL DAT_00302b70 undefined4 *
// GLOBAL DAT_00302c7c float
// GLOBAL s_cState_Attack_00302b48 string
// GLOBAL s_cState_Die_00302b74 string
// GLOBAL s_cState_Reaction_00302b60 string

undefined4 * func_003027B4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  float fparam_0;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  float *in_r3;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  piVar3 = func_004FD464(param_1,param_2,DAT_00302b28);
  iVar8 = DAT_00302b2c;
  *piVar3 = DAT_00302b2c;
  piVar3[200] = iVar8 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  uVar13 = DAT_00302b30;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar14 = DAT_00302b34;
  puVar4[10] = uVar13;
  puVar4[0xb] = uVar14;
  puVar4[9] = 0;
  puVar11 = puVar4 + -0x22f;
  puVar4[0xd] = 0;
  func_004FB344((int)puVar11,6);
  iVar8 = DAT_00302b38;
  uVar10 = 0;
  do {
    func_004FACA4((int)puVar11,uVar10,(int *)(iVar8 + uVar10 * 8));
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 6);
  func_004FB468((int)puVar11);
  func_004F5BD8((int)puVar11,(uint *)0x0,(int **)0x0,in_r3);
  puVar4[5] = puVar11;
  *(undefined1 *)((int)puVar4 + 6) = 3;
  iVar5 = func_0010BA78(0x30);
  iVar8 = DAT_00302b3c;
  puVar4[6] = iVar5;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar9 = 3;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar13 = *(undefined4 *)(iVar8 + 0x40);
    iVar9 = iVar9 + -1;
    puVar6[2] = *(undefined4 *)(iVar8 + 0x3c);
    puVar6[3] = uVar13;
    uVar13 = *(undefined4 *)(iVar8 + 0x40);
    puVar6[4] = *(undefined4 *)(iVar8 + 0x3c);
    puVar6[5] = uVar13;
    puVar6 = puVar6 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar10 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar10 << 3);
  puVar4[8] = puVar6;
  if (uVar10 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = *(undefined4 *)(iVar8 + 0x18);
      *puVar6 = *(undefined4 *)(iVar8 + 0x14);
      puVar6[1] = uVar13;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar10 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar13 = *(undefined4 *)(iVar8 + 0x18);
      puVar7[2] = *(undefined4 *)(iVar8 + 0x14);
      puVar7[3] = uVar13;
      uVar13 = *(undefined4 *)(iVar8 + 0x18);
      puVar7[4] = *(undefined4 *)(iVar8 + 0x14);
      puVar7[5] = uVar13;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  puVar2 = DAT_00302b40;
  iVar8 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[1] = 3;
    *puVar6 = 0x24;
    iVar8 = func_00100118((int)(puVar6 + 2),puVar2,0x24,3);
  }
  if (iVar8 != 0) {
    puVar4[3] = iVar8;
    puVar4[2] = 3;
  }
  iVar8 = DAT_00302b44;
  puVar4[-0x15a] = puVar4;
  iVar5 = DAT_00302b58;
  *(undefined2 *)(iVar8 + (int)puVar11) = 3;
  local_2c = (uint *)s_cState_Attack_00302b48;
  local_30 = iVar5;
  iVar8 = puVar4[3];
  puVar12 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar5 + 8))(&local_30);
  uVar10 = 0;
  do {
    if (*(char *)((int)local_2c + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_003029b8;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_003029b8:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar10) {
    uVar10 = iVar8 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar12,local_2c,uVar10);
  *(undefined1 *)((int)puVar12 + uVar10) = 0;
  puVar6 = (undefined4 *)puVar4[6];
  uVar13 = DAT_00302b5c[1];
  uVar14 = DAT_00302b5c[2];
  uVar15 = DAT_00302b5c[3];
  uVar16 = DAT_00302b5c[4];
  uVar17 = DAT_00302b5c[5];
  *puVar6 = *DAT_00302b5c;
  puVar6[1] = uVar13;
  puVar6 = (undefined4 *)puVar4[7];
  *puVar6 = uVar14;
  puVar6[1] = uVar15;
  puVar6 = (undefined4 *)puVar4[8];
  *puVar6 = uVar16;
  puVar6[1] = uVar17;
  local_2c = (uint *)s_cState_Reaction_00302b60;
  local_30 = iVar5;
  if ((uint)puVar4[2] < 2) {
    iVar8 = puVar4[3];
  }
  else {
    iVar8 = puVar4[3] + 0x24;
  }
  puVar12 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar5 + 8))(&local_30);
  uVar10 = 0;
  do {
    if (*(char *)((int)local_2c + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_00302a70;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_00302a70:
  if (*(int *)(iVar8 + 8) <= (int)uVar10) {
    uVar10 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar12,local_2c,uVar10);
  *(undefined1 *)((int)puVar12 + uVar10) = 0;
  iVar8 = puVar4[6];
  uVar13 = *DAT_00302b70;
  uVar14 = DAT_00302b70[1];
  uVar15 = DAT_00302b70[3];
  uVar16 = DAT_00302b70[4];
  uVar17 = DAT_00302b70[5];
  *(undefined4 *)(iVar8 + 8) = DAT_00302b70[2];
  *(undefined4 *)(iVar8 + 0xc) = uVar15;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 8) = uVar16;
  *(undefined4 *)(iVar8 + 0xc) = uVar17;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 8) = uVar13;
  *(undefined4 *)(iVar8 + 0xc) = uVar14;
  local_2c = (uint *)s_cState_Die_00302b74;
  local_30 = iVar5;
  if ((uint)puVar4[2] < 3) {
    iVar8 = puVar4[3];
  }
  else {
    iVar8 = puVar4[3] + 0x48;
  }
  puVar12 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar5 + 8))(&local_30);
  uVar10 = 0;
  do {
    if (*(char *)((int)local_2c + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_00302b8c;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_00302b8c:
  if (*(int *)(iVar8 + 8) <= (int)uVar10) {
    uVar10 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar12,local_2c,uVar10);
  iVar8 = DAT_00302b3c;
  *(undefined1 *)((int)puVar12 + uVar10) = 0;
  iVar5 = puVar4[6];
  uVar14 = *(undefined4 *)(iVar8 + 0x38);
  uVar15 = *(undefined4 *)(iVar8 + 0x34);
  uVar16 = *(undefined4 *)(iVar8 + 0x14);
  uVar17 = *(undefined4 *)(iVar8 + 0x30);
  uVar13 = *(undefined4 *)(iVar8 + 0x18);
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar8 + 0x2c);
  *(undefined4 *)(iVar5 + 0x14) = uVar17;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar15;
  *(undefined4 *)(iVar8 + 0x14) = uVar14;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x10) = uVar16;
  *(undefined4 *)(iVar8 + 0x14) = uVar13;
  func_006645FC(puVar4,0);
  func_004F87F8((int)puVar11,2);
  func_004FA890((int)puVar11);
  *(undefined1 *)((int)puVar4 + -0x13f) = 5;
  fparam_0 = DAT_00302c7c;
  *(undefined1 *)((int)puVar4 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x13d) = 0;
  func_004FBA18((int)puVar11,4,0xff,-1,-1,0,0x7fff,fparam_0,fparam_0);
  func_004FC218((int)puVar11,'\x03',-1,0x7fff);
  return puVar11;
}

