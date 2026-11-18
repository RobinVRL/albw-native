#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00282C7C(int param_1,uint param_2,undefined4 param_3,uint param_4);
extern int func_00282FC0(int param_1);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_0061ED30(int param_1,int param_2,undefined1 param_3);
extern int func_00652BF4(undefined4 *param_1,uint *param_2,undefined1 param_3);
extern int DAT_002834d8;
extern undefined DAT_002834dc;
extern int DAT_002834e4;
extern undefined4 DAT_002834e8;
extern undefined4 *DAT_002834ec;
extern undefined *DAT_002834f0;
extern int DAT_002834f4;
extern char s_cState_EventEnd_00283520[];
extern char s_cState_Event_00283510[];
extern char s_cState_Hide_00283530[];
extern char s_cState_ShopBaseWait_0028353c[];
extern char s_cState_Wait_002834f8[];
extern char s_cState_Walk_00283504[];

// USA 002830F8 <- EU 00283120 (Ghidra, non-matching)
// GLOBAL DAT_002834d8 int
// GLOBAL DAT_002834dc undefined
// GLOBAL DAT_002834e4 int
// GLOBAL DAT_002834e8 undefined4
// GLOBAL DAT_002834ec undefined4 *
// GLOBAL DAT_002834f0 undefined *
// GLOBAL DAT_002834f4 int
// GLOBAL s_cState_EventEnd_00283520 string
// GLOBAL s_cState_Event_00283510 string
// GLOBAL s_cState_Hide_00283530 string
// GLOBAL s_cState_ShopBaseWait_0028353c string
// GLOBAL s_cState_Wait_002834f8 string
// GLOBAL s_cState_Walk_00283504 string

int * func_002830F8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  piVar3 = (int *)func_00652BF4(param_1,param_2,3);
  iVar11 = DAT_002834e4;
  iVar4 = DAT_002834d8 + 0xbc;
  *piVar3 = DAT_002834d8;
  piVar3[200] = iVar4;
  piVar3[0x289] = -1;
  piVar3[0x288] = 0;
  *(undefined1 *)(piVar3 + 0x28a) = 0;
  local_2c = &DAT_002834dc;
  local_30 = iVar11;
  func_004BE114(piVar3,2,0,0,DAT_002834e8);
  *(undefined1 *)((int)piVar3 + 0x966) = 6;
  piVar3[0x25d] = (int)piVar3;
  iVar4 = func_0010BA78(0x60);
  piVar3[0x25e] = iVar4;
  puVar2 = DAT_002834ec;
  piVar3[0x25f] = iVar4 + (uint)*(byte *)((int)piVar3 + 0x966) * 8;
  iVar7 = 6;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar13 = puVar2[0x1f];
    iVar7 = iVar7 + -1;
    puVar5[2] = puVar2[0x1e];
    puVar5[3] = uVar13;
    uVar13 = puVar2[0x1f];
    puVar5[4] = puVar2[0x1e];
    puVar5[5] = uVar13;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)piVar3 + 0x966);
  uVar12 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar12 << 3);
  piVar3[0x260] = (int)puVar5;
  if (uVar12 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar2[5];
      *puVar5 = puVar2[4];
      puVar5[1] = uVar13;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar12 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar13 = puVar2[5];
      puVar6[2] = puVar2[4];
      puVar6[3] = uVar13;
      uVar13 = puVar2[5];
      puVar6[4] = puVar2[4];
      puVar6[5] = uVar13;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 6;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_002834f0,0x24,6);
  }
  if (iVar4 != 0) {
    piVar3[0x25a] = 6;
    piVar3[0x25b] = iVar4;
  }
  iVar4 = DAT_002834f4;
  piVar3[0xd5] = (int)(piVar3 + 600);
  *(undefined2 *)(iVar4 + (int)piVar3) = 6;
  local_2c = s_cState_Wait_002834f8;
  local_30 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),0,&local_30);
  puVar5 = (undefined4 *)piVar3[0x25e];
  uVar8 = puVar2[1];
  uVar13 = puVar2[2];
  uVar9 = puVar2[3];
  uVar15 = *(undefined8 *)(puVar2 + 4);
  *puVar5 = *puVar2;
  puVar5[1] = uVar8;
  puVar5 = (undefined4 *)piVar3[0x25f];
  *puVar5 = uVar13;
  puVar5[1] = uVar9;
  puVar5 = (undefined4 *)piVar3[0x260];
  *puVar5 = (int)uVar15;
  puVar5[1] = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cState_Walk_00283504;
  local_30 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),1,&local_30);
  iVar4 = piVar3[0x25e];
  uVar8 = puVar2[7];
  uVar13 = puVar2[8];
  uVar9 = puVar2[9];
  *(undefined4 *)(iVar4 + 8) = puVar2[6];
  *(undefined4 *)(iVar4 + 0xc) = uVar8;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 8) = uVar13;
  *(undefined4 *)(iVar4 + 0xc) = uVar9;
  iVar4 = piVar3[0x260];
  *(int *)(iVar4 + 8) = (int)uVar15;
  *(int *)(iVar4 + 0xc) = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cState_Event_00283510;
  local_30 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),2,&local_30);
  iVar4 = piVar3[0x25e];
  uVar9 = puVar2[0xb];
  uVar13 = puVar2[0xc];
  uVar8 = puVar2[0xd];
  *(undefined4 *)(iVar4 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar4 + 0x14) = uVar9;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x10) = uVar13;
  *(undefined4 *)(iVar4 + 0x14) = uVar8;
  iVar4 = piVar3[0x260];
  *(int *)(iVar4 + 0x10) = (int)uVar15;
  *(int *)(iVar4 + 0x14) = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cState_EventEnd_00283520;
  local_30 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),3,&local_30);
  iVar4 = piVar3[0x25e];
  uVar13 = puVar2[0x10];
  uVar8 = puVar2[0x11];
  uVar14 = puVar2[0x12];
  uVar10 = puVar2[0x13];
  uVar9 = puVar2[0xf];
  *(undefined4 *)(iVar4 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar4 + 0x1c) = uVar9;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x18) = uVar13;
  *(undefined4 *)(iVar4 + 0x1c) = uVar8;
  iVar4 = piVar3[0x260];
  *(undefined4 *)(iVar4 + 0x18) = uVar14;
  *(undefined4 *)(iVar4 + 0x1c) = uVar10;
  local_2c = s_cState_Hide_00283530;
  local_30 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),4,&local_30);
  iVar4 = piVar3[0x25e];
  uVar9 = puVar2[0x17];
  uVar13 = puVar2[0x18];
  uVar8 = puVar2[0x19];
  uVar10 = puVar2[0x15];
  uVar14 = puVar2[0x16];
  *(undefined4 *)(iVar4 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar4 + 0x24) = uVar10;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x20) = uVar14;
  *(undefined4 *)(iVar4 + 0x24) = uVar9;
  iVar4 = piVar3[0x260];
  *(undefined4 *)(iVar4 + 0x20) = uVar13;
  *(undefined4 *)(iVar4 + 0x24) = uVar8;
  local_2c = s_cState_ShopBaseWait_0028353c;
  local_30 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),5,&local_30);
  uVar12 = puVar2[0x1a];
  iVar11 = piVar3[0x25e];
  uVar13 = puVar2[0x1b];
  uVar9 = puVar2[0x1c];
  uVar14 = puVar2[0x1d];
  uVar8 = puVar2[4];
  uVar10 = puVar2[5];
  *(uint *)(iVar11 + 0x28) = uVar12;
  *(undefined4 *)(iVar11 + 0x2c) = uVar13;
  iVar11 = piVar3[0x25f];
  *(undefined4 *)(iVar11 + 0x28) = uVar9;
  *(undefined4 *)(iVar11 + 0x2c) = uVar14;
  iVar11 = piVar3[0x260];
  uVar13 = 0;
  *(undefined4 *)(iVar11 + 0x28) = uVar8;
  *(undefined4 *)(iVar11 + 0x2c) = uVar10;
  func_0061ED30((int)piVar3,piVar3[0x261],0);
  func_004BC8D8((int)piVar3);
  piVar3[0x22b] = piVar3[0x22b] | 0x10;
  func_00282C7C((int)piVar3,0xffffffff,uVar13,uVar12);
  func_00282FC0((int)piVar3);
  return piVar3;
}

