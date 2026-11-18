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
extern int func_004B948C(int param_1,int param_2);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_00443e28;
extern undefined4 DAT_00443e2c;
extern undefined4 *DAT_00443e30;
extern undefined *DAT_00443e34;
extern int DAT_00443e48;
extern int *DAT_004440a4;
extern int DAT_004440a8;
extern int DAT_004440ac;
extern int *DAT_004440b0;
extern int *DAT_004440b4;
extern int *DAT_004440c8;
extern int *DAT_004440cc;
extern char s_T_PlusRupee_00_004440b8[];
extern char s_cState_Counting_00443e38[];
extern char s_cState_Finished_00443e4c[];
extern char s_cState_Idle_00443e5c[];

// USA 00443A4C <- EU 00443A2C (Ghidra, non-matching)
// GLOBAL DAT_00443e28 int
// GLOBAL DAT_00443e2c undefined4
// GLOBAL DAT_00443e30 undefined4 *
// GLOBAL DAT_00443e34 undefined *
// GLOBAL DAT_00443e48 int
// GLOBAL DAT_004440a4 int *
// GLOBAL DAT_004440a8 int
// GLOBAL DAT_004440ac int
// GLOBAL DAT_004440b0 int *
// GLOBAL DAT_004440b4 int *
// GLOBAL DAT_004440c8 int *
// GLOBAL DAT_004440cc int *
// GLOBAL s_T_PlusRupee_00_004440b8 string
// GLOBAL s_cState_Counting_00443e38 string
// GLOBAL s_cState_Finished_00443e4c string
// GLOBAL s_cState_Idle_00443e5c string

int * func_00443A4C(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(int *)(albw_frame + 0x14))
  piVar3 = func_004B9A10(param_1,0);
  iVar7 = DAT_00443e28;
  *piVar3 = DAT_00443e28;
  piVar3[0xe] = iVar7 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x1d);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  piVar3 = puVar4 + -0x1d;
  puVar4[8] = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x5c);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_0034C698(puVar5,3);
  }
  puVar4[9] = puVar6;
  puVar5 = (undefined4 *)func_0010BAB4(0x5c);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_0034C698(puVar5,4);
  }
  puVar4[10] = puVar6;
  puVar5 = (undefined4 *)func_0010BAB4(0x78);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_0017A520(puVar5,0x400,(int *)0x0,0);
  }
  puVar4[0xb] = puVar6;
  puVar4[0xc] = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x10);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[3] = 0xffffffff;
    puVar6[2] = 0;
  }
  puVar4[0xd] = puVar6;
  uVar15 = DAT_00443e2c;
  *(undefined2 *)(puVar4 + 0xe) = 0;
  *(undefined2 *)((int)puVar4 + 0x3a) = 0xffff;
  puVar4[0xf] = uVar15;
  puVar4[0x10] = 0;
  *(undefined2 *)(puVar4 + 0x11) = 0;
  *(undefined2 *)((int)puVar4 + 0x46) = 0xffff;
  puVar4[0x12] = uVar15;
  puVar4[0x13] = 0;
  *(undefined2 *)(puVar4 + 0x14) = 0;
  *(undefined2 *)((int)puVar4 + 0x52) = 0xffff;
  puVar4[0x15] = uVar15;
  puVar4[0x16] = 0;
  *(undefined1 *)(puVar4 + 0x19) = 0;
  *(undefined1 *)((int)puVar4 + 6) = 3;
  puVar4[5] = piVar3;
  iVar7 = func_0010BA78(0x30);
  puVar4[6] = iVar7;
  puVar6 = DAT_00443e30;
  puVar4[7] = iVar7 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar10 = 3;
  puVar5 = (undefined4 *)(iVar7 + -8);
  do {
    uVar15 = puVar6[0xb];
    iVar10 = iVar10 + -1;
    puVar5[2] = puVar6[10];
    puVar5[3] = uVar15;
    uVar15 = puVar6[0xb];
    puVar5[4] = puVar6[10];
    puVar5[5] = uVar15;
    puVar5 = puVar5 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar11 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar4[8] = puVar5;
  if (uVar11 != 0) {
    puVar8 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = puVar6[5];
      *puVar5 = puVar6[4];
      puVar5[1] = uVar15;
      puVar8 = puVar5;
    }
    for (iVar7 = (int)uVar11 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar15 = puVar6[5];
      puVar8[2] = puVar6[4];
      puVar8[3] = uVar15;
      uVar15 = puVar6[5];
      puVar8[4] = puVar6[4];
      puVar8[5] = uVar15;
      puVar8 = puVar8 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 3;
    iVar7 = func_00100118((int)(puVar5 + 2),DAT_00443e34,0x24,3);
  }
  if (iVar7 != 0) {
    puVar4[3] = iVar7;
    puVar4[2] = 3;
  }
  iVar7 = DAT_00443e48;
  local_34 = (uint *)s_cState_Counting_00443e38;
  local_38 = DAT_00443e48;
  iVar10 = puVar4[3];
  puVar13 = *(uint **)(iVar10 + 4);
  (**(code **)(DAT_00443e48 + 8))(&local_38);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_34 + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_00443ca0;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_00443ca0:
  iVar10 = *(int *)(iVar10 + 8);
  if (iVar10 <= (int)uVar11) {
    uVar11 = iVar10 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar13,local_34,uVar11);
  *(undefined1 *)((int)puVar13 + uVar11) = 0;
  puVar5 = (undefined4 *)puVar4[6];
  uVar15 = puVar6[1];
  uVar16 = puVar6[2];
  uVar18 = puVar6[4];
  uVar17 = puVar6[3];
  uVar19 = puVar6[5];
  *puVar5 = *puVar6;
  puVar5[1] = uVar15;
  puVar5 = (undefined4 *)puVar4[7];
  *puVar5 = uVar16;
  puVar5[1] = uVar17;
  puVar5 = (undefined4 *)puVar4[8];
  *puVar5 = uVar18;
  puVar5[1] = uVar19;
  local_34 = (uint *)s_cState_Finished_00443e4c;
  local_38 = iVar7;
  if ((uint)puVar4[2] < 2) {
    iVar10 = puVar4[3];
  }
  else {
    iVar10 = puVar4[3] + 0x24;
  }
  puVar13 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar7 + 8))(&local_38);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_34 + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_00443d6c;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_00443d6c:
  if (*(int *)(iVar10 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar13,local_34,uVar11);
  *(undefined1 *)((int)puVar13 + uVar11) = 0;
  iVar10 = puVar4[6];
  uVar16 = puVar6[7];
  uVar17 = puVar6[8];
  uVar18 = puVar6[9];
  uVar15 = puVar6[4];
  uVar19 = puVar6[5];
  *(undefined4 *)(iVar10 + 8) = puVar6[6];
  *(undefined4 *)(iVar10 + 0xc) = uVar16;
  iVar10 = puVar4[7];
  *(undefined4 *)(iVar10 + 8) = uVar17;
  *(undefined4 *)(iVar10 + 0xc) = uVar18;
  iVar10 = puVar4[8];
  *(undefined4 *)(iVar10 + 8) = uVar15;
  *(undefined4 *)(iVar10 + 0xc) = uVar19;
  local_34 = (uint *)s_cState_Idle_00443e5c;
  local_38 = iVar7;
  if ((uint)puVar4[2] < 3) {
    iVar10 = puVar4[3];
  }
  else {
    iVar10 = puVar4[3] + 0x48;
  }
  puVar13 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar7 + 8))(&local_38);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_34 + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_00443e74;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_00443e74:
  if (*(int *)(iVar10 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar13,local_34,uVar11);
  *(undefined1 *)((int)puVar13 + uVar11) = 0;
  iVar10 = puVar4[6];
  uVar15 = puVar6[0xb];
  uVar18 = puVar6[0xc];
  uVar16 = puVar6[4];
  uVar17 = puVar6[0xd];
  uVar19 = puVar6[5];
  *(undefined4 *)(iVar10 + 0x10) = puVar6[10];
  *(undefined4 *)(iVar10 + 0x14) = uVar15;
  piVar14 = DAT_004440a4;
  iVar10 = puVar4[7];
  *(undefined4 *)(iVar10 + 0x10) = uVar18;
  *(undefined4 *)(iVar10 + 0x14) = uVar17;
  iVar10 = puVar4[8];
  *(undefined4 *)(iVar10 + 0x10) = uVar16;
  *(undefined4 *)(iVar10 + 0x14) = uVar19;
  (**(code **)(*piVar3 + 0x38))(piVar3,piVar14,0);
  piVar14 = (int *)puVar4[-0x16];
  func_0016773C((int)piVar14,8);
  iVar10 = DAT_004440a8;
  uVar11 = 0;
  do {
    piVar12 = (int *)(iVar10 + uVar11 * 8);
    (**(code **)(*piVar12 + 8))(piVar12);
    local_2c = piVar12[1];
    local_30 = iVar7;
    func_00166C20(piVar14,uVar11,&local_30,0);
    iVar2 = DAT_004440ac;
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 4);
  iVar10 = 0;
  do {
    func_00166C20(piVar14,iVar10 + 4,(int *)(iVar2 + iVar10 * 8),0);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  puVar4[-0x13] = piVar14;
  *(undefined2 *)((int)puVar4 + -0x52) = 0;
  *(undefined2 *)(puVar4 + -0x15) = 0;
  func_002313DC((int)(puVar4 + -0x15));
  puVar4[-0x10] = piVar14;
  *(undefined2 *)((int)puVar4 + -0x46) = 2;
  *(undefined2 *)(puVar4 + -0x12) = 0;
  puVar4[0x13] = piVar14;
  *(undefined2 *)((int)puVar4 + 0x46) = 1;
  *(undefined2 *)(puVar4 + 0x11) = 0;
  puVar4[0x16] = piVar14;
  *(undefined2 *)((int)puVar4 + 0x52) = 3;
  *(undefined2 *)(puVar4 + 0x14) = 0;
  func_0034BA3C(puVar4[9],piVar14,DAT_004440b0);
  *(undefined1 *)(puVar4[9] + 0x58) = 0;
  func_004B948C((int)piVar3,puVar4[9]);
  func_0034BA3C(puVar4[10],piVar14,DAT_004440b4);
  func_004B948C((int)piVar3,puVar4[10]);
  local_34 = (uint *)s_T_PlusRupee_00_004440b8;
  local_38 = iVar7;
  piVar12 = (int *)func_005229AC(piVar14,&local_38);
  piVar14 = DAT_004440c8;
  if (piVar12 != (int *)0x0) {
    piVar9 = (int *)(**(code **)(*piVar12 + 8))(piVar12);
    do {
      if (piVar9 == piVar14) goto LAB_0044405c;
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)0x0);
  }
  piVar12 = (int *)0x0;
LAB_0044405c:
  puVar4[0xc] = piVar12;
  if (piVar12 != (int *)0x0) {
    local_2c = piVar12[0x2a];
    local_30 = iVar7;
    func_005826A4(*DAT_004440cc,(int *)puVar4[0xd],DAT_004440a4,&local_30);
  }
  func_004B9958((int)piVar3,2);
  return piVar3;
}

