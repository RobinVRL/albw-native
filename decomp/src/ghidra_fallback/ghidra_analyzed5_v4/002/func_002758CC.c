#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0053B530(int param_1,uint param_2,uint param_3);
extern int func_00547724(int *param_1);
extern int func_00547B48(int param_1,int param_2);
extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int func_005822A0(int param_1,uint param_2,undefined4 param_3);
extern int func_00660CE8(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00275cb4;
extern undefined4 DAT_00275cb8;
extern undefined4 *DAT_00275cbc;
extern undefined4 *DAT_00275cc0;
extern undefined *DAT_00275cc4;
extern int DAT_00275cd4;
extern int *DAT_00276004;
extern int *DAT_00276008;
extern int *DAT_0027600c;
extern int *DAT_00276010;
extern char s_cState_RestReverse_00275d24[];
extern char s_cState_RestRound_00275d10[];
extern char s_cState_Rest_00275d04[];
extern char s_cState_Reverse_00275ce8[];
extern char s_cState_Round_00275cd8[];
extern char s_cState_TriggerReverse_00275fec[];
extern char s_cState_TriggerRound_00275fd8[];
extern char s_cState_Turn_00275cf8[];
extern char s_cState_Wait_00275cc8[];

// USA 002758CC <- EU 002758F4 (Ghidra, non-matching)
// GLOBAL DAT_00275cb4 undefined4
// GLOBAL DAT_00275cb8 undefined4
// GLOBAL DAT_00275cbc undefined4 *
// GLOBAL DAT_00275cc0 undefined4 *
// GLOBAL DAT_00275cc4 undefined *
// GLOBAL DAT_00275cd4 int
// GLOBAL DAT_00276004 int *
// GLOBAL DAT_00276008 int *
// GLOBAL DAT_0027600c int *
// GLOBAL DAT_00276010 int *
// GLOBAL s_cState_RestReverse_00275d24 string
// GLOBAL s_cState_RestRound_00275d10 string
// GLOBAL s_cState_Rest_00275d04 string
// GLOBAL s_cState_Reverse_00275ce8 string
// GLOBAL s_cState_Round_00275cd8 string
// GLOBAL s_cState_TriggerReverse_00275fec string
// GLOBAL s_cState_TriggerRound_00275fd8 string
// GLOBAL s_cState_Turn_00275cf8 string
// GLOBAL s_cState_Wait_00275cc8 string

int * func_002758CC(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  short sVar2;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  uVar19 = DAT_00275cb4;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = uVar19;
  uVar19 = DAT_00275cb8;
  *(char *)(param_1 + 7) = (char)param_2[0xf];
  *(undefined1 *)((int)param_1 + 0x1d) = *(undefined1 *)((int)param_2 + 0x3d);
  *(undefined2 *)((int)param_1 + 0x1e) = *(undefined2 *)((int)param_2 + 0x3e);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)((int)param_2 + 0x42);
  *(short *)((int)param_1 + 0x22) = (short)param_2[0x10];
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = uVar19;
  puVar3 = DAT_00275cbc;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  uVar13 = puVar3[1];
  uVar17 = puVar3[2];
  param_1[0xf] = *puVar3;
  param_1[0x10] = uVar13;
  param_1[0x11] = uVar17;
  uVar13 = *puVar3;
  uVar17 = puVar3[1];
  param_1[0x14] = puVar3[2];
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x12] = uVar13;
  param_1[0x13] = uVar17;
  param_1[0x17] = 0;
  puVar6 = func_0010A794(param_1 + 0x19);
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  piVar14 = puVar6 + -0x19;
  *(undefined1 *)((int)puVar6 + 6) = 9;
  puVar6[5] = piVar14;
  iVar7 = func_0010BA78(0x90);
  puVar6[6] = iVar7;
  puVar3 = DAT_00275cc0;
  puVar6[7] = iVar7 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar12 = 9;
  puVar8 = (undefined4 *)(iVar7 + -8);
  do {
    uVar13 = puVar3[0x27];
    iVar12 = iVar12 + -1;
    puVar8[2] = puVar3[0x26];
    puVar8[3] = uVar13;
    uVar13 = puVar3[0x27];
    puVar8[4] = puVar3[0x26];
    puVar8[5] = uVar13;
    puVar8 = puVar8 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar15 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar6[8] = puVar8;
  if (uVar15 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar3[5];
      *puVar8 = puVar3[4];
      puVar8[1] = uVar13;
      puVar9 = puVar8;
    }
    for (iVar7 = (int)uVar15 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar13 = puVar3[5];
      puVar9[2] = puVar3[4];
      puVar9[3] = uVar13;
      uVar13 = puVar3[5];
      puVar9[4] = puVar3[4];
      puVar9[5] = uVar13;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
  iVar7 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 9;
    iVar7 = func_00100118((int)(puVar8 + 2),DAT_00275cc4,0x24,9);
  }
  if (iVar7 != 0) {
    puVar6[3] = iVar7;
    puVar6[2] = 9;
  }
  iVar7 = DAT_00275cd4;
  local_34 = s_cState_Wait_00275cc8;
  local_38 = DAT_00275cd4;
  func_0010BEC4((int)puVar6,0,&local_38);
  puVar8 = (undefined4 *)puVar6[6];
  uVar13 = puVar3[1];
  uVar17 = puVar3[2];
  uVar18 = puVar3[3];
  uVar20 = puVar3[4];
  uVar21 = puVar3[5];
  *puVar8 = *puVar3;
  puVar8[1] = uVar13;
  puVar8 = (undefined4 *)puVar6[7];
  *puVar8 = uVar17;
  puVar8[1] = uVar18;
  puVar8 = (undefined4 *)puVar6[8];
  *puVar8 = uVar20;
  puVar8[1] = uVar21;
  local_34 = s_cState_Round_00275cd8;
  local_38 = iVar7;
  func_0010BEC4((int)puVar6,1,&local_38);
  iVar12 = puVar6[6];
  uVar13 = puVar3[8];
  uVar17 = puVar3[9];
  uVar18 = puVar3[7];
  *(undefined4 *)(iVar12 + 8) = puVar3[6];
  *(undefined4 *)(iVar12 + 0xc) = uVar18;
  iVar12 = puVar6[7];
  *(undefined4 *)(iVar12 + 8) = uVar13;
  *(undefined4 *)(iVar12 + 0xc) = uVar17;
  iVar12 = puVar6[8];
  *(undefined4 *)(iVar12 + 8) = uVar20;
  *(undefined4 *)(iVar12 + 0xc) = uVar21;
  local_34 = s_cState_Reverse_00275ce8;
  local_38 = iVar7;
  func_0010BEC4((int)puVar6,2,&local_38);
  iVar12 = puVar6[6];
  uVar13 = puVar3[0xc];
  uVar18 = puVar3[0xd];
  uVar17 = puVar3[0xb];
  *(undefined4 *)(iVar12 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar12 + 0x14) = uVar17;
  iVar12 = puVar6[7];
  *(undefined4 *)(iVar12 + 0x10) = uVar13;
  *(undefined4 *)(iVar12 + 0x14) = uVar18;
  iVar12 = puVar6[8];
  *(undefined4 *)(iVar12 + 0x10) = uVar20;
  *(undefined4 *)(iVar12 + 0x14) = uVar21;
  local_34 = s_cState_Turn_00275cf8;
  local_38 = iVar7;
  func_0010BEC4((int)puVar6,3,&local_38);
  iVar12 = puVar6[6];
  uVar13 = puVar3[0xf];
  uVar17 = puVar3[0x10];
  uVar18 = puVar3[0x11];
  *(undefined4 *)(iVar12 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar12 + 0x1c) = uVar13;
  iVar12 = puVar6[7];
  *(undefined4 *)(iVar12 + 0x18) = uVar17;
  *(undefined4 *)(iVar12 + 0x1c) = uVar18;
  iVar12 = puVar6[8];
  *(undefined4 *)(iVar12 + 0x18) = uVar20;
  *(undefined4 *)(iVar12 + 0x1c) = uVar21;
  local_34 = s_cState_Rest_00275d04;
  local_38 = iVar7;
  func_0010BEC4((int)puVar6,4,&local_38);
  iVar12 = puVar6[6];
  uVar13 = puVar3[0x13];
  uVar17 = puVar3[0x14];
  uVar18 = puVar3[0x15];
  *(undefined4 *)(iVar12 + 0x20) = puVar3[0x12];
  *(undefined4 *)(iVar12 + 0x24) = uVar13;
  iVar12 = puVar6[7];
  *(undefined4 *)(iVar12 + 0x20) = uVar17;
  *(undefined4 *)(iVar12 + 0x24) = uVar18;
  iVar12 = puVar6[8];
  *(undefined4 *)(iVar12 + 0x20) = uVar20;
  *(undefined4 *)(iVar12 + 0x24) = uVar21;
  local_34 = s_cState_RestRound_00275d10;
  local_38 = iVar7;
  func_0010BEC4((int)puVar6,5,&local_38);
  iVar12 = puVar6[6];
  uVar17 = puVar3[0x17];
  uVar18 = puVar3[0x18];
  uVar13 = puVar3[0x19];
  *(undefined4 *)(iVar12 + 0x28) = puVar3[0x16];
  *(undefined4 *)(iVar12 + 0x2c) = uVar17;
  iVar12 = puVar6[7];
  *(undefined4 *)(iVar12 + 0x28) = uVar18;
  *(undefined4 *)(iVar12 + 0x2c) = uVar13;
  iVar12 = puVar6[8];
  *(undefined4 *)(iVar12 + 0x28) = uVar20;
  *(undefined4 *)(iVar12 + 0x2c) = uVar21;
  local_34 = s_cState_RestReverse_00275d24;
  local_38 = iVar7;
  func_0010BEC4((int)puVar6,6,&local_38);
  iVar12 = puVar6[6];
  uVar13 = puVar3[0x1b];
  uVar17 = puVar3[0x1c];
  uVar18 = puVar3[0x1d];
  *(undefined4 *)(iVar12 + 0x30) = puVar3[0x1a];
  *(undefined4 *)(iVar12 + 0x34) = uVar13;
  iVar12 = puVar6[7];
  *(undefined4 *)(iVar12 + 0x30) = uVar17;
  *(undefined4 *)(iVar12 + 0x34) = uVar18;
  iVar12 = puVar6[8];
  *(undefined4 *)(iVar12 + 0x30) = uVar20;
  *(undefined4 *)(iVar12 + 0x34) = uVar21;
  local_34 = s_cState_TriggerRound_00275fd8;
  local_38 = iVar7;
  func_0010BEC4((int)puVar6,7,&local_38);
  iVar12 = puVar6[6];
  uVar13 = puVar3[0x1f];
  uVar17 = puVar3[0x20];
  uVar18 = puVar3[0x21];
  *(undefined4 *)(iVar12 + 0x38) = puVar3[0x1e];
  *(undefined4 *)(iVar12 + 0x3c) = uVar13;
  iVar12 = puVar6[7];
  *(undefined4 *)(iVar12 + 0x38) = uVar17;
  *(undefined4 *)(iVar12 + 0x3c) = uVar18;
  iVar12 = puVar6[8];
  *(undefined4 *)(iVar12 + 0x38) = uVar20;
  *(undefined4 *)(iVar12 + 0x3c) = uVar21;
  local_34 = s_cState_TriggerReverse_00275fec;
  local_38 = iVar7;
  func_0010BEC4((int)puVar6,8,&local_38);
  piVar4 = DAT_00276004;
  iVar7 = puVar6[6];
  uVar13 = puVar3[0x23];
  uVar17 = puVar3[0x24];
  uVar18 = puVar3[0x25];
  *(undefined4 *)(iVar7 + 0x40) = puVar3[0x22];
  *(undefined4 *)(iVar7 + 0x44) = uVar13;
  iVar7 = puVar6[7];
  *(undefined4 *)(iVar7 + 0x40) = uVar17;
  *(undefined4 *)(iVar7 + 0x44) = uVar18;
  iVar7 = puVar6[8];
  *(undefined4 *)(iVar7 + 0x40) = uVar20;
  *(undefined4 *)(iVar7 + 0x44) = uVar21;
  uVar15 = param_2[0xa8];
  uVar16 = param_2[0xa7];
  if ((*(char *)(puVar6 + -0x12) == '\x05' || *(char *)(puVar6 + -0x12) == '\r') &&
     (bVar5 = func_00547B48((int)param_2,0), bVar5)) {
    sVar2 = *(short *)((int)param_2 + 0x2e);
    iVar12 = 0;
    iVar7 = 0;
    if (0 < sVar2) {
      do {
        bVar5 = func_005822A0(*piVar4,(uint)*(ushort *)(param_2 + 0xd) + iVar7,
                              (uint)*(byte *)((int)param_2 + 0x31));
        if (!bVar5) break;
        iVar7 = iVar7 + 1;
        iVar12 = iVar12 + 1;
      } while (iVar7 < sVar2);
    }
    uVar15 = iVar12 + 1;
  }
  if ((int)uVar16 < 0 || (int)uVar15 < 0) {
    func_00660CE8(puVar6,4);
  }
  bVar5 = func_00547B48((int)param_2,0);
  *(bool *)((int)puVar6 + -0x2a) = bVar5;
  bVar5 = func_00547B48((int)param_2,1);
  *(bool *)((int)puVar6 + -0x29) = bVar5;
  iVar7 = func_00547724(param_2);
  if (((iVar7 == *DAT_00276008) || (iVar7 = func_00547724(param_2), iVar7 == *DAT_0027600c)) &&
     (-1 < *(short *)((int)param_2 + 0x2e))) {
    iVar7 = *piVar4;
    if (*(short *)((int)param_2 + 0x2e) == 0) {
      sVar2 = *(short *)(*(int *)(*DAT_00276010 + 0x3dbe4) + 0x30);
    }
    else {
      sVar2 = *(short *)(*(int *)(*DAT_00276010 + 0x3dbe4) + 0x32);
    }
    uVar15 = (uint)sVar2;
    iVar12 = func_00581B9C(iVar7);
    if ((iVar12 == 1) && (puVar10 = (uint *)func_00582250(iVar7), uVar16 < *puVar10)) {
      iVar7 = *(int *)(puVar10[2] + uVar16 * 4);
    }
    else {
      iVar7 = 0;
    }
    uVar11 = *(int *)(iVar7 + 0x20) - 1;
    if (1 < (int)uVar11) {
      uVar11 = 2;
    }
    if ((int)uVar15 < 0) {
      uVar15 = 0;
    }
    else if ((int)uVar11 < (int)uVar15) {
      uVar15 = uVar11;
    }
    *(char *)(puVar6 + -0xb) = (char)uVar15;
  }
  iVar7 = func_0053B530(*piVar4,uVar16,uVar15);
  *piVar14 = iVar7;
  iVar12 = *(int *)(*(int *)(iVar7 + 0xac) + 0x28);
  if ((iVar12 == 0) ||
     (uVar16 = *(uint *)(*(int *)(iVar7 + 0xac) + 0x20), uVar15 = uVar16 - 1, uVar16 <= uVar15)) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined4 *)(iVar12 + uVar15 * 4);
  }
  puVar6[-0x18] = uVar13;
  puVar6[-0x10] = iVar7;
  puVar6[-0xf] = 0;
  puVar6[-0xe] = uVar19;
  *(undefined1 *)(puVar6 + -0xd) = 0;
  func_00660CE8(puVar6,0);
  return piVar14;
}

