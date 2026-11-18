#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_002B1440(int param_1,int param_2,ushort param_3,undefined1 param_4);
extern int func_002B1FB4(int param_1,int param_2,ushort param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB024(int param_1);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0066B1B4(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_0050146c;
extern int DAT_00501470;
extern int DAT_00501474;
extern undefined4 DAT_00501478;
extern int DAT_0050147c;
extern undefined *DAT_00501480;
extern int DAT_00501484;
extern int DAT_00501494;
extern undefined4 DAT_005014d0;
extern float DAT_005014d4;
extern float DAT_005014d8;
extern char s_cState_Attack_005014a4[];
extern char s_cState_Die_005014c4[];
extern char s_cState_Fake_00501488[];
extern char s_cState_Move_00501498[];
extern char s_cState_Reaction_005014b4[];

// USA 0050109C <- EU 00501074 (Ghidra, non-matching)
// GLOBAL DAT_0050146c uint *
// GLOBAL DAT_00501470 int
// GLOBAL DAT_00501474 int
// GLOBAL DAT_00501478 undefined4
// GLOBAL DAT_0050147c int
// GLOBAL DAT_00501480 undefined *
// GLOBAL DAT_00501484 int
// GLOBAL DAT_00501494 int
// GLOBAL DAT_005014d0 undefined4
// GLOBAL DAT_005014d4 float
// GLOBAL DAT_005014d8 float
// GLOBAL s_cState_Attack_005014a4 string
// GLOBAL s_cState_Die_005014c4 string
// GLOBAL s_cState_Fake_00501488 string
// GLOBAL s_cState_Move_00501498 string
// GLOBAL s_cState_Reaction_005014b4 string

undefined4 * func_0050109C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float *in_r3;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar3 = func_004FD464(param_1,param_2,DAT_0050146c);
  iVar9 = DAT_00501470;
  *piVar3 = DAT_00501470;
  piVar3[200] = iVar9 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  iVar9 = DAT_00501474;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar11 = *(undefined4 *)(iVar9 + 4);
  puVar4[0xc] = *(undefined4 *)(iVar9 + 8);
  puVar4[9] = DAT_00501478;
  puVar4[10] = puVar4 + -0x22f;
  puVar4[0xb] = uVar11;
  puVar14 = puVar4 + -0x22f;
  func_004FB344((int)puVar14,7);
  iVar5 = DAT_0050147c;
  uVar13 = 0;
  do {
    func_004FACA4((int)puVar14,uVar13,(int *)(iVar5 + uVar13 * 8));
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 7);
  func_004FB468((int)puVar14);
  func_004F5BD8((int)puVar14,(uint *)0x0,(int **)0x0,in_r3);
  puVar4[5] = puVar14;
  *(undefined1 *)((int)puVar4 + 6) = 5;
  iVar5 = func_0010BA78(0x50);
  puVar4[6] = iVar5;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar8 = 5;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar11 = *(undefined4 *)(iVar9 + 0x68);
    iVar8 = iVar8 + -1;
    puVar6[2] = *(undefined4 *)(iVar9 + 100);
    puVar6[3] = uVar11;
    uVar11 = *(undefined4 *)(iVar9 + 0x68);
    puVar6[4] = *(undefined4 *)(iVar9 + 100);
    puVar6[5] = uVar11;
    puVar6 = puVar6 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar6;
  if (uVar13 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = *(undefined4 *)(iVar9 + 0x20);
      *puVar6 = *(undefined4 *)(iVar9 + 0x1c);
      puVar6[1] = uVar11;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar13 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar11 = *(undefined4 *)(iVar9 + 0x20);
      puVar7[2] = *(undefined4 *)(iVar9 + 0x1c);
      puVar7[3] = uVar11;
      uVar11 = *(undefined4 *)(iVar9 + 0x20);
      puVar7[4] = *(undefined4 *)(iVar9 + 0x1c);
      puVar7[5] = uVar11;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  puVar2 = DAT_00501480;
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[1] = 5;
    *puVar6 = 0x24;
    iVar5 = func_00100118((int)(puVar6 + 2),puVar2,0x24,5);
  }
  if (iVar5 != 0) {
    puVar4[3] = iVar5;
    puVar4[2] = 5;
  }
  iVar5 = DAT_00501484;
  puVar4[-0x15a] = puVar4;
  iVar8 = DAT_00501494;
  *(undefined2 *)(iVar5 + (int)puVar14) = 5;
  local_34 = s_cState_Fake_00501488;
  local_38 = iVar8;
  func_0010BEC4((int)puVar4,0,&local_38);
  puVar6 = (undefined4 *)puVar4[6];
  uVar11 = *(undefined4 *)(iVar9 + 0x10);
  uVar12 = *(undefined4 *)(iVar9 + 0x14);
  uVar15 = *(undefined4 *)(iVar9 + 0x18);
  uVar16 = *(undefined8 *)(iVar9 + 0x1c);
  *puVar6 = *(undefined4 *)(iVar9 + 0xc);
  puVar6[1] = uVar11;
  puVar6 = (undefined4 *)puVar4[7];
  *puVar6 = uVar12;
  puVar6[1] = uVar15;
  puVar6 = (undefined4 *)puVar4[8];
  *puVar6 = (int)uVar16;
  puVar6[1] = (int)((ulonglong)uVar16 >> 0x20);
  local_34 = s_cState_Move_00501498;
  local_38 = iVar8;
  func_0010BEC4((int)puVar4,1,&local_38);
  iVar5 = puVar4[6];
  uVar11 = *(undefined4 *)(iVar9 + 0x2c);
  uVar12 = *(undefined4 *)(iVar9 + 0x30);
  uVar15 = *(undefined4 *)(iVar9 + 0x28);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar9 + 0x24);
  *(undefined4 *)(iVar5 + 0xc) = uVar15;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar11;
  *(undefined4 *)(iVar5 + 0xc) = uVar12;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 8) = (int)uVar16;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar16 >> 0x20);
  local_34 = s_cState_Attack_005014a4;
  local_38 = iVar8;
  func_0010BEC4((int)puVar4,2,&local_38);
  iVar5 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar9 + 0x38);
  uVar15 = *(undefined4 *)(iVar9 + 0x3c);
  uVar11 = *(undefined4 *)(iVar9 + 0x40);
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar9 + 0x34);
  *(undefined4 *)(iVar5 + 0x14) = uVar12;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar15;
  *(undefined4 *)(iVar5 + 0x14) = uVar11;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x10) = (int)uVar16;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar16 >> 0x20);
  local_34 = s_cState_Reaction_005014b4;
  local_38 = iVar8;
  func_0010BEC4((int)puVar4,3,&local_38);
  iVar5 = puVar4[6];
  uVar11 = *(undefined4 *)(iVar9 + 0x50);
  uVar12 = *(undefined4 *)(iVar9 + 0x4c);
  uVar15 = *(undefined4 *)(iVar9 + 0x48);
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar9 + 0x44);
  *(undefined4 *)(iVar5 + 0x1c) = uVar15;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x18) = uVar12;
  *(undefined4 *)(iVar5 + 0x1c) = uVar11;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x18) = (int)uVar16;
  *(int *)(iVar5 + 0x1c) = (int)((ulonglong)uVar16 >> 0x20);
  local_34 = s_cState_Die_005014c4;
  local_38 = iVar8;
  func_0010BEC4((int)puVar4,4,&local_38);
  iVar5 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar9 + 0x58);
  uVar11 = *(undefined4 *)(iVar9 + 0x5c);
  uVar15 = *(undefined4 *)(iVar9 + 0x60);
  *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar9 + 0x54);
  *(undefined4 *)(iVar5 + 0x24) = uVar12;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 0x20) = uVar11;
  *(undefined4 *)(iVar9 + 0x24) = uVar15;
  iVar9 = puVar4[8];
  *(int *)(iVar9 + 0x20) = (int)uVar16;
  *(int *)(iVar9 + 0x24) = (int)((ulonglong)uVar16 >> 0x20);
  func_0066B1B4(puVar4,0);
  uVar11 = DAT_005014d0;
  puVar4[-200] = puVar4[-200] | 0x8000;
  uVar10 = (ushort)uVar11;
  func_002B1FB4((int)puVar14,-1,uVar10);
  func_002B1440((int)puVar14,-1,uVar10,0);
  func_004FBA18((int)puVar14,6,0xff,-1,0x1e,0,uVar10,DAT_005014d8,DAT_005014d4);
  *(undefined1 *)(puVar4 + -10) = 2;
  *(undefined1 *)((int)puVar4 + -0x13f) = 4;
  *(undefined1 *)((int)puVar4 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x13d) = 0;
  func_002AF5FC((int)puVar14,3,-1);
  func_004FB024((int)puVar14);
  return puVar14;
}

