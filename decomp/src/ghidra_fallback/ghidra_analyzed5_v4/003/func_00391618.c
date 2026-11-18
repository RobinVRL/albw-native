// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern int func_004ECF6C(int param_1);
extern int func_00668058(undefined4 *param_1,undefined1 param_2);
extern int DAT_00391b60;
extern undefined4 *DAT_00391b64;
extern undefined *DAT_00391b68;
extern int DAT_00391b6c;
extern int DAT_00391b84;
extern undefined DAT_00391c70;
extern char s_cState_AppearPlayer_00391b70[];
extern char s_cState_AppearSage_00391b88[];
extern char s_cState_AppearTriForceBrave_00391b9c[];
extern char s_cState_AppearTriForce_00391bf8[];
extern char s_cState_AppearWarpHole_00391bb8[];
extern char s_cState_GetEndTriForce_00391c58[];
extern char s_cState_GetTriForce_00391c44[];
extern char s_cState_PlayerExit_00391be4[];
extern char s_cState_PlayerFree_00391bd0[];
extern char s_cState_RiseEndTriForce_00391c10[];
extern char s_cState_RiseSagesPlaceStep_00391c28[];

// USA 00391618 <- EU 003915F4 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_00391b60 int
// GLOBAL DAT_00391b64 undefined4 *
// GLOBAL DAT_00391b68 undefined *
// GLOBAL DAT_00391b6c int
// GLOBAL DAT_00391b84 int
// GLOBAL DAT_00391c70 undefined
// GLOBAL s_cState_AppearPlayer_00391b70 string
// GLOBAL s_cState_AppearSage_00391b88 string
// GLOBAL s_cState_AppearTriForceBrave_00391b9c string
// GLOBAL s_cState_AppearTriForce_00391bf8 string
// GLOBAL s_cState_AppearWarpHole_00391bb8 string
// GLOBAL s_cState_GetEndTriForce_00391c58 string
// GLOBAL s_cState_GetTriForce_00391c44 string
// GLOBAL s_cState_PlayerExit_00391be4 string
// GLOBAL s_cState_PlayerFree_00391bd0 string
// GLOBAL s_cState_RiseEndTriForce_00391c10 string
// GLOBAL s_cState_RiseSagesPlaceStep_00391c28 string

undefined4 * func_00391618(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define iStack_30 (*(int *)(albw_frame + 0x0))
  #define pcStack_2c (*(char * *)(albw_frame + 0x4))
  piVar2 = func_00150E40(param_1,param_2);
  iVar5 = DAT_00391b60;
  piVar2[200] = DAT_00391b60 + 0x54;
  *piVar2 = iVar5;
  puVar3 = func_002E1BB4(piVar2 + 0x103,0);
  puVar3 = func_002E1BB4(puVar3 + 2,0);
  *(undefined1 *)(puVar3 + 2) = 0;
  *(undefined1 *)((int)puVar3 + 9) = 0;
  *(undefined1 *)((int)puVar3 + 10) = 0;
  puVar4 = func_0010A794(puVar3 + 3);
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar10 = puVar4 + -0x108;
  puVar4[8] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x1b] = 0;
  puVar4[0x1c] = 0;
  puVar4[0x25] = 0;
  puVar4[0x26] = 0;
  puVar4[0x27] = 0;
  puVar4[0x28] = 0;
  puVar4[0x2a] = 0;
  puVar4[0x2d] = 0;
  puVar4[0x2e] = 0;
  puVar4[0x2f] = 0;
  *(undefined1 *)((int)puVar4 + 6) = 0xb;
  puVar4[5] = puVar10;
  iVar5 = func_0010BA78(0xb0);
  puVar4[6] = iVar5;
  puVar3 = DAT_00391b64;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar6 = 0xb;
  puVar7 = (undefined4 *)(iVar5 + -8);
  do {
    uVar12 = puVar3[0x2f];
    iVar6 = iVar6 + -1;
    puVar7[2] = puVar3[0x2e];
    puVar7[3] = uVar12;
    uVar12 = puVar3[0x2f];
    puVar7[4] = puVar3[0x2e];
    puVar7[5] = uVar12;
    puVar7 = puVar7 + 4;
  } while (iVar6 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar11 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar4[8] = puVar7;
  if (uVar11 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = puVar3[5];
      *puVar7 = puVar3[4];
      puVar7[1] = uVar12;
      puVar8 = puVar7;
    }
    for (iVar5 = (int)uVar11 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar12 = puVar3[5];
      puVar8[2] = puVar3[4];
      puVar8[3] = uVar12;
      uVar12 = puVar3[5];
      puVar8[4] = puVar3[4];
      puVar8[5] = uVar12;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x194,(int *)0x0,4);
  iVar5 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 0xb;
    iVar5 = func_00100118((int)(puVar7 + 2),DAT_00391b68,0x24,0xb);
  }
  if (iVar5 != 0) {
    puVar4[2] = 0xb;
    puVar4[3] = iVar5;
  }
  iVar5 = DAT_00391b6c;
  puVar4[-0x33] = puVar4;
  iVar6 = DAT_00391b84;
  *(undefined2 *)(iVar5 + (int)puVar10) = 0xb;
  pcStack_2c = s_cState_AppearPlayer_00391b70;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar4,0,&iStack_30);
  puVar7 = (undefined4 *)puVar4[6];
  uVar13 = puVar3[1];
  uVar12 = puVar3[2];
  uVar9 = puVar3[3];
  uVar14 = *(undefined8 *)(puVar3 + 4);
  *puVar7 = *puVar3;
  puVar7[1] = uVar13;
  puVar7 = (undefined4 *)puVar4[7];
  *puVar7 = uVar12;
  puVar7[1] = uVar9;
  puVar7 = (undefined4 *)puVar4[8];
  *puVar7 = (int)uVar14;
  puVar7[1] = (int)((ulonglong)uVar14 >> 0x20);
  pcStack_2c = s_cState_AppearSage_00391b88;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar4,1,&iStack_30);
  iVar5 = puVar4[6];
  uVar13 = puVar3[7];
  uVar12 = puVar3[8];
  uVar9 = puVar3[9];
  *(undefined4 *)(iVar5 + 8) = puVar3[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar13;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar12;
  *(undefined4 *)(iVar5 + 0xc) = uVar9;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 8) = (int)uVar14;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar14 >> 0x20);
  pcStack_2c = s_cState_AppearTriForceBrave_00391b9c;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar4,2,&iStack_30);
  iVar5 = puVar4[6];
  uVar9 = puVar3[0xb];
  uVar13 = puVar3[0xc];
  uVar12 = puVar3[0xd];
  *(undefined4 *)(iVar5 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar13;
  *(undefined4 *)(iVar5 + 0x14) = uVar12;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x10) = (int)uVar14;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar14 >> 0x20);
  pcStack_2c = s_cState_AppearWarpHole_00391bb8;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar4,3,&iStack_30);
  iVar5 = puVar4[6];
  uVar12 = puVar3[0xf];
  uVar9 = puVar3[0x10];
  uVar13 = puVar3[0x11];
  *(undefined4 *)(iVar5 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar5 + 0x1c) = uVar12;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x18) = uVar9;
  *(undefined4 *)(iVar5 + 0x1c) = uVar13;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x18) = (int)uVar14;
  *(int *)(iVar5 + 0x1c) = (int)((ulonglong)uVar14 >> 0x20);
  pcStack_2c = s_cState_PlayerFree_00391bd0;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar4,4,&iStack_30);
  iVar5 = puVar4[6];
  uVar12 = puVar3[0x14];
  uVar13 = puVar3[0x15];
  uVar9 = puVar3[0x13];
  *(undefined4 *)(iVar5 + 0x20) = puVar3[0x12];
  *(undefined4 *)(iVar5 + 0x24) = uVar9;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x20) = uVar12;
  *(undefined4 *)(iVar5 + 0x24) = uVar13;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x20) = (int)uVar14;
  *(int *)(iVar5 + 0x24) = (int)((ulonglong)uVar14 >> 0x20);
  pcStack_2c = s_cState_PlayerExit_00391be4;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar4,5,&iStack_30);
  iVar5 = puVar4[6];
  uVar12 = puVar3[0x17];
  uVar9 = puVar3[0x18];
  uVar13 = puVar3[0x19];
  *(undefined4 *)(iVar5 + 0x28) = puVar3[0x16];
  *(undefined4 *)(iVar5 + 0x2c) = uVar12;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x28) = uVar9;
  *(undefined4 *)(iVar5 + 0x2c) = uVar13;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x28) = (int)uVar14;
  *(int *)(iVar5 + 0x2c) = (int)((ulonglong)uVar14 >> 0x20);
  pcStack_2c = s_cState_AppearTriForce_00391bf8;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar4,6,&iStack_30);
  iVar5 = puVar4[6];
  uVar12 = puVar3[0x1b];
  uVar9 = puVar3[0x1c];
  uVar13 = puVar3[0x1d];
  *(undefined4 *)(iVar5 + 0x30) = puVar3[0x1a];
  *(undefined4 *)(iVar5 + 0x34) = uVar12;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x30) = uVar9;
  *(undefined4 *)(iVar5 + 0x34) = uVar13;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x30) = (int)uVar14;
  *(int *)(iVar5 + 0x34) = (int)((ulonglong)uVar14 >> 0x20);
  pcStack_2c = s_cState_RiseEndTriForce_00391c10;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar4,7,&iStack_30);
  iVar5 = puVar4[6];
  uVar12 = puVar3[0x1f];
  uVar9 = puVar3[0x20];
  uVar13 = puVar3[0x21];
  *(undefined4 *)(iVar5 + 0x38) = puVar3[0x1e];
  *(undefined4 *)(iVar5 + 0x3c) = uVar12;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x38) = uVar9;
  *(undefined4 *)(iVar5 + 0x3c) = uVar13;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x38) = (int)uVar14;
  *(int *)(iVar5 + 0x3c) = (int)((ulonglong)uVar14 >> 0x20);
  pcStack_2c = s_cState_RiseSagesPlaceStep_00391c28;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar4,8,&iStack_30);
  iVar5 = puVar4[6];
  uVar12 = puVar3[0x23];
  uVar9 = puVar3[0x24];
  uVar13 = puVar3[0x25];
  *(undefined4 *)(iVar5 + 0x40) = puVar3[0x22];
  *(undefined4 *)(iVar5 + 0x44) = uVar12;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x40) = uVar9;
  *(undefined4 *)(iVar5 + 0x44) = uVar13;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x40) = (int)uVar14;
  *(int *)(iVar5 + 0x44) = (int)((ulonglong)uVar14 >> 0x20);
  pcStack_2c = s_cState_GetTriForce_00391c44;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar4,9,&iStack_30);
  iVar5 = puVar4[6];
  uVar9 = puVar3[0x27];
  uVar12 = puVar3[0x28];
  uVar13 = puVar3[0x29];
  *(undefined4 *)(iVar5 + 0x48) = puVar3[0x26];
  *(undefined4 *)(iVar5 + 0x4c) = uVar9;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x48) = uVar12;
  *(undefined4 *)(iVar5 + 0x4c) = uVar13;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x48) = (int)uVar14;
  *(int *)(iVar5 + 0x4c) = (int)((ulonglong)uVar14 >> 0x20);
  pcStack_2c = s_cState_GetEndTriForce_00391c58;
  iStack_30 = iVar6;
  func_0010BEC4((int)puVar4,10,&iStack_30);
  iVar5 = puVar4[6];
  uVar9 = puVar3[0x2b];
  uVar12 = puVar3[0x2c];
  uVar13 = puVar3[0x2d];
  *(undefined4 *)(iVar5 + 0x50) = puVar3[0x2a];
  *(undefined4 *)(iVar5 + 0x54) = uVar9;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x50) = uVar12;
  *(undefined4 *)(iVar5 + 0x54) = uVar13;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x50) = (int)uVar14;
  *(int *)(iVar5 + 0x54) = (int)((ulonglong)uVar14 >> 0x20);
  func_00668058(puVar4,0);
  puVar3 = (undefined4 *)func_0010BAB4(0x108);
  uVar12 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    pcStack_2c = &DAT_00391c70;
    iStack_30 = iVar6;
    uVar12 = func_001663BC(puVar3,&iStack_30,puVar4[-0x55],0,1);
  }
  puVar4[0x30] = uVar12;
  func_004ECF6C((int)puVar10);
  return puVar10;
}

