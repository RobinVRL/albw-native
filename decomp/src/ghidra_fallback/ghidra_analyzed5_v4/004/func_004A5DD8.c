#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_00232540(undefined4 *param_1);
extern int func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern int func_0034BA3C(int param_1,int *param_2,int *param_3);
extern int func_0034C698(undefined4 *param_1,uint param_2);
extern int func_003FDF90(int param_1,int param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern undefined4 DAT_004a61cc;
extern undefined4 *DAT_004a61d0;
extern undefined4 DAT_004a61d4;
extern undefined4 DAT_004a61d8;
extern undefined *DAT_004a61dc;
extern int DAT_004a61ec;
extern int DAT_004a6230;
extern int DAT_004a6234;
extern int *DAT_004a6310;
extern char s_P_ArrowB_00_004a6320[];
extern char s_P_ArrowT_00_004a6314[];
extern char s_cState_Count_004a6210[];
extern char s_cState_Fixed_004a6220[];
extern char s_cState_Idle_004a61e0[];
extern char s_cState_Select_004a6200[];
extern char s_cState_ToSelect_004a61f0[];

// USA 004A5DD8 <- EU 004A5DB0 (Ghidra, non-matching)
// GLOBAL DAT_004a61cc undefined4
// GLOBAL DAT_004a61d0 undefined4 *
// GLOBAL DAT_004a61d4 undefined4
// GLOBAL DAT_004a61d8 undefined4
// GLOBAL DAT_004a61dc undefined *
// GLOBAL DAT_004a61ec int
// GLOBAL DAT_004a6230 int
// GLOBAL DAT_004a6234 int
// GLOBAL DAT_004a6310 int *
// GLOBAL s_P_ArrowB_00_004a6320 string
// GLOBAL s_P_ArrowT_00_004a6314 string
// GLOBAL s_cState_Count_004a6210 string
// GLOBAL s_cState_Fixed_004a6220 string
// GLOBAL s_cState_Idle_004a61e0 string
// GLOBAL s_cState_Select_004a6200 string
// GLOBAL s_cState_ToSelect_004a61f0 string

int func_004A5DD8(undefined4 *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(char * *)(albw_frame + 0xc))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define local_34 (*(int *)(albw_frame + 0x1c))
  puVar4 = func_00232540(param_1);
  *puVar4 = DAT_004a61cc;
  puVar5 = func_0010A794(puVar4 + 8);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar13 = puVar5 + -8;
  puVar6 = (undefined4 *)func_0010BAB4(0x5c);
  puVar4 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar4 = func_0034C698(puVar6,2);
  }
  puVar6 = DAT_004a61d0;
  puVar5[9] = puVar4;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xd] = 0;
  uVar15 = DAT_004a61d8;
  uVar12 = puVar6[0x15];
  puVar5[0xe] = puVar6[0x14];
  puVar5[0xf] = uVar12;
  puVar5[0xc] = DAT_004a61d4;
  *(undefined2 *)(puVar5 + 0x10) = 0;
  *(undefined2 *)((int)puVar5 + 0x42) = 0xffff;
  puVar5[0x11] = uVar15;
  puVar5[0x12] = 0;
  *(undefined2 *)(puVar5 + 0x13) = 0;
  *(undefined2 *)((int)puVar5 + 0x4e) = 0xffff;
  puVar5[0x14] = uVar15;
  puVar5[0x15] = 0;
  *(undefined2 *)(puVar5 + 0x16) = 0;
  *(undefined2 *)((int)puVar5 + 0x5a) = 0xffff;
  puVar5[0x17] = uVar15;
  puVar5[0x18] = 0;
  *(undefined1 *)(puVar5 + 0x19) = 0;
  *(undefined1 *)((int)puVar5 + 0x65) = 0xff;
  *(undefined1 *)((int)puVar5 + 0x66) = 0;
  *(undefined1 *)((int)puVar5 + 0x67) = 0;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  *(undefined1 *)((int)puVar5 + 0x69) = 0;
  *(undefined1 *)((int)puVar5 + 6) = 5;
  puVar5[5] = puVar13;
  iVar7 = func_0010BA78(0x50);
  puVar5[6] = iVar7;
  puVar5[7] = iVar7 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar8 = 5;
  puVar4 = (undefined4 *)(iVar7 + -8);
  do {
    uVar15 = puVar6[1];
    puVar4[2] = *puVar6;
    puVar4[3] = uVar15;
    iVar8 = iVar8 + -1;
    uVar15 = puVar6[1];
    puVar4[4] = *puVar6;
    puVar4[5] = uVar15;
    puVar4 = puVar4 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar14 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar5[8] = puVar4;
  if (uVar14 != 0) {
    puVar9 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = puVar6[5];
      *puVar4 = puVar6[4];
      puVar4[1] = uVar15;
      puVar9 = puVar4;
    }
    for (iVar7 = (int)uVar14 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar15 = puVar6[5];
      puVar9[2] = puVar6[4];
      puVar9[3] = uVar15;
      uVar15 = puVar6[5];
      puVar9[4] = puVar6[4];
      puVar9[5] = uVar15;
      puVar9 = puVar9 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar7 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x24;
    puVar4[1] = 5;
    iVar7 = func_00100118((int)(puVar4 + 2),DAT_004a61dc,0x24,5);
  }
  if (iVar7 != 0) {
    puVar5[3] = iVar7;
    puVar5[2] = 5;
  }
  iVar7 = DAT_004a61ec;
  local_44 = s_cState_Idle_004a61e0;
  local_48 = DAT_004a61ec;
  func_0010BEC4((int)puVar5,0,&local_48);
  puVar4 = (undefined4 *)puVar5[6];
  uVar15 = puVar6[3];
  uVar12 = puVar6[2];
  uVar16 = puVar6[1];
  uVar17 = *(undefined8 *)(puVar6 + 4);
  *puVar4 = *puVar6;
  puVar4[1] = uVar16;
  puVar4 = (undefined4 *)puVar5[7];
  *puVar4 = uVar12;
  puVar4[1] = uVar15;
  puVar4 = (undefined4 *)puVar5[8];
  *puVar4 = (int)uVar17;
  puVar4[1] = (int)((ulonglong)uVar17 >> 0x20);
  local_44 = s_cState_ToSelect_004a61f0;
  local_48 = iVar7;
  func_0010BEC4((int)puVar5,1,&local_48);
  iVar8 = puVar5[6];
  uVar15 = puVar6[6];
  uVar12 = puVar6[7];
  uVar16 = puVar6[1];
  *(undefined4 *)(iVar8 + 8) = *puVar6;
  *(undefined4 *)(iVar8 + 0xc) = uVar16;
  iVar8 = puVar5[7];
  *(undefined4 *)(iVar8 + 8) = uVar15;
  *(undefined4 *)(iVar8 + 0xc) = uVar12;
  iVar8 = puVar5[8];
  *(int *)(iVar8 + 8) = (int)uVar17;
  *(int *)(iVar8 + 0xc) = (int)((ulonglong)uVar17 >> 0x20);
  local_44 = s_cState_Select_004a6200;
  local_48 = iVar7;
  func_0010BEC4((int)puVar5,2,&local_48);
  iVar8 = puVar5[6];
  uVar15 = puVar6[9];
  uVar16 = puVar6[10];
  uVar12 = puVar6[0xb];
  *(undefined4 *)(iVar8 + 0x10) = puVar6[8];
  *(undefined4 *)(iVar8 + 0x14) = uVar15;
  iVar8 = puVar5[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar16;
  *(undefined4 *)(iVar8 + 0x14) = uVar12;
  iVar8 = puVar5[8];
  *(int *)(iVar8 + 0x10) = (int)uVar17;
  *(int *)(iVar8 + 0x14) = (int)((ulonglong)uVar17 >> 0x20);
  local_44 = s_cState_Count_004a6210;
  local_48 = iVar7;
  func_0010BEC4((int)puVar5,3,&local_48);
  iVar8 = puVar5[6];
  uVar12 = puVar6[0xd];
  uVar15 = puVar6[0xf];
  uVar16 = puVar6[0xe];
  *(undefined4 *)(iVar8 + 0x18) = puVar6[0xc];
  *(undefined4 *)(iVar8 + 0x1c) = uVar12;
  iVar8 = puVar5[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar16;
  *(undefined4 *)(iVar8 + 0x1c) = uVar15;
  iVar8 = puVar5[8];
  *(int *)(iVar8 + 0x18) = (int)uVar17;
  *(int *)(iVar8 + 0x1c) = (int)((ulonglong)uVar17 >> 0x20);
  local_44 = s_cState_Fixed_004a6220;
  local_48 = iVar7;
  func_0010BEC4((int)puVar5,4,&local_48);
  uVar12 = puVar6[0x12];
  uVar15 = puVar6[0x13];
  iVar8 = puVar5[6];
  uVar16 = puVar6[0x11];
  *(undefined4 *)(iVar8 + 0x20) = puVar6[0x10];
  *(undefined4 *)(iVar8 + 0x24) = uVar16;
  iVar8 = puVar5[7];
  *(undefined4 *)(iVar8 + 0x20) = uVar12;
  *(undefined4 *)(iVar8 + 0x24) = uVar15;
  iVar8 = puVar5[8];
  *(int *)(iVar8 + 0x20) = (int)uVar17;
  *(int *)(iVar8 + 0x24) = (int)((ulonglong)uVar17 >> 0x20);
  puVar4 = (undefined4 *)func_0010BAB4(0x74);
  piVar10 = (int *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    piVar10 = func_00168434(puVar4);
  }
  func_00168100(piVar10,param_2,param_3);
  puVar5[-1] = piVar10;
  puVar5[-2] = puVar5[-2] | 0x10;
  func_0016773C((int)piVar10,8);
  iVar2 = DAT_004a6234;
  iVar8 = DAT_004a6230;
  uVar14 = 0;
  do {
    iVar11 = *(int *)(iVar8 + uVar14 * 4);
    if (iVar11 == 0) {
      func_00166C20(piVar10,uVar14,(int *)(iVar2 + uVar14 * 8),0);
    }
    else {
      local_38 = iVar7;
      local_34 = iVar11;
      (**(code **)(iVar7 + 8))(&local_38);
      iVar11 = func_003FDF90(*(int *)(*piVar10 + 0x14),local_34);
      func_00166C20(piVar10,uVar14,(int *)(iVar2 + uVar14 * 8),iVar11);
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 8);
  puVar5[0x15] = piVar10;
  *(undefined2 *)((int)puVar5 + 0x4e) = 1;
  *(undefined2 *)(puVar5 + 0x13) = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x20);
  puVar4 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar4 = func_002C0294(puVar6);
  }
  puVar5[-3] = puVar4;
  func_002C00D4(puVar4,puVar13,(int *)0x0);
  piVar3 = DAT_004a6310;
  *(ushort *)(puVar5[-3] + 0x16) = *(ushort *)(puVar5[-3] + 0x16) & 0xfffe;
  *(undefined4 *)(puVar5[-3] + 0xc) = 1;
  func_0034BA3C(puVar5[9],piVar10,piVar3);
  local_44 = s_P_ArrowT_00_004a6314;
  local_48 = iVar7;
  uVar15 = func_005229AC(piVar10,&local_48);
  puVar5[10] = uVar15;
  local_44 = s_P_ArrowB_00_004a6320;
  local_48 = iVar7;
  uVar15 = func_005229AC(piVar10,&local_48);
  puVar5[0xb] = uVar15;
  *(undefined1 *)(puVar5[9] + 0x58) = 0;
  return (int)puVar13;
}

