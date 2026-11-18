#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0066F2B8(undefined4 *param_1,undefined1 param_2);
extern int DAT_00485d3c;
extern int DAT_00485d40;
extern undefined4 DAT_00485d44;
extern undefined DAT_00485d48;
extern int DAT_00485d4c;
extern undefined DAT_00485d50;
extern undefined4 *DAT_00485d78;
extern undefined *DAT_00485d7c;
extern char s_B_SkipBtn_00_00485d68[];
extern char s_TouchDecide_00485d5c[];
extern char s_TouchOn_00485d54[];
extern char s_cState_BtnIn_00485d8c[];
extern char s_cState_BtnOut_00485fcc[];
extern char s_cState_BtnWait_00485fbc[];
extern char s_cState_Wait_00485d80[];

// USA 00485A0C <- EU 004859E4 (Ghidra, non-matching)
// GLOBAL DAT_00485d3c int
// GLOBAL DAT_00485d40 int
// GLOBAL DAT_00485d44 undefined4
// GLOBAL DAT_00485d48 undefined
// GLOBAL DAT_00485d4c int
// GLOBAL DAT_00485d50 undefined
// GLOBAL DAT_00485d78 undefined4 *
// GLOBAL DAT_00485d7c undefined *
// GLOBAL s_B_SkipBtn_00_00485d68 string
// GLOBAL s_TouchDecide_00485d5c string
// GLOBAL s_TouchOn_00485d54 string
// GLOBAL s_cState_BtnIn_00485d8c string
// GLOBAL s_cState_BtnOut_00485fcc string
// GLOBAL s_cState_BtnWait_00485fbc string
// GLOBAL s_cState_Wait_00485d80 string

undefined4 * func_00485A0C(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  piVar3 = func_004B9A10(param_1,0);
  iVar4 = DAT_00485d3c + 0x54;
  *piVar3 = DAT_00485d3c;
  piVar3[0xe] = iVar4;
  iVar4 = DAT_00485d40;
  *(undefined2 *)(piVar3 + 0x1d) = 0;
  *(undefined2 *)((int)piVar3 + 0x76) = 0xffff;
  piVar3[0x1e] = iVar4;
  piVar3[0x1f] = 0;
  *(undefined2 *)(piVar3 + 0x20) = 0;
  *(undefined2 *)((int)piVar3 + 0x82) = 0xffff;
  piVar3[0x21] = iVar4;
  piVar3[0x22] = 0;
  puVar5 = func_0010A794(piVar3 + 0x23);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar11 = puVar5 + -0x23;
  *(undefined1 *)(puVar5 + 10) = 0;
  (**(code **)(puVar5[-0x23] + 0x38))(puVar11,DAT_00485d44,0);
  piVar3 = (int *)puVar5[-0x1c];
  func_0016773C((int)piVar3,4);
  iVar4 = DAT_00485d4c;
  local_2c = (uint *)&DAT_00485d48;
  local_30 = DAT_00485d4c;
  func_00166C20(piVar3,0,&local_30,0);
  local_2c = (uint *)&DAT_00485d50;
  local_30 = iVar4;
  func_00166C20(piVar3,1,&local_30,0);
  local_2c = (uint *)s_TouchOn_00485d54;
  local_30 = iVar4;
  func_00166C20(piVar3,2,&local_30,0);
  local_2c = (uint *)s_TouchDecide_00485d5c;
  local_30 = iVar4;
  func_00166C20(piVar3,3,&local_30,0);
  local_2c = (uint *)s_B_SkipBtn_00_00485d68;
  local_30 = iVar4;
  uVar6 = func_005229AC(piVar3,&local_30);
  puVar5[9] = uVar6;
  *(undefined1 *)((int)puVar5 + 6) = 4;
  puVar5[5] = puVar11;
  iVar7 = func_0010BA78(0x40);
  puVar5[6] = iVar7;
  puVar2 = DAT_00485d78;
  puVar5[7] = iVar7 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar10 = 4;
  puVar8 = (undefined4 *)(iVar7 + -8);
  do {
    uVar6 = puVar2[0x13];
    iVar10 = iVar10 + -1;
    puVar8[2] = puVar2[0x12];
    puVar8[3] = uVar6;
    uVar6 = puVar2[0x13];
    puVar8[4] = puVar2[0x12];
    puVar8[5] = uVar6;
    puVar8 = puVar8 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar12 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar5[8] = puVar8;
  if (uVar12 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar6 = puVar2[5];
      *puVar8 = puVar2[4];
      puVar8[1] = uVar6;
      puVar9 = puVar8;
    }
    for (iVar7 = (int)uVar12 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar6 = puVar2[5];
      puVar9[2] = puVar2[4];
      puVar9[3] = uVar6;
      uVar6 = puVar2[5];
      puVar9[4] = puVar2[4];
      puVar9[5] = uVar6;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar7 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 4;
    iVar7 = func_00100118((int)(puVar8 + 2),DAT_00485d7c,0x24,4);
  }
  if (iVar7 != 0) {
    puVar5[3] = iVar7;
    puVar5[2] = 4;
  }
  local_2c = (uint *)s_cState_Wait_00485d80;
  local_30 = iVar4;
  iVar7 = puVar5[3];
  puVar13 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar4 + 8))(&local_30);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_2c + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_00485c8c;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_00485c8c:
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 <= (int)uVar12) {
    uVar12 = iVar7 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar13,local_2c,uVar12);
  *(undefined1 *)((int)puVar13 + uVar12) = 0;
  puVar8 = (undefined4 *)puVar5[6];
  uVar6 = puVar2[1];
  uVar14 = puVar2[2];
  uVar15 = puVar2[3];
  uVar16 = puVar2[4];
  uVar17 = puVar2[5];
  *puVar8 = *puVar2;
  puVar8[1] = uVar6;
  puVar8 = (undefined4 *)puVar5[7];
  *puVar8 = uVar14;
  puVar8[1] = uVar15;
  puVar8 = (undefined4 *)puVar5[8];
  *puVar8 = uVar16;
  puVar8[1] = uVar17;
  local_2c = (uint *)s_cState_BtnIn_00485d8c;
  local_30 = iVar4;
  if ((uint)puVar5[2] < 2) {
    iVar7 = puVar5[3];
  }
  else {
    iVar7 = puVar5[3] + 0x24;
  }
  puVar13 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar4 + 8))(&local_30);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_2c + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_00485da8;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_00485da8:
  if (*(int *)(iVar7 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar13,local_2c,uVar12);
  *(undefined1 *)((int)puVar13 + uVar12) = 0;
  iVar7 = puVar5[6];
  uVar6 = puVar2[7];
  uVar14 = puVar2[8];
  uVar15 = puVar2[9];
  uVar16 = puVar2[5];
  uVar17 = puVar2[4];
  *(undefined4 *)(iVar7 + 8) = puVar2[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar6;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 8) = uVar14;
  *(undefined4 *)(iVar7 + 0xc) = uVar15;
  iVar7 = puVar5[8];
  *(undefined4 *)(iVar7 + 8) = uVar17;
  *(undefined4 *)(iVar7 + 0xc) = uVar16;
  local_2c = (uint *)s_cState_BtnWait_00485fbc;
  local_30 = iVar4;
  if ((uint)puVar5[2] < 3) {
    iVar7 = puVar5[3];
  }
  else {
    iVar7 = puVar5[3] + 0x48;
  }
  puVar13 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar4 + 8))(&local_30);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_2c + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_00485e68;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_00485e68:
  if (*(int *)(iVar7 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar13,local_2c,uVar12);
  *(undefined1 *)((int)puVar13 + uVar12) = 0;
  iVar7 = puVar5[6];
  uVar6 = puVar2[0xc];
  uVar15 = puVar2[0xd];
  uVar14 = puVar2[4];
  uVar17 = puVar2[5];
  uVar16 = puVar2[0xb];
  *(undefined4 *)(iVar7 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar7 + 0x14) = uVar16;
  iVar7 = puVar5[7];
  *(undefined4 *)(iVar7 + 0x10) = uVar6;
  *(undefined4 *)(iVar7 + 0x14) = uVar15;
  iVar7 = puVar5[8];
  *(undefined4 *)(iVar7 + 0x10) = uVar14;
  *(undefined4 *)(iVar7 + 0x14) = uVar17;
  local_2c = (uint *)s_cState_BtnOut_00485fcc;
  local_30 = iVar4;
  if ((uint)puVar5[2] < 4) {
    iVar7 = puVar5[3];
  }
  else {
    iVar7 = puVar5[3] + 0x6c;
  }
  puVar13 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar4 + 8))(&local_30);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_2c + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_00485f38;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_00485f38:
  if (*(int *)(iVar7 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar13,local_2c,uVar12);
  *(undefined1 *)((int)puVar13 + uVar12) = 0;
  uVar16 = puVar2[4];
  iVar4 = puVar5[6];
  uVar6 = puVar2[5];
  uVar14 = puVar2[0x11];
  uVar15 = puVar2[0xf];
  uVar17 = puVar2[0x10];
  *(undefined4 *)(iVar4 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar4 + 0x1c) = uVar15;
  iVar4 = puVar5[7];
  *(undefined4 *)(iVar4 + 0x18) = uVar17;
  *(undefined4 *)(iVar4 + 0x1c) = uVar14;
  iVar4 = puVar5[8];
  *(undefined4 *)(iVar4 + 0x18) = uVar16;
  *(undefined4 *)(iVar4 + 0x1c) = uVar6;
  func_0066F2B8(puVar5,0);
  *(undefined1 *)((int)puVar5 + -0x7d) = 0x40;
  return puVar11;
}

