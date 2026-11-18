#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_00521028(int param_1);
extern int func_00664ED8(undefined4 *param_1,undefined1 param_2);
extern int DAT_00317e58;
extern undefined4 *DAT_00317e5c;
extern undefined *DAT_00317e60;
extern int DAT_00317e64;
extern int DAT_00317e78;
extern undefined4 *DAT_00317e8c;
extern char s_cState_Appear_00317e68[];
extern char s_cState_Erase_00317e90[];
extern char s_cState_Summon_00317e7c[];

// USA 00317A18 <- EU 003179F4 (Ghidra, non-matching)
// GLOBAL DAT_00317e58 int
// GLOBAL DAT_00317e5c undefined4 *
// GLOBAL DAT_00317e60 undefined *
// GLOBAL DAT_00317e64 int
// GLOBAL DAT_00317e78 int
// GLOBAL DAT_00317e8c undefined4 *
// GLOBAL s_cState_Appear_00317e68 string
// GLOBAL s_cState_Erase_00317e90 string
// GLOBAL s_cState_Summon_00317e7c string

undefined4 * func_00317A18(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(uint * *)(albw_frame + 0x4))
  #define auStack_48 ((undefined4 *)(albw_frame + 0x8))
  #define local_30 (*(uint *)(albw_frame + 0x20))
  piVar3 = func_00150E40(param_1,param_2);
  iVar5 = DAT_00317e58;
  *piVar3 = DAT_00317e58;
  piVar3[200] = iVar5 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x103);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar12 = puVar4 + -0x103;
  puVar4[0xb] = (int)(short)param_2[10];
  *(bool *)(puVar4 + 0xc) = 0 < (short)param_2[0xb];
  if (9 < (uint)puVar4[0xb]) {
    puVar4[0xb] = 0;
  }
  puVar4[5] = puVar12;
  *(undefined1 *)((int)puVar4 + 6) = 3;
  iVar5 = func_0010BA78(0x30);
  puVar8 = DAT_00317e5c;
  puVar4[6] = iVar5;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar9 = 3;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar16 = puVar8[0xf];
    iVar9 = iVar9 + -1;
    puVar6[2] = puVar8[0xe];
    puVar6[3] = uVar16;
    uVar16 = puVar8[0xf];
    puVar6[4] = puVar8[0xe];
    puVar6[5] = uVar16;
    puVar6 = puVar6 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar6;
  if (uVar13 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = puVar8[5];
      *puVar6 = puVar8[4];
      puVar6[1] = uVar16;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar13 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar16 = puVar8[5];
      puVar7[2] = puVar8[4];
      puVar7[3] = uVar16;
      uVar16 = puVar8[5];
      puVar7[4] = puVar8[4];
      puVar7[5] = uVar16;
      puVar7 = puVar7 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  puVar2 = DAT_00317e60;
  iVar5 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar8[1] = 3;
    *puVar8 = 0x24;
    iVar5 = func_00100118((int)(puVar8 + 2),puVar2,0x24,3);
  }
  if (iVar5 != 0) {
    puVar4[2] = 3;
    puVar4[3] = iVar5;
  }
  iVar9 = DAT_00317e78;
  iVar5 = DAT_00317e64;
  puVar4[-0x2e] = puVar4;
  *(undefined2 *)(iVar5 + (int)puVar12) = 3;
  local_4c = (uint *)s_cState_Appear_00317e68;
  local_50 = iVar9;
  iVar5 = puVar4[3];
  puVar15 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar9 + 8))(&local_50);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_4c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00317be8;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00317be8:
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 <= (int)uVar13) {
    uVar13 = iVar5 - 1;
  }
  (**(code **)(local_50 + 8))(&local_50);
  func_0010E3C4(puVar15,local_4c,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  puVar8 = (undefined4 *)puVar4[6];
  uVar10 = DAT_00317e5c[1];
  uVar11 = DAT_00317e5c[2];
  uVar14 = DAT_00317e5c[3];
  uVar17 = DAT_00317e5c[4];
  uVar16 = DAT_00317e5c[5];
  *puVar8 = *DAT_00317e5c;
  puVar8[1] = uVar10;
  puVar8 = (undefined4 *)puVar4[7];
  *puVar8 = uVar11;
  puVar8[1] = uVar14;
  puVar8 = (undefined4 *)puVar4[8];
  puVar8[1] = uVar16;
  *puVar8 = uVar17;
  local_4c = (uint *)s_cState_Summon_00317e7c;
  local_50 = iVar9;
  if ((uint)puVar4[2] < 2) {
    iVar5 = puVar4[3];
  }
  else {
    iVar5 = puVar4[3] + 0x24;
  }
  puVar15 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar9 + 8))(&local_50);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_4c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00317ca8;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00317ca8:
  if (*(int *)(iVar5 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_50 + 8))(&local_50);
  func_0010E3C4(puVar15,local_4c,uVar13);
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  iVar5 = puVar4[6];
  uVar16 = *DAT_00317e8c;
  uVar10 = DAT_00317e8c[1];
  uVar11 = DAT_00317e8c[3];
  uVar14 = DAT_00317e8c[4];
  uVar17 = DAT_00317e8c[5];
  *(undefined4 *)(iVar5 + 8) = DAT_00317e8c[2];
  *(undefined4 *)(iVar5 + 0xc) = uVar11;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar14;
  *(undefined4 *)(iVar5 + 0xc) = uVar17;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 8) = uVar16;
  *(undefined4 *)(iVar5 + 0xc) = uVar10;
  local_4c = (uint *)s_cState_Erase_00317e90;
  local_50 = iVar9;
  if ((uint)puVar4[2] < 3) {
    iVar5 = puVar4[3];
  }
  else {
    iVar5 = puVar4[3] + 0x48;
  }
  puVar15 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar9 + 8))(&local_50);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_4c + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_00317d6c;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_00317d6c:
  if (*(int *)(iVar5 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_50 + 8))(&local_50);
  func_0010E3C4(puVar15,local_4c,uVar13);
  puVar8 = DAT_00317e5c;
  *(undefined1 *)((int)puVar15 + uVar13) = 0;
  iVar5 = puVar4[6];
  uVar14 = puVar8[4];
  uVar10 = puVar8[0xb];
  uVar11 = puVar8[0xc];
  uVar17 = puVar8[0xd];
  uVar16 = puVar8[5];
  *(undefined4 *)(iVar5 + 0x10) = puVar8[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar10;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar11;
  *(undefined4 *)(iVar5 + 0x14) = uVar17;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x10) = uVar14;
  *(undefined4 *)(iVar5 + 0x14) = uVar16;
  piVar3 = (int *)func_00521028((int)puVar12);
  (**(code **)(*piVar3 + 8))(piVar3);
  func_003529A0(auStack_48,piVar3[1],puVar4 + -0x3b);
  local_30 = (uint)(0 < *(short *)((int)param_2 + 0x2a));
  func_002C41BC(puVar4 + -0x3b,auStack_48,0);
  func_00664ED8(puVar4,0);
  if (*(char *)(puVar4 + 0xc) != '\0') {
    puVar4[-0x4b] = puVar4[-0x4b] | 2;
  }
  return puVar12;
}

