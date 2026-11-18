#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_004ECF6C(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00661990(undefined4 *param_1,undefined1 param_2);
extern int iRam0029afac;
extern undefined4 *puRam0029afa8;
extern int DAT_0029af74;
extern undefined4 DAT_0029af78;
extern undefined4 DAT_0029af7c;
extern undefined4 *DAT_0029af80;
extern undefined4 DAT_0029af84;
extern int DAT_0029af88;
extern undefined DAT_0029af8c;
extern char s_cState_OffEnd_0029b124[];
extern char s_cState_OffEvent_0029b114[];
extern char s_cState_OffStart_0029b000[];
extern char s_cState_OffWait_0029afb0[];
extern char s_cState_OnEnd_0029afe0[];
extern char s_cState_OnEvent_0029afd0[];
extern char s_cState_OnStart_0029afc0[];
extern char s_cState_OnWait_0029aff0[];

// USA 0029ABC0 <- EU 0029AB9C (Ghidra, non-matching)
// GLOBAL DAT_0029af74 int
// GLOBAL DAT_0029af78 undefined4
// GLOBAL DAT_0029af7c undefined4
// GLOBAL DAT_0029af80 undefined4 *
// GLOBAL DAT_0029af84 undefined4
// GLOBAL DAT_0029af88 int
// GLOBAL DAT_0029af8c undefined
// GLOBAL UNK_0029afa8 undefined *
// GLOBAL UNK_0029afac int
// GLOBAL s_cState_OffEnd_0029b124 string
// GLOBAL s_cState_OffEvent_0029b114 string
// GLOBAL s_cState_OffStart_0029b000 string
// GLOBAL s_cState_OffWait_0029afb0 string
// GLOBAL s_cState_OnEnd_0029afe0 string
// GLOBAL s_cState_OnEvent_0029afd0 string
// GLOBAL s_cState_OnStart_0029afc0 string
// GLOBAL s_cState_OnWait_0029aff0 string

undefined4 * func_0029ABC0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar5 = func_00150E40(param_1,param_2);
  iVar16 = DAT_0029af74;
  *piVar5 = DAT_0029af74;
  piVar5[200] = iVar16 + 0x54;
  puVar6 = func_0010A794(piVar5 + 0x103);
  puVar6[5] = 0;
  uVar10 = DAT_0029af78;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  uVar12 = DAT_0029af7c;
  puVar6[10] = uVar10;
  puVar6[0xb] = uVar12;
  puVar2 = DAT_0029af80;
  puVar6[9] = 0;
  puVar6[0xc] = 0;
  uVar10 = *puVar2;
  uVar12 = puVar2[1];
  puVar6[0xe] = puVar6 + -0x103;
  puVar6[0xf] = uVar10;
  puVar6[0x10] = uVar12;
  uVar10 = DAT_0029af84;
  puVar13 = puVar6 + -0x103;
  puVar6[0xd] = DAT_0029af84;
  uVar12 = puVar2[2];
  uVar15 = puVar2[3];
  puVar6[0x11] = uVar10;
  puVar6[0x12] = puVar13;
  puVar6[0x13] = uVar12;
  puVar6[0x14] = uVar15;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  *(undefined1 *)((int)puVar6 + 0x55) = 0;
  puVar7 = (undefined4 *)func_0010BAB4(0x108);
  iVar16 = DAT_0029af88;
  uVar10 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    local_34 = &DAT_0029af8c;
    local_38 = DAT_0029af88;
    uVar10 = func_001663BC(puVar7,&local_38,puVar6[-0x50],0,1);
  }
  puVar6[0xc] = uVar10;
  *(undefined4 **)(puVar6[0xc] + 0x14) = puVar6 + 0xd;
  *(undefined4 **)(puVar6[0xc] + 0x18) = puVar6 + 0x11;
  func_004ECF6C((int)puVar13);
  *(undefined1 *)((int)puVar6 + 6) = 8;
  puVar6[5] = puVar13;
  iVar8 = func_0010BA78(0x80);
  puVar6[6] = iVar8;
  puVar6[7] = iVar8 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar9 = 8;
  puVar7 = (undefined4 *)(iVar8 + -8);
  do {
    uVar10 = puVar2[0x27];
    iVar9 = iVar9 + -1;
    puVar7[2] = puVar2[0x26];
    puVar7[3] = uVar10;
    uVar10 = puVar2[0x27];
    puVar7[4] = puVar2[0x26];
    puVar7[5] = uVar10;
    puVar7 = puVar7 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar14 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar6[8] = puVar7;
  if (uVar14 != 0) {
    puVar11 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = puVar2[9];
      *puVar7 = puVar2[8];
      puVar7[1] = uVar10;
      puVar11 = puVar7;
    }
    for (iVar8 = (int)uVar14 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar10 = puVar2[9];
      puVar11[2] = puVar2[8];
      puVar11[3] = uVar10;
      uVar10 = puVar2[9];
      puVar11[4] = puVar2[8];
      puVar11[5] = uVar10;
      puVar11 = puVar11 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x128,(int *)0x0,4);
  puVar3 = puRam0029afa8;
  iVar8 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 8;
    *puVar7 = 0x24;
    iVar8 = func_00100118((int)(puVar7 + 2),puVar3,0x24,8);
  }
  if (iVar8 != 0) {
    puVar6[3] = iVar8;
    puVar6[2] = 8;
  }
  iVar8 = iRam0029afac;
  puVar6[-0x2e] = puVar6;
  *(undefined2 *)(iVar8 + (int)puVar13) = 8;
  local_34 = s_cState_OffWait_0029afb0;
  local_38 = iVar16;
  func_0010BEC4((int)puVar6,0,&local_38);
  puVar7 = (undefined4 *)puVar6[6];
  uVar10 = puVar2[5];
  uVar12 = puVar2[6];
  uVar15 = puVar2[7];
  uVar17 = *(undefined8 *)(puVar2 + 8);
  *puVar7 = puVar2[4];
  puVar7[1] = uVar10;
  puVar7 = (undefined4 *)puVar6[7];
  *puVar7 = uVar12;
  puVar7[1] = uVar15;
  puVar7 = (undefined4 *)puVar6[8];
  *puVar7 = (int)uVar17;
  puVar7[1] = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_OnStart_0029afc0;
  local_38 = iVar16;
  func_0010BEC4((int)puVar6,1,&local_38);
  iVar8 = puVar6[6];
  uVar12 = puVar2[0xb];
  uVar10 = puVar2[0xc];
  uVar15 = puVar2[0xd];
  *(undefined4 *)(iVar8 + 8) = puVar2[10];
  *(undefined4 *)(iVar8 + 0xc) = uVar12;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 8) = uVar10;
  *(undefined4 *)(iVar8 + 0xc) = uVar15;
  iVar8 = puVar6[8];
  *(int *)(iVar8 + 8) = (int)uVar17;
  *(int *)(iVar8 + 0xc) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_OnEvent_0029afd0;
  local_38 = iVar16;
  func_0010BEC4((int)puVar6,2,&local_38);
  iVar8 = puVar6[6];
  uVar10 = puVar2[0xf];
  uVar12 = puVar2[0x10];
  uVar15 = puVar2[0x11];
  *(undefined4 *)(iVar8 + 0x10) = puVar2[0xe];
  *(undefined4 *)(iVar8 + 0x14) = uVar10;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar12;
  *(undefined4 *)(iVar8 + 0x14) = uVar15;
  iVar8 = puVar6[8];
  *(int *)(iVar8 + 0x10) = (int)uVar17;
  *(int *)(iVar8 + 0x14) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_OnEnd_0029afe0;
  local_38 = iVar16;
  func_0010BEC4((int)puVar6,3,&local_38);
  iVar8 = puVar6[6];
  uVar10 = puVar2[0x13];
  uVar12 = puVar2[0x14];
  uVar15 = puVar2[0x15];
  *(undefined4 *)(iVar8 + 0x18) = puVar2[0x12];
  *(undefined4 *)(iVar8 + 0x1c) = uVar10;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar12;
  *(undefined4 *)(iVar8 + 0x1c) = uVar15;
  iVar8 = puVar6[8];
  *(int *)(iVar8 + 0x18) = (int)uVar17;
  *(int *)(iVar8 + 0x1c) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_OnWait_0029aff0;
  local_38 = iVar16;
  func_0010BEC4((int)puVar6,4,&local_38);
  iVar8 = puVar6[6];
  uVar12 = puVar2[0x17];
  uVar10 = puVar2[0x18];
  uVar15 = puVar2[0x19];
  *(undefined4 *)(iVar8 + 0x20) = puVar2[0x16];
  *(undefined4 *)(iVar8 + 0x24) = uVar12;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 0x20) = uVar10;
  *(undefined4 *)(iVar8 + 0x24) = uVar15;
  iVar8 = puVar6[8];
  *(int *)(iVar8 + 0x20) = (int)uVar17;
  *(int *)(iVar8 + 0x24) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_OffStart_0029b000;
  local_38 = iVar16;
  func_0010BEC4((int)puVar6,5,&local_38);
  uVar10 = puVar2[0x1c];
  uVar12 = puVar2[0x1d];
  uVar15 = puVar2[0x1b];
  iVar8 = puVar6[6];
  *(undefined4 *)(iVar8 + 0x28) = puVar2[0x1a];
  *(undefined4 *)(iVar8 + 0x2c) = uVar15;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 0x28) = uVar10;
  *(undefined4 *)(iVar8 + 0x2c) = uVar12;
  iVar8 = puVar6[8];
  *(int *)(iVar8 + 0x28) = (int)uVar17;
  *(int *)(iVar8 + 0x2c) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_OffEvent_0029b114;
  local_38 = iVar16;
  func_0010BEC4((int)puVar6,6,&local_38);
  iVar8 = puVar6[6];
  uVar15 = puVar2[0x1f];
  uVar10 = puVar2[0x20];
  uVar12 = puVar2[0x21];
  *(undefined4 *)(iVar8 + 0x30) = puVar2[0x1e];
  *(undefined4 *)(iVar8 + 0x34) = uVar15;
  iVar8 = puVar6[7];
  *(undefined4 *)(iVar8 + 0x30) = uVar10;
  *(undefined4 *)(iVar8 + 0x34) = uVar12;
  iVar8 = puVar6[8];
  *(int *)(iVar8 + 0x30) = (int)uVar17;
  *(int *)(iVar8 + 0x34) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_OffEnd_0029b124;
  local_38 = iVar16;
  func_0010BEC4((int)puVar6,7,&local_38);
  iVar16 = puVar6[6];
  uVar15 = puVar2[0x23];
  uVar10 = puVar2[0x24];
  uVar12 = puVar2[0x25];
  *(undefined4 *)(iVar16 + 0x38) = puVar2[0x22];
  *(undefined4 *)(iVar16 + 0x3c) = uVar15;
  iVar16 = puVar6[7];
  *(undefined4 *)(iVar16 + 0x38) = uVar10;
  *(undefined4 *)(iVar16 + 0x3c) = uVar12;
  iVar16 = puVar6[8];
  *(int *)(iVar16 + 0x38) = (int)uVar17;
  *(int *)(iVar16 + 0x3c) = (int)((ulonglong)uVar17 >> 0x20);
  bVar4 = func_00588BF0((int)puVar13,0);
  if (bVar4) {
    func_00661990(puVar6,4);
  }
  else {
    func_00661990(puVar6,0);
  }
  return puVar13;
}

