#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00501568(int param_1);
extern int func_0066B2F8(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_0050266c;
extern int DAT_00502670;
extern int DAT_00502674;
extern undefined4 DAT_00502678;
extern undefined *DAT_0050267c;
extern undefined *DAT_00502680;
extern undefined *DAT_00502684;
extern int DAT_00502688;
extern int DAT_00502698;
extern undefined4 *DAT_0050269c;
extern undefined4 *DAT_005026b0;
extern char s_cState_Die_005026b4[];
extern char s_cState_Move_0050268c[];
extern char s_cState_Reaction_005026a0[];

// USA 00502204 <- EU 005021DC (Ghidra, non-matching)
// GLOBAL DAT_0050266c uint *
// GLOBAL DAT_00502670 int
// GLOBAL DAT_00502674 int
// GLOBAL DAT_00502678 undefined4
// GLOBAL DAT_0050267c undefined *
// GLOBAL DAT_00502680 undefined *
// GLOBAL DAT_00502684 undefined *
// GLOBAL DAT_00502688 int
// GLOBAL DAT_00502698 int
// GLOBAL DAT_0050269c undefined4 *
// GLOBAL DAT_005026b0 undefined4 *
// GLOBAL s_cState_Die_005026b4 string
// GLOBAL s_cState_Move_0050268c string
// GLOBAL s_cState_Reaction_005026a0 string

int func_00502204(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  piVar3 = func_004FD464(param_1,param_2,DAT_0050266c);
  iVar8 = DAT_00502670;
  *piVar3 = DAT_00502670;
  piVar3[200] = iVar8 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  iVar8 = DAT_00502674;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar10 = *(undefined4 *)(iVar8 + 8);
  uVar11 = *(undefined4 *)(iVar8 + 0xc);
  puVar4[10] = puVar4 + -0x22f;
  puVar4[0xb] = uVar10;
  puVar4[0xc] = uVar11;
  puVar4[9] = DAT_00502678;
  puVar2 = DAT_0050267c;
  puVar4[0xd] = 0;
  iVar5 = func_00100118((int)(puVar4 + 0xe),puVar2,0x18,2);
  iVar5 = func_00100118(iVar5 + 0x30,DAT_00502680,0x14,0x10);
  *(undefined4 *)(iVar5 + 0x140) = 0;
  *(undefined1 *)(iVar5 + 0x144) = 0;
  *(undefined4 *)(iVar5 + 0x148) = 0;
  *(undefined4 *)(iVar5 + 0x14c) = 0;
  *(undefined1 *)(iVar5 + 0x150) = 0;
  iVar12 = iVar5 + -0x924;
  *(undefined4 *)(iVar5 + 0x154) = *(undefined4 *)(iVar5 + -0x554);
  *(undefined4 *)(iVar5 + 0x158) = *(undefined4 *)(iVar5 + -0x550);
  *(undefined4 *)(iVar5 + 0x15c) = *(undefined4 *)(iVar5 + -0x54c);
  *(undefined4 *)(iVar5 + 0x164) = 0xb4;
  *(undefined4 *)(iVar5 + 0x160) = 0x1000000;
  uVar10 = *(undefined4 *)(iVar8 + 0x10);
  uVar11 = *(undefined4 *)(iVar8 + 0x14);
  *(int *)(iVar5 + -0x40) = iVar12;
  *(undefined4 *)(iVar5 + -0x3c) = uVar10;
  *(undefined4 *)(iVar5 + -0x38) = uVar11;
  *(int *)(iVar5 + -0x538) = iVar5 + -0x44;
  func_00501568(iVar12);
  *(undefined1 *)(iVar5 + -0x62) = 3;
  *(int *)(iVar5 + -0x54) = iVar12;
  iVar6 = func_0010BA78(0x30);
  *(int *)(iVar5 + -0x50) = iVar6;
  *(uint *)(iVar5 + -0x4c) = iVar6 + (uint)*(byte *)(iVar5 + -0x62) * 8;
  iVar9 = 3;
  puVar4 = (undefined4 *)(iVar6 + -8);
  do {
    uVar10 = *(undefined4 *)(iVar8 + 100);
    iVar9 = iVar9 + -1;
    puVar4[2] = *(undefined4 *)(iVar8 + 0x60);
    puVar4[3] = uVar10;
    uVar10 = *(undefined4 *)(iVar8 + 100);
    puVar4[4] = *(undefined4 *)(iVar8 + 0x60);
    puVar4[5] = uVar10;
    puVar4 = puVar4 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)(iVar5 + -0x62);
  uVar13 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar13 << 3);
  *(undefined4 **)(iVar5 + -0x48) = puVar4;
  if (uVar13 != 0) {
    puVar7 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = *(undefined4 *)(iVar8 + 0x6c);
      *puVar4 = *(undefined4 *)(iVar8 + 0x68);
      puVar4[1] = uVar10;
      puVar7 = puVar4;
    }
    for (iVar6 = (int)uVar13 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar10 = *(undefined4 *)(iVar8 + 0x6c);
      puVar7[2] = *(undefined4 *)(iVar8 + 0x68);
      puVar7[3] = uVar10;
      uVar10 = *(undefined4 *)(iVar8 + 0x6c);
      puVar7[4] = *(undefined4 *)(iVar8 + 0x68);
      puVar7[5] = uVar10;
      puVar7 = puVar7 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  puVar2 = DAT_00502684;
  iVar8 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = 3;
    *puVar4 = 0x24;
    iVar8 = func_00100118((int)(puVar4 + 2),puVar2,0x24,3);
  }
  if (iVar8 != 0) {
    *(int *)(iVar5 + -0x5c) = iVar8;
    *(undefined4 *)(iVar5 + -0x60) = 3;
  }
  iVar8 = DAT_00502688;
  *(undefined4 **)(iVar5 + -0x5d0) = (undefined4 *)(iVar5 + -0x68);
  iVar6 = DAT_00502698;
  *(undefined2 *)(iVar8 + iVar12) = 3;
  local_2c = (uint *)s_cState_Move_0050268c;
  local_30 = iVar6;
  iVar8 = *(int *)(iVar5 + -0x5c);
  puVar14 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar6 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00502454;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00502454:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar13) {
    uVar13 = iVar8 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar14,local_2c,uVar13);
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  puVar4 = *(undefined4 **)(iVar5 + -0x50);
  uVar10 = DAT_0050269c[1];
  uVar11 = DAT_0050269c[2];
  uVar15 = DAT_0050269c[3];
  uVar16 = DAT_0050269c[4];
  uVar17 = DAT_0050269c[5];
  *puVar4 = *DAT_0050269c;
  puVar4[1] = uVar10;
  puVar4 = *(undefined4 **)(iVar5 + -0x4c);
  *puVar4 = uVar11;
  puVar4[1] = uVar15;
  puVar4 = *(undefined4 **)(iVar5 + -0x48);
  *puVar4 = uVar16;
  puVar4[1] = uVar17;
  local_2c = (uint *)s_cState_Reaction_005026a0;
  local_30 = iVar6;
  if (*(uint *)(iVar5 + -0x60) < 2) {
    iVar8 = *(int *)(iVar5 + -0x5c);
  }
  else {
    iVar8 = *(int *)(iVar5 + -0x5c) + 0x24;
  }
  puVar14 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar6 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_0050250c;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_0050250c:
  if (*(int *)(iVar8 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar14,local_2c,uVar13);
  puVar4 = DAT_005026b0;
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  iVar8 = *(int *)(iVar5 + -0x50);
  uVar10 = puVar4[1];
  uVar11 = puVar4[2];
  uVar15 = puVar4[3];
  uVar16 = puVar4[4];
  uVar17 = puVar4[5];
  *(undefined4 *)(iVar8 + 8) = *puVar4;
  *(undefined4 *)(iVar8 + 0xc) = uVar10;
  iVar8 = *(int *)(iVar5 + -0x4c);
  *(undefined4 *)(iVar8 + 8) = uVar11;
  *(undefined4 *)(iVar8 + 0xc) = uVar15;
  iVar8 = *(int *)(iVar5 + -0x48);
  *(undefined4 *)(iVar8 + 8) = uVar16;
  *(undefined4 *)(iVar8 + 0xc) = uVar17;
  local_2c = (uint *)s_cState_Die_005026b4;
  local_30 = iVar6;
  if (*(uint *)(iVar5 + -0x60) < 3) {
    iVar8 = *(int *)(iVar5 + -0x5c);
  }
  else {
    iVar8 = *(int *)(iVar5 + -0x5c) + 0x48;
  }
  puVar14 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar6 + 8))(&local_30);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_2c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_005025d0;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_005025d0:
  if (*(int *)(iVar8 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar14,local_2c,uVar13);
  iVar8 = DAT_00502674;
  *(undefined1 *)((int)puVar14 + uVar13) = 0;
  iVar6 = *(int *)(iVar5 + -0x50);
  uVar16 = *(undefined4 *)(iVar8 + 0x4c);
  uVar11 = *(undefined4 *)(iVar8 + 0x58);
  uVar15 = *(undefined4 *)(iVar8 + 0x50);
  uVar17 = *(undefined4 *)(iVar8 + 0x54);
  uVar10 = *(undefined4 *)(iVar8 + 0x5c);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar8 + 0x48);
  *(undefined4 *)(iVar6 + 0x14) = uVar16;
  iVar8 = *(int *)(iVar5 + -0x4c);
  *(undefined4 *)(iVar8 + 0x10) = uVar15;
  *(undefined4 *)(iVar8 + 0x14) = uVar17;
  iVar8 = *(int *)(iVar5 + -0x48);
  *(undefined4 *)(iVar8 + 0x10) = uVar11;
  *(undefined4 *)(iVar8 + 0x14) = uVar10;
  func_0066B2F8((undefined4 *)(iVar5 + -0x68),0);
  *(uint *)(iVar5 + -0x388) = *(uint *)(iVar5 + -0x388) & 0xfffef7ff | 0x8000;
  return iVar12;
}

