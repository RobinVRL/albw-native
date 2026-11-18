#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC8D8(int param_1);
extern int func_0062DDF8(int param_1,int param_2,undefined1 param_3);
extern undefined4 *DAT_00374dcc;
extern undefined *DAT_00374dd0;
extern int DAT_00374dd4;
extern int DAT_00374de4;
extern char s_cState_EventEnd_00374e04[];
extern char s_cState_Event_00374df4[];
extern char s_cState_Hide_00374e14[];
extern char s_cState_ShopBaseWait_00374e20[];
extern char s_cState_Wait_00374dd8[];
extern char s_cState_Walk_00374de8[];

// USA 00374AC4 <- EU 00374AA0 (Ghidra, non-matching)
// GLOBAL DAT_00374dcc undefined4 *
// GLOBAL DAT_00374dd0 undefined *
// GLOBAL DAT_00374dd4 int
// GLOBAL DAT_00374de4 int
// GLOBAL s_cState_EventEnd_00374e04 string
// GLOBAL s_cState_Event_00374df4 string
// GLOBAL s_cState_Hide_00374e14 string
// GLOBAL s_cState_ShopBaseWait_00374e20 string
// GLOBAL s_cState_Wait_00374dd8 string
// GLOBAL s_cState_Walk_00374de8 string

undefined4 func_00374AC4(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  *(int *)(param_1 + 0x974) = param_1;
  *(undefined1 *)(param_1 + 0x966) = 6;
  iVar3 = func_0010BA78(0x60);
  puVar2 = DAT_00374dcc;
  *(int *)(param_1 + 0x978) = iVar3;
  *(uint *)(param_1 + 0x97c) = iVar3 + (uint)*(byte *)(param_1 + 0x966) * 8;
  iVar6 = 6;
  puVar4 = (undefined4 *)(iVar3 + -8);
  do {
    uVar10 = puVar2[0x1f];
    iVar6 = iVar6 + -1;
    puVar4[2] = puVar2[0x1e];
    puVar4[3] = uVar10;
    uVar10 = puVar2[0x1f];
    puVar4[4] = puVar2[0x1e];
    puVar4[5] = uVar10;
    puVar4 = puVar4 + 4;
  } while (iVar6 != 0);
  bVar1 = *(byte *)(param_1 + 0x966);
  uVar9 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar9 << 3);
  *(undefined4 **)(param_1 + 0x980) = puVar4;
  if (uVar9 != 0) {
    puVar5 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = puVar2[5];
      *puVar4 = puVar2[4];
      puVar4[1] = uVar10;
      puVar5 = puVar4;
    }
    for (iVar3 = (int)uVar9 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar10 = puVar2[5];
      puVar5[2] = puVar2[4];
      puVar5[3] = uVar10;
      uVar10 = puVar2[5];
      puVar5[4] = puVar2[4];
      puVar5[5] = uVar10;
      puVar5 = puVar5 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar3 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x24;
    puVar4[1] = 6;
    iVar3 = func_00100118((int)(puVar4 + 2),DAT_00374dd0,0x24,6);
  }
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x968) = 6;
    *(int *)(param_1 + 0x96c) = iVar3;
  }
  iVar3 = DAT_00374dd4;
  *(int *)(param_1 + 0x354) = param_1 + 0x960;
  iVar6 = DAT_00374de4;
  *(undefined2 *)(iVar3 + param_1) = 6;
  local_2c = s_cState_Wait_00374dd8;
  local_30 = iVar6;
  func_0010BEC4(param_1 + 0x960,0,&local_30);
  puVar4 = *(undefined4 **)(param_1 + 0x978);
  uVar7 = puVar2[2];
  uVar10 = *puVar2;
  uVar8 = puVar2[3];
  uVar13 = *(undefined8 *)(puVar2 + 4);
  puVar4[1] = puVar2[1];
  *puVar4 = uVar10;
  puVar4 = *(undefined4 **)(param_1 + 0x97c);
  *puVar4 = uVar7;
  puVar4[1] = uVar8;
  puVar4 = *(undefined4 **)(param_1 + 0x980);
  *puVar4 = (int)uVar13;
  puVar4[1] = (int)((ulonglong)uVar13 >> 0x20);
  local_2c = s_cState_Walk_00374de8;
  local_30 = iVar6;
  func_0010BEC4(param_1 + 0x960,1,&local_30);
  iVar3 = *(int *)(param_1 + 0x978);
  uVar10 = puVar2[7];
  uVar7 = puVar2[8];
  uVar8 = puVar2[9];
  *(undefined4 *)(iVar3 + 8) = puVar2[6];
  *(undefined4 *)(iVar3 + 0xc) = uVar10;
  iVar3 = *(int *)(param_1 + 0x97c);
  *(undefined4 *)(iVar3 + 8) = uVar7;
  *(undefined4 *)(iVar3 + 0xc) = uVar8;
  iVar3 = *(int *)(param_1 + 0x980);
  *(int *)(iVar3 + 8) = (int)uVar13;
  *(int *)(iVar3 + 0xc) = (int)((ulonglong)uVar13 >> 0x20);
  local_2c = s_cState_Event_00374df4;
  local_30 = iVar6;
  func_0010BEC4(param_1 + 0x960,2,&local_30);
  iVar3 = *(int *)(param_1 + 0x978);
  uVar7 = puVar2[0xb];
  uVar8 = puVar2[0xc];
  uVar10 = puVar2[0xd];
  *(undefined4 *)(iVar3 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar3 + 0x14) = uVar7;
  iVar3 = *(int *)(param_1 + 0x97c);
  *(undefined4 *)(iVar3 + 0x10) = uVar8;
  *(undefined4 *)(iVar3 + 0x14) = uVar10;
  iVar3 = *(int *)(param_1 + 0x980);
  *(int *)(iVar3 + 0x10) = (int)uVar13;
  *(int *)(iVar3 + 0x14) = (int)((ulonglong)uVar13 >> 0x20);
  local_2c = s_cState_EventEnd_00374e04;
  local_30 = iVar6;
  func_0010BEC4(param_1 + 0x960,3,&local_30);
  iVar3 = *(int *)(param_1 + 0x978);
  uVar10 = puVar2[0xf];
  uVar7 = puVar2[0x10];
  uVar8 = puVar2[0x11];
  uVar11 = puVar2[0x12];
  uVar12 = puVar2[0x13];
  *(undefined4 *)(iVar3 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar3 + 0x1c) = uVar10;
  iVar3 = *(int *)(param_1 + 0x97c);
  *(undefined4 *)(iVar3 + 0x18) = uVar7;
  *(undefined4 *)(iVar3 + 0x1c) = uVar8;
  iVar3 = *(int *)(param_1 + 0x980);
  *(undefined4 *)(iVar3 + 0x18) = uVar11;
  *(undefined4 *)(iVar3 + 0x1c) = uVar12;
  local_2c = s_cState_Hide_00374e14;
  local_30 = iVar6;
  func_0010BEC4(param_1 + 0x960,4,&local_30);
  iVar3 = *(int *)(param_1 + 0x978);
  uVar8 = puVar2[0x15];
  uVar12 = puVar2[0x16];
  uVar10 = puVar2[0x17];
  uVar7 = puVar2[0x18];
  uVar11 = puVar2[0x19];
  *(undefined4 *)(iVar3 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar3 + 0x24) = uVar8;
  iVar3 = *(int *)(param_1 + 0x97c);
  *(undefined4 *)(iVar3 + 0x20) = uVar12;
  *(undefined4 *)(iVar3 + 0x24) = uVar10;
  iVar3 = *(int *)(param_1 + 0x980);
  *(undefined4 *)(iVar3 + 0x20) = uVar7;
  *(undefined4 *)(iVar3 + 0x24) = uVar11;
  local_2c = s_cState_ShopBaseWait_00374e20;
  local_30 = iVar6;
  func_0010BEC4(param_1 + 0x960,5,&local_30);
  iVar3 = *(int *)(param_1 + 0x978);
  uVar8 = puVar2[0x1b];
  uVar10 = puVar2[0x1c];
  uVar12 = puVar2[0x1d];
  uVar7 = puVar2[5];
  uVar11 = puVar2[4];
  *(undefined4 *)(iVar3 + 0x28) = puVar2[0x1a];
  *(undefined4 *)(iVar3 + 0x2c) = uVar8;
  iVar3 = *(int *)(param_1 + 0x97c);
  *(undefined4 *)(iVar3 + 0x28) = uVar10;
  *(undefined4 *)(iVar3 + 0x2c) = uVar12;
  iVar3 = *(int *)(param_1 + 0x980);
  *(undefined4 *)(iVar3 + 0x28) = uVar11;
  *(undefined4 *)(iVar3 + 0x2c) = uVar7;
  func_0062DDF8(param_1,*(int *)(param_1 + 0x984),0);
  return func_004BC8D8(param_1);
}

