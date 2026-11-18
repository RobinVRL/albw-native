#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0065CD54(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_001e3bc4;
extern int *DAT_001e3bc8;
extern int DAT_001e3bcc;
extern undefined DAT_001e3bd0;
extern undefined DAT_001e3bd4;
extern undefined4 *DAT_001e3bf8;
extern undefined *DAT_001e3bfc;
extern int DAT_001e3e84;
extern char s_InItemSelect_001e3bd8[];
extern char s_OutItemSelect_001e3be8[];
extern char s_cState_Idle_001e3c00[];
extern char s_cState_ItemIn_001e3e64[];
extern char s_cState_ItemOut_001e3e74[];

// USA 001E38D4 <- EU 001E38D4 (Ghidra, non-matching)
// GLOBAL DAT_001e3bc4 undefined4
// GLOBAL DAT_001e3bc8 int *
// GLOBAL DAT_001e3bcc int
// GLOBAL DAT_001e3bd0 undefined
// GLOBAL DAT_001e3bd4 undefined
// GLOBAL DAT_001e3bf8 undefined4 *
// GLOBAL DAT_001e3bfc undefined *
// GLOBAL DAT_001e3e84 int
// GLOBAL s_InItemSelect_001e3bd8 string
// GLOBAL s_OutItemSelect_001e3be8 string
// GLOBAL s_cState_Idle_001e3c00 string
// GLOBAL s_cState_ItemIn_001e3e64 string
// GLOBAL s_cState_ItemOut_001e3e74 string

undefined4 * func_001E38D4(undefined2 *param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  uVar12 = DAT_001e3bc4;
  *param_1 = 0;
  param_1[1] = 0xffff;
  *(undefined4 *)(param_1 + 2) = uVar12;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar3 = func_0010A794((undefined4 *)(param_1 + 6));
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  func_0010B3EC(puVar3 + 10,4,(int)(puVar3 + 0xd));
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  func_0010B3EC(puVar3 + 0x11,4,(int)(puVar3 + 0x14));
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  *(undefined1 *)(puVar3 + 0x1a) = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x74);
  piVar5 = (int *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    piVar5 = func_004B9A10(puVar4,0);
  }
  piVar2 = DAT_001e3bc8;
  puVar3[9] = piVar5;
  (**(code **)(*piVar2 + 8))(piVar2);
  iVar10 = DAT_001e3bcc;
  local_2c = (uint *)piVar2[1];
  local_30 = DAT_001e3bcc;
  (**(code **)(*piVar5 + 0x38))(piVar5,&local_30,0);
  piVar5 = (int *)piVar5[7];
  func_0016773C((int)piVar5,4);
  local_2c = (uint *)&DAT_001e3bd0;
  local_30 = iVar10;
  func_00166C20(piVar5,0,&local_30,0);
  local_2c = (uint *)&DAT_001e3bd4;
  local_30 = iVar10;
  func_00166C20(piVar5,1,&local_30,0);
  local_2c = (uint *)s_InItemSelect_001e3bd8;
  local_30 = iVar10;
  func_00166C20(piVar5,2,&local_30,0);
  local_2c = (uint *)s_OutItemSelect_001e3be8;
  local_30 = iVar10;
  func_00166C20(piVar5,3,&local_30,0);
  func_004B9958(puVar3[9],2);
  *(undefined1 *)((int)puVar3 + 6) = 3;
  puVar3[5] = puVar3 + -3;
  iVar6 = func_0010BA78(0x30);
  puVar3[6] = iVar6;
  puVar4 = DAT_001e3bf8;
  iVar8 = 3;
  puVar3[7] = iVar6 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar12 = puVar4[0xf];
    iVar8 = iVar8 + -1;
    puVar7[2] = puVar4[0xe];
    puVar7[3] = uVar12;
    uVar12 = puVar4[0xf];
    puVar7[4] = puVar4[0xe];
    puVar7[5] = uVar12;
    puVar7 = puVar7 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar9 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar9 << 3);
  puVar3[8] = puVar7;
  if (uVar9 != 0) {
    puVar13 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = puVar4[5];
      *puVar7 = puVar4[4];
      puVar7[1] = uVar12;
      puVar13 = puVar7;
    }
    for (iVar6 = (int)uVar9 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar12 = puVar4[5];
      puVar13[2] = puVar4[4];
      puVar13[3] = uVar12;
      uVar12 = puVar4[5];
      puVar13[4] = puVar4[4];
      puVar13[5] = uVar12;
      puVar13 = puVar13 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 3;
    iVar6 = func_00100118((int)(puVar7 + 2),DAT_001e3bfc,0x24,3);
  }
  if (iVar6 != 0) {
    puVar3[3] = iVar6;
    puVar3[2] = 3;
  }
  local_2c = (uint *)s_cState_Idle_001e3c00;
  local_30 = iVar10;
  iVar6 = puVar3[3];
  puVar11 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar10 + 8))(&local_30);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_2c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_001e3c18;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_001e3c18:
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 <= (int)uVar9) {
    uVar9 = iVar6 - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar11,local_2c,uVar9);
  *(undefined1 *)((int)puVar11 + uVar9) = 0;
  puVar7 = (undefined4 *)puVar3[6];
  uVar17 = puVar4[5];
  uVar12 = puVar4[1];
  uVar14 = puVar4[2];
  uVar15 = puVar4[3];
  uVar16 = puVar4[4];
  *puVar7 = *puVar4;
  puVar7[1] = uVar12;
  puVar7 = (undefined4 *)puVar3[7];
  *puVar7 = uVar14;
  puVar7[1] = uVar15;
  puVar7 = (undefined4 *)puVar3[8];
  *puVar7 = uVar16;
  puVar7[1] = uVar17;
  local_2c = (uint *)s_cState_ItemIn_001e3e64;
  local_30 = iVar10;
  if ((uint)puVar3[2] < 2) {
    iVar6 = puVar3[3];
  }
  else {
    iVar6 = puVar3[3] + 0x24;
  }
  puVar11 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar10 + 8))(&local_30);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_2c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_001e3cd4;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_001e3cd4:
  if (*(int *)(iVar6 + 8) <= (int)uVar9) {
    uVar9 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar11,local_2c,uVar9);
  *(undefined1 *)((int)puVar11 + uVar9) = 0;
  iVar6 = puVar3[6];
  uVar12 = puVar4[4];
  uVar15 = puVar4[8];
  uVar16 = puVar4[7];
  uVar17 = puVar4[9];
  uVar14 = puVar4[5];
  *(undefined4 *)(iVar6 + 8) = puVar4[6];
  *(undefined4 *)(iVar6 + 0xc) = uVar16;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 8) = uVar15;
  *(undefined4 *)(iVar6 + 0xc) = uVar17;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 8) = uVar12;
  *(undefined4 *)(iVar6 + 0xc) = uVar14;
  local_2c = (uint *)s_cState_ItemOut_001e3e74;
  local_30 = iVar10;
  if ((uint)puVar3[2] < 3) {
    iVar6 = puVar3[3];
  }
  else {
    iVar6 = puVar3[3] + 0x48;
  }
  puVar11 = *(uint **)(iVar6 + 4);
  (**(code **)(iVar10 + 8))(&local_30);
  uVar9 = 0;
  do {
    if (*(char *)((int)local_2c + uVar9) == '\0') {
      if ((int)uVar9 < 0x40001) goto LAB_001e3da8;
      break;
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x40001);
  uVar9 = 0;
LAB_001e3da8:
  if (*(int *)(iVar6 + 8) <= (int)uVar9) {
    uVar9 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar11,local_2c,uVar9);
  *(undefined1 *)((int)puVar11 + uVar9) = 0;
  iVar10 = puVar3[6];
  uVar14 = puVar4[0xb];
  uVar15 = puVar4[0xc];
  uVar16 = puVar4[0xd];
  uVar12 = puVar4[5];
  uVar17 = puVar4[4];
  *(undefined4 *)(iVar10 + 0x10) = puVar4[10];
  *(undefined4 *)(iVar10 + 0x14) = uVar14;
  iVar10 = puVar3[7];
  *(undefined4 *)(iVar10 + 0x10) = uVar15;
  *(undefined4 *)(iVar10 + 0x14) = uVar16;
  iVar10 = puVar3[8];
  *(undefined4 *)(iVar10 + 0x10) = uVar17;
  *(undefined4 *)(iVar10 + 0x14) = uVar12;
  func_0065CD54(puVar3,0);
  iVar10 = DAT_001e3e84;
  iVar6 = 0;
  do {
    iVar8 = func_005229AC(piVar5,(int *)(iVar10 + iVar6 * 8));
    if ((iVar8 != 0) && ((*(byte *)(iVar8 + 0x44) & 1) != 0)) {
      *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xfe;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  return puVar3 + -3;
}

