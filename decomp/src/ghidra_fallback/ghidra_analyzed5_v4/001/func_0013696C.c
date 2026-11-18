#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001364F0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004356B4(int *param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00656F2C(undefined4 *param_1,undefined1 param_2);
extern int DAT_00136ce8;
extern undefined4 *DAT_00136cec;
extern undefined4 DAT_00136cf0;
extern uint DAT_00136cf4;
extern undefined4 DAT_00136cf8;
extern int DAT_00136cfc;
extern int DAT_00136d00;
extern undefined4 DAT_00136d04;
extern undefined *DAT_00136d08;
extern int DAT_00136d0c;
extern int DAT_00136d20;
extern undefined4 *DAT_00137138;
extern uint *DAT_00137160;
extern undefined4 DAT_00137164;
extern undefined4 *DAT_00137168;
extern int *DAT_00137280;
extern undefined4 DAT_00137284;
extern char s_cState_Appear_00136d10[];
extern char s_cState_Burning_00137150[];
extern char s_cState_CutCurtain_0013713c[];
extern char s_cState_Erase_00137128[];

// USA 0013696C <- EU 0013696C (Ghidra, non-matching)
// GLOBAL DAT_00136ce8 int
// GLOBAL DAT_00136cec undefined4 *
// GLOBAL DAT_00136cf0 undefined4
// GLOBAL DAT_00136cf4 uint
// GLOBAL DAT_00136cf8 undefined4
// GLOBAL DAT_00136cfc int
// GLOBAL DAT_00136d00 int
// GLOBAL DAT_00136d04 undefined4
// GLOBAL DAT_00136d08 undefined *
// GLOBAL DAT_00136d0c int
// GLOBAL DAT_00136d20 int
// GLOBAL DAT_00137138 undefined4 *
// GLOBAL DAT_00137160 uint *
// GLOBAL DAT_00137164 undefined4
// GLOBAL DAT_00137168 undefined4 *
// GLOBAL DAT_00137280 int *
// GLOBAL DAT_00137284 undefined4
// GLOBAL EXT_00000004 undefined
// GLOBAL EXT_00000008 undefined
// GLOBAL s_cState_Appear_00136d10 string
// GLOBAL s_cState_Burning_00137150 string
// GLOBAL s_cState_CutCurtain_0013713c string
// GLOBAL s_cState_Erase_00137128 string

int func_0013696C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 extraout_r1;
  undefined4 uVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 (*(int *)(albw_frame + 0x0))
  #define local_9c (*(uint * *)(albw_frame + 0x4))
  #define aiStack_98 ((int *)(albw_frame + 0x8))
  #define local_3c (*(undefined4 * *)(albw_frame + 0x64))
  #define local_34 ((uint *)(albw_frame + 0x6c))
  piVar4 = func_00150E40(param_1,param_2);
  iVar9 = DAT_00136ce8;
  *piVar4 = DAT_00136ce8;
  piVar4[200] = iVar9 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x103);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar6 = func_004EDC9C(puVar5 + 10);
  puVar11 = DAT_00136cec;
  puVar15 = puVar6 + -0x10d;
  puVar6[0x12] = 0;
  puVar6[0x14] = 0;
  puVar6[0x15] = 0;
  puVar6[0x17] = 0;
  uVar16 = DAT_00136cf4;
  uVar13 = puVar11[0x17];
  uVar21 = (ulonglong)DAT_00136cf4;
  puVar6[0x18] = puVar11[0x16];
  puVar6[0x19] = uVar13;
  puVar6[0x16] = DAT_00136cf0;
  local_3c = puVar6 + -0xd;
  puVar6[0x1a] = uVar16;
  puVar6[0x1b] = 0;
  piVar4 = puVar6 + 0x12;
  uVar13 = func_0014E428((int)puVar15,1,0,0,1,0,0);
  puVar6[-1] = uVar13;
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  puVar5 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar5 = func_0016A2FC(puVar7,3,DAT_00136cf8,1);
  }
  iVar9 = DAT_00136cfc;
  uVar16 = 0;
  puVar6[0x14] = puVar5;
  do {
    func_00169688((uint *)puVar6[0x14],uVar16,(int *)(iVar9 + uVar16 * 8),
                  *(int *)(puVar6[-0x59] + 0x1c8));
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 3);
  func_0016A02C(puVar6[0x14],-1,(int *)0xffffffff,0);
  puVar8 = (uint *)func_002C11E8(aiStack_98,0,10,0);
  func_0016898C(puVar6[0x14],puVar8);
  *(int *)(*(int *)(puVar6[0x14] + 0x14) + 0x10) = (int)uVar21;
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  puVar5 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar5 = func_0016A2FC(puVar7,2,DAT_00136cf8,1);
  }
  iVar9 = DAT_00136d00;
  uVar16 = 0;
  puVar6[0x15] = puVar5;
  do {
    func_00169608((uint *)puVar6[0x15],uVar16,(int *)(iVar9 + uVar16 * 8),
                  *(int *)(puVar6[-0x59] + 0x1c8));
    uVar13 = (undefined4)uVar21;
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 2);
  func_0016A02C(puVar6[0x15],-1,(int *)0xffffffff,0);
  puVar8 = (uint *)func_002C11E8(aiStack_98,0,10,0);
  func_0016898C(puVar6[0x15],puVar8);
  uVar22 = CONCAT44(DAT_00136d04,uVar13);
  puVar7 = puVar6 + -10;
  *(undefined4 *)(*(int *)(puVar6[0x15] + 0x14) + 0x10) = DAT_00136d04;
  *(undefined1 *)((int)puVar6 + -0x22) = 4;
  puVar6[-5] = puVar15;
  iVar9 = func_0010BA78(0x40);
  puVar6[-4] = iVar9;
  puVar6[-3] = iVar9 + (uint)*(byte *)((int)puVar6 + -0x22) * 8;
  iVar12 = 4;
  puVar5 = (undefined4 *)(iVar9 + -8);
  do {
    uVar13 = puVar11[0x15];
    iVar12 = iVar12 + -1;
    puVar5[2] = puVar11[0x14];
    puVar5[3] = uVar13;
    uVar13 = puVar11[0x15];
    puVar5[4] = puVar11[0x14];
    puVar5[5] = uVar13;
    puVar5 = puVar5 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar6 + -0x22);
  uVar16 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar16 << 3);
  puVar6[-2] = puVar5;
  if (uVar16 != 0) {
    puVar10 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar11[5];
      *puVar5 = puVar11[4];
      puVar5[1] = uVar13;
      puVar10 = puVar5;
    }
    for (iVar9 = (int)uVar16 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar13 = puVar11[5];
      puVar10[2] = puVar11[4];
      puVar10[3] = uVar13;
      uVar13 = puVar11[5];
      puVar10[4] = puVar11[4];
      puVar10[5] = uVar13;
      puVar10 = puVar10 + 4;
    }
  }
  piVar14 = (int *)&SupervisorCall;
  puVar5 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar9 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 4;
    piVar14 = (int *)&UndefinedInstruction;
    iVar9 = func_00100118((int)(puVar5 + 2),DAT_00136d08,0x24,4);
  }
  if (iVar9 != 0) {
    puVar6[-8] = 4;
    puVar6[-7] = iVar9;
  }
  iVar12 = DAT_00136d20;
  iVar9 = DAT_00136d0c;
  puVar6[-0x38] = puVar7;
  *(undefined2 *)(iVar9 + (int)puVar15) = 4;
  local_9c = (uint *)s_cState_Appear_00136d10;
  local_a0 = iVar12;
  iVar9 = puVar6[-7];
  puVar8 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar12 + 8))(&local_a0);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_9c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_00136d30;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_00136d30:
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 <= (int)uVar16) {
    uVar16 = iVar9 - 1;
  }
  (**(code **)(local_a0 + 8))(&local_a0);
  func_0010E3C4(puVar8,local_9c,uVar16);
  *(undefined1 *)((int)puVar8 + uVar16) = 0;
  puVar5 = (undefined4 *)puVar6[-4];
  uVar13 = DAT_00136cec[1];
  uVar17 = DAT_00136cec[2];
  uVar18 = DAT_00136cec[3];
  uVar19 = DAT_00136cec[4];
  uVar20 = DAT_00136cec[5];
  *puVar5 = *DAT_00136cec;
  puVar5[1] = uVar13;
  puVar5 = (undefined4 *)puVar6[-3];
  *puVar5 = uVar17;
  puVar5[1] = uVar18;
  puVar5 = (undefined4 *)puVar6[-2];
  *puVar5 = uVar19;
  puVar5[1] = uVar20;
  local_9c = (uint *)s_cState_Erase_00137128;
  local_a0 = iVar12;
  if ((uint)puVar6[-8] < 2) {
    iVar9 = puVar6[-7];
  }
  else {
    iVar9 = puVar6[-7] + 0x24;
  }
  puVar8 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar12 + 8))(&local_a0);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_9c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_00136de8;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_00136de8:
  if (*(int *)(iVar9 + 8) <= (int)uVar16) {
    uVar16 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_a0 + 8))(&local_a0);
  func_0010E3C4(puVar8,local_9c,uVar16);
  *(undefined1 *)((int)puVar8 + uVar16) = 0;
  iVar9 = puVar6[-4];
  uVar13 = *DAT_00137138;
  uVar17 = DAT_00137138[1];
  uVar18 = DAT_00137138[3];
  uVar19 = DAT_00137138[4];
  uVar20 = DAT_00137138[5];
  *(undefined4 *)(iVar9 + 8) = DAT_00137138[2];
  *(undefined4 *)(iVar9 + 0xc) = uVar18;
  iVar9 = puVar6[-3];
  *(undefined4 *)(iVar9 + 8) = uVar19;
  *(undefined4 *)(iVar9 + 0xc) = uVar20;
  iVar9 = puVar6[-2];
  *(undefined4 *)(iVar9 + 8) = uVar13;
  *(undefined4 *)(iVar9 + 0xc) = uVar17;
  local_9c = (uint *)s_cState_CutCurtain_0013713c;
  local_a0 = iVar12;
  if ((uint)puVar6[-8] < 3) {
    iVar9 = puVar6[-7];
  }
  else {
    iVar9 = puVar6[-7] + 0x48;
  }
  puVar8 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar12 + 8))(&local_a0);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_9c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_00136eac;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_00136eac:
  if (*(int *)(iVar9 + 8) <= (int)uVar16) {
    uVar16 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_a0 + 8))(&local_a0);
  func_0010E3C4(puVar8,local_9c,uVar16);
  *(undefined1 *)((int)puVar8 + uVar16) = 0;
  puVar5 = DAT_00136cec;
  iVar9 = puVar6[-4];
  uVar13 = DAT_00136cec[0xc];
  uVar18 = DAT_00136cec[0xb];
  uVar19 = DAT_00136cec[4];
  uVar17 = DAT_00136cec[5];
  uVar20 = DAT_00136cec[0xd];
  *(undefined4 *)(iVar9 + 0x10) = DAT_00136cec[10];
  *(undefined4 *)(iVar9 + 0x14) = uVar18;
  iVar9 = puVar6[-3];
  *(undefined4 *)(iVar9 + 0x10) = uVar13;
  *(undefined4 *)(iVar9 + 0x14) = uVar20;
  iVar9 = puVar6[-2];
  *(undefined4 *)(iVar9 + 0x10) = uVar19;
  *(undefined4 *)(iVar9 + 0x14) = uVar17;
  local_9c = (uint *)s_cState_Burning_00137150;
  local_a0 = iVar12;
  uVar16 = puVar6[-8];
  if (uVar16 < 4) {
    iVar9 = puVar6[-7];
    uVar2 = uVar16;
  }
  else {
    iVar9 = iVar12;
    uVar2 = puVar6[-7];
  }
  if (3 < uVar16) {
    iVar9 = uVar2 + 0x6c;
  }
  puVar8 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar12 + 8))(&local_a0);
  uVar16 = 0;
  do {
    if (*(char *)((int)local_9c + uVar16) == '\0') {
      if ((int)uVar16 < 0x40001) goto LAB_00136f84;
      break;
    }
    uVar16 = uVar16 + 1;
  } while ((int)uVar16 < 0x40001);
  uVar16 = 0;
LAB_00136f84:
  if (*(int *)(iVar9 + 8) <= (int)uVar16) {
    uVar16 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_a0 + 8))(&local_a0);
  func_0010E3C4(puVar8,local_9c,uVar16);
  *(undefined1 *)((int)puVar8 + uVar16) = 0;
  iVar9 = puVar6[-4];
  uVar13 = puVar5[4];
  uVar19 = puVar5[0x10];
  uVar18 = puVar5[0xf];
  uVar20 = puVar5[0x11];
  uVar17 = puVar5[5];
  *(undefined4 *)(iVar9 + 0x18) = puVar5[0xe];
  *(undefined4 *)(iVar9 + 0x1c) = uVar18;
  iVar9 = puVar6[-3];
  *(undefined4 *)(iVar9 + 0x18) = uVar19;
  *(undefined4 *)(iVar9 + 0x1c) = uVar20;
  iVar9 = puVar6[-2];
  *(undefined4 *)(iVar9 + 0x18) = uVar13;
  *(undefined4 *)(iVar9 + 0x1c) = uVar17;
  func_00656F2C(puVar7,0);
  puVar11 = (undefined4 *)func_0054D964((int)puVar15,0);
  uVar13 = DAT_00137164;
  puVar8 = DAT_00137160;
  if (((*DAT_00137160 & 1) == 0) && (iVar9 = func_00100174((int *)DAT_00137160), iVar9 != 0)) {
    *DAT_00137168 = uVar13;
  }
  if ((puVar11 == (undefined4 *)0x0) ||
     (iVar9 = (**(code **)*puVar11)(puVar11,DAT_00137168), iVar9 == 0)) {
    puVar11 = (undefined4 *)0x0;
  }
  puVar6[0x12] = puVar11;
  *(undefined2 *)(puVar11 + 10) = 0x240;
  *(uint *)(*piVar4 + 0x2c) = *(uint *)(*piVar4 + 0x2c) | 4;
  iVar9 = *piVar4;
  *(undefined4 *)(iVar9 + 4) = puVar6[-0x19];
  *(undefined4 *)(iVar9 + 8) = puVar6[-0x18];
  *(undefined4 *)(iVar9 + 0xc) = puVar6[-0x17];
  func_004356B4((int *)*piVar4);
  uVar17 = puVar5[0x12];
  uVar18 = puVar5[0x13];
  puVar6[0x17] = puVar15;
  puVar6[0x18] = uVar17;
  puVar6[0x19] = uVar18;
  puVar5 = (undefined4 *)func_0054D964((int)puVar15,1);
  if (((*puVar8 & 1) == 0) && (iVar9 = func_00100174((int *)DAT_00137160), iVar9 != 0)) {
    *DAT_00137168 = uVar13;
  }
  if ((puVar5 == (undefined4 *)0x0) ||
     (iVar9 = (**(code **)*puVar5)(puVar5,DAT_00137168), iVar9 == 0)) {
    puVar5 = (undefined4 *)0x0;
  }
  puVar6[0x13] = puVar5;
  puVar5[1] = puVar6[-0x19];
  puVar5[2] = puVar6[-0x18];
  puVar5[3] = puVar6[-0x17];
  *(undefined2 *)(puVar6[0x13] + 0x28) = 100;
  func_004356B4((int *)puVar6[0x13]);
  puVar6[6] = puVar6[0x13];
  local_34[0] = puVar6[-0x5a];
  func_004EDAD0((int)puVar6,local_34);
  uVar13 = 0;
  *(undefined2 *)(local_3c + 0x18) = *(undefined2 *)(puVar6 + -0xf8);
  func_004A7F00(*DAT_00137280,(int)puVar6,0);
  func_001364F0((int)puVar15,extraout_r1,uVar13,piVar14);
  puVar5 = (undefined4 *)func_0010BAB4(0x1c);
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[2] = DAT_00137284;
    *puVar5 = (int)uVar22;
    uVar13 = (undefined4)((ulonglong)uVar22 >> 0x20);
    puVar5[1] = uVar13;
    puVar5[3] = uVar13;
    puVar5[4] = (int)uVar22;
    puVar5[5] = 0;
    puVar5[6] = 0;
  }
  puVar6[0x1b] = puVar5;
  if ((*(short *)((int)puVar6 + -0x3fe) != 0) && (bVar3 = func_00588BF0((int)puVar15,0), bVar3)) {
    *(undefined1 *)((int)puVar6 + -0x15d) = 1;
  }
  return (int)puVar15;
}

