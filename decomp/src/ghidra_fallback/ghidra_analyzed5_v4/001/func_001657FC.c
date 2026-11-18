#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00658748(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_00165bfc;
extern int DAT_00165c00;
extern undefined4 DAT_00165c04;
extern undefined4 DAT_00165c08;
extern int DAT_00165c0c;
extern int DAT_00165c10;
extern undefined *DAT_00165c14;
extern int DAT_00165c18;
extern int DAT_00165c28;
extern float DAT_00165d6c;
extern char s_cState_Attack_00165c48[];
extern char s_cState_Die_00165c78[];
extern char s_cState_Fly_00165c3c[];
extern char s_cState_Hover_00165c58[];
extern char s_cState_Reaction_00165c68[];
extern char s_cState_Surface_00165c2c[];
extern char s_cState_Wait_00165c1c[];

// USA 001657FC <- EU 00165800 (Ghidra, non-matching)
// GLOBAL DAT_00165bfc uint *
// GLOBAL DAT_00165c00 int
// GLOBAL DAT_00165c04 undefined4
// GLOBAL DAT_00165c08 undefined4
// GLOBAL DAT_00165c0c int
// GLOBAL DAT_00165c10 int
// GLOBAL DAT_00165c14 undefined *
// GLOBAL DAT_00165c18 int
// GLOBAL DAT_00165c28 int
// GLOBAL DAT_00165d6c float
// GLOBAL s_cState_Attack_00165c48 string
// GLOBAL s_cState_Die_00165c78 string
// GLOBAL s_cState_Fly_00165c3c string
// GLOBAL s_cState_Hover_00165c58 string
// GLOBAL s_cState_Reaction_00165c68 string
// GLOBAL s_cState_Surface_00165c2c string
// GLOBAL s_cState_Wait_00165c1c string

undefined4 * func_001657FC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  piVar2 = func_004FD464(param_1,param_2,DAT_00165bfc);
  iVar7 = DAT_00165c00;
  *piVar2 = DAT_00165c00;
  piVar2[200] = iVar7 + 0x84;
  puVar3 = func_0010A794(piVar2 + 0x22f);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  pfVar9 = (float *)puVar3[-0x13b];
  puVar3[0xb] = puVar3[-0x139];
  uVar12 = DAT_00165c04;
  puVar3[9] = pfVar9;
  puVar3[10] = puVar3[-0x13a];
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar10 = puVar3 + -0x22f;
  puVar3[0xe] = uVar12;
  puVar3[0x10] = uVar12;
  puVar3[0x11] = uVar12;
  uVar12 = DAT_00165c08;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = uVar12;
  *(undefined1 *)(puVar3 + 0x15) = 0;
  func_004FB344((int)puVar10,0xb);
  iVar7 = DAT_00165c0c;
  uVar11 = 0;
  do {
    func_004FACA4((int)puVar10,uVar11,(int *)(iVar7 + uVar11 * 8));
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0xb);
  func_004FB468((int)puVar10);
  func_004F5BD8((int)puVar10,(uint *)0x0,(int **)0x0,pfVar9);
  puVar3[5] = puVar10;
  *(undefined1 *)((int)puVar3 + 6) = 7;
  iVar4 = func_0010BA78(0x70);
  iVar7 = DAT_00165c10;
  puVar3[6] = iVar4;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar8 = 7;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar12 = *(undefined4 *)(iVar7 + 0x80);
    iVar8 = iVar8 + -1;
    puVar5[2] = *(undefined4 *)(iVar7 + 0x7c);
    puVar5[3] = uVar12;
    uVar12 = *(undefined4 *)(iVar7 + 0x80);
    puVar5[4] = *(undefined4 *)(iVar7 + 0x7c);
    puVar5[5] = uVar12;
    puVar5 = puVar5 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar11 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar3[8] = puVar5;
  if (uVar11 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = *(undefined4 *)(iVar7 + 0x18);
      *puVar5 = *(undefined4 *)(iVar7 + 0x14);
      puVar5[1] = uVar12;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar11 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar12 = *(undefined4 *)(iVar7 + 0x18);
      puVar6[2] = *(undefined4 *)(iVar7 + 0x14);
      puVar6[3] = uVar12;
      uVar12 = *(undefined4 *)(iVar7 + 0x18);
      puVar6[4] = *(undefined4 *)(iVar7 + 0x14);
      puVar6[5] = uVar12;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 7;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_00165c14,0x24,7);
  }
  if (iVar4 != 0) {
    puVar3[3] = iVar4;
    puVar3[2] = 7;
  }
  iVar4 = DAT_00165c18;
  puVar3[-0x15a] = puVar3;
  iVar8 = DAT_00165c28;
  *(undefined2 *)(iVar4 + (int)puVar10) = 7;
  local_2c = s_cState_Wait_00165c1c;
  local_30 = iVar8;
  func_0010BEC4((int)puVar3,0,&local_30);
  puVar5 = (undefined4 *)puVar3[6];
  uVar12 = *(undefined4 *)(iVar7 + 0xc);
  uVar13 = *(undefined4 *)(iVar7 + 0x10);
  uVar14 = *(undefined4 *)(iVar7 + 8);
  uVar15 = *(undefined8 *)(iVar7 + 0x14);
  *puVar5 = *(undefined4 *)(iVar7 + 4);
  puVar5[1] = uVar14;
  puVar5 = (undefined4 *)puVar3[7];
  *puVar5 = uVar12;
  puVar5[1] = uVar13;
  puVar5 = (undefined4 *)puVar3[8];
  *puVar5 = (int)uVar15;
  puVar5[1] = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cState_Surface_00165c2c;
  local_30 = iVar8;
  func_0010BEC4((int)puVar3,1,&local_30);
  iVar4 = puVar3[6];
  uVar12 = *(undefined4 *)(iVar7 + 0x20);
  uVar14 = *(undefined4 *)(iVar7 + 0x24);
  uVar13 = *(undefined4 *)(iVar7 + 0x28);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar7 + 0x1c);
  *(undefined4 *)(iVar4 + 0xc) = uVar12;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 8) = uVar14;
  *(undefined4 *)(iVar4 + 0xc) = uVar13;
  iVar4 = puVar3[8];
  *(int *)(iVar4 + 8) = (int)uVar15;
  *(int *)(iVar4 + 0xc) = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cState_Fly_00165c3c;
  local_30 = iVar8;
  func_0010BEC4((int)puVar3,2,&local_30);
  iVar4 = puVar3[6];
  uVar12 = *(undefined4 *)(iVar7 + 0x30);
  uVar13 = *(undefined4 *)(iVar7 + 0x34);
  uVar14 = *(undefined4 *)(iVar7 + 0x38);
  *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar7 + 0x2c);
  *(undefined4 *)(iVar4 + 0x14) = uVar12;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x10) = uVar13;
  *(undefined4 *)(iVar4 + 0x14) = uVar14;
  iVar4 = puVar3[8];
  *(int *)(iVar4 + 0x10) = (int)uVar15;
  *(int *)(iVar4 + 0x14) = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cState_Attack_00165c48;
  local_30 = iVar8;
  func_0010BEC4((int)puVar3,3,&local_30);
  iVar4 = puVar3[6];
  uVar13 = *(undefined4 *)(iVar7 + 0x40);
  uVar12 = *(undefined4 *)(iVar7 + 0x44);
  uVar14 = *(undefined4 *)(iVar7 + 0x48);
  *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar7 + 0x3c);
  *(undefined4 *)(iVar4 + 0x1c) = uVar13;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x18) = uVar12;
  *(undefined4 *)(iVar4 + 0x1c) = uVar14;
  iVar4 = puVar3[8];
  *(int *)(iVar4 + 0x18) = (int)uVar15;
  *(int *)(iVar4 + 0x1c) = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cState_Hover_00165c58;
  local_30 = iVar8;
  func_0010BEC4((int)puVar3,4,&local_30);
  iVar4 = puVar3[6];
  uVar14 = *(undefined4 *)(iVar7 + 0x50);
  uVar12 = *(undefined4 *)(iVar7 + 0x54);
  uVar13 = *(undefined4 *)(iVar7 + 0x58);
  *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(iVar7 + 0x4c);
  *(undefined4 *)(iVar4 + 0x24) = uVar14;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x20) = uVar12;
  *(undefined4 *)(iVar4 + 0x24) = uVar13;
  iVar4 = puVar3[8];
  *(int *)(iVar4 + 0x20) = (int)uVar15;
  *(int *)(iVar4 + 0x24) = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cState_Reaction_00165c68;
  local_30 = iVar8;
  func_0010BEC4((int)puVar3,5,&local_30);
  iVar4 = puVar3[6];
  uVar12 = *(undefined4 *)(iVar7 + 0x60);
  uVar13 = *(undefined4 *)(iVar7 + 100);
  uVar14 = *(undefined4 *)(iVar7 + 0x68);
  *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(iVar7 + 0x5c);
  *(undefined4 *)(iVar4 + 0x2c) = uVar12;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x28) = uVar13;
  *(undefined4 *)(iVar4 + 0x2c) = uVar14;
  iVar4 = puVar3[8];
  *(int *)(iVar4 + 0x28) = (int)uVar15;
  *(int *)(iVar4 + 0x2c) = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cState_Die_00165c78;
  local_30 = iVar8;
  func_0010BEC4((int)puVar3,6,&local_30);
  iVar4 = puVar3[6];
  uVar12 = *(undefined4 *)(iVar7 + 0x70);
  uVar13 = *(undefined4 *)(iVar7 + 0x74);
  uVar14 = *(undefined4 *)(iVar7 + 0x78);
  *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(iVar7 + 0x6c);
  *(undefined4 *)(iVar4 + 0x34) = uVar12;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x30) = uVar13;
  *(undefined4 *)(iVar7 + 0x34) = uVar14;
  iVar7 = puVar3[8];
  *(int *)(iVar7 + 0x30) = (int)uVar15;
  *(int *)(iVar7 + 0x34) = (int)((ulonglong)uVar15 >> 0x20);
  func_00658748(puVar3,0);
  *(undefined1 *)((int)puVar3 + -0x13f) = 5;
  *(undefined1 *)((int)puVar3 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar3 + -0x13d) = 0;
  func_002AF5FC((int)puVar10,5,-1);
  func_004FC218((int)puVar10,'\x03',0,0x7fff);
  func_004FBA18((int)puVar10,6,0xff,0,-1,0,0x7fff,DAT_00165d6c,DAT_00165d6c);
  puVar3[-200] = puVar3[-200] & 0xffffffcf;
  func_004F87F8((int)puVar10,2);
  puVar3[-0xce] = puVar3[-0xce] | 0x800;
  iVar7 = puVar3[-0x126];
  if (iVar7 != 0) {
    *(uint *)(iVar7 + 0x2c) = *(uint *)(iVar7 + 0x2c) | 8;
  }
  puVar3[-200] = puVar3[-200] | 0x8000;
  return puVar10;
}

