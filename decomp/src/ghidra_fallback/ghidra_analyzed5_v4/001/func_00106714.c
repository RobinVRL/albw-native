#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A464(undefined4 *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010B85C(undefined4 *param_1);
extern int func_0010B8F0(undefined4 *param_1);
extern int func_0010B930(int param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010BB50(undefined4 *param_1,undefined1 param_2);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined *DAT_00106cc4;
extern undefined8 *DAT_00106cc8;
extern undefined *DAT_00106ccc;
extern int DAT_00106cdc;
extern char s_cState_CastleHyrule_00106d50[];
extern char s_cState_Demo_00106cf0[];
extern char s_cState_DungeonCastle_00106d38[];
extern char s_cState_DungeonEast_00106cfc[];
extern char s_cState_DungeonHera_00106d24[];
extern char s_cState_DungeonWind_00106d10[];
extern char s_cState_Exit_00106cd0[];
extern char s_cState_ForestSwordEpilogue_00106da8[];
extern char s_cState_ForestSword_00106d94[];
extern char s_cState_HolyPlace_00106dc4[];
extern char s_cState_Mountain_00106f90[];
extern char s_cState_Normal_00106ce0[];
extern char s_cState_UnderBridge_00106fb0[];
extern char s_cState_Volcano_00106fa0[];
extern char s_cState_WalkwayHyrule_00106d64[];
extern char s_cState_WalkwayLowrule_00106d7c[];
extern char s_cState_WaterFallPre_00106f68[];
extern char s_cState_WaterFall_00106f7c[];
extern char s_cState_ZoraSpring_00106dd8[];

// USA 00106714 <- EU 00106714 (Ghidra, non-matching)
// GLOBAL DAT_00106cc4 undefined *
// GLOBAL DAT_00106cc8 undefined8 *
// GLOBAL DAT_00106ccc undefined *
// GLOBAL DAT_00106cdc int
// GLOBAL s_cState_CastleHyrule_00106d50 string
// GLOBAL s_cState_Demo_00106cf0 string
// GLOBAL s_cState_DungeonCastle_00106d38 string
// GLOBAL s_cState_DungeonEast_00106cfc string
// GLOBAL s_cState_DungeonHera_00106d24 string
// GLOBAL s_cState_DungeonWind_00106d10 string
// GLOBAL s_cState_Exit_00106cd0 string
// GLOBAL s_cState_ForestSwordEpilogue_00106da8 string
// GLOBAL s_cState_ForestSword_00106d94 string
// GLOBAL s_cState_HolyPlace_00106dc4 string
// GLOBAL s_cState_Mountain_00106f90 string
// GLOBAL s_cState_Normal_00106ce0 string
// GLOBAL s_cState_UnderBridge_00106fb0 string
// GLOBAL s_cState_Volcano_00106fa0 string
// GLOBAL s_cState_WalkwayHyrule_00106d64 string
// GLOBAL s_cState_WalkwayLowrule_00106d7c string
// GLOBAL s_cState_WaterFallPre_00106f68 string
// GLOBAL s_cState_WaterFall_00106f7c string
// GLOBAL s_cState_ZoraSpring_00106dd8 string

undefined4 * func_00106714(undefined4 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  puVar3 = func_0010A794(param_1);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  puVar3[10] = 0;
  *(undefined2 *)(puVar3 + 0xb) = 0;
  *(undefined1 *)((int)puVar3 + 0x2e) = 0;
  *(undefined1 *)(puVar3 + 0xc) = 0;
  puVar3[0xd] = 0;
  *(undefined2 *)(puVar3 + 0xe) = 0;
  *(undefined1 *)((int)puVar3 + 0x3a) = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0xffffffff;
  puVar3[0x12] = 0xffffffff;
  puVar3[0x13] = 0xffffffff;
  puVar3[0x14] = 0xffffffff;
  puVar3[0x15] = 0;
  iVar4 = func_00100118((int)(puVar3 + 0x16),DAT_00106cc4,4,3);
  *(undefined4 *)(iVar4 + 0xc) = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x20);
  puVar3 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar3 = func_0010B85C(puVar5);
  }
  *(undefined4 **)(iVar4 + 0x10) = puVar3;
  iVar6 = func_0010BAB4(0x28);
  pvVar7 = (void *)0x0;
  if (iVar6 != 0) {
    pvVar7 = func_0010B930(iVar6);
  }
  *(void **)(iVar4 + 0x14) = pvVar7;
  puVar5 = (undefined4 *)func_0010BAB4(0x20);
  puVar3 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar3 = func_0010B85C(puVar5);
  }
  *(undefined4 **)(iVar4 + 0x18) = puVar3;
  puVar3 = (undefined4 *)func_0010BAB4(0x14);
  uVar8 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    uVar8 = func_0010B8F0(puVar3);
  }
  *(undefined4 *)(iVar4 + 0x1c) = uVar8;
  puVar5 = func_0010A464((undefined4 *)(iVar4 + 0x20));
  *(undefined1 *)(puVar5 + 0x18) = 0;
  *(undefined1 *)((int)puVar5 + 0x61) = 0;
  *(undefined1 *)((int)puVar5 + 0x62) = 0;
  *(undefined1 *)((int)puVar5 + 99) = 1;
  puVar10 = puVar5 + -0x1e;
  *(undefined1 *)((int)puVar5 + -0x72) = 0x13;
  puVar5[-0x19] = puVar10;
  iVar4 = func_0010BA78(0x130);
  puVar5[-0x18] = iVar4;
  puVar2 = DAT_00106cc8;
  iVar6 = 0x13;
  puVar5[-0x17] = iVar4 + (uint)*(byte *)((int)puVar5 + -0x72) * 8;
  puVar3 = (undefined4 *)(iVar4 + -8);
  do {
    uVar8 = *(undefined4 *)((int)puVar2 + 4);
    puVar3[2] = *(undefined4 *)puVar2;
    puVar3[3] = uVar8;
    iVar6 = iVar6 + -1;
    uVar8 = *(undefined4 *)((int)puVar2 + 4);
    puVar3[4] = *(undefined4 *)puVar2;
    puVar3[5] = uVar8;
    puVar3 = puVar3 + 4;
  } while (iVar6 != 0);
  bVar1 = *(byte *)((int)puVar5 + -0x72);
  uVar11 = (uint)bVar1;
  puVar3 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar5[-0x16] = puVar3;
  if (uVar11 != 0) {
    puVar9 = puVar3 + -2;
    if ((bVar1 & 1) != 0) {
      uVar8 = *(undefined4 *)((int)puVar2 + 0x14);
      *puVar3 = *(undefined4 *)(puVar2 + 2);
      puVar3[1] = uVar8;
      puVar9 = puVar3;
    }
    for (iVar4 = (int)uVar11 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar8 = *(undefined4 *)((int)puVar2 + 0x14);
      puVar9[2] = *(undefined4 *)(puVar2 + 2);
      puVar9[3] = uVar8;
      uVar8 = *(undefined4 *)((int)puVar2 + 0x14);
      puVar9[4] = *(undefined4 *)(puVar2 + 2);
      puVar9[5] = uVar8;
      puVar9 = puVar9 + 4;
    }
  }
  puVar3 = (undefined4 *)func_0010CEE0(0x2b4,(int *)0x0,4);
  iVar4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0x24;
    puVar3[1] = 0x13;
    iVar4 = func_00100118((int)(puVar3 + 2),DAT_00106ccc,0x24,0x13);
  }
  if (iVar4 != 0) {
    puVar5[-0x1b] = iVar4;
    puVar5[-0x1c] = 0x13;
  }
  iVar4 = DAT_00106cdc;
  local_2c = s_cState_Exit_00106cd0;
  local_30 = DAT_00106cdc;
  func_0010BEC4((int)puVar10,0,&local_30);
  puVar3 = (undefined4 *)puVar5[-0x18];
  uVar8 = *(undefined4 *)((int)puVar2 + 4);
  uVar12 = *(undefined4 *)(puVar2 + 1);
  uVar13 = *(undefined4 *)((int)puVar2 + 0xc);
  uVar16 = puVar2[2];
  *puVar3 = *(undefined4 *)puVar2;
  puVar3[1] = uVar8;
  puVar3 = (undefined4 *)puVar5[-0x17];
  *puVar3 = uVar12;
  puVar3[1] = uVar13;
  puVar3 = (undefined4 *)puVar5[-0x16];
  *puVar3 = (int)uVar16;
  puVar3[1] = (int)((ulonglong)uVar16 >> 0x20);
  local_2c = s_cState_Normal_00106ce0;
  local_30 = iVar4;
  func_0010BEC4((int)puVar10,1,&local_30);
  iVar6 = puVar5[-0x18];
  uVar17 = *puVar2;
  uVar8 = *(undefined4 *)(puVar2 + 3);
  uVar12 = *(undefined4 *)((int)puVar2 + 0x1c);
  *(int *)(iVar6 + 8) = (int)uVar17;
  *(int *)(iVar6 + 0xc) = (int)((ulonglong)uVar17 >> 0x20);
  iVar6 = puVar5[-0x17];
  *(undefined4 *)(iVar6 + 8) = uVar8;
  *(undefined4 *)(iVar6 + 0xc) = uVar12;
  iVar6 = puVar5[-0x16];
  *(int *)(iVar6 + 8) = (int)uVar16;
  *(int *)(iVar6 + 0xc) = (int)((ulonglong)uVar16 >> 0x20);
  local_2c = s_cState_Demo_00106cf0;
  local_30 = iVar4;
  func_0010BEC4((int)puVar10,2,&local_30);
  iVar6 = puVar5[-0x18];
  uVar8 = *(undefined4 *)(puVar2 + 4);
  uVar12 = *(undefined4 *)((int)puVar2 + 0x24);
  *(int *)(iVar6 + 0x10) = (int)uVar17;
  *(int *)(iVar6 + 0x14) = (int)((ulonglong)uVar17 >> 0x20);
  iVar6 = puVar5[-0x17];
  *(undefined4 *)(iVar6 + 0x10) = uVar8;
  *(undefined4 *)(iVar6 + 0x14) = uVar12;
  iVar6 = puVar5[-0x16];
  *(int *)(iVar6 + 0x10) = (int)uVar16;
  *(int *)(iVar6 + 0x14) = (int)((ulonglong)uVar16 >> 0x20);
  local_2c = s_cState_DungeonEast_00106cfc;
  local_30 = iVar4;
  func_0010BEC4((int)puVar10,3,&local_30);
  iVar6 = puVar5[-0x18];
  uVar8 = *(undefined4 *)(puVar2 + 5);
  uVar12 = *(undefined4 *)((int)puVar2 + 0x2c);
  *(int *)(iVar6 + 0x18) = (int)uVar17;
  *(int *)(iVar6 + 0x1c) = (int)((ulonglong)uVar17 >> 0x20);
  iVar6 = puVar5[-0x17];
  *(undefined4 *)(iVar6 + 0x18) = uVar8;
  *(undefined4 *)(iVar6 + 0x1c) = uVar12;
  iVar6 = puVar5[-0x16];
  *(int *)(iVar6 + 0x18) = (int)uVar16;
  *(int *)(iVar6 + 0x1c) = (int)((ulonglong)uVar16 >> 0x20);
  local_2c = s_cState_DungeonWind_00106d10;
  local_30 = iVar4;
  func_0010BEC4((int)puVar10,4,&local_30);
  iVar6 = puVar5[-0x18];
  uVar8 = *(undefined4 *)(puVar2 + 6);
  uVar12 = *(undefined4 *)((int)puVar2 + 0x34);
  *(int *)(iVar6 + 0x20) = (int)uVar17;
  *(int *)(iVar6 + 0x24) = (int)((ulonglong)uVar17 >> 0x20);
  iVar6 = puVar5[-0x17];
  *(undefined4 *)(iVar6 + 0x20) = uVar8;
  *(undefined4 *)(iVar6 + 0x24) = uVar12;
  iVar6 = puVar5[-0x16];
  *(int *)(iVar6 + 0x20) = (int)uVar16;
  *(int *)(iVar6 + 0x24) = (int)((ulonglong)uVar16 >> 0x20);
  local_2c = s_cState_DungeonHera_00106d24;
  local_30 = iVar4;
  func_0010BEC4((int)puVar10,5,&local_30);
  iVar6 = puVar5[-0x18];
  uVar8 = *(undefined4 *)(puVar2 + 7);
  uVar12 = *(undefined4 *)((int)puVar2 + 0x3c);
  *(int *)(iVar6 + 0x28) = (int)uVar17;
  *(int *)(iVar6 + 0x2c) = (int)((ulonglong)uVar17 >> 0x20);
  iVar6 = puVar5[-0x17];
  *(undefined4 *)(iVar6 + 0x28) = uVar8;
  *(undefined4 *)(iVar6 + 0x2c) = uVar12;
  iVar6 = puVar5[-0x16];
  *(int *)(iVar6 + 0x28) = (int)uVar16;
  *(int *)(iVar6 + 0x2c) = (int)((ulonglong)uVar16 >> 0x20);
  local_2c = s_cState_DungeonCastle_00106d38;
  local_30 = iVar4;
  func_0010BEC4((int)puVar10,6,&local_30);
  iVar6 = puVar5[-0x18];
  uVar8 = *(undefined4 *)(puVar2 + 8);
  uVar12 = *(undefined4 *)((int)puVar2 + 0x44);
  *(int *)(iVar6 + 0x30) = (int)uVar17;
  *(int *)(iVar6 + 0x34) = (int)((ulonglong)uVar17 >> 0x20);
  iVar6 = puVar5[-0x17];
  *(undefined4 *)(iVar6 + 0x30) = uVar8;
  *(undefined4 *)(iVar6 + 0x34) = uVar12;
  iVar6 = puVar5[-0x16];
  *(int *)(iVar6 + 0x30) = (int)uVar16;
  *(int *)(iVar6 + 0x34) = (int)((ulonglong)uVar16 >> 0x20);
  local_2c = s_cState_CastleHyrule_00106d50;
  local_30 = iVar4;
  func_0010BEC4((int)puVar10,7,&local_30);
  iVar6 = puVar5[-0x18];
  uVar8 = *(undefined4 *)(puVar2 + 9);
  uVar12 = *(undefined4 *)((int)puVar2 + 0x4c);
  *(int *)(iVar6 + 0x38) = (int)uVar17;
  *(int *)(iVar6 + 0x3c) = (int)((ulonglong)uVar17 >> 0x20);
  iVar6 = puVar5[-0x17];
  *(undefined4 *)(iVar6 + 0x38) = uVar8;
  *(undefined4 *)(iVar6 + 0x3c) = uVar12;
  iVar6 = puVar5[-0x16];
  *(int *)(iVar6 + 0x38) = (int)uVar16;
  *(int *)(iVar6 + 0x3c) = (int)((ulonglong)uVar16 >> 0x20);
  local_2c = s_cState_WalkwayHyrule_00106d64;
  local_30 = iVar4;
  func_0010BEC4((int)puVar10,8,&local_30);
  iVar6 = puVar5[-0x18];
  uVar8 = *(undefined4 *)(puVar2 + 10);
  uVar12 = *(undefined4 *)((int)puVar2 + 0x54);
  *(int *)(iVar6 + 0x40) = (int)uVar17;
  *(int *)(iVar6 + 0x44) = (int)((ulonglong)uVar17 >> 0x20);
  iVar6 = puVar5[-0x17];
  *(undefined4 *)(iVar6 + 0x40) = uVar8;
  *(undefined4 *)(iVar6 + 0x44) = uVar12;
  iVar6 = puVar5[-0x16];
  *(int *)(iVar6 + 0x40) = (int)uVar16;
  *(int *)(iVar6 + 0x44) = (int)((ulonglong)uVar16 >> 0x20);
  local_2c = s_cState_WalkwayLowrule_00106d7c;
  local_30 = iVar4;
  func_0010BEC4((int)puVar10,9,&local_30);
  iVar6 = puVar5[-0x18];
  uVar8 = *(undefined4 *)(puVar2 + 0xb);
  uVar12 = *(undefined4 *)((int)puVar2 + 0x5c);
  *(int *)(iVar6 + 0x48) = (int)uVar17;
  *(int *)(iVar6 + 0x4c) = (int)((ulonglong)uVar17 >> 0x20);
  iVar6 = puVar5[-0x17];
  *(undefined4 *)(iVar6 + 0x48) = uVar8;
  *(undefined4 *)(iVar6 + 0x4c) = uVar12;
  iVar6 = puVar5[-0x16];
  *(int *)(iVar6 + 0x48) = (int)uVar16;
  *(int *)(iVar6 + 0x4c) = (int)((ulonglong)uVar16 >> 0x20);
  local_2c = s_cState_ForestSword_00106d94;
  local_30 = iVar4;
  func_0010BEC4((int)puVar10,10,&local_30);
  iVar6 = puVar5[-0x18];
  uVar8 = *(undefined4 *)(puVar2 + 0xc);
  uVar12 = *(undefined4 *)((int)puVar2 + 100);
  *(int *)(iVar6 + 0x50) = (int)uVar17;
  *(int *)(iVar6 + 0x54) = (int)((ulonglong)uVar17 >> 0x20);
  iVar6 = puVar5[-0x17];
  *(undefined4 *)(iVar6 + 0x50) = uVar8;
  *(undefined4 *)(iVar6 + 0x54) = uVar12;
  iVar6 = puVar5[-0x16];
  *(int *)(iVar6 + 0x50) = (int)uVar16;
  *(int *)(iVar6 + 0x54) = (int)((ulonglong)uVar16 >> 0x20);
  local_2c = s_cState_ForestSwordEpilogue_00106da8;
  local_30 = iVar4;
  func_0010BEC4((int)puVar10,0xb,&local_30);
  iVar6 = puVar5[-0x18];
  uVar8 = *(undefined4 *)((int)puVar2 + 0x6c);
  uVar12 = *(undefined4 *)(puVar2 + 0xe);
  uVar13 = *(undefined4 *)((int)puVar2 + 0x74);
  uVar14 = *(undefined4 *)(puVar2 + 0xf);
  uVar15 = *(undefined4 *)((int)puVar2 + 0x7c);
  *(undefined4 *)(iVar6 + 0x58) = *(undefined4 *)(puVar2 + 0xd);
  *(undefined4 *)(iVar6 + 0x5c) = uVar8;
  iVar6 = puVar5[-0x17];
  *(undefined4 *)(iVar6 + 0x58) = uVar12;
  *(undefined4 *)(iVar6 + 0x5c) = uVar13;
  iVar6 = puVar5[-0x16];
  *(undefined4 *)(iVar6 + 0x58) = uVar14;
  *(undefined4 *)(iVar6 + 0x5c) = uVar15;
  local_2c = s_cState_HolyPlace_00106dc4;
  local_30 = iVar4;
  func_0010BEC4((int)puVar10,0xc,&local_30);
  uVar14 = *(undefined4 *)puVar2;
  uVar15 = *(undefined4 *)((int)puVar2 + 4);
  iVar6 = puVar5[-0x18];
  uVar8 = *(undefined4 *)(puVar2 + 0x10);
  uVar12 = *(undefined4 *)((int)puVar2 + 0x84);
  uVar18 = *(undefined4 *)(puVar2 + 2);
  uVar13 = *(undefined4 *)((int)puVar2 + 0x14);
  *(undefined4 *)(iVar6 + 0x60) = uVar14;
  *(undefined4 *)(iVar6 + 100) = uVar15;
  iVar6 = puVar5[-0x17];
  *(undefined4 *)(iVar6 + 0x60) = uVar8;
  *(undefined4 *)(iVar6 + 100) = uVar12;
  iVar6 = puVar5[-0x16];
  *(undefined4 *)(iVar6 + 0x60) = uVar18;
  *(undefined4 *)(iVar6 + 100) = uVar13;
  local_2c = s_cState_ZoraSpring_00106dd8;
  local_30 = iVar4;
  func_0010BEC4((int)puVar10,0xd,&local_30);
  iVar6 = puVar5[-0x18];
  uVar8 = *(undefined4 *)(puVar2 + 0x11);
  uVar12 = *(undefined4 *)((int)puVar2 + 0x8c);
  *(undefined4 *)(iVar6 + 0x68) = uVar14;
  *(undefined4 *)(iVar6 + 0x6c) = uVar15;
  iVar6 = puVar5[-0x17];
  *(undefined4 *)(iVar6 + 0x68) = uVar8;
  *(undefined4 *)(iVar6 + 0x6c) = uVar12;
  iVar6 = puVar5[-0x16];
  *(undefined4 *)(iVar6 + 0x68) = uVar18;
  *(undefined4 *)(iVar6 + 0x6c) = uVar13;
  local_2c = s_cState_WaterFallPre_00106f68;
  local_30 = iVar4;
  func_0010BEC4((int)puVar10,0xe,&local_30);
  iVar6 = puVar5[-0x18];
  uVar8 = *(undefined4 *)(puVar2 + 0x12);
  uVar12 = *(undefined4 *)((int)puVar2 + 0x94);
  *(undefined4 *)(iVar6 + 0x70) = uVar14;
  *(undefined4 *)(iVar6 + 0x74) = uVar15;
  iVar6 = puVar5[-0x17];
  *(undefined4 *)(iVar6 + 0x70) = uVar8;
  *(undefined4 *)(iVar6 + 0x74) = uVar12;
  iVar6 = puVar5[-0x16];
  *(undefined4 *)(iVar6 + 0x70) = uVar18;
  *(undefined4 *)(iVar6 + 0x74) = uVar13;
  local_2c = s_cState_WaterFall_00106f7c;
  local_30 = iVar4;
  func_0010BEC4((int)puVar10,0xf,&local_30);
  iVar6 = puVar5[-0x18];
  uVar8 = *(undefined4 *)(puVar2 + 0x13);
  uVar12 = *(undefined4 *)((int)puVar2 + 0x9c);
  *(undefined4 *)(iVar6 + 0x78) = uVar14;
  *(undefined4 *)(iVar6 + 0x7c) = uVar15;
  iVar6 = puVar5[-0x17];
  *(undefined4 *)(iVar6 + 0x78) = uVar8;
  *(undefined4 *)(iVar6 + 0x7c) = uVar12;
  iVar6 = puVar5[-0x16];
  *(undefined4 *)(iVar6 + 0x78) = uVar18;
  *(undefined4 *)(iVar6 + 0x7c) = uVar13;
  local_2c = s_cState_Mountain_00106f90;
  local_30 = iVar4;
  func_0010BEC4((int)puVar10,0x10,&local_30);
  iVar6 = puVar5[-0x18];
  uVar8 = *(undefined4 *)(puVar2 + 0x14);
  uVar12 = *(undefined4 *)((int)puVar2 + 0xa4);
  *(undefined4 *)(iVar6 + 0x80) = uVar14;
  *(undefined4 *)(iVar6 + 0x84) = uVar15;
  iVar6 = puVar5[-0x17];
  *(undefined4 *)(iVar6 + 0x80) = uVar8;
  *(undefined4 *)(iVar6 + 0x84) = uVar12;
  iVar6 = puVar5[-0x16];
  *(undefined4 *)(iVar6 + 0x80) = uVar18;
  *(undefined4 *)(iVar6 + 0x84) = uVar13;
  local_2c = s_cState_Volcano_00106fa0;
  local_30 = iVar4;
  func_0010BEC4((int)puVar10,0x11,&local_30);
  iVar6 = puVar5[-0x18];
  uVar8 = *(undefined4 *)(puVar2 + 0x15);
  uVar12 = *(undefined4 *)((int)puVar2 + 0xac);
  *(undefined4 *)(iVar6 + 0x88) = uVar14;
  *(undefined4 *)(iVar6 + 0x8c) = uVar15;
  iVar6 = puVar5[-0x17];
  *(undefined4 *)(iVar6 + 0x88) = uVar8;
  *(undefined4 *)(iVar6 + 0x8c) = uVar12;
  iVar6 = puVar5[-0x16];
  *(undefined4 *)(iVar6 + 0x88) = uVar18;
  *(undefined4 *)(iVar6 + 0x8c) = uVar13;
  local_2c = s_cState_UnderBridge_00106fb0;
  local_30 = iVar4;
  func_0010BEC4((int)puVar10,0x12,&local_30);
  iVar4 = puVar5[-0x18];
  uVar8 = *(undefined4 *)(puVar2 + 0x16);
  uVar12 = *(undefined4 *)((int)puVar2 + 0xb4);
  *(undefined4 *)(iVar4 + 0x90) = uVar14;
  *(undefined4 *)(iVar4 + 0x94) = uVar15;
  iVar4 = puVar5[-0x17];
  *(undefined4 *)(iVar4 + 0x90) = uVar8;
  *(undefined4 *)(iVar4 + 0x94) = uVar12;
  iVar4 = puVar5[-0x16];
  *(undefined4 *)(iVar4 + 0x90) = uVar18;
  *(undefined4 *)(iVar4 + 0x94) = uVar13;
  func_0010BB50(puVar10,0);
  puVar5[-8] = 0;
  puVar5[-7] = 0;
  puVar5[-6] = 0;
  return puVar10;
}

