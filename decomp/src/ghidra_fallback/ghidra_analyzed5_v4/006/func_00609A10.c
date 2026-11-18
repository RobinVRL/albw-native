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
extern undefined4 DAT_00609a10;
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

// USA 00609A10 <- EU 006099E8 (Ghidra, non-matching)
// GLOBAL DAT_00391b60 int
// GLOBAL DAT_00391b64 undefined4 *
// GLOBAL DAT_00391b68 undefined *
// GLOBAL DAT_00391b6c int
// GLOBAL DAT_00391b84 int
// GLOBAL DAT_00391c70 undefined
// GLOBAL DAT_00609a10 undefined4
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

undefined4 * func_00609A10(uint *param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
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
  puVar8 = (undefined4 *)func_0010BAB4(DAT_00609a10);
  if (puVar8 != (undefined4 *)0x0) {
    piVar2 = func_00150E40(puVar8,param_1);
    iVar4 = DAT_00391b60;
    piVar2[200] = DAT_00391b60 + 0x54;
    *piVar2 = iVar4;
    puVar8 = func_002E1BB4(piVar2 + 0x103,0);
    puVar8 = func_002E1BB4(puVar8 + 2,0);
    *(undefined1 *)(puVar8 + 2) = 0;
    *(undefined1 *)((int)puVar8 + 9) = 0;
    *(undefined1 *)((int)puVar8 + 10) = 0;
    puVar3 = func_0010A794(puVar8 + 3);
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar10 = puVar3 + -0x108;
    puVar3[8] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x25] = 0;
    puVar3[0x26] = 0;
    puVar3[0x27] = 0;
    puVar3[0x28] = 0;
    puVar3[0x2a] = 0;
    puVar3[0x2d] = 0;
    puVar3[0x2e] = 0;
    puVar3[0x2f] = 0;
    *(undefined1 *)((int)puVar3 + 6) = 0xb;
    puVar3[5] = puVar10;
    iVar4 = func_0010BA78(0xb0);
    puVar3[6] = iVar4;
    puVar8 = DAT_00391b64;
    puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
    iVar5 = 0xb;
    puVar6 = (undefined4 *)(iVar4 + -8);
    do {
      uVar12 = puVar8[0x2f];
      iVar5 = iVar5 + -1;
      puVar6[2] = puVar8[0x2e];
      puVar6[3] = uVar12;
      uVar12 = puVar8[0x2f];
      puVar6[4] = puVar8[0x2e];
      puVar6[5] = uVar12;
      puVar6 = puVar6 + 4;
    } while (iVar5 != 0);
    bVar1 = *(byte *)((int)puVar3 + 6);
    uVar11 = (uint)bVar1;
    puVar6 = (undefined4 *)func_0010BA78(uVar11 << 3);
    puVar3[8] = puVar6;
    if (uVar11 != 0) {
      puVar7 = puVar6 + -2;
      if ((bVar1 & 1) != 0) {
        uVar12 = puVar8[5];
        *puVar6 = puVar8[4];
        puVar6[1] = uVar12;
        puVar7 = puVar6;
      }
      for (iVar4 = (int)uVar11 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar12 = puVar8[5];
        puVar7[2] = puVar8[4];
        puVar7[3] = uVar12;
        uVar12 = puVar8[5];
        puVar7[4] = puVar8[4];
        puVar7[5] = uVar12;
        puVar7 = puVar7 + 4;
      }
    }
    puVar6 = (undefined4 *)func_0010CEE0(0x194,(int *)0x0,4);
    iVar4 = 0;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0x24;
      puVar6[1] = 0xb;
      iVar4 = func_00100118((int)(puVar6 + 2),DAT_00391b68,0x24,0xb);
    }
    if (iVar4 != 0) {
      puVar3[2] = 0xb;
      puVar3[3] = iVar4;
    }
    iVar4 = DAT_00391b6c;
    puVar3[-0x33] = puVar3;
    iVar5 = DAT_00391b84;
    *(undefined2 *)(iVar4 + (int)puVar10) = 0xb;
    pcStack_2c = s_cState_AppearPlayer_00391b70;
    iStack_30 = iVar5;
    func_0010BEC4((int)puVar3,0,&iStack_30);
    puVar6 = (undefined4 *)puVar3[6];
    uVar13 = puVar8[1];
    uVar12 = puVar8[2];
    uVar9 = puVar8[3];
    uVar14 = *(undefined8 *)(puVar8 + 4);
    *puVar6 = *puVar8;
    puVar6[1] = uVar13;
    puVar6 = (undefined4 *)puVar3[7];
    *puVar6 = uVar12;
    puVar6[1] = uVar9;
    puVar6 = (undefined4 *)puVar3[8];
    *puVar6 = (int)uVar14;
    puVar6[1] = (int)((ulonglong)uVar14 >> 0x20);
    pcStack_2c = s_cState_AppearSage_00391b88;
    iStack_30 = iVar5;
    func_0010BEC4((int)puVar3,1,&iStack_30);
    iVar4 = puVar3[6];
    uVar13 = puVar8[7];
    uVar12 = puVar8[8];
    uVar9 = puVar8[9];
    *(undefined4 *)(iVar4 + 8) = puVar8[6];
    *(undefined4 *)(iVar4 + 0xc) = uVar13;
    iVar4 = puVar3[7];
    *(undefined4 *)(iVar4 + 8) = uVar12;
    *(undefined4 *)(iVar4 + 0xc) = uVar9;
    iVar4 = puVar3[8];
    *(int *)(iVar4 + 8) = (int)uVar14;
    *(int *)(iVar4 + 0xc) = (int)((ulonglong)uVar14 >> 0x20);
    pcStack_2c = s_cState_AppearTriForceBrave_00391b9c;
    iStack_30 = iVar5;
    func_0010BEC4((int)puVar3,2,&iStack_30);
    iVar4 = puVar3[6];
    uVar9 = puVar8[0xb];
    uVar13 = puVar8[0xc];
    uVar12 = puVar8[0xd];
    *(undefined4 *)(iVar4 + 0x10) = puVar8[10];
    *(undefined4 *)(iVar4 + 0x14) = uVar9;
    iVar4 = puVar3[7];
    *(undefined4 *)(iVar4 + 0x10) = uVar13;
    *(undefined4 *)(iVar4 + 0x14) = uVar12;
    iVar4 = puVar3[8];
    *(int *)(iVar4 + 0x10) = (int)uVar14;
    *(int *)(iVar4 + 0x14) = (int)((ulonglong)uVar14 >> 0x20);
    pcStack_2c = s_cState_AppearWarpHole_00391bb8;
    iStack_30 = iVar5;
    func_0010BEC4((int)puVar3,3,&iStack_30);
    iVar4 = puVar3[6];
    uVar12 = puVar8[0xf];
    uVar9 = puVar8[0x10];
    uVar13 = puVar8[0x11];
    *(undefined4 *)(iVar4 + 0x18) = puVar8[0xe];
    *(undefined4 *)(iVar4 + 0x1c) = uVar12;
    iVar4 = puVar3[7];
    *(undefined4 *)(iVar4 + 0x18) = uVar9;
    *(undefined4 *)(iVar4 + 0x1c) = uVar13;
    iVar4 = puVar3[8];
    *(int *)(iVar4 + 0x18) = (int)uVar14;
    *(int *)(iVar4 + 0x1c) = (int)((ulonglong)uVar14 >> 0x20);
    pcStack_2c = s_cState_PlayerFree_00391bd0;
    iStack_30 = iVar5;
    func_0010BEC4((int)puVar3,4,&iStack_30);
    iVar4 = puVar3[6];
    uVar12 = puVar8[0x14];
    uVar13 = puVar8[0x15];
    uVar9 = puVar8[0x13];
    *(undefined4 *)(iVar4 + 0x20) = puVar8[0x12];
    *(undefined4 *)(iVar4 + 0x24) = uVar9;
    iVar4 = puVar3[7];
    *(undefined4 *)(iVar4 + 0x20) = uVar12;
    *(undefined4 *)(iVar4 + 0x24) = uVar13;
    iVar4 = puVar3[8];
    *(int *)(iVar4 + 0x20) = (int)uVar14;
    *(int *)(iVar4 + 0x24) = (int)((ulonglong)uVar14 >> 0x20);
    pcStack_2c = s_cState_PlayerExit_00391be4;
    iStack_30 = iVar5;
    func_0010BEC4((int)puVar3,5,&iStack_30);
    iVar4 = puVar3[6];
    uVar12 = puVar8[0x17];
    uVar9 = puVar8[0x18];
    uVar13 = puVar8[0x19];
    *(undefined4 *)(iVar4 + 0x28) = puVar8[0x16];
    *(undefined4 *)(iVar4 + 0x2c) = uVar12;
    iVar4 = puVar3[7];
    *(undefined4 *)(iVar4 + 0x28) = uVar9;
    *(undefined4 *)(iVar4 + 0x2c) = uVar13;
    iVar4 = puVar3[8];
    *(int *)(iVar4 + 0x28) = (int)uVar14;
    *(int *)(iVar4 + 0x2c) = (int)((ulonglong)uVar14 >> 0x20);
    pcStack_2c = s_cState_AppearTriForce_00391bf8;
    iStack_30 = iVar5;
    func_0010BEC4((int)puVar3,6,&iStack_30);
    iVar4 = puVar3[6];
    uVar12 = puVar8[0x1b];
    uVar9 = puVar8[0x1c];
    uVar13 = puVar8[0x1d];
    *(undefined4 *)(iVar4 + 0x30) = puVar8[0x1a];
    *(undefined4 *)(iVar4 + 0x34) = uVar12;
    iVar4 = puVar3[7];
    *(undefined4 *)(iVar4 + 0x30) = uVar9;
    *(undefined4 *)(iVar4 + 0x34) = uVar13;
    iVar4 = puVar3[8];
    *(int *)(iVar4 + 0x30) = (int)uVar14;
    *(int *)(iVar4 + 0x34) = (int)((ulonglong)uVar14 >> 0x20);
    pcStack_2c = s_cState_RiseEndTriForce_00391c10;
    iStack_30 = iVar5;
    func_0010BEC4((int)puVar3,7,&iStack_30);
    iVar4 = puVar3[6];
    uVar12 = puVar8[0x1f];
    uVar9 = puVar8[0x20];
    uVar13 = puVar8[0x21];
    *(undefined4 *)(iVar4 + 0x38) = puVar8[0x1e];
    *(undefined4 *)(iVar4 + 0x3c) = uVar12;
    iVar4 = puVar3[7];
    *(undefined4 *)(iVar4 + 0x38) = uVar9;
    *(undefined4 *)(iVar4 + 0x3c) = uVar13;
    iVar4 = puVar3[8];
    *(int *)(iVar4 + 0x38) = (int)uVar14;
    *(int *)(iVar4 + 0x3c) = (int)((ulonglong)uVar14 >> 0x20);
    pcStack_2c = s_cState_RiseSagesPlaceStep_00391c28;
    iStack_30 = iVar5;
    func_0010BEC4((int)puVar3,8,&iStack_30);
    iVar4 = puVar3[6];
    uVar12 = puVar8[0x23];
    uVar9 = puVar8[0x24];
    uVar13 = puVar8[0x25];
    *(undefined4 *)(iVar4 + 0x40) = puVar8[0x22];
    *(undefined4 *)(iVar4 + 0x44) = uVar12;
    iVar4 = puVar3[7];
    *(undefined4 *)(iVar4 + 0x40) = uVar9;
    *(undefined4 *)(iVar4 + 0x44) = uVar13;
    iVar4 = puVar3[8];
    *(int *)(iVar4 + 0x40) = (int)uVar14;
    *(int *)(iVar4 + 0x44) = (int)((ulonglong)uVar14 >> 0x20);
    pcStack_2c = s_cState_GetTriForce_00391c44;
    iStack_30 = iVar5;
    func_0010BEC4((int)puVar3,9,&iStack_30);
    iVar4 = puVar3[6];
    uVar9 = puVar8[0x27];
    uVar12 = puVar8[0x28];
    uVar13 = puVar8[0x29];
    *(undefined4 *)(iVar4 + 0x48) = puVar8[0x26];
    *(undefined4 *)(iVar4 + 0x4c) = uVar9;
    iVar4 = puVar3[7];
    *(undefined4 *)(iVar4 + 0x48) = uVar12;
    *(undefined4 *)(iVar4 + 0x4c) = uVar13;
    iVar4 = puVar3[8];
    *(int *)(iVar4 + 0x48) = (int)uVar14;
    *(int *)(iVar4 + 0x4c) = (int)((ulonglong)uVar14 >> 0x20);
    pcStack_2c = s_cState_GetEndTriForce_00391c58;
    iStack_30 = iVar5;
    func_0010BEC4((int)puVar3,10,&iStack_30);
    iVar4 = puVar3[6];
    uVar9 = puVar8[0x2b];
    uVar12 = puVar8[0x2c];
    uVar13 = puVar8[0x2d];
    *(undefined4 *)(iVar4 + 0x50) = puVar8[0x2a];
    *(undefined4 *)(iVar4 + 0x54) = uVar9;
    iVar4 = puVar3[7];
    *(undefined4 *)(iVar4 + 0x50) = uVar12;
    *(undefined4 *)(iVar4 + 0x54) = uVar13;
    iVar4 = puVar3[8];
    *(int *)(iVar4 + 0x50) = (int)uVar14;
    *(int *)(iVar4 + 0x54) = (int)((ulonglong)uVar14 >> 0x20);
    func_00668058(puVar3,0);
    puVar8 = (undefined4 *)func_0010BAB4(0x108);
    uVar12 = 0;
    if (puVar8 != (undefined4 *)0x0) {
      pcStack_2c = &DAT_00391c70;
      iStack_30 = iVar5;
      uVar12 = func_001663BC(puVar8,&iStack_30,puVar3[-0x55],0,1);
    }
    puVar3[0x30] = uVar12;
    func_004ECF6C((int)puVar10);
    return puVar10;
  }
  return (undefined4 *)0x0;
}

