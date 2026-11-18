#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
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
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_006605D4(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_00266638;
extern int DAT_0026663c;
extern int DAT_00266640;
extern int DAT_00266644;
extern int DAT_00266648;
extern uint DAT_0026664c;
extern int DAT_00266650;
extern int *DAT_00266654;
extern float DAT_00266658;
extern undefined *DAT_0026665c;
extern int DAT_00266660;
extern int DAT_00266670;
extern float DAT_00266864;
extern char s_cState_Die_00266858[];
extern char s_cState_Escape_00266690[];
extern char s_cState_Fall_00266684[];
extern char s_cState_Move_00266664[];
extern char s_cState_Reaction_00266848[];
extern char s_cState_Revival_002666a0[];
extern char s_cState_Tornado_00266674[];

// USA 00266208 <- EU 00266230 (Ghidra, non-matching)
// GLOBAL DAT_00266638 uint *
// GLOBAL DAT_0026663c int
// GLOBAL DAT_00266640 int
// GLOBAL DAT_00266644 int
// GLOBAL DAT_00266648 int
// GLOBAL DAT_0026664c uint
// GLOBAL DAT_00266650 int
// GLOBAL DAT_00266654 int *
// GLOBAL DAT_00266658 float
// GLOBAL DAT_0026665c undefined *
// GLOBAL DAT_00266660 int
// GLOBAL DAT_00266670 int
// GLOBAL DAT_00266864 float
// GLOBAL s_cState_Die_00266858 string
// GLOBAL s_cState_Escape_00266690 string
// GLOBAL s_cState_Fall_00266684 string
// GLOBAL s_cState_Move_00266664 string
// GLOBAL s_cState_Reaction_00266848 string
// GLOBAL s_cState_Revival_002666a0 string
// GLOBAL s_cState_Tornado_00266674 string

undefined4 * func_00266208(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  float fparam_0;
  undefined4 uVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x14))
  #define local_28 (*(uint * *)(albw_frame + 0x18))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar5 = func_004FD464(param_1,param_2,DAT_00266638);
  iVar3 = DAT_00266640;
  iVar9 = DAT_0026663c;
  piVar5[200] = DAT_0026663c + 0x84;
  *piVar5 = iVar9;
  uVar15 = DAT_0026664c;
  iVar9 = *(int *)(iVar3 + 4);
  iVar12 = *(int *)(iVar3 + 8);
  uVar19 = (ulonglong)DAT_0026664c;
  piVar5[0x230] = (int)piVar5;
  piVar5[0x231] = iVar9;
  piVar5[0x232] = iVar12;
  iVar9 = DAT_00266644;
  piVar5[0x22f] = DAT_00266644;
  iVar12 = *(int *)(iVar3 + 0xc);
  iVar16 = *(int *)(iVar3 + 0x10);
  piVar5[0x234] = (int)piVar5;
  piVar5[0x235] = iVar12;
  piVar5[0x236] = iVar16;
  piVar5[0x233] = DAT_00266648;
  iVar12 = *(int *)(iVar3 + 0x14);
  iVar16 = *(int *)(iVar3 + 0x18);
  piVar5[0x237] = iVar9;
  piVar5[0x238] = (int)piVar5;
  piVar5[0x239] = iVar12;
  piVar5[0x23a] = iVar16;
  iVar12 = *(int *)(iVar3 + 0x1c);
  iVar16 = *(int *)(iVar3 + 0x20);
  piVar5[0x23b] = iVar9;
  piVar5[0x23c] = (int)piVar5;
  piVar5[0x23d] = iVar12;
  piVar5[0x23e] = iVar16;
  piVar5[0x23f] = uVar15;
  piVar5[0x240] = uVar15;
  piVar5[0x241] = 0;
  piVar5[0x242] = 0;
  *(undefined1 *)(piVar5 + 0x243) = 0;
  *(undefined1 *)((int)piVar5 + 0x90d) = 0;
  *(undefined1 *)((int)piVar5 + 0x90e) = 0;
  piVar5[0x244] = 0;
  piVar5[0x245] = 0;
  puVar6 = func_0010A794(piVar5 + 0x246);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  *(undefined1 *)(puVar6 + 9) = 0;
  iVar9 = *(int *)(iVar3 + 0x24);
  uVar10 = *(undefined4 *)(iVar3 + 0x28);
  piVar5 = puVar6 + -0x15;
  puVar14 = puVar6 + -0x246;
  puVar6[-0x16] = puVar14;
  *piVar5 = iVar9;
  puVar6[-0x14] = uVar10;
  puVar6[-0x14b] = puVar6 + -0x17;
  func_004FB344((int)puVar14,9);
  iVar9 = DAT_00266650;
  uVar15 = 0;
  do {
    func_004FACA4((int)puVar14,uVar15,(int *)(iVar9 + uVar15 * 8));
    fparam_0 = ALBW_AS_F32(uVar19);
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 9);
  func_004FB468((int)puVar14);
  func_004FB30C((int)puVar14,1);
  piVar11 = DAT_00266654;
  func_004FAC70((int)puVar14,0,DAT_00266654);
  func_004FB408((int)puVar14);
  func_004FB070((int)puVar14,DAT_00266658);
  func_004FB4C4((int)puVar14,fparam_0);
  func_004FACD4((int)puVar14,(int *)0x0,piVar11,piVar5);
  puVar6[-2] = puVar6[-0x15e];
  iVar9 = func_0054DDF4((int)puVar14,1);
  puVar6[-1] = iVar9;
  *(undefined1 *)((int)puVar6 + 6) = 7;
  puVar6[5] = puVar14;
  iVar9 = func_0010BA78(0x70);
  puVar6[6] = iVar9;
  puVar6[7] = iVar9 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar12 = 7;
  puVar7 = (undefined4 *)(iVar9 + -8);
  do {
    uVar10 = *(undefined4 *)(iVar3 + 0xa8);
    iVar12 = iVar12 + -1;
    puVar7[2] = *(undefined4 *)(iVar3 + 0xa4);
    puVar7[3] = uVar10;
    uVar10 = *(undefined4 *)(iVar3 + 0xa8);
    puVar7[4] = *(undefined4 *)(iVar3 + 0xa4);
    puVar7[5] = uVar10;
    puVar7 = puVar7 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar15 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar6[8] = puVar7;
  if (uVar15 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = *(undefined4 *)(iVar3 + 0x40);
      *puVar7 = *(undefined4 *)(iVar3 + 0x3c);
      puVar7[1] = uVar10;
      puVar8 = puVar7;
    }
    for (iVar9 = (int)uVar15 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar10 = *(undefined4 *)(iVar3 + 0x40);
      puVar8[2] = *(undefined4 *)(iVar3 + 0x3c);
      puVar8[3] = uVar10;
      uVar10 = *(undefined4 *)(iVar3 + 0x40);
      puVar8[4] = *(undefined4 *)(iVar3 + 0x3c);
      puVar8[5] = uVar10;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
  puVar4 = DAT_0026665c;
  iVar9 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 7;
    *puVar7 = 0x24;
    iVar9 = func_00100118((int)(puVar7 + 2),puVar4,0x24,7);
  }
  if (iVar9 != 0) {
    puVar6[3] = iVar9;
    puVar6[2] = 7;
  }
  iVar9 = DAT_00266660;
  puVar6[-0x171] = puVar6;
  iVar12 = DAT_00266670;
  *(undefined2 *)(iVar9 + (int)puVar14) = 7;
  local_3c = s_cState_Move_00266664;
  local_40 = iVar12;
  func_0010BEC4((int)puVar6,0,&local_40);
  puVar7 = (undefined4 *)puVar6[6];
  uVar17 = *(undefined4 *)(iVar3 + 0x34);
  uVar10 = *(undefined4 *)(iVar3 + 0x2c);
  uVar13 = *(undefined4 *)(iVar3 + 0x38);
  uVar20 = *(undefined4 *)(iVar3 + 0x3c);
  uVar18 = *(undefined4 *)(iVar3 + 0x40);
  puVar7[1] = *(undefined4 *)(iVar3 + 0x30);
  *puVar7 = uVar10;
  puVar7 = (undefined4 *)puVar6[7];
  puVar7[1] = uVar13;
  *puVar7 = uVar17;
  puVar7 = (undefined4 *)puVar6[8];
  *puVar7 = uVar20;
  puVar7[1] = uVar18;
  local_3c = s_cState_Tornado_00266674;
  local_40 = iVar12;
  func_0010BEC4((int)puVar6,1,&local_40);
  iVar9 = puVar6[6];
  uVar17 = *(undefined4 *)(iVar3 + 0x48);
  uVar10 = *(undefined4 *)(iVar3 + 0x50);
  uVar13 = *(undefined4 *)(iVar3 + 0x4c);
  *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar3 + 0x44);
  *(undefined4 *)(iVar9 + 0xc) = uVar17;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 8) = uVar13;
  *(undefined4 *)(iVar9 + 0xc) = uVar10;
  iVar9 = puVar6[8];
  *(undefined4 *)(iVar9 + 8) = uVar20;
  *(undefined4 *)(iVar9 + 0xc) = uVar18;
  local_3c = s_cState_Fall_00266684;
  local_40 = iVar12;
  func_0010BEC4((int)puVar6,2,&local_40);
  iVar9 = puVar6[6];
  uVar10 = *(undefined4 *)(iVar3 + 0x58);
  uVar13 = *(undefined4 *)(iVar3 + 0x5c);
  uVar17 = *(undefined4 *)(iVar3 + 0x60);
  *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(iVar9 + 0x14) = uVar10;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 0x10) = uVar13;
  *(undefined4 *)(iVar9 + 0x14) = uVar17;
  iVar9 = puVar6[8];
  *(undefined4 *)(iVar9 + 0x10) = uVar20;
  *(undefined4 *)(iVar9 + 0x14) = uVar18;
  local_3c = s_cState_Escape_00266690;
  local_40 = iVar12;
  func_0010BEC4((int)puVar6,3,&local_40);
  iVar9 = puVar6[6];
  uVar10 = *(undefined4 *)(iVar3 + 0x68);
  uVar13 = *(undefined4 *)(iVar3 + 0x6c);
  uVar17 = *(undefined4 *)(iVar3 + 0x70);
  *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(iVar3 + 100);
  *(undefined4 *)(iVar9 + 0x1c) = uVar10;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 0x18) = uVar13;
  *(undefined4 *)(iVar9 + 0x1c) = uVar17;
  iVar9 = puVar6[8];
  *(undefined4 *)(iVar9 + 0x18) = uVar20;
  *(undefined4 *)(iVar9 + 0x1c) = uVar18;
  local_3c = s_cState_Revival_002666a0;
  local_40 = iVar12;
  func_0010BEC4((int)puVar6,4,&local_40);
  iVar9 = puVar6[6];
  uVar10 = *(undefined4 *)(iVar3 + 0x78);
  uVar13 = *(undefined4 *)(iVar3 + 0x7c);
  uVar17 = *(undefined4 *)(iVar3 + 0x80);
  *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(iVar3 + 0x74);
  *(undefined4 *)(iVar9 + 0x24) = uVar10;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 0x20) = uVar13;
  *(undefined4 *)(iVar9 + 0x24) = uVar17;
  iVar9 = puVar6[8];
  *(undefined4 *)(iVar9 + 0x20) = uVar20;
  *(undefined4 *)(iVar9 + 0x24) = uVar18;
  local_3c = s_cState_Reaction_00266848;
  local_40 = iVar12;
  func_0010BEC4((int)puVar6,5,&local_40);
  iVar9 = puVar6[6];
  uVar10 = *(undefined4 *)(iVar3 + 0x88);
  uVar13 = *(undefined4 *)(iVar3 + 0x8c);
  uVar17 = *(undefined4 *)(iVar3 + 0x90);
  *(undefined4 *)(iVar9 + 0x28) = *(undefined4 *)(iVar3 + 0x84);
  *(undefined4 *)(iVar9 + 0x2c) = uVar10;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 0x28) = uVar13;
  *(undefined4 *)(iVar9 + 0x2c) = uVar17;
  iVar9 = puVar6[8];
  *(undefined4 *)(iVar9 + 0x28) = uVar20;
  *(undefined4 *)(iVar9 + 0x2c) = uVar18;
  local_3c = s_cState_Die_00266858;
  local_40 = iVar12;
  func_0010BEC4((int)puVar6,6,&local_40);
  iVar9 = puVar6[6];
  uVar10 = *(undefined4 *)(iVar3 + 0x98);
  uVar13 = *(undefined4 *)(iVar3 + 0x9c);
  uVar17 = *(undefined4 *)(iVar3 + 0xa0);
  *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar3 + 0x94);
  *(undefined4 *)(iVar9 + 0x34) = uVar10;
  iVar9 = puVar6[7];
  *(undefined4 *)(iVar9 + 0x30) = uVar13;
  *(undefined4 *)(iVar9 + 0x34) = uVar17;
  iVar9 = puVar6[8];
  *(undefined4 *)(iVar9 + 0x30) = uVar20;
  *(undefined4 *)(iVar9 + 0x34) = uVar18;
  func_006605D4(puVar6,0);
  puVar6[-0xdf] = puVar6[-0xdf] | 0x8000;
  sVar2 = *(short *)((int)local_28 + 0x2a);
  if (sVar2 == 1) {
    uVar10 = 0xa0000000;
  }
  else if (sVar2 == 2) {
    uVar10 = 0xe0000000;
  }
  else if (sVar2 == 3) {
    uVar10 = 0x20000000;
  }
  else {
    uVar10 = 0x60000000;
  }
  puVar6[-0x14c] = uVar10;
  puVar6[-0x45] = puVar6 + -0x13;
  puVar6[-0x135] = puVar6 + -0xf;
  func_002AF5FC((int)puVar14,5,-1);
  *(undefined1 *)((int)puVar6 + -0x19b) = 6;
  *(undefined1 *)((int)puVar6 + -0x19a) = 0xff;
  *(undefined1 *)((int)puVar6 + -0x199) = 0;
  *(undefined1 *)(puVar6 + -0x21) = 2;
  func_004FC218((int)puVar14,'\a',-1,0x7fff);
  func_004FBA18((int)puVar14,8,0xff,-1,-1,0,0x7fff,DAT_00266864,DAT_00266864);
  return puVar14;
}

