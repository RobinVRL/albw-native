#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern int func_003FDF90(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00472428;
extern int DAT_0047242c;
extern undefined4 DAT_00472430;
extern int DAT_00472440;
extern undefined DAT_00472454;
extern undefined DAT_00472458;
extern char s_B_BrightB_00_00472694[];
extern char s_B_BrightR_00_00472684[];
extern char s_B_BrightY_00_004726a4[];
extern char s_B_PinBtnDelete_00_004724c0[];
extern char s_BalloonPosition_004724b0[];
extern char s_CheckOut_00472468[];
extern char s_G_Blue_00_00472480[];
extern char s_G_Red_00_00472474[];
extern char s_G_Yellow_00_0047248c[];
extern char s_InBalloon_00472434[];
extern char s_OutCancel_004724a4[];
extern char s_OutDecide_00472498[];
extern char s_TouchOnDelete_00472444[];
extern char s_Yellow_00472460[];

// USA 00472090 <- EU 00472068 (Ghidra, non-matching)
// GLOBAL DAT_00472428 int
// GLOBAL DAT_0047242c int
// GLOBAL DAT_00472430 undefined4
// GLOBAL DAT_00472440 int
// GLOBAL DAT_00472454 undefined
// GLOBAL DAT_00472458 undefined
// GLOBAL s_B_BrightB_00_00472694 string
// GLOBAL s_B_BrightR_00_00472684 string
// GLOBAL s_B_BrightY_00_004726a4 string
// GLOBAL s_B_PinBtnDelete_00_004724c0 string
// GLOBAL s_BalloonPosition_004724b0 string
// GLOBAL s_CheckOut_00472468 string
// GLOBAL s_G_Blue_00_00472480 string
// GLOBAL s_G_Red_00_00472474 string
// GLOBAL s_G_Yellow_00_0047248c string
// GLOBAL s_InBalloon_00472434 string
// GLOBAL s_OutCancel_004724a4 string
// GLOBAL s_OutDecide_00472498 string
// GLOBAL s_TouchOnDelete_00472444 string
// GLOBAL s_Yellow_00472460 string

int * func_00472090(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  ushort uVar7;
  int *piVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  piVar1 = func_004B9A10(param_1,0);
  iVar2 = DAT_0047242c;
  iVar3 = DAT_00472428;
  piVar1[0xe] = DAT_00472428 + 0x54;
  *piVar1 = iVar3;
  *(undefined2 *)(piVar1 + 0x1d) = 0;
  *(undefined2 *)((int)piVar1 + 0x76) = 0xffff;
  piVar1[0x1e] = iVar2;
  piVar1[0x1f] = 0;
  *(undefined2 *)(piVar1 + 0x20) = 0;
  *(undefined2 *)((int)piVar1 + 0x82) = 0xffff;
  piVar1[0x21] = iVar2;
  piVar1[0x22] = 0;
  *(undefined2 *)(piVar1 + 0x23) = 0;
  *(undefined2 *)((int)piVar1 + 0x8e) = 0xffff;
  piVar1[0x24] = iVar2;
  piVar1[0x25] = 0;
  *(undefined2 *)(piVar1 + 0x26) = 0;
  *(undefined2 *)((int)piVar1 + 0x9a) = 0xffff;
  piVar1[0x27] = iVar2;
  piVar1[0x28] = 0;
  *(undefined2 *)(piVar1 + 0x29) = 0;
  *(undefined2 *)((int)piVar1 + 0xa6) = 0xffff;
  piVar1[0x2a] = iVar2;
  piVar1[0x2b] = 0;
  *(undefined2 *)(piVar1 + 0x2c) = 0;
  *(undefined2 *)((int)piVar1 + 0xb2) = 0xffff;
  piVar1[0x2d] = iVar2;
  piVar1[0x2e] = 0;
  *(undefined2 *)(piVar1 + 0x2f) = 0;
  *(undefined2 *)((int)piVar1 + 0xbe) = 0xffff;
  piVar1[0x30] = iVar2;
  piVar1[0x31] = 0;
  *(undefined2 *)(piVar1 + 0x32) = 0;
  *(undefined2 *)((int)piVar1 + 0xca) = 0xffff;
  piVar1[0x33] = iVar2;
  piVar1[0x34] = 0;
  *(undefined2 *)(piVar1 + 0x35) = 0;
  *(undefined2 *)((int)piVar1 + 0xd6) = 0xffff;
  piVar1[0x36] = iVar2;
  piVar1[0x37] = 0;
  piVar1[0x38] = iVar2;
  piVar1[0x39] = iVar2;
  *(undefined1 *)(piVar1 + 0x3a) = 1;
  *(undefined1 *)((int)piVar1 + 0xe9) = 1;
  *(undefined1 *)((int)piVar1 + 0xea) = 0;
  piVar1[0x3f] = 0;
  piVar1[0x40] = 0;
  piVar1[0x41] = 0;
  (**(code **)(*piVar1 + 0x38))(piVar1,DAT_00472430,0);
  piVar8 = (int *)piVar1[7];
  func_0016773C((int)piVar8,0xb);
  iVar3 = DAT_00472440;
  local_24 = s_InBalloon_00472434;
  local_28 = DAT_00472440;
  func_00166C20(piVar8,0,&local_28,0);
  local_24 = s_TouchOnDelete_00472444;
  local_28 = iVar3;
  func_00166C20(piVar8,1,&local_28,0);
  local_24 = &DAT_00472454;
  local_28 = iVar3;
  func_00166C20(piVar8,2,&local_28,0);
  local_24 = &DAT_00472458;
  local_28 = iVar3;
  func_00166C20(piVar8,3,&local_28,0);
  local_24 = s_Yellow_00472460;
  local_28 = iVar3;
  func_00166C20(piVar8,4,&local_28,0);
  local_24 = s_CheckOut_00472468;
  local_28 = iVar3;
  local_2c = s_G_Red_00_00472474;
  local_30 = iVar3;
  (**(code **)(iVar3 + 8))(&local_30);
  iVar2 = func_003FDF90(*(int *)(*piVar8 + 0x14),(int)local_2c);
  func_00166C20(piVar8,5,&local_28,iVar2);
  local_2c = s_CheckOut_00472468;
  local_30 = iVar3;
  local_24 = s_G_Blue_00_00472480;
  local_28 = iVar3;
  (**(code **)(iVar3 + 8))(&local_28);
  iVar2 = func_003FDF90(*(int *)(*piVar8 + 0x14),(int)local_24);
  func_00166C20(piVar8,6,&local_30,iVar2);
  local_2c = s_CheckOut_00472468;
  local_30 = iVar3;
  local_24 = s_G_Yellow_00_0047248c;
  local_28 = iVar3;
  (**(code **)(iVar3 + 8))(&local_28);
  iVar2 = func_003FDF90(*(int *)(*piVar8 + 0x14),(int)local_24);
  func_00166C20(piVar8,7,&local_30,iVar2);
  local_2c = s_OutDecide_00472498;
  local_30 = iVar3;
  func_00166C20(piVar8,8,&local_30,0);
  local_2c = s_OutCancel_004724a4;
  local_30 = iVar3;
  func_00166C20(piVar8,9,&local_30,0);
  local_2c = s_BalloonPosition_004724b0;
  local_30 = iVar3;
  func_00166C20(piVar8,10,&local_30,0);
  piVar1[10] = (int)piVar8;
  *(undefined2 *)((int)piVar1 + 0x22) = 0;
  *(undefined2 *)(piVar1 + 8) = 0;
  piVar1[0xd] = (int)piVar8;
  *(undefined2 *)((int)piVar1 + 0x2e) = 9;
  *(undefined2 *)(piVar1 + 0xb) = 0;
  piVar1[0x1f] = (int)piVar8;
  *(undefined2 *)((int)piVar1 + 0x76) = 1;
  *(undefined2 *)(piVar1 + 0x1d) = 0;
  piVar1[0x22] = (int)piVar8;
  *(undefined2 *)((int)piVar1 + 0x82) = 2;
  *(undefined2 *)(piVar1 + 0x20) = 0;
  piVar1[0x25] = (int)piVar8;
  *(undefined2 *)((int)piVar1 + 0x8e) = 3;
  *(undefined2 *)(piVar1 + 0x23) = 0;
  piVar1[0x28] = (int)piVar8;
  *(undefined2 *)((int)piVar1 + 0x9a) = 4;
  *(undefined2 *)(piVar1 + 0x26) = 0;
  piVar1[0x2b] = (int)piVar8;
  *(undefined2 *)((int)piVar1 + 0xa6) = 5;
  *(undefined2 *)(piVar1 + 0x29) = 0;
  piVar1[0x2e] = (int)piVar8;
  *(undefined2 *)((int)piVar1 + 0xb2) = 6;
  *(undefined2 *)(piVar1 + 0x2c) = 0;
  piVar1[0x31] = (int)piVar8;
  *(undefined2 *)((int)piVar1 + 0xbe) = 7;
  *(undefined2 *)(piVar1 + 0x2f) = 0;
  piVar1[0x34] = (int)piVar8;
  *(undefined2 *)((int)piVar1 + 0xca) = 8;
  *(undefined2 *)(piVar1 + 0x32) = 0;
  piVar1[0x37] = (int)piVar8;
  *(undefined2 *)((int)piVar1 + 0xd6) = 10;
  *(undefined2 *)(piVar1 + 0x35) = 0;
  local_2c = s_B_PinBtnDelete_00_004724c0;
  local_30 = iVar3;
  iVar2 = func_005229AC(piVar8,&local_30);
  piVar1[0x3b] = iVar2;
  local_2c = s_B_BrightR_00_00472684;
  local_30 = iVar3;
  iVar2 = func_005229AC(piVar8,&local_30);
  piVar1[0x3c] = iVar2;
  local_2c = s_B_BrightB_00_00472694;
  local_30 = iVar3;
  iVar2 = func_005229AC(piVar8,&local_30);
  piVar1[0x3d] = iVar2;
  local_2c = s_B_BrightY_00_004726a4;
  local_30 = iVar3;
  iVar3 = func_005229AC(piVar8,&local_30);
  piVar1[0x3e] = iVar3;
  puVar4 = (undefined4 *)func_0010BAB4(0x20);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_002C0294(puVar4);
  }
  piVar1[5] = (int)puVar5;
  func_002C00D4(puVar5,piVar1,(int *)0x0);
  iVar3 = piVar1[5];
  iVar2 = piVar1[0x3b];
  *(int *)(iVar3 + 4) = iVar2;
  puVar6 = (ushort *)(iVar3 + 0x16);
  uVar7 = *puVar6;
  if (iVar2 == 0) {
    uVar7 = uVar7 & 0xffbf;
  }
  else {
    uVar7 = uVar7 | 0x40;
  }
  *puVar6 = uVar7;
  puVar4 = (undefined4 *)func_0010BAB4(0x20);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_002C0294(puVar4);
  }
  piVar1[0x3f] = (int)puVar5;
  func_002C00D4(puVar5,piVar1,(int *)0x0);
  iVar3 = piVar1[0x3f];
  iVar2 = piVar1[0x3c];
  *(int *)(iVar3 + 4) = iVar2;
  puVar6 = (ushort *)(iVar3 + 0x16);
  uVar7 = *puVar6;
  if (iVar2 == 0) {
    uVar7 = uVar7 & 0xffbf;
  }
  else {
    uVar7 = uVar7 | 0x40;
  }
  *puVar6 = uVar7;
  puVar4 = (undefined4 *)func_0010BAB4(0x20);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_002C0294(puVar4);
  }
  piVar1[0x40] = (int)puVar5;
  func_002C00D4(puVar5,piVar1,(int *)0x0);
  iVar3 = piVar1[0x40];
  iVar2 = piVar1[0x3d];
  *(int *)(iVar3 + 4) = iVar2;
  puVar6 = (ushort *)(iVar3 + 0x16);
  uVar7 = *puVar6;
  if (iVar2 == 0) {
    uVar7 = uVar7 & 0xffbf;
  }
  else {
    uVar7 = uVar7 | 0x40;
  }
  *puVar6 = uVar7;
  puVar4 = (undefined4 *)func_0010BAB4(0x20);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_002C0294(puVar4);
  }
  piVar1[0x41] = (int)puVar5;
  func_002C00D4(puVar5,piVar1,(int *)0x0);
  iVar3 = piVar1[0x41];
  iVar2 = piVar1[0x3e];
  *(int *)(iVar3 + 4) = iVar2;
  puVar6 = (ushort *)(iVar3 + 0x16);
  uVar7 = *puVar6;
  if (iVar2 == 0) {
    uVar7 = uVar7 & 0xffbf;
  }
  else {
    uVar7 = uVar7 | 0x40;
  }
  *puVar6 = uVar7;
  *(undefined1 *)((int)piVar1 + 0xf) = 0x48;
  return piVar1;
}

