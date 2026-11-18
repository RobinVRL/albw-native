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
extern int func_00657BD4(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_00154194;
extern int DAT_00154198;
extern int DAT_0015419c;
extern int DAT_001541a0;
extern int DAT_001541a4;
extern uint DAT_001541a8;
extern int DAT_001541ac;
extern int *DAT_001541b0;
extern undefined *DAT_001541b4;
extern int DAT_001541b8;
extern int DAT_001541c8;
extern float DAT_00154448;
extern char s_cState_Die_0015443c[];
extern char s_cState_Escape_001541e8[];
extern char s_cState_Event_0015441c[];
extern char s_cState_Fall_001541dc[];
extern char s_cState_Move_001541bc[];
extern char s_cState_Reaction_0015442c[];
extern char s_cState_Revival_001541f8[];
extern char s_cState_Tornado_001541cc[];

// USA 00153D98 <- EU 00153D9C (Ghidra, non-matching)
// GLOBAL DAT_00154194 uint *
// GLOBAL DAT_00154198 int
// GLOBAL DAT_0015419c int
// GLOBAL DAT_001541a0 int
// GLOBAL DAT_001541a4 int
// GLOBAL DAT_001541a8 uint
// GLOBAL DAT_001541ac int
// GLOBAL DAT_001541b0 int *
// GLOBAL DAT_001541b4 undefined *
// GLOBAL DAT_001541b8 int
// GLOBAL DAT_001541c8 int
// GLOBAL DAT_00154448 float
// GLOBAL s_cState_Die_0015443c string
// GLOBAL s_cState_Escape_001541e8 string
// GLOBAL s_cState_Event_0015441c string
// GLOBAL s_cState_Fall_001541dc string
// GLOBAL s_cState_Move_001541bc string
// GLOBAL s_cState_Reaction_0015442c string
// GLOBAL s_cState_Revival_001541f8 string
// GLOBAL s_cState_Tornado_001541cc string

undefined4 * func_00153D98(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fparam_0;
  ulonglong uVar17;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar3 = func_004FD464(param_1,param_2,DAT_00154194);
  iVar7 = DAT_0015419c;
  iVar8 = DAT_00154198 + 0x84;
  *piVar3 = DAT_00154198;
  piVar3[200] = iVar8;
  uVar13 = DAT_001541a8;
  iVar8 = *(int *)(iVar7 + 4);
  iVar11 = *(int *)(iVar7 + 8);
  uVar17 = (ulonglong)DAT_001541a8;
  piVar3[0x230] = (int)piVar3;
  piVar3[0x231] = iVar8;
  piVar3[0x232] = iVar11;
  iVar8 = DAT_001541a0;
  piVar3[0x22f] = DAT_001541a0;
  iVar11 = *(int *)(iVar7 + 0xc);
  iVar14 = *(int *)(iVar7 + 0x10);
  piVar3[0x234] = (int)piVar3;
  piVar3[0x235] = iVar11;
  piVar3[0x236] = iVar14;
  piVar3[0x233] = DAT_001541a4;
  iVar11 = *(int *)(iVar7 + 0x14);
  iVar14 = *(int *)(iVar7 + 0x18);
  piVar3[0x237] = iVar8;
  piVar3[0x238] = (int)piVar3;
  piVar3[0x239] = iVar11;
  piVar3[0x23a] = iVar14;
  piVar3[0x23b] = uVar13;
  piVar3[0x23c] = uVar13;
  piVar3[0x23d] = 0;
  piVar3[0x23e] = 0;
  piVar3[0x23f] = 0;
  piVar3[0x240] = 0;
  piVar3[0x241] = 0;
  piVar3[0x242] = 0;
  puVar4 = func_0010A794(piVar3 + 0x243);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined1 *)(puVar4 + 9) = 0;
  *(undefined1 *)((int)puVar4 + 0x25) = 0;
  iVar8 = *(int *)(iVar7 + 0x1c);
  uVar9 = *(undefined4 *)(iVar7 + 0x20);
  piVar3 = puVar4 + -0x12;
  puVar12 = puVar4 + -0x243;
  puVar4[-0x13] = puVar12;
  *piVar3 = iVar8;
  puVar4[-0x11] = uVar9;
  puVar4[-0x148] = puVar4 + -0x14;
  func_004FB344((int)puVar12,9);
  iVar8 = DAT_001541ac;
  uVar13 = 0;
  do {
    func_004FACA4((int)puVar12,uVar13,(int *)(iVar8 + uVar13 * 8));
    fparam_0 = ALBW_AS_F32(uVar17);
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 9);
  func_004FB468((int)puVar12);
  func_004FB30C((int)puVar12,1);
  piVar10 = DAT_001541b0;
  func_004FAC70((int)puVar12,0,DAT_001541b0);
  func_004FB408((int)puVar12);
  func_004FB070((int)puVar12,fparam_0);
  func_004FB4C4((int)puVar12,fparam_0);
  func_004FACD4((int)puVar12,(int *)0x0,piVar10,piVar3);
  puVar4[-2] = puVar4[-0x15b];
  iVar8 = func_0054DDF4((int)puVar12,1);
  puVar4[-1] = iVar8;
  *(undefined1 *)((int)puVar4 + 6) = 8;
  puVar4[5] = puVar12;
  iVar8 = func_0010BA78(0x80);
  puVar4[6] = iVar8;
  puVar4[7] = iVar8 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar11 = 8;
  puVar5 = (undefined4 *)(iVar8 + -8);
  do {
    uVar9 = *(undefined4 *)(iVar7 + 0xb0);
    iVar11 = iVar11 + -1;
    puVar5[2] = *(undefined4 *)(iVar7 + 0xac);
    puVar5[3] = uVar9;
    uVar9 = *(undefined4 *)(iVar7 + 0xb0);
    puVar5[4] = *(undefined4 *)(iVar7 + 0xac);
    puVar5[5] = uVar9;
    puVar5 = puVar5 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar5;
  if (uVar13 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = *(undefined4 *)(iVar7 + 0x38);
      *puVar5 = *(undefined4 *)(iVar7 + 0x34);
      puVar5[1] = uVar9;
      puVar6 = puVar5;
    }
    for (iVar8 = (int)uVar13 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar9 = *(undefined4 *)(iVar7 + 0x38);
      puVar6[2] = *(undefined4 *)(iVar7 + 0x34);
      puVar6[3] = uVar9;
      uVar9 = *(undefined4 *)(iVar7 + 0x38);
      puVar6[4] = *(undefined4 *)(iVar7 + 0x34);
      puVar6[5] = uVar9;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x128,(int *)0x0,4);
  iVar8 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 8;
    iVar8 = func_00100118((int)(puVar5 + 2),DAT_001541b4,0x24,8);
  }
  if (iVar8 != 0) {
    puVar4[3] = iVar8;
    puVar4[2] = 8;
  }
  iVar8 = DAT_001541b8;
  puVar4[-0x16e] = puVar4;
  iVar11 = DAT_001541c8;
  *(undefined2 *)(iVar8 + (int)puVar12) = 8;
  local_34 = s_cState_Move_001541bc;
  local_38 = iVar11;
  func_0010BEC4((int)puVar4,0,&local_38);
  puVar5 = (undefined4 *)puVar4[6];
  uVar9 = *(undefined4 *)(iVar7 + 0x2c);
  uVar15 = *(undefined4 *)(iVar7 + 0x28);
  uVar16 = *(undefined4 *)(iVar7 + 0x30);
  uVar18 = *(undefined8 *)(iVar7 + 0x34);
  *puVar5 = *(undefined4 *)(iVar7 + 0x24);
  puVar5[1] = uVar15;
  puVar5 = (undefined4 *)puVar4[7];
  *puVar5 = uVar9;
  puVar5[1] = uVar16;
  puVar5 = (undefined4 *)puVar4[8];
  *puVar5 = (int)uVar18;
  puVar5[1] = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Tornado_001541cc;
  local_38 = iVar11;
  func_0010BEC4((int)puVar4,1,&local_38);
  iVar8 = puVar4[6];
  uVar15 = *(undefined4 *)(iVar7 + 0x40);
  uVar9 = *(undefined4 *)(iVar7 + 0x44);
  uVar16 = *(undefined4 *)(iVar7 + 0x48);
  *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar7 + 0x3c);
  *(undefined4 *)(iVar8 + 0xc) = uVar15;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 8) = uVar9;
  *(undefined4 *)(iVar8 + 0xc) = uVar16;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 8) = (int)uVar18;
  *(int *)(iVar8 + 0xc) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Fall_001541dc;
  local_38 = iVar11;
  func_0010BEC4((int)puVar4,2,&local_38);
  iVar8 = puVar4[6];
  uVar15 = *(undefined4 *)(iVar7 + 0x50);
  uVar9 = *(undefined4 *)(iVar7 + 0x58);
  uVar16 = *(undefined4 *)(iVar7 + 0x54);
  *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar7 + 0x4c);
  *(undefined4 *)(iVar8 + 0x14) = uVar15;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar16;
  *(undefined4 *)(iVar8 + 0x14) = uVar9;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x10) = (int)uVar18;
  *(int *)(iVar8 + 0x14) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Escape_001541e8;
  local_38 = iVar11;
  func_0010BEC4((int)puVar4,3,&local_38);
  iVar8 = puVar4[6];
  uVar15 = *(undefined4 *)(iVar7 + 0x68);
  uVar16 = *(undefined4 *)(iVar7 + 0x60);
  uVar9 = *(undefined4 *)(iVar7 + 100);
  *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar7 + 0x5c);
  *(undefined4 *)(iVar8 + 0x1c) = uVar16;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar9;
  *(undefined4 *)(iVar8 + 0x1c) = uVar15;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x18) = (int)uVar18;
  *(int *)(iVar8 + 0x1c) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Revival_001541f8;
  local_38 = iVar11;
  func_0010BEC4((int)puVar4,4,&local_38);
  iVar8 = puVar4[6];
  uVar9 = *(undefined4 *)(iVar7 + 0x70);
  uVar15 = *(undefined4 *)(iVar7 + 0x74);
  uVar16 = *(undefined4 *)(iVar7 + 0x78);
  *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar7 + 0x6c);
  *(undefined4 *)(iVar8 + 0x24) = uVar9;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x20) = uVar15;
  *(undefined4 *)(iVar8 + 0x24) = uVar16;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x20) = (int)uVar18;
  *(int *)(iVar8 + 0x24) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Event_0015441c;
  local_38 = iVar11;
  func_0010BEC4((int)puVar4,5,&local_38);
  iVar8 = puVar4[6];
  uVar9 = *(undefined4 *)(iVar7 + 0x80);
  uVar15 = *(undefined4 *)(iVar7 + 0x84);
  uVar16 = *(undefined4 *)(iVar7 + 0x88);
  *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(iVar7 + 0x7c);
  *(undefined4 *)(iVar8 + 0x2c) = uVar9;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x28) = uVar15;
  *(undefined4 *)(iVar8 + 0x2c) = uVar16;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x28) = (int)uVar18;
  *(int *)(iVar8 + 0x2c) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Reaction_0015442c;
  local_38 = iVar11;
  func_0010BEC4((int)puVar4,6,&local_38);
  iVar8 = puVar4[6];
  uVar9 = *(undefined4 *)(iVar7 + 0x90);
  uVar15 = *(undefined4 *)(iVar7 + 0x94);
  uVar16 = *(undefined4 *)(iVar7 + 0x98);
  *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)(iVar7 + 0x8c);
  *(undefined4 *)(iVar8 + 0x34) = uVar9;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x30) = uVar15;
  *(undefined4 *)(iVar8 + 0x34) = uVar16;
  iVar8 = puVar4[8];
  *(int *)(iVar8 + 0x30) = (int)uVar18;
  *(int *)(iVar8 + 0x34) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Die_0015443c;
  local_38 = iVar11;
  func_0010BEC4((int)puVar4,7,&local_38);
  iVar8 = puVar4[6];
  uVar16 = *(undefined4 *)(iVar7 + 0xa0);
  uVar9 = *(undefined4 *)(iVar7 + 0xa8);
  uVar15 = *(undefined4 *)(iVar7 + 0xa4);
  *(undefined4 *)(iVar8 + 0x38) = *(undefined4 *)(iVar7 + 0x9c);
  *(undefined4 *)(iVar8 + 0x3c) = uVar16;
  iVar7 = puVar4[7];
  *(undefined4 *)(iVar7 + 0x38) = uVar15;
  *(undefined4 *)(iVar7 + 0x3c) = uVar9;
  iVar7 = puVar4[8];
  *(int *)(iVar7 + 0x38) = (int)uVar18;
  *(int *)(iVar7 + 0x3c) = (int)((ulonglong)uVar18 >> 0x20);
  if ((short)param_2[0xb] == 0) {
    func_00657BD4(puVar4,0);
  }
  else {
    func_00657BD4(puVar4,5);
  }
  puVar4[-0xdc] = puVar4[-0xdc] | 0x8000;
  sVar2 = *(short *)((int)param_2 + 0x2a);
  if (sVar2 == 1) {
    uVar9 = 0xa0000000;
  }
  else if (sVar2 == 2) {
    uVar9 = 0xe0000000;
  }
  else if (sVar2 == 3) {
    uVar9 = 0x20000000;
  }
  else {
    uVar9 = 0x60000000;
  }
  puVar4[-0x149] = uVar9;
  puVar4[-0x42] = puVar4 + -0x10;
  puVar4[-0x132] = puVar4 + -0xc;
  func_002AF5FC((int)puVar12,5,-1);
  *(undefined1 *)((int)puVar4 + -399) = 6;
  *(undefined1 *)((int)puVar4 + -0x18e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x18d) = 0;
  func_004FC218((int)puVar12,'\a',-1,0x7fff);
  func_004FBA18((int)puVar12,8,0xff,-1,-1,0,0x7fff,DAT_00154448,DAT_00154448);
  *(undefined1 *)(puVar4 + -0x1e) = 2;
  return puVar12;
}

