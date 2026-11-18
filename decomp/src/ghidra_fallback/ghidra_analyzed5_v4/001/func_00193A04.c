#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_00193918(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00193db4;
extern int DAT_00193db8;
extern int DAT_00193dbc;
extern undefined4 DAT_00193dc0;
extern undefined4 DAT_00193dc4;
extern undefined4 DAT_00193dc8;
extern int *DAT_00193dcc;
extern undefined4 DAT_00193dd0;
extern undefined4 DAT_00193dd4;
extern undefined *DAT_00193dd8;
extern int DAT_00193ddc;
extern int DAT_00193dec;
extern int *DAT_00194024;
extern uint *DAT_00194028;
extern undefined4 *DAT_0019402c;
extern undefined4 DAT_00194030;
extern char s_cState_Erase_00193df0[];
extern char s_cState_Wait_00193de0[];

// USA 00193A04 <- EU 00193A04 (Ghidra, non-matching)
// GLOBAL DAT_00193db4 int *
// GLOBAL DAT_00193db8 int
// GLOBAL DAT_00193dbc int
// GLOBAL DAT_00193dc0 undefined4
// GLOBAL DAT_00193dc4 undefined4
// GLOBAL DAT_00193dc8 undefined4
// GLOBAL DAT_00193dcc int *
// GLOBAL DAT_00193dd0 undefined4
// GLOBAL DAT_00193dd4 undefined4
// GLOBAL DAT_00193dd8 undefined *
// GLOBAL DAT_00193ddc int
// GLOBAL DAT_00193dec int
// GLOBAL DAT_00194024 int *
// GLOBAL DAT_00194028 uint *
// GLOBAL DAT_0019402c undefined4 *
// GLOBAL DAT_00194030 undefined4
// GLOBAL s_cState_Erase_00193df0 string
// GLOBAL s_cState_Wait_00193de0 string

undefined4 * func_00193A04(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_b0 (*(int *)(albw_frame + 0x0))
  #define local_ac (*(int *)(albw_frame + 0x4))
  #define local_a0 (*(int *)(albw_frame + 0x10))
  #define local_9c (*(uint * *)(albw_frame + 0x14))
  #define local_98 ((uint *)(albw_frame + 0x18))
  #define local_90 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_8c (*(undefined4 *)(albw_frame + 0x24))
  #define local_88 (*(undefined4 *)(albw_frame + 0x28))
  #define local_84 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x30))
  #define local_7c (*(undefined4 *)(albw_frame + 0x34))
  #define local_78 (*(uint *)(albw_frame + 0x38))
  #define local_44 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_40 (*(undefined1 *)(albw_frame + 0x70))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x84))
  #define local_28 (*(uint * *)(albw_frame + 0x88))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar4 = func_00150E40(param_1,param_2);
  piVar10 = DAT_00193db4;
  piVar4[0x104] = DAT_00193db8;
  iVar12 = *piVar10;
  iVar18 = piVar10[1];
  piVar4[0x105] = (int)(piVar4 + 0x103);
  piVar4[0x106] = iVar12;
  piVar4[0x107] = iVar18;
  iVar12 = DAT_00193dbc;
  *piVar4 = DAT_00193dbc;
  piVar4[200] = iVar12 + 0x54;
  piVar4[0x103] = iVar12 + 0xb8;
  puVar5 = func_0010A794(piVar4 + 0x108);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  uVar21 = DAT_00193dc4;
  puVar5[0xc] = DAT_00193dc0;
  puVar5[0xd] = uVar21;
  puVar5[0xb] = 0;
  puVar5[0xe] = 0;
  puVar14 = puVar5 + -0x108;
  uVar21 = DAT_00193dc8;
  uVar6 = func_0014E428((int)puVar14,1,0,0,1,0,0);
  puVar5[0xe] = uVar6;
  puVar7 = (uint *)func_0014E904((int)puVar14,1,1);
  puVar5[9] = puVar7;
  func_00169688(puVar7,0,DAT_00193dcc,*(int *)(puVar5[-0x54] + 0x1c8));
  func_00133870(puVar5[9],0,puVar5[0xe]);
  func_0016A02C(puVar5[9],-1,(int *)0xffffffff,0);
  local_90 = &local_8c;
  local_98[1] = 3;
  local_44 = 10;
  local_40 = 0;
  local_98[0] = 1;
  local_8c = 0;
  local_88 = DAT_00193dd0;
  local_80 = DAT_00193dd4;
  local_78 = (uint)(puVar5 + 9) | 0xff;
  local_84 = uVar21;
  local_7c = uVar21;
  func_0016898C(puVar5[9],local_98);
  *(undefined1 *)((int)puVar5 + 6) = 2;
  puVar5[5] = puVar14;
  iVar12 = func_0010BA78(0x20);
  puVar5[6] = iVar12;
  puVar5[7] = iVar12 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar18 = 2;
  piVar4 = (int *)(iVar12 + -8);
  do {
    iVar12 = piVar10[0xd];
    iVar18 = iVar18 + -1;
    piVar4[2] = piVar10[0xc];
    piVar4[3] = iVar12;
    iVar12 = piVar10[0xd];
    piVar4[4] = piVar10[0xc];
    piVar4[5] = iVar12;
    piVar4 = piVar4 + 4;
  } while (iVar18 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar16 = (uint)bVar1;
  piVar4 = (int *)func_0010BA78(uVar16 << 3);
  puVar5[8] = piVar4;
  if (uVar16 != 0) {
    piVar8 = piVar4 + -2;
    if ((bVar1 & 1) != 0) {
      iVar12 = piVar10[7];
      *piVar4 = piVar10[6];
      piVar4[1] = iVar12;
      piVar8 = piVar4;
    }
    for (iVar12 = (int)uVar16 >> 1; iVar12 != 0; iVar12 = iVar12 + -1) {
      iVar18 = piVar10[7];
      piVar8[2] = piVar10[6];
      piVar8[3] = iVar18;
      iVar18 = piVar10[7];
      piVar8[4] = piVar10[6];
      piVar8[5] = iVar18;
      piVar8 = piVar8 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  puVar3 = DAT_00193dd8;
  iVar12 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    puVar9[1] = 2;
    *puVar9 = 0x24;
    iVar12 = func_00100118((int)(puVar9 + 2),puVar3,0x24,2);
  }
  if (iVar12 != 0) {
    puVar5[2] = 2;
    puVar5[3] = iVar12;
  }
  iVar12 = DAT_00193ddc;
  puVar5[-0x33] = puVar5;
  iVar18 = DAT_00193dec;
  *(undefined2 *)(iVar12 + (int)puVar14) = 2;
  local_9c = (uint *)s_cState_Wait_00193de0;
  local_a0 = iVar18;
  iVar12 = puVar5[3];
  puVar7 = *(uint **)(iVar12 + 4);
  (**(code **)(iVar18 + 8))(&local_a0);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_9c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_00193cfc;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_00193cfc:
  iVar12 = *(int *)(iVar12 + 8);
  if (iVar12 <= (int)uVar16) {
    uVar16 = iVar12 - 1;
  }
  (**(code **)(local_a0 + 8))(&local_a0);
  func_0010E3C4(puVar7,local_9c,uVar16);
  *(undefined1 *)((int)puVar7 + uVar16) = 0;
  piVar4 = (int *)puVar5[6];
  iVar13 = piVar10[4];
  iVar19 = piVar10[5];
  iVar12 = piVar10[2];
  iVar15 = piVar10[6];
  iVar17 = piVar10[7];
  piVar4[1] = piVar10[3];
  *piVar4 = iVar12;
  piVar4 = (int *)puVar5[7];
  *piVar4 = iVar13;
  piVar4[1] = iVar19;
  piVar4 = (int *)puVar5[8];
  *piVar4 = iVar15;
  piVar4[1] = iVar17;
  local_9c = (uint *)s_cState_Erase_00193df0;
  local_a0 = iVar18;
  if ((uint)puVar5[2] < 2) {
    iVar12 = puVar5[3];
  }
  else {
    iVar12 = puVar5[3] + 0x24;
  }
  puVar7 = *(uint **)(iVar12 + 4);
  (**(code **)(iVar18 + 8))(&local_a0);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_9c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_00193e0c;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_00193e0c:
  if (*(int *)(iVar12 + 8) <= (int)uVar16) {
    uVar16 = *(int *)(iVar12 + 8) - 1;
  }
  (**(code **)(local_a0 + 8))(&local_a0);
  func_0010E3C4(puVar7,local_9c,uVar16);
  *(undefined1 *)((int)puVar7 + uVar16) = 0;
  iVar12 = puVar5[6];
  iVar13 = piVar10[6];
  iVar15 = piVar10[7];
  iVar17 = piVar10[9];
  iVar19 = piVar10[10];
  iVar20 = piVar10[0xb];
  *(int *)(iVar12 + 8) = piVar10[8];
  *(int *)(iVar12 + 0xc) = iVar17;
  iVar12 = puVar5[7];
  *(int *)(iVar12 + 8) = iVar19;
  *(int *)(iVar12 + 0xc) = iVar20;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 8) = iVar13;
  *(int *)(iVar12 + 0xc) = iVar15;
  iVar12 = (int)*(char *)(puVar5 + 1);
  if (iVar12 != -1) {
    iVar13 = puVar5[8];
    pcVar11 = *(code **)(iVar13 + iVar12 * 8);
    if ((pcVar11 != (code *)0x0) ||
       ((uVar16 = *(uint *)(iVar13 + iVar12 * 8 + 4), (uVar16 & 1) != 0 && (uVar16 != 0)))) {
      uVar16 = *(uint *)(iVar13 + iVar12 * 8 + 4);
      piVar10 = (int *)(puVar5[5] + ((int)uVar16 >> 1));
      if ((uVar16 & 1) != 0) {
        pcVar11 = *(code **)(pcVar11 + *piVar10);
      }
      (*pcVar11)(piVar10,0);
    }
  }
  uVar2 = *(undefined1 *)(puVar5 + 1);
  *(undefined1 *)(puVar5 + 1) = 0;
  *puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 5) = uVar2;
  if (puVar5[4] != 0) {
    piVar10 = (int *)puVar5[3];
    (**(code **)(*piVar10 + 8))(piVar10);
    local_ac = piVar10[1];
    local_b0 = iVar18;
    func_0010BEB4(puVar5[4],&local_b0);
  }
  iVar18 = (int)*(char *)(puVar5 + 1);
  iVar12 = puVar5[6];
  pcVar11 = *(code **)(iVar12 + iVar18 * 8);
  if ((pcVar11 != (code *)0x0) ||
     ((uVar16 = *(uint *)(iVar12 + iVar18 * 8 + 4), (uVar16 & 1) != 0 && (uVar16 != 0)))) {
    uVar16 = *(uint *)(iVar12 + iVar18 * 8 + 4);
    if ((uVar16 & 1) != 0) {
      pcVar11 = *(code **)(pcVar11 + *(int *)(puVar5[5] + ((int)uVar16 >> 1)));
    }
    (*pcVar11)((int)(puVar5[5]) + ((int)uVar16 >> 1));
  }
  func_00193918((int)puVar14);
  puVar9 = (undefined4 *)func_0052FBA0(*DAT_00194024 + 0x3dbbc,local_28[0x13]);
  if (puVar9 != (undefined4 *)0x0) {
    if (((*DAT_00194028 & 1) == 0) && (iVar12 = func_00100174((int *)DAT_00194028), iVar12 != 0)) {
      *DAT_0019402c = DAT_00194030;
    }
    iVar12 = (**(code **)*puVar9)(puVar9,DAT_0019402c);
    if (iVar12 == 0) {
      puVar9 = (undefined4 *)0x0;
    }
    if (puVar9 != (undefined4 *)0x0) {
      puVar5[-0x50] = puVar5[-0x50] | 2;
    }
  }
  return puVar14;
}

