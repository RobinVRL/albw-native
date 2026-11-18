#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_002313DC(int param_1);
extern int func_0034BA3C(int param_1,int *param_2,int *param_3);
extern int func_0034C698(undefined4 *param_1,uint param_2);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00483ca0;
extern undefined4 DAT_00483ca4;
extern undefined4 *DAT_00483ca8;
extern undefined *DAT_00483cac;
extern int DAT_00483cbc;
extern undefined4 DAT_00483fcc;
extern undefined4 DAT_00483fd0;
extern int DAT_00483fd4;
extern int *DAT_00483fe4;
extern char s_L_RupeeNum_00_00483ff4[];
extern char s_T_Result_00_00483fe8[];
extern char s_T_Time_00_00483fd8[];
extern char s_cState_Bonus_00483fbc[];
extern char s_cState_Count_00483cc0[];
extern char s_cState_EndWait_00483cd0[];
extern char s_cState_Wait_00483cb0[];

// USA 00483908 <- EU 004838E0 (Ghidra, non-matching)
// GLOBAL DAT_00483ca0 int
// GLOBAL DAT_00483ca4 undefined4
// GLOBAL DAT_00483ca8 undefined4 *
// GLOBAL DAT_00483cac undefined *
// GLOBAL DAT_00483cbc int
// GLOBAL DAT_00483fcc undefined4
// GLOBAL DAT_00483fd0 undefined4
// GLOBAL DAT_00483fd4 int
// GLOBAL DAT_00483fe4 int *
// GLOBAL s_L_RupeeNum_00_00483ff4 string
// GLOBAL s_T_Result_00_00483fe8 string
// GLOBAL s_T_Time_00_00483fd8 string
// GLOBAL s_cState_Bonus_00483fbc string
// GLOBAL s_cState_Count_00483cc0 string
// GLOBAL s_cState_EndWait_00483cd0 string
// GLOBAL s_cState_Wait_00483cb0 string

int * func_00483908(undefined4 *param_1)

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
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  #define local_30 ((undefined4 *)(albw_frame + 0x10))
  piVar4 = func_004B9A10(param_1,0);
  iVar8 = DAT_00483ca0;
  *piVar4 = DAT_00483ca0;
  piVar4[0xe] = iVar8 + 0x54;
  puVar5 = func_0010A794(piVar4 + 0x1d);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined2 *)(puVar5 + 9) = 0;
  uVar16 = DAT_00483ca4;
  *(undefined2 *)((int)puVar5 + 0x26) = 0xffff;
  puVar5[10] = uVar16;
  piVar4 = puVar5 + -0x1d;
  puVar5[0xb] = 0;
  *(undefined2 *)(puVar5 + 0xc) = 0;
  *(undefined2 *)((int)puVar5 + 0x32) = 0xffff;
  puVar5[0xd] = uVar16;
  puVar5[0xe] = 0;
  *(undefined2 *)(puVar5 + 0xf) = 0;
  *(undefined2 *)((int)puVar5 + 0x3e) = 0xffff;
  puVar5[0x10] = uVar16;
  puVar5[0x11] = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x78);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_0017A520(puVar6,0x400,(int *)0x0,0);
  }
  puVar5[0x12] = puVar7;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x5c);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_0034C698(puVar6,4);
  }
  puVar5[0x15] = puVar7;
  puVar5[0x1c] = uVar16;
  puVar5[0x1b] = 0;
  *(undefined2 *)(puVar5 + 0x1d) = 0;
  *(undefined2 *)((int)puVar5 + 0x76) = 0;
  *(undefined1 *)(puVar5 + 0x1e) = 0;
  puVar5[5] = piVar4;
  *(undefined1 *)((int)puVar5 + 6) = 4;
  iVar8 = func_0010BA78(0x40);
  puVar7 = DAT_00483ca8;
  puVar5[6] = iVar8;
  puVar5[7] = iVar8 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar12 = 4;
  puVar6 = (undefined4 *)(iVar8 + -8);
  do {
    uVar16 = puVar7[0x13];
    iVar12 = iVar12 + -1;
    puVar6[2] = puVar7[0x12];
    puVar6[3] = uVar16;
    uVar16 = puVar7[0x13];
    puVar6[4] = puVar7[0x12];
    puVar6[5] = uVar16;
    puVar6 = puVar6 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar13 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar5[8] = puVar6;
  if (uVar13 != 0) {
    puVar9 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = puVar7[5];
      *puVar6 = puVar7[4];
      puVar6[1] = uVar16;
      puVar9 = puVar6;
    }
    for (iVar8 = (int)uVar13 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar16 = puVar7[5];
      puVar9[2] = puVar7[4];
      puVar9[3] = uVar16;
      uVar16 = puVar7[5];
      puVar9[4] = puVar7[4];
      puVar9[5] = uVar16;
      puVar9 = puVar9 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  puVar2 = DAT_00483cac;
  iVar8 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[1] = 4;
    *puVar6 = 0x24;
    iVar8 = func_00100118((int)(puVar6 + 2),puVar2,0x24,4);
  }
  if (iVar8 != 0) {
    puVar5[3] = iVar8;
    puVar5[2] = 4;
  }
  iVar8 = DAT_00483cbc;
  local_34 = (uint *)s_cState_Wait_00483cb0;
  local_38 = DAT_00483cbc;
  iVar12 = puVar5[3];
  puVar15 = *(uint **)(iVar12 + 4);
  (**(code **)(DAT_00483cbc + 8))(&local_38);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_34 + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00483b24;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00483b24:
  iVar12 = *(int *)(iVar12 + 8);
  if (iVar12 <= (int)uVar13) {
    uVar13 = iVar12 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar15,local_34,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  puVar6 = (undefined4 *)puVar5[6];
  uVar16 = puVar7[3];
  uVar19 = puVar7[2];
  uVar20 = puVar7[4];
  uVar18 = puVar7[5];
  uVar17 = puVar7[1];
  *puVar6 = *puVar7;
  puVar6[1] = uVar17;
  puVar6 = (undefined4 *)puVar5[7];
  *puVar6 = uVar19;
  puVar6[1] = uVar16;
  puVar6 = (undefined4 *)puVar5[8];
  *puVar6 = uVar20;
  puVar6[1] = uVar18;
  local_34 = (uint *)s_cState_Count_00483cc0;
  local_38 = iVar8;
  if ((uint)puVar5[2] < 2) {
    iVar12 = puVar5[3];
  }
  else {
    iVar12 = puVar5[3] + 0x24;
  }
  puVar15 = *(uint **)(iVar12 + 4);
  (**(code **)(iVar8 + 8))(&local_38);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_34 + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00483bec;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00483bec:
  if (*(int *)(iVar12 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar12 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar15,local_34,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  iVar12 = puVar5[6];
  uVar16 = puVar7[4];
  uVar17 = puVar7[5];
  uVar18 = puVar7[7];
  uVar19 = puVar7[8];
  uVar20 = puVar7[9];
  *(undefined4 *)(iVar12 + 8) = puVar7[6];
  *(undefined4 *)(iVar12 + 0xc) = uVar18;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 8) = uVar19;
  *(undefined4 *)(iVar12 + 0xc) = uVar20;
  iVar12 = puVar5[8];
  *(undefined4 *)(iVar12 + 8) = uVar16;
  *(undefined4 *)(iVar12 + 0xc) = uVar17;
  local_34 = (uint *)s_cState_EndWait_00483cd0;
  local_38 = iVar8;
  if ((uint)puVar5[2] < 3) {
    iVar12 = puVar5[3];
  }
  else {
    iVar12 = puVar5[3] + 0x48;
  }
  puVar15 = *(uint **)(iVar12 + 4);
  (**(code **)(iVar8 + 8))(&local_38);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_34 + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00483cec;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00483cec:
  if (*(int *)(iVar12 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar12 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar15,local_34,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  iVar12 = puVar5[6];
  uVar16 = puVar7[0xb];
  uVar17 = puVar7[4];
  uVar18 = puVar7[0xc];
  uVar19 = puVar7[0xd];
  uVar20 = puVar7[5];
  *(undefined4 *)(iVar12 + 0x10) = puVar7[10];
  *(undefined4 *)(iVar12 + 0x14) = uVar16;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x10) = uVar18;
  *(undefined4 *)(iVar12 + 0x14) = uVar19;
  iVar12 = puVar5[8];
  *(undefined4 *)(iVar12 + 0x10) = uVar17;
  *(undefined4 *)(iVar12 + 0x14) = uVar20;
  local_34 = (uint *)s_cState_Bonus_00483fbc;
  local_38 = iVar8;
  if ((uint)puVar5[2] < 4) {
    iVar12 = puVar5[3];
  }
  else {
    iVar12 = puVar5[3] + 0x6c;
  }
  puVar15 = *(uint **)(iVar12 + 4);
  (**(code **)(iVar8 + 8))(&local_38);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_34 + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00483dbc;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00483dbc:
  if (*(int *)(iVar12 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar12 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar15,local_34,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  uVar16 = DAT_00483fd0;
  uVar17 = puVar7[0x10];
  uVar18 = puVar7[0xf];
  uVar19 = puVar7[0x11];
  iVar12 = puVar5[6];
  uVar20 = puVar7[4];
  uVar21 = puVar7[5];
  *(undefined4 *)(iVar12 + 0x18) = puVar7[0xe];
  *(undefined4 *)(iVar12 + 0x1c) = uVar18;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x18) = uVar17;
  *(undefined4 *)(iVar12 + 0x1c) = uVar19;
  iVar12 = puVar5[8];
  *(undefined4 *)(iVar12 + 0x18) = uVar20;
  *(undefined4 *)(iVar12 + 0x1c) = uVar21;
  local_30[0] = DAT_00483fcc;
  (**(code **)(*piVar4 + 0x38))(piVar4,uVar16,local_30);
  piVar14 = (int *)puVar5[-0x16];
  func_0016773C((int)piVar14,6);
  iVar12 = DAT_00483fd4;
  uVar13 = 0;
  do {
    func_00166C20(piVar14,uVar13,(int *)(iVar12 + uVar13 * 8),0);
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 6);
  puVar5[-0x13] = piVar14;
  *(undefined2 *)((int)puVar5 + -0x52) = 0;
  *(undefined2 *)(puVar5 + -0x15) = 0;
  func_002313DC((int)(puVar5 + -0x15));
  puVar5[-0x10] = piVar14;
  *(undefined2 *)((int)puVar5 + -0x46) = 1;
  *(undefined2 *)(puVar5 + -0x12) = 0;
  puVar5[0xe] = piVar14;
  *(undefined2 *)((int)puVar5 + 0x32) = 3;
  *(undefined2 *)(puVar5 + 0xc) = 0;
  func_002313DC((int)(puVar5 + 0xc));
  puVar5[0x11] = piVar14;
  *(undefined2 *)((int)puVar5 + 0x3e) = 5;
  *(undefined2 *)(puVar5 + 0xf) = 0;
  local_34 = (uint *)s_T_Time_00_00483fd8;
  local_38 = iVar8;
  piVar10 = (int *)func_005229AC(piVar14,&local_38);
  piVar3 = DAT_00483fe4;
  if (piVar10 != (int *)0x0) {
    piVar11 = (int *)(**(code **)(*piVar10 + 8))(piVar10);
    do {
      if (piVar11 == piVar3) goto LAB_00483f28;
      piVar11 = (int *)*piVar11;
    } while (piVar11 != (int *)0x0);
  }
  piVar10 = (int *)0x0;
LAB_00483f28:
  puVar5[0x13] = piVar10;
  local_34 = (uint *)s_T_Result_00_00483fe8;
  local_38 = iVar8;
  piVar10 = (int *)func_005229AC(piVar14,&local_38);
  piVar3 = DAT_00483fe4;
  if (piVar10 != (int *)0x0) {
    piVar11 = (int *)(**(code **)(*piVar10 + 8))(piVar10);
    do {
      if (piVar11 == piVar3) goto LAB_00483f78;
      piVar11 = (int *)*piVar11;
    } while (piVar11 != (int *)0x0);
  }
  piVar10 = (int *)0x0;
LAB_00483f78:
  puVar5[0x14] = piVar10;
  local_34 = (uint *)s_L_RupeeNum_00_00483ff4;
  local_38 = iVar8;
  func_0034BA3C(puVar5[0x15],piVar14,&local_38);
  *(undefined1 *)((int)puVar5 + -0x65) = 0xc0;
  func_004B9958((int)piVar4,2);
  return piVar4;
}

