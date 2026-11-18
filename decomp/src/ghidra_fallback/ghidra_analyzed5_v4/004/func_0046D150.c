#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_00199554(undefined4 *param_1,int *param_2,int *param_3);
extern int func_002313DC(int param_1);
extern int func_0034BA3C(int param_1,int *param_2,int *param_3);
extern int func_0034C698(undefined4 *param_1,uint param_2);
extern int func_004B948C(int param_1,int param_2);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_0046d4fc;
extern undefined4 DAT_0046d500;
extern undefined4 *DAT_0046d504;
extern undefined *DAT_0046d508;
extern int DAT_0046d518;
extern undefined4 DAT_0046d574;
extern int DAT_0046d6fc;
extern int *DAT_0046d710;
extern char s_L_DoButton_00_0046d714[];
extern char s_L_RupeeNumL_00_0046d734[];
extern char s_L_RupeeNum_00_0046d724[];
extern char s_T_Pitches_00_0046d700[];
extern char s_cState_ChangeResult_0046d530[];
extern char s_cState_Finished_0046d564[];
extern char s_cState_Game_0046d50c[];
extern char s_cState_GetRupee_0046d554[];
extern char s_cState_Payoff_0046d544[];
extern char s_cState_ResultWait_0046d51c[];

// USA 0046D150 <- EU 0046D128 (Ghidra, non-matching)
// GLOBAL DAT_0046d4fc int
// GLOBAL DAT_0046d500 undefined4
// GLOBAL DAT_0046d504 undefined4 *
// GLOBAL DAT_0046d508 undefined *
// GLOBAL DAT_0046d518 int
// GLOBAL DAT_0046d574 undefined4
// GLOBAL DAT_0046d6fc int
// GLOBAL DAT_0046d710 int *
// GLOBAL s_L_DoButton_00_0046d714 string
// GLOBAL s_L_RupeeNumL_00_0046d734 string
// GLOBAL s_L_RupeeNum_00_0046d724 string
// GLOBAL s_T_Pitches_00_0046d700 string
// GLOBAL s_cState_ChangeResult_0046d530 string
// GLOBAL s_cState_Finished_0046d564 string
// GLOBAL s_cState_Game_0046d50c string
// GLOBAL s_cState_GetRupee_0046d554 string
// GLOBAL s_cState_Payoff_0046d544 string
// GLOBAL s_cState_ResultWait_0046d51c string

int * func_0046D150(undefined4 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  piVar4 = func_004B9A10(param_1,0);
  iVar8 = DAT_0046d4fc;
  *piVar4 = DAT_0046d4fc;
  piVar4[0xe] = iVar8 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x1d);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined2 *)(puVar5 + 9) = 0;
  uVar15 = DAT_0046d500;
  *(undefined2 *)((int)puVar5 + 0x26) = 0xffff;
  puVar5[10] = uVar15;
  piVar4 = puVar5 + -0x1d;
  puVar5[0xb] = 0;
  *(undefined2 *)(puVar5 + 0xc) = 0;
  *(undefined2 *)((int)puVar5 + 0x32) = 0xffff;
  puVar5[0xd] = uVar15;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x5c);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_0034C698(puVar6,3);
  }
  puVar5[0x10] = puVar7;
  puVar6 = (undefined4 *)func_0010BAB4(0x5c);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_0034C698(puVar6,4);
  }
  puVar5[0x11] = puVar7;
  puVar6 = (undefined4 *)func_0010BAB4(0x78);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_0017A520(puVar6,0x400,(int *)0x0,0);
  }
  puVar5[0x12] = puVar7;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  *(undefined1 *)(puVar5 + 0x16) = 0;
  puVar5[5] = piVar4;
  *(undefined1 *)((int)puVar5 + 6) = 6;
  iVar8 = func_0010BA78(0x60);
  puVar7 = DAT_0046d504;
  puVar5[6] = iVar8;
  puVar5[7] = iVar8 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar12 = 6;
  puVar6 = (undefined4 *)(iVar8 + -8);
  do {
    uVar15 = puVar7[7];
    iVar12 = iVar12 + -1;
    puVar6[2] = puVar7[6];
    puVar6[3] = uVar15;
    uVar15 = puVar7[7];
    puVar6[4] = puVar7[6];
    puVar6[5] = uVar15;
    puVar6 = puVar6 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar13 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar5[8] = puVar6;
  if (uVar13 != 0) {
    puVar9 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = puVar7[5];
      *puVar6 = puVar7[4];
      puVar6[1] = uVar15;
      puVar9 = puVar6;
    }
    for (iVar8 = (int)uVar13 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar15 = puVar7[5];
      puVar9[2] = puVar7[4];
      puVar9[3] = uVar15;
      uVar15 = puVar7[5];
      puVar9[4] = puVar7[4];
      puVar9[5] = uVar15;
      puVar9 = puVar9 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  puVar2 = DAT_0046d508;
  iVar8 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[1] = 6;
    *puVar6 = 0x24;
    iVar8 = func_00100118((int)(puVar6 + 2),puVar2,0x24,6);
  }
  if (iVar8 != 0) {
    puVar5[3] = iVar8;
    puVar5[2] = 6;
  }
  iVar8 = DAT_0046d518;
  local_2c = s_cState_Game_0046d50c;
  local_30 = DAT_0046d518;
  func_0010BEC4((int)puVar5,0,&local_30);
  puVar6 = (undefined4 *)puVar5[6];
  uVar15 = puVar7[2];
  uVar17 = puVar7[1];
  uVar16 = puVar7[3];
  uVar18 = *(undefined8 *)(puVar7 + 4);
  *puVar6 = *puVar7;
  puVar6[1] = uVar17;
  puVar6 = (undefined4 *)puVar5[7];
  *puVar6 = uVar15;
  puVar6[1] = uVar16;
  puVar6 = (undefined4 *)puVar5[8];
  *puVar6 = (int)uVar18;
  puVar6[1] = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_ResultWait_0046d51c;
  local_30 = iVar8;
  func_0010BEC4((int)puVar5,1,&local_30);
  iVar12 = puVar5[6];
  uVar15 = puVar7[8];
  uVar16 = puVar7[9];
  uVar17 = puVar7[7];
  *(undefined4 *)(iVar12 + 8) = puVar7[6];
  *(undefined4 *)(iVar12 + 0xc) = uVar17;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 8) = uVar15;
  *(undefined4 *)(iVar12 + 0xc) = uVar16;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 8) = (int)uVar18;
  *(int *)(iVar12 + 0xc) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_ChangeResult_0046d530;
  local_30 = iVar8;
  func_0010BEC4((int)puVar5,2,&local_30);
  iVar12 = puVar5[6];
  uVar17 = puVar7[0xb];
  uVar15 = puVar7[0xc];
  uVar16 = puVar7[0xd];
  *(undefined4 *)(iVar12 + 0x10) = puVar7[10];
  *(undefined4 *)(iVar12 + 0x14) = uVar17;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x10) = uVar15;
  *(undefined4 *)(iVar12 + 0x14) = uVar16;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 0x10) = (int)uVar18;
  *(int *)(iVar12 + 0x14) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_Payoff_0046d544;
  local_30 = iVar8;
  func_0010BEC4((int)puVar5,3,&local_30);
  iVar12 = puVar5[6];
  uVar17 = puVar7[7];
  uVar15 = puVar7[0xe];
  uVar16 = puVar7[0xf];
  *(undefined4 *)(iVar12 + 0x18) = puVar7[6];
  *(undefined4 *)(iVar12 + 0x1c) = uVar17;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x18) = uVar15;
  *(undefined4 *)(iVar12 + 0x1c) = uVar16;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 0x18) = (int)uVar18;
  *(int *)(iVar12 + 0x1c) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_GetRupee_0046d554;
  local_30 = iVar8;
  func_0010BEC4((int)puVar5,4,&local_30);
  iVar12 = puVar5[6];
  uVar17 = puVar7[0x11];
  uVar15 = puVar7[0x13];
  uVar16 = puVar7[0x12];
  *(undefined4 *)(iVar12 + 0x20) = puVar7[0x10];
  *(undefined4 *)(iVar12 + 0x24) = uVar17;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x20) = uVar16;
  *(undefined4 *)(iVar12 + 0x24) = uVar15;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 0x20) = (int)uVar18;
  *(int *)(iVar12 + 0x24) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_Finished_0046d564;
  local_30 = iVar8;
  func_0010BEC4((int)puVar5,5,&local_30);
  iVar12 = puVar5[6];
  uVar16 = puVar7[7];
  uVar15 = puVar7[0x14];
  uVar17 = puVar7[0x15];
  *(undefined4 *)(iVar12 + 0x28) = puVar7[6];
  *(undefined4 *)(iVar12 + 0x2c) = uVar16;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x28) = uVar15;
  *(undefined4 *)(iVar12 + 0x2c) = uVar17;
  uVar15 = DAT_0046d574;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 0x28) = (int)uVar18;
  *(int *)(iVar12 + 0x2c) = (int)((ulonglong)uVar18 >> 0x20);
  (**(code **)(*piVar4 + 0x38))(piVar4,uVar15,0);
  piVar14 = (int *)puVar5[-0x16];
  func_0016773C((int)piVar14,5);
  iVar12 = DAT_0046d6fc;
  uVar13 = 0;
  do {
    func_00166C20(piVar14,uVar13,(int *)(iVar12 + uVar13 * 8),0);
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 5);
  puVar5[-0x13] = piVar14;
  *(undefined2 *)((int)puVar5 + -0x52) = 0;
  *(undefined2 *)(puVar5 + -0x15) = 0;
  func_002313DC((int)(puVar5 + -0x15));
  puVar5[-0x10] = piVar14;
  *(undefined2 *)((int)puVar5 + -0x46) = 1;
  *(undefined2 *)(puVar5 + -0x12) = 0;
  puVar5[0xe] = piVar14;
  *(undefined2 *)((int)puVar5 + 0x32) = 4;
  *(undefined2 *)(puVar5 + 0xc) = 0;
  local_2c = s_T_Pitches_00_0046d700;
  local_30 = iVar8;
  piVar10 = (int *)func_005229AC(piVar14,&local_30);
  piVar3 = DAT_0046d710;
  if (piVar10 != (int *)0x0) {
    piVar11 = (int *)(**(code **)(*piVar10 + 8))(piVar10);
    do {
      if (piVar11 == piVar3) goto LAB_0046d64c;
      piVar11 = (int *)*piVar11;
    } while (piVar11 != (int *)0x0);
  }
  piVar10 = (int *)0x0;
LAB_0046d64c:
  puVar5[0x13] = piVar10;
  puVar6 = (undefined4 *)func_0010BAB4(0x7c);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    local_2c = s_L_DoButton_00_0046d714;
    local_30 = iVar8;
    puVar7 = func_00199554(puVar6,piVar14,&local_30);
  }
  puVar5[0xf] = puVar7;
  func_004B948C((int)piVar4,(int)puVar7);
  local_2c = s_L_RupeeNum_00_0046d724;
  local_30 = iVar8;
  func_0034BA3C(puVar5[0x10],piVar14,&local_30);
  func_004B948C((int)piVar4,puVar5[0x10]);
  local_2c = s_L_RupeeNumL_00_0046d734;
  local_30 = iVar8;
  func_0034BA3C(puVar5[0x11],piVar14,&local_30);
  func_004B948C((int)piVar4,puVar5[0x11]);
  func_004B9958((int)piVar4,2);
  return piVar4;
}

