#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_002AA08C(undefined4 *param_1,undefined4 *param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00656650(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_00126a60;
extern int DAT_00126a64;
extern int DAT_00126a68;
extern float *DAT_00126a6c;
extern int DAT_00126a70;
extern undefined4 DAT_00126a74;
extern undefined *DAT_00126a78;
extern int DAT_00126a7c;
extern int DAT_00126a8c;
extern float DAT_00126ca8;
extern char s_cState_Die_00126c9c[];
extern char s_cState_Move_00126a90[];
extern char s_cState_Reaction_00126a9c[];
extern char s_cState_Wait_00126a80[];

// USA 0012665C <- EU 0012665C (Ghidra, non-matching)
// GLOBAL DAT_00126a60 uint *
// GLOBAL DAT_00126a64 int
// GLOBAL DAT_00126a68 int
// GLOBAL DAT_00126a6c float *
// GLOBAL DAT_00126a70 int
// GLOBAL DAT_00126a74 undefined4
// GLOBAL DAT_00126a78 undefined *
// GLOBAL DAT_00126a7c int
// GLOBAL DAT_00126a8c int
// GLOBAL DAT_00126ca8 float
// GLOBAL s_cState_Die_00126c9c string
// GLOBAL s_cState_Move_00126a90 string
// GLOBAL s_cState_Reaction_00126a9c string
// GLOBAL s_cState_Wait_00126a80 string

undefined4 * func_0012665C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  float *pfVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(uint * *)(albw_frame + 0x14))
  piVar4 = func_004FD464(param_1,param_2,DAT_00126a60);
  iVar9 = DAT_00126a64;
  *piVar4 = DAT_00126a64;
  piVar4[200] = iVar9 + 0x84;
  puVar5 = func_0010A794(piVar4 + 0x22f);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  iVar9 = DAT_00126a68;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  *(undefined1 *)(puVar5 + 0xd) = 1;
  *(undefined1 *)((int)puVar5 + 0x35) = 1;
  uVar11 = *(undefined4 *)(iVar9 + 8);
  puVar14 = puVar5 + -0x22f;
  puVar5[0x10] = *(undefined4 *)(iVar9 + 4);
  puVar5[0x11] = uVar11;
  pfVar12 = DAT_00126a6c;
  puVar5[0xe] = DAT_00126a6c;
  puVar5[0xf] = puVar14;
  uVar11 = *(undefined4 *)(iVar9 + 0xc);
  uVar18 = *(undefined4 *)(iVar9 + 0x10);
  puVar5[0x12] = pfVar12;
  puVar5[0x13] = puVar14;
  puVar5[0x14] = uVar11;
  puVar5[0x15] = uVar18;
  puVar5[-0x11d] = puVar5 + 0xe;
  puVar5[-0x134] = puVar5 + 0x12;
  func_004FB344((int)puVar14,9);
  iVar6 = DAT_00126a70;
  uVar15 = 0;
  do {
    func_004FACA4((int)puVar14,uVar15,(int *)(iVar6 + uVar15 * 8));
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 9);
  func_004FB468((int)puVar14);
  puVar5[-0xd2] = DAT_00126a74;
  func_004F5BD8((int)puVar14,(uint *)0x0,(int **)0x0,pfVar12);
  *(undefined1 *)((int)puVar5 + 6) = 4;
  puVar5[5] = puVar14;
  iVar6 = func_0010BA78(0x40);
  puVar5[6] = iVar6;
  puVar5[7] = iVar6 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar10 = 4;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar11 = *(undefined4 *)(iVar9 + 0x60);
    iVar10 = iVar10 + -1;
    puVar7[2] = *(undefined4 *)(iVar9 + 0x5c);
    puVar7[3] = uVar11;
    uVar11 = *(undefined4 *)(iVar9 + 0x60);
    puVar7[4] = *(undefined4 *)(iVar9 + 0x5c);
    puVar7[5] = uVar11;
    puVar7 = puVar7 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar15 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar5[8] = puVar7;
  if (uVar15 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = *(undefined4 *)(iVar9 + 0x28);
      *puVar7 = *(undefined4 *)(iVar9 + 0x24);
      puVar7[1] = uVar11;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar15 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar11 = *(undefined4 *)(iVar9 + 0x28);
      puVar8[2] = *(undefined4 *)(iVar9 + 0x24);
      puVar8[3] = uVar11;
      uVar11 = *(undefined4 *)(iVar9 + 0x28);
      puVar8[4] = *(undefined4 *)(iVar9 + 0x24);
      puVar8[5] = uVar11;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  puVar3 = DAT_00126a78;
  iVar9 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 4;
    *puVar7 = 0x24;
    iVar9 = func_00100118((int)(puVar7 + 2),puVar3,0x24,4);
  }
  if (iVar9 != 0) {
    puVar5[3] = iVar9;
    puVar5[2] = 4;
  }
  iVar9 = DAT_00126a7c;
  puVar5[-0x15a] = puVar5;
  iVar6 = DAT_00126a8c;
  *(undefined2 *)(iVar9 + (int)puVar14) = 4;
  local_2c = (uint *)s_cState_Wait_00126a80;
  local_30 = iVar6;
  iVar9 = puVar5[3];
  puVar17 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar6 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001268c8;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001268c8:
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 <= (int)uVar15) {
    uVar15 = iVar9 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar15);
  iVar9 = DAT_00126a68;
  *(undefined1 *)((int)puVar17 + uVar15) = 0;
  puVar7 = (undefined4 *)puVar5[6];
  uVar19 = *(undefined4 *)(iVar9 + 0x18);
  uVar11 = *(undefined4 *)(iVar9 + 0x1c);
  uVar13 = *(undefined4 *)(iVar9 + 0x20);
  uVar16 = *(undefined4 *)(iVar9 + 0x24);
  uVar18 = *(undefined4 *)(iVar9 + 0x28);
  *puVar7 = *(undefined4 *)(iVar9 + 0x14);
  puVar7[1] = uVar19;
  puVar7 = (undefined4 *)puVar5[7];
  *puVar7 = uVar11;
  puVar7[1] = uVar13;
  puVar7 = (undefined4 *)puVar5[8];
  puVar7[1] = uVar18;
  *puVar7 = uVar16;
  local_2c = (uint *)s_cState_Move_00126a90;
  local_30 = iVar6;
  if ((uint)puVar5[2] < 2) {
    iVar9 = puVar5[3];
  }
  else {
    iVar9 = puVar5[3] + 0x24;
  }
  puVar17 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar6 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00126994;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00126994:
  if (*(int *)(iVar9 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar15);
  iVar9 = DAT_00126a68;
  *(undefined1 *)((int)puVar17 + uVar15) = 0;
  iVar10 = puVar5[6];
  uVar18 = *(undefined4 *)(iVar9 + 0x34);
  uVar19 = *(undefined4 *)(iVar9 + 0x24);
  uVar13 = *(undefined4 *)(iVar9 + 0x30);
  uVar16 = *(undefined4 *)(iVar9 + 0x38);
  uVar11 = *(undefined4 *)(iVar9 + 0x28);
  *(undefined4 *)(iVar10 + 8) = *(undefined4 *)(iVar9 + 0x2c);
  *(undefined4 *)(iVar10 + 0xc) = uVar13;
  iVar9 = puVar5[7];
  *(undefined4 *)(iVar9 + 8) = uVar18;
  *(undefined4 *)(iVar9 + 0xc) = uVar16;
  iVar9 = puVar5[8];
  *(undefined4 *)(iVar9 + 8) = uVar19;
  *(undefined4 *)(iVar9 + 0xc) = uVar11;
  local_2c = (uint *)s_cState_Reaction_00126a9c;
  local_30 = iVar6;
  if ((uint)puVar5[2] < 3) {
    iVar9 = puVar5[3];
  }
  else {
    iVar9 = puVar5[3] + 0x48;
  }
  puVar17 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar6 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00126ab8;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00126ab8:
  if (*(int *)(iVar9 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar15);
  *(undefined1 *)((int)puVar17 + uVar15) = 0;
  iVar9 = DAT_00126a68;
  iVar10 = puVar5[6];
  uVar18 = *(undefined4 *)(DAT_00126a68 + 0x40);
  uVar13 = *(undefined4 *)(DAT_00126a68 + 0x44);
  uVar19 = *(undefined4 *)(DAT_00126a68 + 0x48);
  uVar11 = *(undefined4 *)(DAT_00126a68 + 0x24);
  uVar16 = *(undefined4 *)(DAT_00126a68 + 0x28);
  *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(DAT_00126a68 + 0x3c);
  *(undefined4 *)(iVar10 + 0x14) = uVar18;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 0x10) = uVar13;
  *(undefined4 *)(iVar10 + 0x14) = uVar19;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 0x10) = uVar11;
  *(undefined4 *)(iVar10 + 0x14) = uVar16;
  local_2c = (uint *)s_cState_Die_00126c9c;
  local_30 = iVar6;
  uVar15 = puVar5[2];
  if (uVar15 < 4) {
    iVar10 = puVar5[3];
    uVar2 = uVar15;
  }
  else {
    iVar10 = iVar6;
    uVar2 = puVar5[3];
  }
  if (3 < uVar15) {
    iVar10 = uVar2 + 0x6c;
  }
  puVar17 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar6 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00126b8c;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00126b8c:
  if (*(int *)(iVar10 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar15);
  *(undefined1 *)((int)puVar17 + uVar15) = 0;
  iVar6 = puVar5[6];
  uVar13 = *(undefined4 *)(iVar9 + 0x50);
  uVar19 = *(undefined4 *)(iVar9 + 0x54);
  uVar11 = *(undefined4 *)(iVar9 + 0x28);
  uVar18 = *(undefined4 *)(iVar9 + 0x24);
  uVar16 = *(undefined4 *)(iVar9 + 0x58);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar9 + 0x4c);
  *(undefined4 *)(iVar6 + 0x1c) = uVar13;
  iVar9 = puVar5[7];
  *(undefined4 *)(iVar9 + 0x18) = uVar19;
  *(undefined4 *)(iVar9 + 0x1c) = uVar16;
  iVar9 = puVar5[8];
  *(undefined4 *)(iVar9 + 0x18) = uVar18;
  *(undefined4 *)(iVar9 + 0x1c) = uVar11;
  func_00656650(puVar5,0);
  puVar5[-200] = puVar5[-200] | 0x8000;
  func_002AF5FC((int)puVar14,6,-1);
  *(undefined1 *)((int)puVar5 + -0x13f) = 7;
  *(undefined1 *)((int)puVar5 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar5 + -0x13d) = 0;
  func_004FC218((int)puVar14,'\x05',0,0x7fff);
  func_004FBA18((int)puVar14,8,0xff,0,-1,0,0x7fff,DAT_00126ca8,DAT_00126ca8);
  func_004F87F8((int)puVar14,1);
  local_34 = puVar5[-0x17c];
  func_002AA08C(puVar5 + -0x13b,&local_34);
  return puVar14;
}

