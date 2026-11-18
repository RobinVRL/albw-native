#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_0044ec5c;
extern int DAT_0044ec60;
extern undefined4 DAT_0044ec64;
extern int DAT_0044ec74;
extern undefined DAT_0044ecac;
extern undefined DAT_0044ece0;
extern undefined DAT_0044ece4;
extern undefined4 *DAT_0044ecf4;
extern undefined *DAT_0044f0c4;
extern char s_B_StateStick_00_0044f280[];
extern char s_BacktoBase_0044ecc4[];
extern char s_LeaveBase_0044ec68[];
extern char s_N_TouchPoint_00_0044f270[];
extern char s_StickLtoS_0044ec80[];
extern char s_Stick_0044ec78[];
extern char s_SwitchIndicator_0044ecd0[];
extern char s_TouchDecide_0044eca0[];
extern char s_TouchOnStoL_0044ec8c[];
extern char s_TouchOn_0044ec98[];
extern char s_WaitIndicator_0044ecb4[];
extern char s_Yellow_0044ecec[];
extern char s_cState_BackBase_0044f260[];
extern char s_cState_BackMove_0044f198[];
extern char s_cState_BackStart_0044f184[];
extern char s_cState_Invalid_0044f0c8[];
extern char s_cState_MoveCancelBase_0044f0e4[];
extern char s_cState_MoveCancelMap_0044f0fc[];
extern char s_cState_Move_0044f0d8[];
extern char s_cState_PopMenu_0044f174[];
extern char s_cState_Stick_0044f114[];
extern char s_cState_TouchOnL_0044f124[];
extern char s_cState_TouchOnS_0044f14c[];
extern char s_cState_TouchReleaseL_0044f134[];
extern char s_cState_TouchReleaseS_0044f15c[];

// USA 0044E87C <- EU 0044E854 (Ghidra, non-matching)
// GLOBAL DAT_0044ec5c int
// GLOBAL DAT_0044ec60 int
// GLOBAL DAT_0044ec64 undefined4
// GLOBAL DAT_0044ec74 int
// GLOBAL DAT_0044ecac undefined
// GLOBAL DAT_0044ece0 undefined
// GLOBAL DAT_0044ece4 undefined
// GLOBAL DAT_0044ecf4 undefined4 *
// GLOBAL DAT_0044f0c4 undefined *
// GLOBAL s_B_StateStick_00_0044f280 string
// GLOBAL s_BacktoBase_0044ecc4 string
// GLOBAL s_LeaveBase_0044ec68 string
// GLOBAL s_N_TouchPoint_00_0044f270 string
// GLOBAL s_StickLtoS_0044ec80 string
// GLOBAL s_Stick_0044ec78 string
// GLOBAL s_SwitchIndicator_0044ecd0 string
// GLOBAL s_TouchDecide_0044eca0 string
// GLOBAL s_TouchOnStoL_0044ec8c string
// GLOBAL s_TouchOn_0044ec98 string
// GLOBAL s_WaitIndicator_0044ecb4 string
// GLOBAL s_Yellow_0044ecec string
// GLOBAL s_cState_BackBase_0044f260 string
// GLOBAL s_cState_BackMove_0044f198 string
// GLOBAL s_cState_BackStart_0044f184 string
// GLOBAL s_cState_Invalid_0044f0c8 string
// GLOBAL s_cState_MoveCancelBase_0044f0e4 string
// GLOBAL s_cState_MoveCancelMap_0044f0fc string
// GLOBAL s_cState_Move_0044f0d8 string
// GLOBAL s_cState_PopMenu_0044f174 string
// GLOBAL s_cState_Stick_0044f114 string
// GLOBAL s_cState_TouchOnL_0044f124 string
// GLOBAL s_cState_TouchOnS_0044f14c string
// GLOBAL s_cState_TouchReleaseL_0044f134 string
// GLOBAL s_cState_TouchReleaseS_0044f15c string

int * func_0044E87C(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  piVar4 = func_004B9A10(param_1,0);
  iVar6 = DAT_0044ec60;
  iVar2 = DAT_0044ec5c;
  piVar4[0xe] = DAT_0044ec5c + 0x54;
  *piVar4 = iVar2;
  *(undefined2 *)(piVar4 + 0x1d) = 0;
  *(undefined2 *)((int)piVar4 + 0x76) = 0xffff;
  piVar4[0x1e] = iVar6;
  piVar4[0x1f] = 0;
  *(undefined2 *)(piVar4 + 0x20) = 0;
  *(undefined2 *)((int)piVar4 + 0x82) = 0xffff;
  piVar4[0x21] = iVar6;
  piVar4[0x22] = 0;
  *(undefined2 *)(piVar4 + 0x23) = 0;
  *(undefined2 *)((int)piVar4 + 0x8e) = 0xffff;
  piVar4[0x24] = iVar6;
  piVar4[0x25] = 0;
  *(undefined2 *)(piVar4 + 0x26) = 0;
  *(undefined2 *)((int)piVar4 + 0x9a) = 0xffff;
  piVar4[0x27] = iVar6;
  piVar4[0x28] = 0;
  *(undefined2 *)(piVar4 + 0x29) = 0;
  *(undefined2 *)((int)piVar4 + 0xa6) = 0xffff;
  piVar4[0x2a] = iVar6;
  piVar4[0x2b] = 0;
  puVar5 = func_0010A794(piVar4 + 0x2c);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined1 *)(puVar5 + 9) = 0;
  *(undefined1 *)((int)puVar5 + 0x25) = 0;
  piVar4 = puVar5 + -0x2c;
  puVar5[10] = iVar6;
  puVar5[0xb] = iVar6;
  puVar5[0xc] = iVar6;
  puVar5[0xd] = iVar6;
  puVar5[0xe] = iVar6;
  puVar5[0xf] = iVar6;
  puVar5[0x10] = iVar6;
  puVar5[0x11] = iVar6;
  puVar5[0x12] = iVar6;
  puVar5[0x13] = iVar6;
  puVar5[0x14] = iVar6;
  puVar5[0x15] = iVar6;
  *(undefined1 *)(puVar5 + 0x16) = 1;
  puVar5[0x17] = iVar6;
  puVar5[0x18] = iVar6;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1f] = 0;
  (**(code **)(*piVar4 + 0x38))(piVar4,DAT_0044ec64,0);
  piVar10 = (int *)puVar5[-0x25];
  func_0016773C((int)piVar10,0xd);
  iVar2 = DAT_0044ec74;
  local_2c = s_LeaveBase_0044ec68;
  local_30 = DAT_0044ec74;
  func_00166C20(piVar10,0,&local_30,0);
  local_2c = s_Stick_0044ec78;
  local_30 = iVar2;
  func_00166C20(piVar10,1,&local_30,0);
  local_2c = s_StickLtoS_0044ec80;
  local_30 = iVar2;
  func_00166C20(piVar10,2,&local_30,0);
  local_2c = s_TouchOnStoL_0044ec8c;
  local_30 = iVar2;
  func_00166C20(piVar10,3,&local_30,0);
  local_2c = s_TouchOn_0044ec98;
  local_30 = iVar2;
  func_00166C20(piVar10,4,&local_30,0);
  local_2c = s_TouchDecide_0044eca0;
  local_30 = iVar2;
  func_00166C20(piVar10,5,&local_30,0);
  local_2c = &DAT_0044ecac;
  local_30 = iVar2;
  func_00166C20(piVar10,6,&local_30,0);
  local_2c = s_WaitIndicator_0044ecb4;
  local_30 = iVar2;
  func_00166C20(piVar10,7,&local_30,0);
  local_2c = s_BacktoBase_0044ecc4;
  local_30 = iVar2;
  func_00166C20(piVar10,8,&local_30,0);
  local_2c = s_SwitchIndicator_0044ecd0;
  local_30 = iVar2;
  func_00166C20(piVar10,9,&local_30,0);
  local_2c = &DAT_0044ece0;
  local_30 = iVar2;
  func_00166C20(piVar10,10,&local_30,0);
  local_2c = &DAT_0044ece4;
  local_30 = iVar2;
  func_00166C20(piVar10,0xb,&local_30,0);
  local_2c = s_Yellow_0044ecec;
  local_30 = iVar2;
  func_00166C20(piVar10,0xc,&local_30,0);
  puVar5[-0xd] = piVar10;
  *(undefined2 *)((int)puVar5 + -0x3a) = 0;
  *(undefined2 *)(puVar5 + -0xf) = 0;
  puVar5[-10] = piVar10;
  *(undefined2 *)((int)puVar5 + -0x2e) = 10;
  *(undefined2 *)(puVar5 + -0xc) = 0;
  puVar5[-7] = piVar10;
  *(undefined2 *)((int)puVar5 + -0x22) = 4;
  *(undefined2 *)(puVar5 + -9) = 0;
  puVar5[-4] = piVar10;
  *(undefined2 *)((int)puVar5 + -0x16) = 7;
  *(undefined2 *)(puVar5 + -6) = 0;
  puVar5[-1] = piVar10;
  *(undefined2 *)((int)puVar5 + -10) = 9;
  *(undefined2 *)(puVar5 + -3) = 0;
  *(undefined1 *)((int)puVar5 + 6) = 0xd;
  puVar5[5] = piVar4;
  iVar6 = func_0010BA78(0xd0);
  puVar5[6] = iVar6;
  puVar3 = DAT_0044ecf4;
  puVar5[7] = iVar6 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar9 = 0xd;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar12 = puVar3[0x3b];
    iVar9 = iVar9 + -1;
    puVar7[2] = puVar3[0x3a];
    puVar7[3] = uVar12;
    uVar12 = puVar3[0x3b];
    puVar7[4] = puVar3[0x3a];
    puVar7[5] = uVar12;
    puVar7 = puVar7 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar11 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar5[8] = puVar7;
  if (uVar11 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = puVar3[0xb];
      *puVar7 = puVar3[10];
      puVar7[1] = uVar12;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar11 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar12 = puVar3[0xb];
      puVar8[2] = puVar3[10];
      puVar8[3] = uVar12;
      uVar12 = puVar3[0xb];
      puVar8[4] = puVar3[10];
      puVar8[5] = uVar12;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x1dc,(int *)0x0,4);
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 0xd;
    iVar6 = func_00100118((int)(puVar7 + 2),DAT_0044f0c4,0x24,0xd);
  }
  if (iVar6 != 0) {
    puVar5[3] = iVar6;
    puVar5[2] = 0xd;
  }
  local_2c = s_cState_Invalid_0044f0c8;
  local_30 = iVar2;
  func_0010BEC4((int)puVar5,0,&local_30);
  uVar12 = puVar3[1];
  uVar13 = puVar3[2];
  uVar14 = puVar3[3];
  uVar15 = puVar3[4];
  uVar16 = puVar3[5];
  puVar7 = (undefined4 *)puVar5[6];
  *puVar7 = *puVar3;
  puVar7[1] = uVar12;
  puVar7 = (undefined4 *)puVar5[7];
  *puVar7 = uVar13;
  puVar7[1] = uVar14;
  puVar7 = (undefined4 *)puVar5[8];
  *puVar7 = uVar15;
  puVar7[1] = uVar16;
  local_2c = s_cState_Move_0044f0d8;
  local_30 = iVar2;
  func_0010BEC4((int)puVar5,1,&local_30);
  iVar6 = puVar5[6];
  uVar12 = puVar3[8];
  uVar13 = puVar3[9];
  uVar14 = puVar3[7];
  uVar17 = *(undefined8 *)(puVar3 + 10);
  *(undefined4 *)(iVar6 + 8) = puVar3[6];
  *(undefined4 *)(iVar6 + 0xc) = uVar14;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 8) = uVar12;
  *(undefined4 *)(iVar6 + 0xc) = uVar13;
  iVar6 = puVar5[8];
  *(int *)(iVar6 + 8) = (int)uVar17;
  *(int *)(iVar6 + 0xc) = (int)((ulonglong)uVar17 >> 0x20);
  local_2c = s_cState_MoveCancelBase_0044f0e4;
  local_30 = iVar2;
  func_0010BEC4((int)puVar5,2,&local_30);
  iVar6 = puVar5[6];
  uVar13 = puVar3[0xd];
  uVar12 = puVar3[0xe];
  uVar14 = puVar3[0xf];
  *(undefined4 *)(iVar6 + 0x10) = puVar3[0xc];
  *(undefined4 *)(iVar6 + 0x14) = uVar13;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 0x10) = uVar12;
  *(undefined4 *)(iVar6 + 0x14) = uVar14;
  iVar6 = puVar5[8];
  *(int *)(iVar6 + 0x10) = (int)uVar17;
  *(int *)(iVar6 + 0x14) = (int)((ulonglong)uVar17 >> 0x20);
  local_2c = s_cState_MoveCancelMap_0044f0fc;
  local_30 = iVar2;
  func_0010BEC4((int)puVar5,3,&local_30);
  iVar6 = puVar5[6];
  uVar12 = puVar3[0x12];
  uVar13 = puVar3[0x13];
  uVar14 = puVar3[0x11];
  *(undefined4 *)(iVar6 + 0x18) = puVar3[0x10];
  *(undefined4 *)(iVar6 + 0x1c) = uVar14;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 0x18) = uVar12;
  *(undefined4 *)(iVar6 + 0x1c) = uVar13;
  iVar6 = puVar5[8];
  *(int *)(iVar6 + 0x18) = (int)uVar17;
  *(int *)(iVar6 + 0x1c) = (int)((ulonglong)uVar17 >> 0x20);
  local_2c = s_cState_Stick_0044f114;
  local_30 = iVar2;
  func_0010BEC4((int)puVar5,4,&local_30);
  iVar6 = puVar5[6];
  uVar13 = puVar3[0x15];
  uVar12 = puVar3[0x16];
  uVar14 = puVar3[0x17];
  *(undefined4 *)(iVar6 + 0x20) = puVar3[0x14];
  *(undefined4 *)(iVar6 + 0x24) = uVar13;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 0x20) = uVar12;
  *(undefined4 *)(iVar6 + 0x24) = uVar14;
  iVar6 = puVar5[8];
  *(int *)(iVar6 + 0x20) = (int)uVar17;
  *(int *)(iVar6 + 0x24) = (int)((ulonglong)uVar17 >> 0x20);
  local_2c = s_cState_TouchOnL_0044f124;
  local_30 = iVar2;
  func_0010BEC4((int)puVar5,5,&local_30);
  iVar6 = puVar5[6];
  uVar12 = puVar3[0x19];
  uVar13 = puVar3[0x1a];
  uVar14 = puVar3[0x1b];
  *(undefined4 *)(iVar6 + 0x28) = puVar3[0x18];
  *(undefined4 *)(iVar6 + 0x2c) = uVar12;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 0x28) = uVar13;
  *(undefined4 *)(iVar6 + 0x2c) = uVar14;
  iVar6 = puVar5[8];
  *(int *)(iVar6 + 0x28) = (int)uVar17;
  *(int *)(iVar6 + 0x2c) = (int)((ulonglong)uVar17 >> 0x20);
  local_2c = s_cState_TouchReleaseL_0044f134;
  local_30 = iVar2;
  func_0010BEC4((int)puVar5,6,&local_30);
  iVar6 = puVar5[6];
  uVar14 = puVar3[0x1d];
  uVar12 = puVar3[0x1e];
  uVar13 = puVar3[0x1f];
  *(undefined4 *)(iVar6 + 0x30) = puVar3[0x1c];
  *(undefined4 *)(iVar6 + 0x34) = uVar14;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 0x30) = uVar12;
  *(undefined4 *)(iVar6 + 0x34) = uVar13;
  iVar6 = puVar5[8];
  *(int *)(iVar6 + 0x30) = (int)uVar17;
  *(int *)(iVar6 + 0x34) = (int)((ulonglong)uVar17 >> 0x20);
  local_2c = s_cState_TouchOnS_0044f14c;
  local_30 = iVar2;
  func_0010BEC4((int)puVar5,7,&local_30);
  iVar6 = puVar5[6];
  uVar13 = puVar3[0x21];
  uVar12 = puVar3[0x22];
  uVar14 = puVar3[0x23];
  *(undefined4 *)(iVar6 + 0x38) = puVar3[0x20];
  *(undefined4 *)(iVar6 + 0x3c) = uVar13;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 0x38) = uVar12;
  *(undefined4 *)(iVar6 + 0x3c) = uVar14;
  iVar6 = puVar5[8];
  *(int *)(iVar6 + 0x38) = (int)uVar17;
  *(int *)(iVar6 + 0x3c) = (int)((ulonglong)uVar17 >> 0x20);
  local_2c = s_cState_TouchReleaseS_0044f15c;
  local_30 = iVar2;
  func_0010BEC4((int)puVar5,8,&local_30);
  iVar6 = puVar5[6];
  uVar12 = puVar3[0x25];
  uVar14 = puVar3[0x26];
  uVar13 = puVar3[0x27];
  *(undefined4 *)(iVar6 + 0x40) = puVar3[0x24];
  *(undefined4 *)(iVar6 + 0x44) = uVar12;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 0x40) = uVar14;
  *(undefined4 *)(iVar6 + 0x44) = uVar13;
  iVar6 = puVar5[8];
  *(int *)(iVar6 + 0x40) = (int)uVar17;
  *(int *)(iVar6 + 0x44) = (int)((ulonglong)uVar17 >> 0x20);
  local_2c = s_cState_PopMenu_0044f174;
  local_30 = iVar2;
  func_0010BEC4((int)puVar5,9,&local_30);
  iVar6 = puVar5[6];
  uVar15 = puVar3[0x29];
  uVar12 = puVar3[0x2a];
  uVar13 = puVar3[0x2b];
  uVar16 = puVar3[0x2c];
  uVar14 = puVar3[0x2d];
  *(undefined4 *)(iVar6 + 0x48) = puVar3[0x28];
  *(undefined4 *)(iVar6 + 0x4c) = uVar15;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 0x48) = uVar12;
  *(undefined4 *)(iVar6 + 0x4c) = uVar13;
  iVar6 = puVar5[8];
  *(undefined4 *)(iVar6 + 0x48) = uVar16;
  *(undefined4 *)(iVar6 + 0x4c) = uVar14;
  local_2c = s_cState_BackStart_0044f184;
  local_30 = iVar2;
  func_0010BEC4((int)puVar5,10,&local_30);
  iVar6 = puVar5[6];
  uVar14 = puVar3[0x2f];
  uVar12 = puVar3[0x31];
  uVar13 = puVar3[0x30];
  uVar17 = *(undefined8 *)(puVar3 + 10);
  *(undefined4 *)(iVar6 + 0x50) = puVar3[0x2e];
  *(undefined4 *)(iVar6 + 0x54) = uVar14;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 0x50) = uVar13;
  *(undefined4 *)(iVar6 + 0x54) = uVar12;
  iVar6 = puVar5[8];
  *(int *)(iVar6 + 0x50) = (int)uVar17;
  *(int *)(iVar6 + 0x54) = (int)((ulonglong)uVar17 >> 0x20);
  local_2c = s_cState_BackMove_0044f198;
  local_30 = iVar2;
  func_0010BEC4((int)puVar5,0xb,&local_30);
  iVar6 = puVar5[6];
  uVar12 = puVar3[0x33];
  uVar14 = puVar3[0x34];
  uVar13 = puVar3[0x35];
  *(undefined4 *)(iVar6 + 0x58) = puVar3[0x32];
  *(undefined4 *)(iVar6 + 0x5c) = uVar12;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 0x58) = uVar14;
  *(undefined4 *)(iVar6 + 0x5c) = uVar13;
  iVar6 = puVar5[8];
  *(int *)(iVar6 + 0x58) = (int)uVar17;
  *(int *)(iVar6 + 0x5c) = (int)((ulonglong)uVar17 >> 0x20);
  local_2c = s_cState_BackBase_0044f260;
  local_30 = iVar2;
  func_0010BEC4((int)puVar5,0xc,&local_30);
  iVar6 = puVar5[6];
  uVar12 = puVar3[0x37];
  uVar14 = puVar3[0x38];
  uVar13 = puVar3[0x39];
  *(undefined4 *)(iVar6 + 0x60) = puVar3[0x36];
  *(undefined4 *)(iVar6 + 100) = uVar12;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 0x60) = uVar14;
  *(undefined4 *)(iVar6 + 100) = uVar13;
  iVar6 = puVar5[8];
  *(int *)(iVar6 + 0x60) = (int)uVar17;
  *(int *)(iVar6 + 100) = (int)((ulonglong)uVar17 >> 0x20);
  puVar5[0x1b] = *(undefined4 *)(*piVar10 + 0x10);
  local_2c = s_N_TouchPoint_00_0044f270;
  local_30 = iVar2;
  uVar12 = func_005229AC(piVar10,&local_30);
  puVar5[0x1a] = uVar12;
  local_2c = s_B_StateStick_00_0044f280;
  local_30 = iVar2;
  uVar12 = func_005229AC(piVar10,&local_30);
  puVar5[0x19] = uVar12;
  *(undefined1 *)((int)puVar5 + -0xa1) = 0x49;
  return piVar4;
}

