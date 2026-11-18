#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001E6CEC(undefined4 *param_1,uint *param_2,undefined4 param_3);
extern int func_0036D6F4(undefined4 *param_1,int param_2);
extern int func_004356B4(int *param_1);
extern int func_004ECF6C(int param_1);
extern int func_00503324(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0065CE98(undefined4 *param_1,undefined1 param_2);
extern int DAT_001e75f8;
extern undefined4 *DAT_001e75fc;
extern undefined4 DAT_001e7600;
extern undefined4 DAT_001e7604;
extern undefined4 DAT_001e7608;
extern undefined *DAT_001e760c;
extern int DAT_001e7610;
extern int DAT_001e7620;
extern char s_cState_End_001e7644[];
extern char s_cState_Event_001e7634[];
extern char s_cState_Start_001e7624[];
extern char s_cState_Wait_001e7614[];

// USA 001E70EC <- EU 001E70EC (Ghidra, non-matching)
// GLOBAL DAT_001e75f8 int
// GLOBAL DAT_001e75fc undefined4 *
// GLOBAL DAT_001e7600 undefined4
// GLOBAL DAT_001e7604 undefined4
// GLOBAL DAT_001e7608 undefined4
// GLOBAL DAT_001e760c undefined *
// GLOBAL DAT_001e7610 int
// GLOBAL DAT_001e7620 int
// GLOBAL s_cState_End_001e7644 string
// GLOBAL s_cState_Event_001e7634 string
// GLOBAL s_cState_Start_001e7624 string
// GLOBAL s_cState_Wait_001e7614 string

undefined4 * func_001E70EC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  piVar4 = (int *)func_001E6CEC(param_1,param_2,0xb);
  iVar6 = DAT_001e75f8;
  *piVar4 = DAT_001e75f8;
  piVar4[200] = iVar6 + 0x98;
  puVar5 = func_0010A794(piVar4 + 0x1e2);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  iVar6 = func_0054D964((int)(puVar5 + -0x1e2),0);
  puVar10 = DAT_001e75fc;
  puVar5[9] = iVar6;
  puVar5[0xb] = 0;
  uVar11 = puVar10[0x13];
  puVar5[0xc] = puVar10[0x12];
  puVar5[0xd] = uVar11;
  puVar5[10] = DAT_001e7600;
  puVar5[0xf] = 0;
  uVar11 = puVar10[0x15];
  puVar5[0x10] = puVar10[0x14];
  puVar5[0x11] = uVar11;
  puVar5[0xe] = DAT_001e7604;
  uVar11 = *puVar10;
  uVar13 = puVar10[1];
  puVar5[0x13] = puVar5 + -0x1e2;
  puVar5[0x14] = uVar11;
  puVar5[0x15] = uVar13;
  puVar5[0x12] = DAT_001e7608;
  iVar6 = func_00503324(puVar5 + 0x16);
  puVar7 = func_0036D6F4((undefined4 *)(iVar6 + 0x2e4),iVar6 + -0x7e0);
  *(undefined1 *)(puVar7 + 10) = 0;
  puVar14 = puVar7 + -0x2b1;
  func_004356B4((int *)puVar7[-0xc6]);
  uVar11 = puVar10[2];
  uVar13 = puVar10[3];
  puVar7[-0xc4] = puVar14;
  puVar7[-0xc3] = uVar11;
  puVar7[-0xc2] = uVar13;
  uVar11 = puVar10[4];
  uVar13 = puVar10[5];
  puVar7[-0xc0] = puVar14;
  puVar7[-0xbf] = uVar11;
  puVar7[-0xbe] = uVar13;
  puVar7[-0xb2] = puVar7 + -0xc1;
  puVar7[-0xb3] = puVar7 + -0xbd;
  *(undefined1 *)((int)puVar7 + -0x336) = 4;
  puVar7[-0xca] = puVar14;
  iVar6 = func_0010BA78(0x40);
  puVar7[-0xc9] = iVar6;
  puVar7[-200] = iVar6 + (uint)*(byte *)((int)puVar7 + -0x336) * 8;
  iVar8 = 4;
  puVar5 = (undefined4 *)(iVar6 + -8);
  do {
    uVar11 = puVar10[7];
    iVar8 = iVar8 + -1;
    puVar5[2] = puVar10[6];
    puVar5[3] = uVar11;
    uVar11 = puVar10[7];
    puVar5[4] = puVar10[6];
    puVar5[5] = uVar11;
    puVar5 = puVar5 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar7 + -0x336);
  uVar15 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar7[-199] = puVar5;
  if (uVar15 != 0) {
    puVar9 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = puVar10[0xb];
      *puVar5 = puVar10[10];
      puVar5[1] = uVar11;
      puVar9 = puVar5;
    }
    for (iVar6 = (int)uVar15 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar11 = puVar10[0xb];
      puVar9[2] = puVar10[10];
      puVar9[3] = uVar11;
      uVar11 = puVar10[0xb];
      puVar9[4] = puVar10[10];
      puVar9[5] = uVar11;
      puVar9 = puVar9 + 4;
    }
  }
  puVar10 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  puVar3 = DAT_001e760c;
  iVar6 = 0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar10[1] = 4;
    *puVar10 = 0x24;
    iVar6 = func_00100118((int)(puVar10 + 2),puVar3,0x24,4);
  }
  if (iVar6 != 0) {
    puVar7[-0xcc] = iVar6;
    puVar7[-0xcd] = 4;
  }
  iVar6 = DAT_001e7610;
  puVar7[-0x1dc] = puVar7 + -0xcf;
  iVar8 = DAT_001e7620;
  *(undefined2 *)(iVar6 + (int)puVar14) = 4;
  local_2c = (uint *)s_cState_Wait_001e7614;
  local_30 = iVar8;
  iVar6 = puVar7[-0xcc];
  puVar17 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar8 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001e7384;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001e7384:
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 <= (int)uVar15) {
    uVar15 = iVar6 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar15);
  *(undefined1 *)((int)puVar17 + uVar15) = 0;
  puVar10 = (undefined4 *)puVar7[-0xc9];
  uVar18 = DAT_001e75fc[7];
  uVar13 = DAT_001e75fc[10];
  uVar12 = DAT_001e75fc[8];
  uVar16 = DAT_001e75fc[9];
  uVar11 = DAT_001e75fc[0xb];
  *puVar10 = DAT_001e75fc[6];
  puVar10[1] = uVar18;
  puVar10 = (undefined4 *)puVar7[-200];
  *puVar10 = uVar12;
  puVar10[1] = uVar16;
  puVar10 = (undefined4 *)puVar7[-199];
  puVar10[1] = uVar11;
  *puVar10 = uVar13;
  local_2c = (uint *)s_cState_Start_001e7624;
  local_30 = iVar8;
  if ((uint)puVar7[-0xcd] < 2) {
    iVar6 = puVar7[-0xcc];
  }
  else {
    iVar6 = puVar7[-0xcc] + 0x24;
  }
  puVar17 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar8 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001e7454;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001e7454:
  if (*(int *)(iVar6 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar15);
  puVar10 = DAT_001e75fc;
  *(undefined1 *)((int)puVar17 + uVar15) = 0;
  iVar6 = puVar7[-0xc9];
  uVar13 = puVar10[0xd];
  uVar12 = puVar10[10];
  uVar18 = puVar10[7];
  uVar16 = puVar10[0xc];
  uVar11 = puVar10[0xb];
  *(undefined4 *)(iVar6 + 8) = puVar10[6];
  *(undefined4 *)(iVar6 + 0xc) = uVar18;
  iVar6 = puVar7[-200];
  *(undefined4 *)(iVar6 + 8) = uVar16;
  *(undefined4 *)(iVar6 + 0xc) = uVar13;
  iVar6 = puVar7[-199];
  *(undefined4 *)(iVar6 + 8) = uVar12;
  *(undefined4 *)(iVar6 + 0xc) = uVar11;
  local_2c = (uint *)s_cState_Event_001e7634;
  local_30 = iVar8;
  if ((uint)puVar7[-0xcd] < 3) {
    iVar6 = puVar7[-0xcc];
  }
  else {
    iVar6 = puVar7[-0xcc] + 0x48;
  }
  puVar17 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar8 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001e752c;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001e752c:
  if (*(int *)(iVar6 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar15);
  *(undefined1 *)((int)puVar17 + uVar15) = 0;
  puVar10 = DAT_001e75fc;
  iVar6 = puVar7[-0xc9];
  uVar11 = DAT_001e75fc[0xe];
  uVar13 = DAT_001e75fc[10];
  uVar12 = DAT_001e75fc[7];
  uVar16 = DAT_001e75fc[0xf];
  uVar18 = DAT_001e75fc[0xb];
  *(undefined4 *)(iVar6 + 0x10) = DAT_001e75fc[6];
  *(undefined4 *)(iVar6 + 0x14) = uVar12;
  iVar6 = puVar7[-200];
  *(undefined4 *)(iVar6 + 0x10) = uVar11;
  *(undefined4 *)(iVar6 + 0x14) = uVar16;
  iVar6 = puVar7[-199];
  *(undefined4 *)(iVar6 + 0x10) = uVar13;
  *(undefined4 *)(iVar6 + 0x14) = uVar18;
  local_2c = (uint *)s_cState_End_001e7644;
  local_30 = iVar8;
  uVar15 = puVar7[-0xcd];
  if (uVar15 < 4) {
    iVar6 = puVar7[-0xcc];
    uVar2 = uVar15;
  }
  else {
    iVar6 = iVar8;
    uVar2 = puVar7[-0xcc];
  }
  if (3 < uVar15) {
    iVar6 = uVar2 + 0x6c;
  }
  puVar17 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar8 + 8))(&local_30);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_2c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_001e765c;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_001e765c:
  if (*(int *)(iVar6 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar17,local_2c,uVar15);
  *(undefined1 *)((int)puVar17 + uVar15) = 0;
  uVar11 = puVar10[0xb];
  uVar13 = puVar10[10];
  iVar6 = puVar7[-0xc9];
  uVar18 = puVar10[7];
  uVar12 = puVar10[0x10];
  uVar16 = puVar10[0x11];
  *(undefined4 *)(iVar6 + 0x18) = puVar10[6];
  *(undefined4 *)(iVar6 + 0x1c) = uVar18;
  iVar6 = puVar7[-200];
  *(undefined4 *)(iVar6 + 0x18) = uVar12;
  *(undefined4 *)(iVar6 + 0x1c) = uVar16;
  iVar6 = puVar7[-199];
  *(undefined4 *)(iVar6 + 0x18) = uVar13;
  *(undefined4 *)(iVar6 + 0x1c) = uVar11;
  func_0065CE98(puVar7 + -0xcf,0);
  func_004ECF6C((int)puVar14);
  return puVar14;
}

