#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_002313DC(int param_1);
extern int func_003FDF90(int param_1,int param_2);
extern int func_00423158(undefined4 *param_1,int *param_2,int *param_3);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004B948C(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_0066DA28(undefined4 *param_1,undefined1 param_2);
extern int DAT_00460be4;
extern undefined4 DAT_00460be8;
extern int DAT_00460c00;
extern undefined DAT_00460c04;
extern undefined DAT_00460c3c;
extern int DAT_00460c40;
extern undefined4 *DAT_00460c54;
extern undefined *DAT_00460c58;
extern char s_Decide_00460c28[];
extern char s_G_Panel_00_00460c30[];
extern char s_Gm_MainSystemItemT_00460bec[];
extern char s_L_Panel__02d_00460c44[];
extern char s_RollB_00460c20[];
extern char s_RollT_00460c18[];
extern char s_ScrollB_00460c10[];
extern char s_ScrollT_00460c08[];
extern char s_cState_Decide_00460fb0[];
extern char s_cState_Down_00460fa4[];
extern char s_cState_Hold_00460f8c[];
extern char s_cState_Up_00460f98[];
extern char s_cf_00460c44[];

// USA 0046081C <- EU 004607F4 (Ghidra, non-matching)
// GLOBAL DAT_00460be4 int
// GLOBAL DAT_00460be8 undefined4
// GLOBAL DAT_00460c00 int
// GLOBAL DAT_00460c04 undefined
// GLOBAL DAT_00460c3c undefined
// GLOBAL DAT_00460c40 int
// GLOBAL DAT_00460c54 undefined4 *
// GLOBAL DAT_00460c58 undefined *
// GLOBAL s_Decide_00460c28 string
// GLOBAL s_G_Panel_00_00460c30 string
// GLOBAL s_Gm_MainSystemItemT_00460bec string
// GLOBAL s_cf_00460c44 string
// GLOBAL s_RollB_00460c20 string
// GLOBAL s_RollT_00460c18 string
// GLOBAL s_ScrollB_00460c10 string
// GLOBAL s_ScrollT_00460c08 string
// GLOBAL s_cState_Decide_00460fb0 string
// GLOBAL s_cState_Down_00460fa4 string
// GLOBAL s_cState_Hold_00460f8c string
// GLOBAL s_cState_Up_00460f98 string

int * func_0046081C(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(char * *)(albw_frame + 0x4))
  #define local_64 (*(undefined4 * *)(albw_frame + 0xc))
  #define local_58 (*(int *)(albw_frame + 0x18))
  #define local_54 (*(uint * *)(albw_frame + 0x1c))
  #define local_50 (*(int *)(albw_frame + 0x20))
  #define local_4c (*(undefined1 * *)(albw_frame + 0x24))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x28))
  #define local_44 ((undefined1 *)(albw_frame + 0x2c))
  #define uStack_35 (*(undefined1 *)(albw_frame + 0x3b))
  #define local_30 (*(int *)(albw_frame + 0x40))
  #define local_2c (*(undefined1 * *)(albw_frame + 0x44))
  piVar4 = func_004B9A10(param_1,0);
  iVar12 = DAT_00460be4;
  *piVar4 = DAT_00460be4;
  piVar4[0xe] = iVar12 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x1d);
  uVar11 = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  if (puVar5 + 0x18 != (undefined4 *)0x0) {
    puVar5[0x14] = puVar5 + 0x18;
    puVar5[0x15] = 0x15;
  }
  *(undefined2 *)(puVar5 + 0x23) = 0;
  uVar10 = DAT_00460be8;
  *(undefined2 *)((int)puVar5 + 0x8e) = 0xffff;
  puVar5[0x24] = uVar10;
  puVar5[0x25] = 0;
  *(undefined2 *)(puVar5 + 0x26) = 0;
  *(undefined2 *)((int)puVar5 + 0x9a) = 0xffff;
  puVar5[0x27] = uVar10;
  puVar5[0x28] = 0;
  *(undefined1 *)(puVar5 + 0x29) = 0xff;
  *(undefined1 *)((int)puVar5 + 0xa5) = 0xff;
  *(undefined1 *)((int)puVar5 + 0xa6) = 1;
  *(undefined1 *)((int)puVar5 + 0xa7) = 2;
  *(undefined1 *)(puVar5 + 0x2a) = 3;
  *(undefined2 *)((int)puVar5 + 0xaa) = 0;
  *(undefined2 *)(puVar5 + 0x2b) = 0;
  piVar4 = puVar5 + -0x1d;
  *(undefined2 *)((int)puVar5 + 0xae) = 300;
  *(undefined1 *)(puVar5 + 0x2c) = 0;
  *(undefined1 *)((int)puVar5 + 0xb1) = 0;
  iVar12 = DAT_00460c00;
  *(undefined1 *)((int)puVar5 + 0xb2) = 0;
  *(undefined1 *)((int)puVar5 + 0xb3) = 0;
  local_6c = s_Gm_MainSystemItemT_00460bec;
  local_70 = iVar12;
  (**(code **)(*piVar4 + 0x38))(piVar4,&local_70,0);
  piVar13 = (int *)puVar5[-0x16];
  func_0016773C((int)piVar13,7);
  local_6c = &DAT_00460c04;
  local_70 = iVar12;
  func_00166C20(piVar13,0,&local_70,0);
  local_6c = s_ScrollT_00460c08;
  local_70 = iVar12;
  func_00166C20(piVar13,1,&local_70,0);
  local_6c = s_ScrollB_00460c10;
  local_70 = iVar12;
  func_00166C20(piVar13,2,&local_70,0);
  local_6c = s_RollT_00460c18;
  local_70 = iVar12;
  func_00166C20(piVar13,3,&local_70,0);
  local_6c = s_RollB_00460c20;
  local_70 = iVar12;
  func_00166C20(piVar13,4,&local_70,0);
  local_6c = s_Decide_00460c28;
  local_70 = iVar12;
  local_54 = (uint *)s_G_Panel_00_00460c30;
  local_58 = iVar12;
  (**(code **)(iVar12 + 8))(&local_58);
  iVar6 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_54);
  func_00166C20(piVar13,5,&local_70,iVar6);
  local_54 = (uint *)&DAT_00460c3c;
  uVar10 = 0;
  local_58 = iVar12;
  func_00166C20(piVar13,6,&local_58,0);
  puVar5[-0x13] = piVar13;
  *(undefined2 *)((int)puVar5 + -0x52) = 0;
  *(undefined2 *)(puVar5 + -0x15) = 0;
  func_002313DC((int)(puVar5 + -0x15));
  puVar5[-0x10] = piVar13;
  *(undefined2 *)((int)puVar5 + -0x46) = 6;
  *(undefined2 *)(puVar5 + -0x12) = 0;
  puVar5[0x28] = puVar5[-0x16];
  *(undefined2 *)((int)puVar5 + 0x9a) = 5;
  *(undefined2 *)(puVar5 + 0x26) = 0;
  local_4c = local_44;
  uStack_48 = 0x10;
  uStack_35 = 0;
  local_44[0] = 0;
  local_50 = DAT_00460c40;
  do {
    func_004994B0((int)&local_50,s_L_Panel__02d_00460c44,uVar11,uVar10);
    local_64 = (undefined4 *)func_0010BAB4(0x8c);
    iVar6 = 0;
    if (local_64 != (undefined4 *)0x0) {
      (**(code **)(local_50 + 8))(&local_50);
      local_2c = local_4c;
      local_30 = iVar12;
      iVar6 = func_00423158(local_64,piVar13,&local_30);
    }
    puVar5[uVar11 + 9] = iVar6;
    func_004B948C((int)piVar4,iVar6);
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0xb);
  puVar5[5] = piVar4;
  *(undefined1 *)((int)puVar5 + 6) = 4;
  iVar6 = func_0010BA78(0x40);
  puVar3 = DAT_00460c54;
  puVar5[6] = iVar6;
  puVar5[7] = iVar6 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar9 = 4;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar10 = puVar3[0x13];
    iVar9 = iVar9 + -1;
    puVar7[2] = puVar3[0x12];
    puVar7[3] = uVar10;
    uVar10 = puVar3[0x13];
    puVar7[4] = puVar3[0x12];
    puVar7[5] = uVar10;
    puVar7 = puVar7 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar11 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar5[8] = puVar7;
  if (uVar11 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = puVar3[5];
      *puVar7 = puVar3[4];
      puVar7[1] = uVar10;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar11 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar10 = puVar3[5];
      puVar8[2] = puVar3[4];
      puVar8[3] = uVar10;
      uVar10 = puVar3[5];
      puVar8[4] = puVar3[4];
      puVar8[5] = uVar10;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 4;
    iVar6 = func_00100118((int)(puVar7 + 2),DAT_00460c58,0x24,4);
  }
  if (iVar6 != 0) {
    puVar5[3] = iVar6;
    puVar5[2] = 4;
  }
  local_54 = (uint *)s_cState_Hold_00460f8c;
  local_58 = iVar12;
  iVar6 = puVar5[3];
  puVar14 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar12 + 8))(&local_58);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_54 + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_00460cbc;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_00460cbc:
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 <= (int)uVar11) {
    uVar11 = iVar6 - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar14,local_54,uVar11);
  *(undefined1 *)((int)puVar14 + uVar11) = 0;
  puVar7 = (undefined4 *)puVar5[6];
  uVar10 = puVar3[1];
  uVar15 = puVar3[2];
  uVar16 = puVar3[3];
  uVar17 = puVar3[4];
  uVar18 = puVar3[5];
  *puVar7 = *puVar3;
  puVar7[1] = uVar10;
  puVar7 = (undefined4 *)puVar5[7];
  *puVar7 = uVar15;
  puVar7[1] = uVar16;
  puVar7 = (undefined4 *)puVar5[8];
  *puVar7 = uVar17;
  puVar7[1] = uVar18;
  local_54 = (uint *)s_cState_Up_00460f98;
  local_58 = iVar12;
  if ((uint)puVar5[2] < 2) {
    iVar6 = puVar5[3];
  }
  else {
    iVar6 = puVar5[3] + 0x24;
  }
  puVar14 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar12 + 8))(&local_58);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_54 + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_00460d6c;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_00460d6c:
  if (*(int *)(iVar6 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar14,local_54,uVar11);
  *(undefined1 *)((int)puVar14 + uVar11) = 0;
  iVar6 = puVar5[6];
  uVar10 = puVar3[4];
  uVar15 = puVar3[8];
  uVar16 = puVar3[7];
  uVar17 = puVar3[9];
  uVar18 = puVar3[5];
  *(undefined4 *)(iVar6 + 8) = puVar3[6];
  *(undefined4 *)(iVar6 + 0xc) = uVar16;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 8) = uVar15;
  *(undefined4 *)(iVar6 + 0xc) = uVar17;
  iVar6 = puVar5[8];
  *(undefined4 *)(iVar6 + 8) = uVar10;
  *(undefined4 *)(iVar6 + 0xc) = uVar18;
  local_54 = (uint *)s_cState_Down_00460fa4;
  local_58 = iVar12;
  if ((uint)puVar5[2] < 3) {
    iVar6 = puVar5[3];
  }
  else {
    iVar6 = puVar5[3] + 0x48;
  }
  puVar14 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar12 + 8))(&local_58);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_54 + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_00460e3c;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_00460e3c:
  if (*(int *)(iVar6 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar14,local_54,uVar11);
  *(undefined1 *)((int)puVar14 + uVar11) = 0;
  iVar6 = puVar5[6];
  uVar10 = puVar3[0xc];
  uVar18 = puVar3[0xd];
  uVar15 = puVar3[0xb];
  uVar16 = puVar3[4];
  uVar17 = puVar3[5];
  *(undefined4 *)(iVar6 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar6 + 0x14) = uVar15;
  iVar6 = puVar5[7];
  *(undefined4 *)(iVar6 + 0x10) = uVar10;
  *(undefined4 *)(iVar6 + 0x14) = uVar18;
  iVar6 = puVar5[8];
  *(undefined4 *)(iVar6 + 0x10) = uVar16;
  *(undefined4 *)(iVar6 + 0x14) = uVar17;
  local_54 = (uint *)s_cState_Decide_00460fb0;
  local_58 = iVar12;
  uVar11 = puVar5[2];
  if (uVar11 < 4) {
    iVar6 = puVar5[3];
    uVar2 = uVar11;
  }
  else {
    iVar6 = iVar12;
    uVar2 = puVar5[3];
  }
  if (3 < uVar11) {
    iVar6 = uVar2 + 0x6c;
  }
  puVar14 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar12 + 8))(&local_58);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_54 + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_00460f10;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_00460f10:
  if (*(int *)(iVar6 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar14,local_54,uVar11);
  *(undefined1 *)((int)puVar14 + uVar11) = 0;
  uVar10 = puVar3[4];
  uVar18 = puVar3[5];
  uVar15 = puVar3[0x10];
  uVar17 = puVar3[0x11];
  iVar12 = puVar5[6];
  uVar16 = puVar3[0xf];
  *(undefined4 *)(iVar12 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar12 + 0x1c) = uVar16;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x18) = uVar15;
  *(undefined4 *)(iVar12 + 0x1c) = uVar17;
  iVar12 = puVar5[8];
  *(undefined4 *)(iVar12 + 0x18) = uVar10;
  *(undefined4 *)(iVar12 + 0x1c) = uVar18;
  func_0066DA28(puVar5,0);
  return piVar4;
}

