#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0062CF64(int param_1,int param_2,undefined1 param_3);
extern int DAT_00374558;
extern undefined *DAT_0037455c;
extern int DAT_00374560;
extern int DAT_00374570;
extern char s_cState_EventEnd_00374590[];
extern char s_cState_Event_00374580[];
extern char s_cState_Hide_003745a0[];
extern char s_cState_ShopBaseWait_003745ac[];
extern char s_cState_Wait_00374564[];
extern char s_cState_Walk_00374574[];

// USA 0037425C <- EU 00374238 (Ghidra, non-matching)
// GLOBAL DAT_00374558 int
// GLOBAL DAT_0037455c undefined *
// GLOBAL DAT_00374560 int
// GLOBAL DAT_00374570 int
// GLOBAL s_cState_EventEnd_00374590 string
// GLOBAL s_cState_Event_00374580 string
// GLOBAL s_cState_Hide_003745a0 string
// GLOBAL s_cState_ShopBaseWait_003745ac string
// GLOBAL s_cState_Wait_00374564 string
// GLOBAL s_cState_Walk_00374574 string

undefined4 func_0037425C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
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
  iVar2 = func_0010BA78(0x60);
  iVar8 = DAT_00374558;
  *(int *)(param_1 + 0x978) = iVar2;
  *(uint *)(param_1 + 0x97c) = iVar2 + (uint)*(byte *)(param_1 + 0x966) * 8;
  iVar5 = 6;
  puVar3 = (undefined4 *)(iVar2 + -8);
  do {
    uVar10 = *(undefined4 *)(iVar8 + 0x80);
    iVar5 = iVar5 + -1;
    puVar3[2] = *(undefined4 *)(iVar8 + 0x7c);
    puVar3[3] = uVar10;
    uVar10 = *(undefined4 *)(iVar8 + 0x80);
    puVar3[4] = *(undefined4 *)(iVar8 + 0x7c);
    puVar3[5] = uVar10;
    puVar3 = puVar3 + 4;
  } while (iVar5 != 0);
  bVar1 = *(byte *)(param_1 + 0x966);
  uVar9 = (uint)bVar1;
  puVar3 = (undefined4 *)func_0010BA78(uVar9 << 3);
  *(undefined4 **)(param_1 + 0x980) = puVar3;
  if (uVar9 != 0) {
    puVar4 = puVar3 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = *(undefined4 *)(iVar8 + 0x18);
      *puVar3 = *(undefined4 *)(iVar8 + 0x14);
      puVar3[1] = uVar10;
      puVar4 = puVar3;
    }
    for (iVar2 = (int)uVar9 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar10 = *(undefined4 *)(iVar8 + 0x18);
      puVar4[2] = *(undefined4 *)(iVar8 + 0x14);
      puVar4[3] = uVar10;
      uVar10 = *(undefined4 *)(iVar8 + 0x18);
      puVar4[4] = *(undefined4 *)(iVar8 + 0x14);
      puVar4[5] = uVar10;
      puVar4 = puVar4 + 4;
    }
  }
  puVar3 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar2 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0x24;
    puVar3[1] = 6;
    iVar2 = func_00100118((int)(puVar3 + 2),DAT_0037455c,0x24,6);
  }
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x968) = 6;
    *(int *)(param_1 + 0x96c) = iVar2;
  }
  iVar2 = DAT_00374560;
  *(int *)(param_1 + 0x354) = param_1 + 0x960;
  iVar5 = DAT_00374570;
  *(undefined2 *)(iVar2 + param_1) = 6;
  local_2c = s_cState_Wait_00374564;
  local_30 = iVar5;
  func_0010BEC4(param_1 + 0x960,0,&local_30);
  puVar3 = *(undefined4 **)(param_1 + 0x978);
  uVar6 = *(undefined4 *)(iVar8 + 0xc);
  uVar10 = *(undefined4 *)(iVar8 + 4);
  uVar7 = *(undefined4 *)(iVar8 + 0x10);
  uVar13 = *(undefined8 *)(iVar8 + 0x14);
  puVar3[1] = *(undefined4 *)(iVar8 + 8);
  *puVar3 = uVar10;
  puVar3 = *(undefined4 **)(param_1 + 0x97c);
  *puVar3 = uVar6;
  puVar3[1] = uVar7;
  puVar3 = *(undefined4 **)(param_1 + 0x980);
  *puVar3 = (int)uVar13;
  puVar3[1] = (int)((ulonglong)uVar13 >> 0x20);
  local_2c = s_cState_Walk_00374574;
  local_30 = iVar5;
  func_0010BEC4(param_1 + 0x960,1,&local_30);
  iVar2 = *(int *)(param_1 + 0x978);
  uVar10 = *(undefined4 *)(iVar8 + 0x20);
  uVar6 = *(undefined4 *)(iVar8 + 0x24);
  uVar7 = *(undefined4 *)(iVar8 + 0x28);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar8 + 0x1c);
  *(undefined4 *)(iVar2 + 0xc) = uVar10;
  iVar2 = *(int *)(param_1 + 0x97c);
  *(undefined4 *)(iVar2 + 8) = uVar6;
  *(undefined4 *)(iVar2 + 0xc) = uVar7;
  iVar2 = *(int *)(param_1 + 0x980);
  *(int *)(iVar2 + 8) = (int)uVar13;
  *(int *)(iVar2 + 0xc) = (int)((ulonglong)uVar13 >> 0x20);
  local_2c = s_cState_Event_00374580;
  local_30 = iVar5;
  func_0010BEC4(param_1 + 0x960,2,&local_30);
  iVar2 = *(int *)(param_1 + 0x978);
  uVar6 = *(undefined4 *)(iVar8 + 0x30);
  uVar7 = *(undefined4 *)(iVar8 + 0x34);
  uVar10 = *(undefined4 *)(iVar8 + 0x38);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar8 + 0x2c);
  *(undefined4 *)(iVar2 + 0x14) = uVar6;
  iVar2 = *(int *)(param_1 + 0x97c);
  *(undefined4 *)(iVar2 + 0x10) = uVar7;
  *(undefined4 *)(iVar2 + 0x14) = uVar10;
  iVar2 = *(int *)(param_1 + 0x980);
  *(int *)(iVar2 + 0x10) = (int)uVar13;
  *(int *)(iVar2 + 0x14) = (int)((ulonglong)uVar13 >> 0x20);
  local_2c = s_cState_EventEnd_00374590;
  local_30 = iVar5;
  func_0010BEC4(param_1 + 0x960,3,&local_30);
  iVar2 = *(int *)(param_1 + 0x978);
  uVar10 = *(undefined4 *)(iVar8 + 0x40);
  uVar6 = *(undefined4 *)(iVar8 + 0x44);
  uVar7 = *(undefined4 *)(iVar8 + 0x48);
  uVar11 = *(undefined4 *)(iVar8 + 0x4c);
  uVar12 = *(undefined4 *)(iVar8 + 0x50);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar8 + 0x3c);
  *(undefined4 *)(iVar2 + 0x1c) = uVar10;
  iVar2 = *(int *)(param_1 + 0x97c);
  *(undefined4 *)(iVar2 + 0x18) = uVar6;
  *(undefined4 *)(iVar2 + 0x1c) = uVar7;
  iVar2 = *(int *)(param_1 + 0x980);
  *(undefined4 *)(iVar2 + 0x18) = uVar11;
  *(undefined4 *)(iVar2 + 0x1c) = uVar12;
  local_2c = s_cState_Hide_003745a0;
  local_30 = iVar5;
  func_0010BEC4(param_1 + 0x960,4,&local_30);
  iVar2 = *(int *)(param_1 + 0x978);
  uVar7 = *(undefined4 *)(iVar8 + 0x58);
  uVar12 = *(undefined4 *)(iVar8 + 0x5c);
  uVar10 = *(undefined4 *)(iVar8 + 0x60);
  uVar6 = *(undefined4 *)(iVar8 + 100);
  uVar11 = *(undefined4 *)(iVar8 + 0x68);
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar8 + 0x54);
  *(undefined4 *)(iVar2 + 0x24) = uVar7;
  iVar2 = *(int *)(param_1 + 0x97c);
  *(undefined4 *)(iVar2 + 0x20) = uVar12;
  *(undefined4 *)(iVar2 + 0x24) = uVar10;
  iVar2 = *(int *)(param_1 + 0x980);
  *(undefined4 *)(iVar2 + 0x20) = uVar6;
  *(undefined4 *)(iVar2 + 0x24) = uVar11;
  local_2c = s_cState_ShopBaseWait_003745ac;
  local_30 = iVar5;
  func_0010BEC4(param_1 + 0x960,5,&local_30);
  iVar2 = *(int *)(param_1 + 0x978);
  uVar7 = *(undefined4 *)(iVar8 + 0x70);
  uVar10 = *(undefined4 *)(iVar8 + 0x74);
  uVar12 = *(undefined4 *)(iVar8 + 0x78);
  uVar6 = *(undefined4 *)(iVar8 + 0x18);
  uVar11 = *(undefined4 *)(iVar8 + 0x14);
  *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar8 + 0x6c);
  *(undefined4 *)(iVar2 + 0x2c) = uVar7;
  iVar8 = *(int *)(param_1 + 0x97c);
  *(undefined4 *)(iVar8 + 0x28) = uVar10;
  *(undefined4 *)(iVar8 + 0x2c) = uVar12;
  iVar8 = *(int *)(param_1 + 0x980);
  *(undefined4 *)(iVar8 + 0x28) = uVar11;
  *(undefined4 *)(iVar8 + 0x2c) = uVar6;
  return func_0062CF64(param_1,*(int *)(param_1 + 0x984),0);
}

