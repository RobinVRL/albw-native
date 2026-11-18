#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0065DC84(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_002193bc;
extern int DAT_002193c0;
extern int DAT_002193c4;
extern undefined4 DAT_002193c8;
extern int DAT_002193cc;
extern int *DAT_002193d0;
extern undefined *DAT_002193d4;
extern int DAT_002193d8;
extern int DAT_002193ec;
extern char s_cState_Appear_002193dc[];
extern char s_cState_Die_0021940c[];
extern char s_cState_Move_002193f0[];
extern char s_cState_Reaction_002193fc[];

// USA 00218EEC <- EU 00218EEC (Ghidra, non-matching)
// GLOBAL DAT_002193bc uint *
// GLOBAL DAT_002193c0 int
// GLOBAL DAT_002193c4 int
// GLOBAL DAT_002193c8 undefined4
// GLOBAL DAT_002193cc int
// GLOBAL DAT_002193d0 int *
// GLOBAL DAT_002193d4 undefined *
// GLOBAL DAT_002193d8 int
// GLOBAL DAT_002193ec int
// GLOBAL s_cState_Appear_002193dc string
// GLOBAL s_cState_Die_0021940c string
// GLOBAL s_cState_Move_002193f0 string
// GLOBAL s_cState_Reaction_002193fc string

undefined4 * func_00218EEC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  short sVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float *pfVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 * *)(albw_frame + 0x8))
  piVar4 = func_004FD464(param_1,param_2,DAT_002193bc);
  iVar10 = DAT_002193c0;
  *piVar4 = DAT_002193c0;
  piVar4[200] = iVar10 + 0x84;
  puVar5 = func_0010A794(piVar4 + 0x22f);
  puVar5[5] = 0;
  puVar5[6] = 0;
  uVar11 = DAT_002193c8;
  puVar5[7] = 0;
  puVar5[8] = 0;
  iVar10 = DAT_002193c4;
  puVar5[9] = uVar11;
  puVar15 = puVar5 + -0x22f;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  *(undefined1 *)(puVar5 + 0x10) = 0;
  *(undefined1 *)((int)puVar5 + 0x41) = 0;
  uVar11 = *(undefined4 *)(iVar10 + 0xc);
  uVar12 = *(undefined4 *)(iVar10 + 0x10);
  puVar5[10] = puVar15;
  puVar5[0xb] = uVar11;
  puVar5[0xc] = uVar12;
  puVar5[-0x134] = puVar5 + 9;
  func_004FB344((int)puVar15,2);
  iVar6 = DAT_002193cc;
  uVar16 = 0;
  do {
    func_004FACA4((int)puVar15,uVar16,(int *)(iVar6 + uVar16 * 8));
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 2);
  func_004FB468((int)puVar15);
  func_004FB30C((int)puVar15,1);
  func_004FAC70((int)puVar15,0,DAT_002193d0);
  func_004FB408((int)puVar15);
  puVar5[5] = puVar15;
  *(undefined1 *)((int)puVar5 + 6) = 4;
  local_28 = puVar5;
  iVar6 = func_0010BA78(0x40);
  puVar5[6] = iVar6;
  puVar5[7] = iVar6 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar7 = 4;
  puVar8 = (undefined4 *)(iVar6 + -8);
  do {
    uVar11 = *(undefined4 *)(iVar10 + 0x60);
    iVar7 = iVar7 + -1;
    puVar8[2] = *(undefined4 *)(iVar10 + 0x5c);
    puVar8[3] = uVar11;
    uVar11 = *(undefined4 *)(iVar10 + 0x60);
    puVar8[4] = *(undefined4 *)(iVar10 + 0x5c);
    puVar8[5] = uVar11;
    puVar8 = puVar8 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar16 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar16 << 3);
  puVar5[8] = puVar8;
  if (uVar16 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = *(undefined4 *)(iVar10 + 0x28);
      *puVar8 = *(undefined4 *)(iVar10 + 0x24);
      puVar8[1] = uVar11;
      puVar9 = puVar8;
    }
    for (iVar6 = (int)uVar16 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar11 = *(undefined4 *)(iVar10 + 0x28);
      puVar9[2] = *(undefined4 *)(iVar10 + 0x24);
      puVar9[3] = uVar11;
      uVar11 = *(undefined4 *)(iVar10 + 0x28);
      puVar9[4] = *(undefined4 *)(iVar10 + 0x24);
      puVar9[5] = uVar11;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  puVar3 = DAT_002193d4;
  iVar10 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar8[1] = 4;
    *puVar8 = 0x24;
    iVar10 = func_00100118((int)(puVar8 + 2),puVar3,0x24,4);
  }
  if (iVar10 != 0) {
    puVar5[2] = 4;
    puVar5[3] = iVar10;
  }
  iVar6 = DAT_002193ec;
  iVar10 = DAT_002193d8;
  puVar5[-0x15a] = local_28;
  *(undefined2 *)(iVar10 + (int)puVar15) = 4;
  local_2c = (uint *)s_cState_Appear_002193dc;
  local_30 = iVar6;
  iVar10 = puVar5[3];
  puVar17 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar6 + 8))(&local_30);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_2c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_0021914c;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_0021914c:
  iVar10 = *(int *)(iVar10 + 8);
  if (iVar10 <= (int)uVar16) {
    uVar16 = iVar10 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar16);
  *(undefined1 *)((int)puVar17 + uVar16) = 0;
  puVar8 = (undefined4 *)puVar5[6];
  uVar13 = *(undefined4 *)(DAT_002193c4 + 0x24);
  uVar12 = *(undefined4 *)(DAT_002193c4 + 0x1c);
  uVar18 = *(undefined4 *)(DAT_002193c4 + 0x20);
  uVar19 = *(undefined4 *)(DAT_002193c4 + 0x14);
  uVar11 = *(undefined4 *)(DAT_002193c4 + 0x28);
  puVar8[1] = *(undefined4 *)(DAT_002193c4 + 0x18);
  *puVar8 = uVar19;
  puVar8 = (undefined4 *)puVar5[7];
  *puVar8 = uVar12;
  puVar8[1] = uVar18;
  puVar8 = (undefined4 *)puVar5[8];
  puVar8[1] = uVar11;
  *puVar8 = uVar13;
  local_2c = (uint *)s_cState_Move_002193f0;
  local_30 = iVar6;
  if ((uint)puVar5[2] < 2) {
    iVar10 = puVar5[3];
  }
  else {
    iVar10 = puVar5[3] + 0x24;
  }
  puVar17 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar6 + 8))(&local_30);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_2c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_0021921c;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_0021921c:
  if (*(int *)(iVar10 + 8) <= (int)uVar16) {
    uVar16 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar16);
  iVar10 = DAT_002193c4;
  *(undefined1 *)((int)puVar17 + uVar16) = 0;
  uVar18 = *(undefined4 *)(iVar10 + 0x24);
  iVar7 = puVar5[6];
  uVar11 = *(undefined4 *)(iVar10 + 0x28);
  uVar19 = *(undefined4 *)(iVar10 + 0x30);
  uVar12 = *(undefined4 *)(iVar10 + 0x34);
  uVar13 = *(undefined4 *)(iVar10 + 0x38);
  *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar10 + 0x2c);
  *(undefined4 *)(iVar7 + 0xc) = uVar19;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 8) = uVar12;
  *(undefined4 *)(iVar10 + 0xc) = uVar13;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 8) = uVar18;
  *(undefined4 *)(iVar10 + 0xc) = uVar11;
  local_2c = (uint *)s_cState_Reaction_002193fc;
  local_30 = iVar6;
  if ((uint)puVar5[2] < 3) {
    iVar10 = puVar5[3];
  }
  else {
    iVar10 = puVar5[3] + 0x48;
  }
  puVar17 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar6 + 8))(&local_30);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_2c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_002192f0;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_002192f0:
  if (*(int *)(iVar10 + 8) <= (int)uVar16) {
    uVar16 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar16);
  *(undefined1 *)((int)puVar17 + uVar16) = 0;
  iVar10 = DAT_002193c4;
  iVar7 = puVar5[6];
  uVar11 = *(undefined4 *)(DAT_002193c4 + 0x28);
  uVar12 = *(undefined4 *)(DAT_002193c4 + 0x44);
  uVar13 = *(undefined4 *)(DAT_002193c4 + 0x24);
  uVar18 = *(undefined4 *)(DAT_002193c4 + 0x40);
  uVar19 = *(undefined4 *)(DAT_002193c4 + 0x48);
  *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(DAT_002193c4 + 0x3c);
  *(undefined4 *)(iVar7 + 0x14) = uVar18;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar12;
  *(undefined4 *)(iVar7 + 0x14) = uVar19;
  iVar7 = puVar5[8];
  *(undefined4 *)(iVar7 + 0x10) = uVar13;
  *(undefined4 *)(iVar7 + 0x14) = uVar11;
  local_2c = (uint *)s_cState_Die_0021940c;
  local_30 = iVar6;
  if ((uint)puVar5[2] < 4) {
    iVar7 = puVar5[3];
  }
  else {
    iVar7 = puVar5[3] + 0x6c;
  }
  puVar17 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar6 + 8))(&local_30);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_2c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_00219424;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_00219424:
  if (*(int *)(iVar7 + 8) <= (int)uVar16) {
    uVar16 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar16);
  *(undefined1 *)((int)puVar17 + uVar16) = 0;
  uVar11 = *(undefined4 *)(iVar10 + 0x58);
  pfVar14 = *(float **)(iVar10 + 0x54);
  iVar6 = puVar5[6];
  uVar18 = *(undefined4 *)(iVar10 + 0x50);
  uVar12 = *(undefined4 *)(iVar10 + 0x24);
  uVar13 = *(undefined4 *)(iVar10 + 0x28);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar10 + 0x4c);
  *(undefined4 *)(iVar6 + 0x1c) = uVar18;
  iVar10 = puVar5[7];
  *(float **)(iVar10 + 0x18) = pfVar14;
  *(undefined4 *)(iVar10 + 0x1c) = uVar11;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 0x18) = uVar12;
  *(undefined4 *)(iVar10 + 0x1c) = uVar13;
  if ((param_2[0xb] & 2) == 0) {
    func_0065DC84(local_28,0);
  }
  else {
    func_0065DC84(local_28,1);
  }
  func_004F5BD8((int)puVar15,(uint *)0x0,(int **)0x0,pfVar14);
  sVar2 = *(short *)((int)param_2 + 0x2a);
  if (sVar2 == 1) {
    uVar11 = 0xa0000000;
  }
  else if (sVar2 == 2) {
    uVar11 = 0xe0000000;
  }
  else if (sVar2 == 3) {
    uVar11 = 0x20000000;
  }
  else {
    uVar11 = 0x60000000;
  }
  puVar5[0xe] = uVar11;
  *(byte *)((int)puVar5 + 0x41) = (byte)(short)param_2[0xb] & 1;
  func_004F87F8((int)puVar15,3);
  puVar5[-200] = puVar5[-200] & 0xfbffffff | 0x20000000;
  return puVar15;
}

