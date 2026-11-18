#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_001B6A48(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_002313DC(int param_1);
extern int func_003525AC(int param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_003529C0(undefined4 *param_1);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00480848;
extern undefined4 DAT_0048084c;
extern undefined4 *DAT_00480850;
extern undefined *DAT_00480854;
extern int DAT_00480868;
extern undefined4 DAT_0048087c;
extern int DAT_00480880;
extern int *DAT_0048090c;
extern char s_GameAnalogTimerTop_00480910[];
extern char s_N_All_00_00480924[];
extern char s_cState_Meter_00480858[];
extern char s_cState_TimeUp_0048086c[];

// USA 00480498 <- EU 00480470 (Ghidra, non-matching)
// GLOBAL DAT_00480848 int
// GLOBAL DAT_0048084c undefined4
// GLOBAL DAT_00480850 undefined4 *
// GLOBAL DAT_00480854 undefined *
// GLOBAL DAT_00480868 int
// GLOBAL DAT_0048087c undefined4
// GLOBAL DAT_00480880 int
// GLOBAL DAT_0048090c int *
// GLOBAL s_GameAnalogTimerTop_00480910 string
// GLOBAL s_N_All_00_00480924 string
// GLOBAL s_cState_Meter_00480858 string
// GLOBAL s_cState_TimeUp_0048086c string

int * func_00480498(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 extraout_r1;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  int *piVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(uint * *)(albw_frame + 0xc))
  #define auStack_50 ((undefined4 *)(albw_frame + 0x10))
  #define local_44 (*(undefined4 * *)(albw_frame + 0x1c))
  piVar3 = func_004B9A10(param_1,0);
  iVar7 = DAT_00480848;
  *piVar3 = DAT_00480848;
  piVar3[0xe] = iVar7 + 0x54;
  piVar3[0x1d] = iVar7 + 100;
  puVar4 = func_0010A794(piVar3 + 0x1e);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined2 *)(puVar4 + 9) = 0;
  uVar17 = DAT_0048084c;
  *(undefined2 *)((int)puVar4 + 0x26) = 0xffff;
  puVar4[10] = uVar17;
  piVar3 = puVar4 + -0x1e;
  puVar4[0xb] = 0;
  *(undefined2 *)(puVar4 + 0xc) = 0;
  *(undefined2 *)((int)puVar4 + 0x32) = 0xffff;
  puVar4[0xd] = uVar17;
  puVar4[0xe] = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x40);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_003529C0(puVar5);
  }
  puVar4[0xf] = puVar6;
  puVar4[0x13] = 0;
  puVar4[0x15] = 0;
  puVar4[0x16] = uVar17;
  *(undefined1 *)((int)puVar4 + 6) = 2;
  puVar4[5] = piVar3;
  iVar7 = func_0010BA78(0x20);
  puVar4[6] = iVar7;
  puVar6 = DAT_00480850;
  puVar4[7] = iVar7 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar9 = 2;
  puVar5 = (undefined4 *)(iVar7 + -8);
  do {
    uVar17 = puVar6[0xb];
    iVar9 = iVar9 + -1;
    puVar5[2] = puVar6[10];
    puVar5[3] = uVar17;
    uVar17 = puVar6[0xb];
    puVar5[4] = puVar6[10];
    puVar5[5] = uVar17;
    puVar5 = puVar5 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar5;
  if (uVar13 != 0) {
    puVar8 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar17 = puVar6[5];
      *puVar5 = puVar6[4];
      puVar5[1] = uVar17;
      puVar8 = puVar5;
    }
    for (iVar7 = (int)uVar13 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar17 = puVar6[5];
      puVar8[2] = puVar6[4];
      puVar8[3] = uVar17;
      uVar17 = puVar6[5];
      puVar8[4] = puVar6[4];
      puVar8[5] = uVar17;
      puVar8 = puVar8 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  puVar2 = DAT_00480854;
  iVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[1] = 2;
    *puVar5 = 0x24;
    iVar7 = func_00100118((int)(puVar5 + 2),puVar2,0x24,2);
  }
  if (iVar7 != 0) {
    puVar4[3] = iVar7;
    puVar4[2] = 2;
  }
  iVar7 = DAT_00480868;
  local_54 = (uint *)s_cState_Meter_00480858;
  local_58 = DAT_00480868;
  iVar9 = puVar4[3];
  puVar16 = *(uint **)(iVar9 + 4);
  (**(code **)(DAT_00480868 + 8))(&local_58);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_54 + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00480674;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00480674:
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 <= (int)uVar13) {
    uVar13 = iVar9 - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar16,local_54,uVar13);
  *(undefined1 *)((int)puVar16 + uVar13) = 0;
  puVar5 = (undefined4 *)puVar4[6];
  uVar11 = puVar6[2];
  uVar14 = puVar6[3];
  uVar18 = puVar6[4];
  uVar10 = *puVar6;
  uVar17 = puVar6[5];
  puVar5[1] = puVar6[1];
  *puVar5 = uVar10;
  puVar5 = (undefined4 *)puVar4[7];
  *puVar5 = uVar11;
  puVar5[1] = uVar14;
  puVar5 = (undefined4 *)puVar4[8];
  puVar5[1] = uVar17;
  *puVar5 = uVar18;
  local_54 = (uint *)s_cState_TimeUp_0048086c;
  local_58 = iVar7;
  if ((uint)puVar4[2] < 2) {
    iVar9 = puVar4[3];
  }
  else {
    iVar9 = puVar4[3] + 0x24;
  }
  puVar16 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar7 + 8))(&local_58);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_54 + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00480738;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00480738:
  if (*(int *)(iVar9 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar16,local_54,uVar13);
  *(undefined1 *)((int)puVar16 + uVar13) = 0;
  uVar17 = DAT_0048087c;
  iVar9 = puVar4[6];
  uVar10 = puVar6[4];
  uVar11 = puVar6[5];
  uVar14 = puVar6[7];
  uVar18 = puVar6[8];
  uVar19 = puVar6[9];
  *(undefined4 *)(iVar9 + 8) = puVar6[6];
  *(undefined4 *)(iVar9 + 0xc) = uVar14;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 8) = uVar18;
  *(undefined4 *)(iVar9 + 0xc) = uVar19;
  iVar9 = puVar4[8];
  *(undefined4 *)(iVar9 + 8) = uVar10;
  *(undefined4 *)(iVar9 + 0xc) = uVar11;
  (**(code **)(*piVar3 + 0x38))(piVar3,uVar17,0);
  piVar15 = (int *)puVar4[-0x17];
  func_0016773C((int)piVar15,4);
  iVar9 = DAT_00480880;
  uVar13 = 0;
  do {
    iVar12 = 0;
    func_00166C20(piVar15,uVar13,(int *)(iVar9 + uVar13 * 8),0);
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 4);
  puVar4[-0x14] = piVar15;
  *(undefined2 *)((int)puVar4 + -0x56) = 0;
  *(undefined2 *)(puVar4 + -0x16) = 0;
  func_002313DC((int)(puVar4 + -0x16));
  puVar4[-0x11] = piVar15;
  *(undefined2 *)((int)puVar4 + -0x4a) = 1;
  *(undefined2 *)(puVar4 + -0x13) = 0;
  puVar4[0xb] = piVar15;
  *(undefined2 *)((int)puVar4 + 0x26) = 3;
  *(undefined2 *)(puVar4 + 9) = 0;
  uVar17 = 2;
  puVar4[0xe] = piVar15;
  *(undefined2 *)((int)puVar4 + 0x32) = 2;
  *(undefined2 *)(puVar4 + 0xc) = 0;
  iVar9 = piVar15[3];
  if (2 < (uint)piVar15[2]) {
    iVar9 = iVar9 + 0x70;
  }
  puVar4[0x16] = *(undefined4 *)(iVar9 + 0x20);
  func_004B9958((int)piVar3,2);
  if (*(char *)(*DAT_0048090c + 0x70) == '\x04') {
    *(undefined1 *)((int)puVar4 + -0x6a) = 1;
    func_001B6A48(piVar3,extraout_r1,uVar17,iVar12);
  }
  func_003529A0(auStack_50,s_GameAnalogTimerTop_00480910,puVar4 + -1);
  local_44 = puVar4 + 0x10;
  func_003525AC(puVar4[0xf],auStack_50,0);
  local_54 = (uint *)s_N_All_00_00480924;
  local_58 = iVar7;
  uVar17 = func_005229AC(piVar15,&local_58);
  puVar4[0x15] = uVar17;
  return piVar3;
}

