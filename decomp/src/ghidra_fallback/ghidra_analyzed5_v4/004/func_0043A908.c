#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_001B6E04(undefined4 *param_1);
extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern int func_0028BE38(undefined4 *param_1,int *param_2,int *param_3);
extern int func_003FDF90(int param_1,int param_2);
extern int func_00461E18(undefined4 *param_1);
extern int func_0047D690(undefined4 *param_1);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_0043acb0;
extern uint DAT_0043acb4;
extern undefined1 *DAT_0043acb8;
extern undefined4 DAT_0043acbc;
extern undefined DAT_0043acc0;
extern int DAT_0043acc4;
extern undefined DAT_0043ace8;
extern int DAT_0043b308;
extern int *DAT_0043b30c;
extern undefined4 DAT_0043b310;
extern undefined4 DAT_0043b314;
extern undefined4 DAT_0043b318;
extern undefined4 DAT_0043b31c;
extern int DAT_0043b34c;
extern undefined *DAT_0043b350;
extern undefined4 DAT_0043b460;
extern char s_G_Back_00_0043acc8[];
extern char s_G_Cancel_00_0043acdc[];
extern char s_G_Information_00_0043acec[];
extern char s_G_OK_00_0043acd4[];
extern char s_L_BtnBack_00_0043b320[];
extern char s_L_BtnCancel_00_0043b33c[];
extern char s_L_BtnOK_00_0043b330[];
extern char s_cState_AddPoint_0043b3b4[];
extern char s_cState_Decided_0043b3a4[];
extern char s_cState_FadeOutIcon_0043b390[];
extern char s_cState_Invalid_0043b354[];
extern char s_cState_Pushed_0043b380[];
extern char s_cState_Selected_0043b370[];
extern char s_cState_Wait_0043b364[];

// USA 0043A908 <- EU 0043A8E8 (Ghidra, non-matching)
// GLOBAL DAT_0043acb0 int
// GLOBAL DAT_0043acb4 uint
// GLOBAL DAT_0043acb8 undefined1 *
// GLOBAL DAT_0043acbc undefined4
// GLOBAL DAT_0043acc0 undefined
// GLOBAL DAT_0043acc4 int
// GLOBAL DAT_0043ace8 undefined
// GLOBAL DAT_0043b308 int
// GLOBAL DAT_0043b30c int *
// GLOBAL DAT_0043b310 undefined4
// GLOBAL DAT_0043b314 undefined4
// GLOBAL DAT_0043b318 undefined4
// GLOBAL DAT_0043b31c undefined4
// GLOBAL DAT_0043b34c int
// GLOBAL DAT_0043b350 undefined *
// GLOBAL DAT_0043b460 undefined4
// GLOBAL s_G_Back_00_0043acc8 string
// GLOBAL s_G_Cancel_00_0043acdc string
// GLOBAL s_G_Information_00_0043acec string
// GLOBAL s_G_OK_00_0043acd4 string
// GLOBAL s_L_BtnBack_00_0043b320 string
// GLOBAL s_L_BtnCancel_00_0043b33c string
// GLOBAL s_L_BtnOK_00_0043b330 string
// GLOBAL s_cState_AddPoint_0043b3b4 string
// GLOBAL s_cState_Decided_0043b3a4 string
// GLOBAL s_cState_FadeOutIcon_0043b390 string
// GLOBAL s_cState_Invalid_0043b354 string
// GLOBAL s_cState_Pushed_0043b380 string
// GLOBAL s_cState_Selected_0043b370 string
// GLOBAL s_cState_Wait_0043b364 string

int * func_0043A908(undefined4 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(undefined4 *)(albw_frame + 0x4))
  #define local_58 (*(int *)(albw_frame + 0x18))
  #define local_54 (*(char * *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x30))
  #define local_3c (*(char * *)(albw_frame + 0x34))
  piVar4 = func_004B9A10(param_1,1);
  iVar11 = DAT_0043acb0 + 0x54;
  *piVar4 = DAT_0043acb0;
  piVar4[0xe] = iVar11;
  uVar15 = DAT_0043acb4;
  uVar19 = (ulonglong)DAT_0043acb4;
  *(undefined2 *)(piVar4 + 0x1d) = 0;
  *(undefined2 *)((int)piVar4 + 0x76) = 0xffff;
  piVar4[0x1e] = uVar15;
  piVar4[0x1f] = 0;
  *(undefined2 *)(piVar4 + 0x20) = 0;
  *(undefined2 *)((int)piVar4 + 0x82) = 0xffff;
  piVar4[0x21] = uVar15;
  piVar4[0x22] = 0;
  *(undefined2 *)(piVar4 + 0x23) = 0;
  *(undefined2 *)((int)piVar4 + 0x8e) = 0xffff;
  piVar4[0x24] = uVar15;
  piVar4[0x25] = 0;
  *(undefined2 *)(piVar4 + 0x26) = 0;
  *(undefined2 *)((int)piVar4 + 0x9a) = 0xffff;
  piVar4[0x27] = uVar15;
  piVar4[0x28] = 0;
  *(undefined2 *)(piVar4 + 0x29) = 0;
  *(undefined2 *)((int)piVar4 + 0xa6) = 0xffff;
  piVar4[0x2a] = uVar15;
  piVar4[0x2b] = 0;
  *(undefined2 *)(piVar4 + 0x2c) = 0;
  *(undefined2 *)((int)piVar4 + 0xb2) = 0xffff;
  piVar4[0x2d] = uVar15;
  piVar4[0x2e] = 0;
  *(undefined2 *)(piVar4 + 0x2f) = 0;
  *(undefined2 *)((int)piVar4 + 0xbe) = 0xffff;
  piVar4[0x30] = uVar15;
  piVar4[0x31] = 0;
  puVar5 = func_0010A794(piVar4 + 0x32);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  piVar4 = puVar5 + -0x32;
  puVar5[8] = 0;
  puVar5[0x23] = 0;
  puVar5[0x24] = 0;
  puVar5[0x25] = 0;
  puVar5[0x26] = 0;
  *(undefined1 *)(puVar5 + 0x36) = 0;
  puVar5[0x37] = 0;
  puVar3 = DAT_0043acb8;
  *(undefined2 *)(puVar5 + 0x3a) = 0xffff;
  *(undefined1 *)((int)puVar5 + 0xea) = 0;
  puVar5[0x3c] = 0x14;
  puVar5[0x3b] = 0xffffffff;
  *puVar3 = 1;
  (**(code **)(*piVar4 + 0x38))(piVar4,DAT_0043acbc,0);
  piVar17 = (int *)puVar5[-0x2b];
  func_0016773C((int)piVar17,8);
  iVar11 = DAT_0043acc4;
  local_40 = DAT_0043acc4;
  local_3c = &DAT_0043acc0;
  local_54 = s_G_Back_00_0043acc8;
  local_58 = DAT_0043acc4;
  (**(code **)(DAT_0043acc4 + 8))(&local_58);
  iVar6 = func_003FDF90(*(int *)(*piVar17 + 0x14),(int)local_54);
  func_00166C20(piVar17,0,&local_40,iVar6);
  local_54 = &DAT_0043acc0;
  local_58 = iVar11;
  local_3c = s_G_OK_00_0043acd4;
  local_40 = iVar11;
  (**(code **)(iVar11 + 8))(&local_40);
  iVar6 = func_003FDF90(*(int *)(*piVar17 + 0x14),(int)local_3c);
  func_00166C20(piVar17,1,&local_58,iVar6);
  local_54 = &DAT_0043acc0;
  local_58 = iVar11;
  local_3c = s_G_Cancel_00_0043acdc;
  local_40 = iVar11;
  (**(code **)(iVar11 + 8))(&local_40);
  iVar6 = func_003FDF90(*(int *)(*piVar17 + 0x14),(int)local_3c);
  func_00166C20(piVar17,2,&local_58,iVar6);
  local_54 = &DAT_0043ace8;
  local_58 = iVar11;
  local_3c = s_G_Back_00_0043acc8;
  local_40 = iVar11;
  (**(code **)(iVar11 + 8))(&local_40);
  iVar6 = func_003FDF90(*(int *)(*piVar17 + 0x14),(int)local_3c);
  func_00166C20(piVar17,3,&local_58,iVar6);
  local_54 = &DAT_0043ace8;
  local_58 = iVar11;
  local_3c = s_G_OK_00_0043acd4;
  local_40 = iVar11;
  (**(code **)(iVar11 + 8))(&local_40);
  iVar6 = func_003FDF90(*(int *)(*piVar17 + 0x14),(int)local_3c);
  func_00166C20(piVar17,4,&local_58,iVar6);
  local_54 = &DAT_0043ace8;
  local_58 = iVar11;
  local_3c = s_G_Cancel_00_0043acdc;
  local_40 = iVar11;
  (**(code **)(iVar11 + 8))(&local_40);
  iVar6 = func_003FDF90(*(int *)(*piVar17 + 0x14),(int)local_3c);
  func_00166C20(piVar17,5,&local_58,iVar6);
  local_54 = &DAT_0043acc0;
  local_58 = iVar11;
  local_3c = s_G_Information_00_0043acec;
  local_40 = iVar11;
  (**(code **)(iVar11 + 8))(&local_40);
  iVar6 = func_003FDF90(*(int *)(*piVar17 + 0x14),(int)local_3c);
  func_00166C20(piVar17,6,&local_58,iVar6);
  local_54 = &DAT_0043ace8;
  local_58 = iVar11;
  local_3c = s_G_Information_00_0043acec;
  local_40 = iVar11;
  (**(code **)(iVar11 + 8))(&local_40);
  iVar6 = func_003FDF90(*(int *)(*piVar17 + 0x14),(int)local_3c);
  func_00166C20(piVar17,7,&local_58,iVar6);
  puVar5[-0x13] = piVar17;
  *(undefined2 *)((int)puVar5 + -0x52) = 0;
  *(undefined2 *)(puVar5 + -0x15) = 0;
  puVar5[-0x10] = piVar17;
  *(undefined2 *)((int)puVar5 + -0x46) = 1;
  *(undefined2 *)(puVar5 + -0x12) = 0;
  puVar5[-0xd] = piVar17;
  *(undefined2 *)((int)puVar5 + -0x3a) = 2;
  *(undefined2 *)(puVar5 + -0xf) = 0;
  puVar5[-10] = piVar17;
  *(undefined2 *)((int)puVar5 + -0x2e) = 3;
  *(undefined2 *)(puVar5 + -0xc) = 0;
  puVar5[-7] = piVar17;
  *(undefined2 *)((int)puVar5 + -0x22) = 4;
  *(undefined2 *)(puVar5 + -9) = 0;
  puVar5[-4] = piVar17;
  *(undefined2 *)((int)puVar5 + -0x16) = 5;
  *(undefined2 *)(puVar5 + -6) = 0;
  puVar5[-1] = piVar17;
  *(undefined2 *)((int)puVar5 + -10) = 6;
  *(undefined2 *)(puVar5 + -3) = 0;
  func_002313DC((int)(puVar5 + -3));
  uVar15 = 0;
  do {
    puVar7 = (undefined4 *)func_0010BAB4(0x6c);
    if (puVar7 == (undefined4 *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = func_0047D690(puVar7);
    }
    puVar7 = puVar5 + 0x34;
    if (uVar15 < 2) {
      puVar7 = puVar7 + uVar15;
    }
    uVar15 = uVar15 + 1;
    *puVar7 = piVar10;
  } while ((int)uVar15 < 2);
  uVar15 = 0;
  do {
    puVar7 = (undefined4 *)func_0010BAB4(0x140);
    if (puVar7 == (undefined4 *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = func_00461E18(puVar7);
    }
    puVar7 = puVar5 + 9;
    if (uVar15 < 0xd) {
      puVar7 = puVar7 + uVar15;
    }
    uVar15 = uVar15 + 1;
    *puVar7 = piVar10;
    iVar6 = DAT_0043b308;
  } while ((int)uVar15 < 0xd);
  uVar15 = 0;
  do {
    puVar7 = (undefined4 *)func_0010BAB4(0x4c);
    if (puVar7 == (undefined4 *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = func_001B6E04(puVar7);
      *piVar10 = iVar6;
      *(undefined2 *)(piVar10 + 0xe) = 0;
      *(undefined2 *)((int)piVar10 + 0x3a) = 0xffff;
      piVar10[0xf] = (int)uVar19;
      piVar10[0x10] = 0;
      piVar16 = DAT_0043b30c;
      piVar10[0x11] = 0;
      piVar10[0x12] = 0;
      cVar2 = *(char *)(*piVar16 + 0x18);
      if (cVar2 == '\n') {
LAB_0043b440:
        (**(code **)(*piVar10 + 0x38))(piVar10,DAT_0043b460,0);
        piVar16 = (int *)piVar10[7];
      }
      else {
        if (cVar2 < '\v') {
          if ((cVar2 == '\0' || cVar2 == '\x02') || (cVar2 == '\x04' || cVar2 == '\t'))
          goto LAB_0043b440;
        }
        else if ((cVar2 == '\v' || cVar2 == '\f') || (cVar2 == '\x12' || cVar2 == '\x16'))
        goto LAB_0043b440;
        (**(code **)(*piVar10 + 0x38))(piVar10,DAT_0043b310,0);
        piVar16 = (int *)piVar10[7];
      }
      func_0016773C((int)piVar16,3);
      local_6c = DAT_0043b314;
      local_70 = iVar11;
      func_00166C20(piVar16,0,&local_70,0);
      local_6c = DAT_0043b318;
      local_70 = iVar11;
      func_00166C20(piVar16,1,&local_70,0);
      local_6c = DAT_0043b31c;
      local_70 = iVar11;
      func_00166C20(piVar16,2,&local_70,0);
      piVar10[10] = (int)piVar16;
      *(undefined2 *)((int)piVar10 + 0x22) = 0;
      *(undefined2 *)(piVar10 + 8) = 0;
      piVar10[0xd] = (int)piVar16;
      *(undefined2 *)((int)piVar10 + 0x2e) = 1;
      *(undefined2 *)(piVar10 + 0xb) = 0;
      piVar10[0x10] = (int)piVar16;
      *(undefined2 *)((int)piVar10 + 0x3a) = 2;
      *(undefined2 *)(piVar10 + 0xe) = 0;
    }
    puVar7 = puVar5 + 0x16;
    if (uVar15 < 0xd) {
      puVar7 = puVar5 + uVar15 + 0x16;
    }
    uVar15 = uVar15 + 1;
    *puVar7 = piVar10;
    if (0xc < (int)uVar15) {
      func_0010B380(puVar5 + 0x23,0x40,(int *)0x0,4);
      iVar13 = 1;
      iVar6 = 1;
      puVar5[0x27] = 0xffffffff;
      do {
        puVar5[iVar13 + 0x27] = 0xffffffff;
        iVar6 = iVar6 + 2;
        puVar5[iVar13 + 0x28] = 0xffffffff;
        iVar13 = iVar13 + 2;
      } while (iVar6 < 0xd);
      puVar8 = (undefined4 *)func_0010BAB4(0x70);
      puVar7 = (undefined4 *)0x0;
      if (puVar8 != (undefined4 *)0x0) {
        local_54 = s_L_BtnBack_00_0043b320;
        local_58 = iVar11;
        puVar7 = func_0028BE38(puVar8,piVar17,&local_58);
      }
      puVar5[0x37] = puVar7;
      func_00231524((int)(puVar5 + -0xc));
      puVar8 = (undefined4 *)func_0010BAB4(0x70);
      puVar7 = (undefined4 *)0x0;
      if (puVar8 != (undefined4 *)0x0) {
        local_54 = s_L_BtnOK_00_0043b330;
        local_58 = iVar11;
        puVar7 = func_0028BE38(puVar8,piVar17,&local_58);
      }
      puVar5[0x38] = puVar7;
      func_00231524((int)(puVar5 + -9));
      puVar8 = (undefined4 *)func_0010BAB4(0x70);
      puVar7 = (undefined4 *)0x0;
      if (puVar8 != (undefined4 *)0x0) {
        local_54 = s_L_BtnCancel_00_0043b33c;
        local_58 = iVar11;
        puVar7 = func_0028BE38(puVar8,piVar17,&local_58);
      }
      puVar5[0x39] = puVar7;
      func_00231524((int)(puVar5 + -6));
      puVar5[5] = piVar4;
      *(undefined1 *)((int)puVar5 + 6) = 7;
      iVar13 = func_0010BA78(0x70);
      iVar6 = DAT_0043b34c;
      puVar5[6] = iVar13;
      puVar5[7] = iVar13 + (uint)*(byte *)((int)puVar5 + 6) * 8;
      iVar9 = 7;
      puVar7 = (undefined4 *)(iVar13 + -8);
      do {
        uVar18 = *(undefined4 *)(iVar6 + 0xec);
        iVar9 = iVar9 + -1;
        puVar7[2] = *(undefined4 *)(iVar6 + 0xe8);
        puVar7[3] = uVar18;
        uVar18 = *(undefined4 *)(iVar6 + 0xec);
        puVar7[4] = *(undefined4 *)(iVar6 + 0xe8);
        puVar7[5] = uVar18;
        puVar7 = puVar7 + 4;
      } while (iVar9 != 0);
      bVar1 = *(byte *)((int)puVar5 + 6);
      uVar15 = (uint)bVar1;
      puVar7 = (undefined4 *)func_0010BA78(uVar15 << 3);
      puVar5[8] = puVar7;
      if (uVar15 != 0) {
        puVar8 = puVar7 + -2;
        if ((bVar1 & 1) != 0) {
          uVar18 = *(undefined4 *)(iVar6 + 0x7c);
          *puVar7 = *(undefined4 *)(iVar6 + 0x78);
          puVar7[1] = uVar18;
          puVar8 = puVar7;
        }
        for (iVar13 = (int)uVar15 >> 1; iVar13 != 0; iVar13 = iVar13 + -1) {
          uVar18 = *(undefined4 *)(iVar6 + 0x7c);
          puVar8[2] = *(undefined4 *)(iVar6 + 0x78);
          puVar8[3] = uVar18;
          uVar18 = *(undefined4 *)(iVar6 + 0x7c);
          puVar8[4] = *(undefined4 *)(iVar6 + 0x78);
          puVar8[5] = uVar18;
          puVar8 = puVar8 + 4;
        }
      }
      puVar7 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
      iVar13 = 0;
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0x24;
        puVar7[1] = 7;
        iVar13 = func_00100118((int)(puVar7 + 2),DAT_0043b350,0x24,7);
      }
      if (iVar13 != 0) {
        puVar5[3] = iVar13;
        puVar5[2] = 7;
      }
      local_54 = s_cState_Invalid_0043b354;
      local_58 = iVar11;
      func_0010BEC4((int)puVar5,0,&local_58);
      puVar7 = (undefined4 *)puVar5[6];
      uVar12 = *(undefined4 *)(iVar6 + 0x6c);
      uVar18 = *(undefined4 *)(iVar6 + 0x70);
      uVar14 = *(undefined4 *)(iVar6 + 0x74);
      uVar20 = *(undefined8 *)(iVar6 + 0x78);
      *puVar7 = *(undefined4 *)(iVar6 + 0x68);
      puVar7[1] = uVar12;
      puVar7 = (undefined4 *)puVar5[7];
      *puVar7 = uVar18;
      puVar7[1] = uVar14;
      puVar7 = (undefined4 *)puVar5[8];
      *puVar7 = (int)uVar20;
      puVar7[1] = (int)((ulonglong)uVar20 >> 0x20);
      local_54 = s_cState_Wait_0043b364;
      local_58 = iVar11;
      func_0010BEC4((int)puVar5,1,&local_58);
      iVar13 = puVar5[6];
      uVar18 = *(undefined4 *)(iVar6 + 0x88);
      uVar12 = *(undefined4 *)(iVar6 + 0x8c);
      uVar14 = *(undefined4 *)(iVar6 + 0x84);
      *(undefined4 *)(iVar13 + 8) = *(undefined4 *)(iVar6 + 0x80);
      *(undefined4 *)(iVar13 + 0xc) = uVar14;
      iVar13 = puVar5[7];
      *(undefined4 *)(iVar13 + 8) = uVar18;
      *(undefined4 *)(iVar13 + 0xc) = uVar12;
      iVar13 = puVar5[8];
      *(int *)(iVar13 + 8) = (int)uVar20;
      *(int *)(iVar13 + 0xc) = (int)((ulonglong)uVar20 >> 0x20);
      local_54 = s_cState_Selected_0043b370;
      local_58 = iVar11;
      func_0010BEC4((int)puVar5,2,&local_58);
      iVar13 = puVar5[6];
      uVar14 = *(undefined4 *)(iVar6 + 0x94);
      uVar18 = *(undefined4 *)(iVar6 + 0x98);
      uVar12 = *(undefined4 *)(iVar6 + 0x9c);
      *(undefined4 *)(iVar13 + 0x10) = *(undefined4 *)(iVar6 + 0x90);
      *(undefined4 *)(iVar13 + 0x14) = uVar14;
      iVar13 = puVar5[7];
      *(undefined4 *)(iVar13 + 0x10) = uVar18;
      *(undefined4 *)(iVar13 + 0x14) = uVar12;
      iVar13 = puVar5[8];
      *(int *)(iVar13 + 0x10) = (int)uVar20;
      *(int *)(iVar13 + 0x14) = (int)((ulonglong)uVar20 >> 0x20);
      local_54 = s_cState_Pushed_0043b380;
      local_58 = iVar11;
      func_0010BEC4((int)puVar5,3,&local_58);
      iVar13 = puVar5[6];
      uVar12 = *(undefined4 *)(iVar6 + 0xa4);
      uVar14 = *(undefined4 *)(iVar6 + 0xa8);
      uVar18 = *(undefined4 *)(iVar6 + 0xac);
      *(undefined4 *)(iVar13 + 0x18) = *(undefined4 *)(iVar6 + 0xa0);
      *(undefined4 *)(iVar13 + 0x1c) = uVar12;
      iVar13 = puVar5[7];
      *(undefined4 *)(iVar13 + 0x18) = uVar14;
      *(undefined4 *)(iVar13 + 0x1c) = uVar18;
      iVar13 = puVar5[8];
      *(int *)(iVar13 + 0x18) = (int)uVar20;
      *(int *)(iVar13 + 0x1c) = (int)((ulonglong)uVar20 >> 0x20);
      local_54 = s_cState_FadeOutIcon_0043b390;
      local_58 = iVar11;
      func_0010BEC4((int)puVar5,4,&local_58);
      iVar13 = puVar5[6];
      uVar12 = *(undefined4 *)(iVar6 + 0xb4);
      uVar14 = *(undefined4 *)(iVar6 + 0xb8);
      uVar18 = *(undefined4 *)(iVar6 + 0xbc);
      *(undefined4 *)(iVar13 + 0x20) = *(undefined4 *)(iVar6 + 0xb0);
      *(undefined4 *)(iVar13 + 0x24) = uVar12;
      iVar13 = puVar5[7];
      *(undefined4 *)(iVar13 + 0x20) = uVar14;
      *(undefined4 *)(iVar13 + 0x24) = uVar18;
      iVar13 = puVar5[8];
      *(int *)(iVar13 + 0x20) = (int)uVar20;
      *(int *)(iVar13 + 0x24) = (int)((ulonglong)uVar20 >> 0x20);
      local_54 = s_cState_Decided_0043b3a4;
      local_58 = iVar11;
      func_0010BEC4((int)puVar5,5,&local_58);
      iVar13 = puVar5[6];
      uVar18 = *(undefined4 *)(iVar6 + 0xc4);
      uVar14 = *(undefined4 *)(iVar6 + 200);
      uVar12 = *(undefined4 *)(iVar6 + 0xcc);
      *(undefined4 *)(iVar13 + 0x28) = *(undefined4 *)(iVar6 + 0xc0);
      *(undefined4 *)(iVar13 + 0x2c) = uVar18;
      iVar13 = puVar5[7];
      *(undefined4 *)(iVar13 + 0x28) = uVar14;
      *(undefined4 *)(iVar13 + 0x2c) = uVar12;
      iVar13 = puVar5[8];
      *(int *)(iVar13 + 0x28) = (int)uVar20;
      *(int *)(iVar13 + 0x2c) = (int)((ulonglong)uVar20 >> 0x20);
      local_54 = s_cState_AddPoint_0043b3b4;
      local_58 = iVar11;
      func_0010BEC4((int)puVar5,6,&local_58);
      iVar11 = puVar5[6];
      uVar14 = *(undefined4 *)(iVar6 + 0xd4);
      uVar12 = *(undefined4 *)(iVar6 + 0xd8);
      uVar18 = *(undefined4 *)(iVar6 + 0xdc);
      *(undefined4 *)(iVar11 + 0x30) = *(undefined4 *)(iVar6 + 0xd0);
      *(undefined4 *)(iVar11 + 0x34) = uVar14;
      iVar11 = puVar5[7];
      *(undefined4 *)(iVar11 + 0x30) = uVar12;
      *(undefined4 *)(iVar11 + 0x34) = uVar18;
      iVar11 = puVar5[8];
      *(int *)(iVar11 + 0x30) = (int)uVar20;
      *(int *)(iVar11 + 0x34) = (int)((ulonglong)uVar20 >> 0x20);
      *(undefined1 *)((int)puVar5 + -0xb9) = 0x4f;
      *DAT_0043acb8 = 0;
      return piVar4;
    }
  } while( true );
}

