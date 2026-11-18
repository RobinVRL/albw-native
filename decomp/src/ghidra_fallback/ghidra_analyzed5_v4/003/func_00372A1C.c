#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0036D6F4(undefined4 *param_1,int param_2);
extern int func_003725D4(int param_1,uint param_2);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C17C0(int param_1);
extern int func_004ECF6C(int param_1);
extern int func_0062AE54(int param_1,int param_2,undefined1 param_3);
extern int func_0062BCCC(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_00372e4c;
extern undefined4 DAT_00372e50;
extern int *DAT_00372e54;
extern undefined DAT_00372e58;
extern int DAT_00372e64;
extern undefined4 DAT_00372e68;
extern undefined4 *DAT_00372e6c;
extern undefined *DAT_00372e70;
extern int DAT_00372e74;
extern char s_cState_EventEnd_00372ea0[];
extern char s_cState_Event_00372e90[];
extern char s_cState_Hide_00372eb0[];
extern char s_cState_Main_00372ebc[];
extern char s_cState_Wait_00372e78[];
extern char s_cState_Walk_00372e84[];

// USA 00372A1C <- EU 003729F8 (Ghidra, non-matching)
// GLOBAL DAT_00372e4c int
// GLOBAL DAT_00372e50 undefined4
// GLOBAL DAT_00372e54 int *
// GLOBAL DAT_00372e58 undefined
// GLOBAL DAT_00372e64 int
// GLOBAL DAT_00372e68 undefined4
// GLOBAL DAT_00372e6c undefined4 *
// GLOBAL DAT_00372e70 undefined *
// GLOBAL DAT_00372e74 int
// GLOBAL s_cState_EventEnd_00372ea0 string
// GLOBAL s_cState_Event_00372e90 string
// GLOBAL s_cState_Hide_00372eb0 string
// GLOBAL s_cState_Main_00372ebc string
// GLOBAL s_cState_Wait_00372e78 string
// GLOBAL s_cState_Walk_00372e84 string

int * func_00372A1C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined1 *)(albw_frame + 0x14))
  #define local_2b (*(undefined1 *)(albw_frame + 0x15))
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_2c = 0;
  local_2b = 1;
  piVar3 = (int *)func_0062BCCC(param_1,param_2,5,0xff,&local_38);
  iVar13 = DAT_00372e4c;
  *piVar3 = DAT_00372e4c;
  piVar3[200] = iVar13 + 0xb8;
  *(undefined1 *)((int)piVar3 + 0x989) = 0;
  *(undefined1 *)((int)piVar3 + 0x98a) = 0;
  *(undefined1 *)((int)piVar3 + 0x98b) = 0;
  *(undefined1 *)(piVar3 + 0x263) = 0;
  piVar3[0x264] = 0;
  piVar3[0x265] = 0;
  piVar3[0x266] = 0;
  piVar3[0x267] = 7;
  piVar3[0x268] = 0;
  puVar4 = func_0036D6F4(piVar3 + 0x269,(int)piVar3);
  piVar3 = DAT_00372e54;
  *puVar4 = DAT_00372e50;
  puVar4[10] = 0;
  *(undefined1 *)(puVar4 + 0xb) = 0;
  *(undefined1 *)((int)puVar4 + 0x2d) = 0;
  *(undefined1 *)((int)puVar4 + 0x2e) = 0;
  piVar11 = puVar4 + -0x269;
  puVar4[-3] = (int)*(short *)(*piVar3 + 0x20);
  func_003725D4((int)piVar11,0);
  iVar13 = DAT_00372e64;
  local_3c = &DAT_00372e58;
  local_40 = DAT_00372e64;
  func_004BE114(piVar11,4,0,0,DAT_00372e68);
  *(undefined1 *)((int)puVar4 + -0x93) = 3;
  *(undefined1 *)((int)puVar4 + -0x3e) = 6;
  puVar4[-0xc] = piVar11;
  iVar5 = func_0010BA78(0x60);
  puVar4[-0xb] = iVar5;
  puVar2 = DAT_00372e6c;
  puVar4[-10] = iVar5 + (uint)*(byte *)((int)puVar4 + -0x3e) * 8;
  iVar8 = 6;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar15 = puVar2[0x1f];
    iVar8 = iVar8 + -1;
    puVar6[2] = puVar2[0x1e];
    puVar6[3] = uVar15;
    uVar15 = puVar2[0x1f];
    puVar6[4] = puVar2[0x1e];
    puVar6[5] = uVar15;
    puVar6 = puVar6 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar4 + -0x3e);
  uVar14 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar4[-9] = puVar6;
  if (uVar14 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = puVar2[5];
      *puVar6 = puVar2[4];
      puVar6[1] = uVar15;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar14 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar15 = puVar2[5];
      puVar7[2] = puVar2[4];
      puVar7[3] = uVar15;
      uVar15 = puVar2[5];
      puVar7[4] = puVar2[4];
      puVar7[5] = uVar15;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 6;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_00372e70,0x24,6);
  }
  if (iVar5 != 0) {
    puVar4[-0xf] = 6;
    puVar4[-0xe] = iVar5;
  }
  iVar5 = DAT_00372e74;
  puVar4[-0x194] = puVar4 + -0x11;
  *(undefined2 *)(iVar5 + (int)piVar11) = 6;
  local_3c = s_cState_Wait_00372e78;
  local_40 = iVar13;
  func_0010BEC4((int)(puVar4 + -0x11),0,&local_40);
  puVar6 = (undefined4 *)puVar4[-0xb];
  uVar9 = puVar2[1];
  uVar15 = puVar2[2];
  uVar10 = puVar2[3];
  uVar17 = *(undefined8 *)(puVar2 + 4);
  *puVar6 = *puVar2;
  puVar6[1] = uVar9;
  puVar6 = (undefined4 *)puVar4[-10];
  *puVar6 = uVar15;
  puVar6[1] = uVar10;
  puVar6 = (undefined4 *)puVar4[-9];
  *puVar6 = (int)uVar17;
  puVar6[1] = (int)((ulonglong)uVar17 >> 0x20);
  local_3c = s_cState_Walk_00372e84;
  local_40 = iVar13;
  func_0010BEC4((int)(puVar4 + -0x11),1,&local_40);
  iVar5 = puVar4[-0xb];
  uVar9 = puVar2[7];
  uVar15 = puVar2[8];
  uVar10 = puVar2[9];
  *(undefined4 *)(iVar5 + 8) = puVar2[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar9;
  iVar5 = puVar4[-10];
  *(undefined4 *)(iVar5 + 8) = uVar15;
  *(undefined4 *)(iVar5 + 0xc) = uVar10;
  iVar5 = puVar4[-9];
  *(int *)(iVar5 + 8) = (int)uVar17;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar17 >> 0x20);
  local_3c = s_cState_Event_00372e90;
  local_40 = iVar13;
  func_0010BEC4((int)(puVar4 + -0x11),2,&local_40);
  iVar5 = puVar4[-0xb];
  uVar9 = puVar2[0xb];
  uVar15 = puVar2[0xc];
  uVar10 = puVar2[0xd];
  *(undefined4 *)(iVar5 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  iVar5 = puVar4[-10];
  *(undefined4 *)(iVar5 + 0x10) = uVar15;
  *(undefined4 *)(iVar5 + 0x14) = uVar10;
  iVar5 = puVar4[-9];
  *(int *)(iVar5 + 0x10) = (int)uVar17;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar17 >> 0x20);
  local_3c = s_cState_EventEnd_00372ea0;
  local_40 = iVar13;
  func_0010BEC4((int)(puVar4 + -0x11),3,&local_40);
  iVar5 = puVar4[-0xb];
  uVar12 = puVar2[0xf];
  uVar15 = puVar2[0x11];
  uVar16 = puVar2[0x12];
  uVar9 = puVar2[0x13];
  uVar10 = puVar2[0x10];
  *(undefined4 *)(iVar5 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar5 + 0x1c) = uVar12;
  iVar5 = puVar4[-10];
  *(undefined4 *)(iVar5 + 0x18) = uVar10;
  *(undefined4 *)(iVar5 + 0x1c) = uVar15;
  iVar5 = puVar4[-9];
  *(undefined4 *)(iVar5 + 0x18) = uVar16;
  *(undefined4 *)(iVar5 + 0x1c) = uVar9;
  local_3c = s_cState_Hide_00372eb0;
  local_40 = iVar13;
  func_0010BEC4((int)(puVar4 + -0x11),4,&local_40);
  iVar5 = puVar4[-0xb];
  uVar15 = puVar2[0x15];
  uVar9 = puVar2[0x16];
  uVar10 = puVar2[0x17];
  uVar12 = puVar2[0x18];
  uVar16 = puVar2[0x19];
  *(undefined4 *)(iVar5 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar5 + 0x24) = uVar15;
  iVar5 = puVar4[-10];
  *(undefined4 *)(iVar5 + 0x20) = uVar9;
  *(undefined4 *)(iVar5 + 0x24) = uVar10;
  iVar5 = puVar4[-9];
  *(undefined4 *)(iVar5 + 0x20) = uVar12;
  *(undefined4 *)(iVar5 + 0x24) = uVar16;
  local_3c = s_cState_Main_00372ebc;
  local_40 = iVar13;
  func_0010BEC4((int)(puVar4 + -0x11),5,&local_40);
  iVar13 = puVar4[-0xb];
  uVar9 = puVar2[0x1b];
  uVar15 = puVar2[0x1c];
  uVar16 = puVar2[0x1d];
  uVar10 = puVar2[4];
  uVar12 = puVar2[5];
  *(undefined4 *)(iVar13 + 0x28) = puVar2[0x1a];
  *(undefined4 *)(iVar13 + 0x2c) = uVar9;
  iVar13 = puVar4[-10];
  *(undefined4 *)(iVar13 + 0x28) = uVar15;
  *(undefined4 *)(iVar13 + 0x2c) = uVar16;
  iVar13 = puVar4[-9];
  *(undefined4 *)(iVar13 + 0x28) = uVar10;
  *(undefined4 *)(iVar13 + 0x2c) = uVar12;
  func_0062AE54((int)piVar11,puVar4[-8],0);
  func_004ECF6C((int)piVar11);
  func_004C17C0((int)piVar11);
  func_004BC8D8((int)piVar11);
  return piVar11;
}

