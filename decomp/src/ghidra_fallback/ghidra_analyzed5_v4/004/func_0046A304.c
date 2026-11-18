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
extern int func_001B6A48(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_001B6E04(undefined4 *param_1);
extern int func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern int func_00584B94(int param_1,int param_2);
extern undefined4 DAT_0046a6a0;
extern undefined4 DAT_0046a6a4;
extern undefined DAT_0046a6a8;
extern int DAT_0046a6ac;
extern undefined DAT_0046a6c4;
extern int DAT_0046a6c8;
extern undefined4 *DAT_0046a6cc;
extern undefined4 *DAT_0046a6d0;
extern undefined *DAT_0046a6d4;
extern int *DAT_0046a77c;
extern int DAT_0046a780;
extern char s_TouchOff_0046a6b8[];
extern char s_TouchOn_0046a6b0[];
extern char s_cState_Idle_0046a6d8[];
extern char s_cState_Invalid_0046a6fc[];
extern char s_cState_Pop_0046a6f0[];
extern char s_cState_Push_0046a6e4[];

// USA 0046A304 <- EU 0046A2DC (Ghidra, non-matching)
// GLOBAL DAT_0046a6a0 undefined4
// GLOBAL DAT_0046a6a4 undefined4
// GLOBAL DAT_0046a6a8 undefined
// GLOBAL DAT_0046a6ac int
// GLOBAL DAT_0046a6c4 undefined
// GLOBAL DAT_0046a6c8 int
// GLOBAL DAT_0046a6cc undefined4 *
// GLOBAL DAT_0046a6d0 undefined4 *
// GLOBAL DAT_0046a6d4 undefined *
// GLOBAL DAT_0046a77c int *
// GLOBAL DAT_0046a780 int
// GLOBAL s_TouchOff_0046a6b8 string
// GLOBAL s_TouchOn_0046a6b0 string
// GLOBAL s_cState_Idle_0046a6d8 string
// GLOBAL s_cState_Invalid_0046a6fc string
// GLOBAL s_cState_Pop_0046a6f0 string
// GLOBAL s_cState_Push_0046a6e4 string

int * func_0046A304(undefined4 *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  puVar3 = func_001B6E04(param_1);
  *puVar3 = DAT_0046a6a0;
  uVar15 = DAT_0046a6a4;
  *(undefined2 *)(puVar3 + 0xe) = 0;
  *(undefined2 *)((int)puVar3 + 0x3a) = 0xffff;
  puVar3[0xf] = uVar15;
  puVar3[0x10] = 0;
  *(undefined2 *)(puVar3 + 0x11) = 0;
  *(undefined2 *)((int)puVar3 + 0x46) = 0xffff;
  puVar3[0x12] = uVar15;
  puVar3[0x13] = 0;
  puVar3 = func_0010A794(puVar3 + 0x14);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  piVar12 = puVar3 + -0x14;
  puVar3[8] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x74);
  if (puVar4 == (undefined4 *)0x0) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar13 = func_00168434(puVar4);
  }
  func_00168100(piVar13,param_2,param_3);
  puVar3[-0xd] = piVar13;
  puVar3[-0xe] = puVar3[-0xe] | 0x10;
  func_0016773C((int)piVar13,4);
  iVar16 = DAT_0046a6ac;
  local_24 = &DAT_0046a6a8;
  local_28 = DAT_0046a6ac;
  func_00166C20(piVar13,0,&local_28,0);
  local_24 = s_TouchOn_0046a6b0;
  local_28 = iVar16;
  func_00166C20(piVar13,1,&local_28,0);
  local_24 = s_TouchOff_0046a6b8;
  local_28 = iVar16;
  func_00166C20(piVar13,2,&local_28,0);
  local_24 = &DAT_0046a6c4;
  local_28 = iVar16;
  func_00166C20(piVar13,3,&local_28,0);
  puVar3[-10] = piVar13;
  *(undefined2 *)((int)puVar3 + -0x2e) = 0;
  *(undefined2 *)(puVar3 + -0xc) = 0;
  puVar3[-7] = piVar13;
  *(undefined2 *)((int)puVar3 + -0x22) = 3;
  *(undefined2 *)(puVar3 + -9) = 0;
  puVar5 = (undefined4 *)func_0010BAB4(0x20);
  puVar4 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar4 = func_002C0294(puVar5);
  }
  puVar3[-0xf] = puVar4;
  func_002C00D4(puVar4,piVar12,piVar13);
  *(ushort *)(puVar3[-0xf] + 0x16) = *(ushort *)(puVar3[-0xf] + 0x16) & 0xffbf;
  puVar3[5] = piVar12;
  *(undefined1 *)((int)puVar3 + 6) = 4;
  iVar6 = func_0010BA78(0x40);
  iVar9 = DAT_0046a6c8;
  puVar3[6] = iVar6;
  puVar3[7] = iVar6 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar8 = 4;
  puVar4 = (undefined4 *)(iVar6 + -8);
  do {
    uVar15 = DAT_0046a6cc[1];
    iVar8 = iVar8 + -1;
    puVar4[2] = *DAT_0046a6cc;
    puVar4[3] = uVar15;
    uVar15 = *(undefined4 *)(iVar9 + 0x14);
    puVar4[4] = *(undefined4 *)(iVar9 + 0x10);
    puVar4[5] = uVar15;
    puVar4 = puVar4 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar14 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar4 = DAT_0046a6d0;
  puVar3[8] = puVar5;
  if (uVar14 != 0) {
    puVar7 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = puVar4[5];
      *puVar5 = puVar4[4];
      puVar5[1] = uVar15;
      puVar7 = puVar5;
    }
    for (iVar9 = (int)uVar14 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar15 = puVar4[5];
      puVar7[2] = puVar4[4];
      puVar7[3] = uVar15;
      uVar15 = puVar4[5];
      puVar7[4] = puVar4[4];
      puVar7[5] = uVar15;
      puVar7 = puVar7 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar9 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 4;
    iVar9 = func_00100118((int)(puVar5 + 2),DAT_0046a6d4,0x24,4);
  }
  if (iVar9 != 0) {
    puVar3[3] = iVar9;
    puVar3[2] = 4;
  }
  local_24 = s_cState_Idle_0046a6d8;
  local_28 = iVar16;
  func_0010BEC4((int)puVar3,0,&local_28);
  puVar5 = (undefined4 *)puVar3[6];
  uVar15 = puVar4[2];
  uVar11 = puVar4[1];
  uVar10 = puVar4[3];
  uVar17 = *(undefined8 *)(puVar4 + 4);
  *puVar5 = *puVar4;
  puVar5[1] = uVar11;
  puVar5 = (undefined4 *)puVar3[7];
  *puVar5 = uVar15;
  puVar5[1] = uVar10;
  puVar5 = (undefined4 *)puVar3[8];
  *puVar5 = (int)uVar17;
  puVar5[1] = (int)((ulonglong)uVar17 >> 0x20);
  local_24 = s_cState_Push_0046a6e4;
  local_28 = iVar16;
  func_0010BEC4((int)puVar3,1,&local_28);
  iVar9 = puVar3[6];
  uVar10 = puVar4[7];
  uVar15 = puVar4[8];
  uVar11 = puVar4[9];
  *(undefined4 *)(iVar9 + 8) = puVar4[6];
  *(undefined4 *)(iVar9 + 0xc) = uVar10;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 8) = uVar15;
  *(undefined4 *)(iVar9 + 0xc) = uVar11;
  iVar9 = puVar3[8];
  *(int *)(iVar9 + 8) = (int)uVar17;
  *(int *)(iVar9 + 0xc) = (int)((ulonglong)uVar17 >> 0x20);
  local_24 = s_cState_Pop_0046a6f0;
  local_28 = iVar16;
  func_0010BEC4((int)puVar3,2,&local_28);
  iVar9 = puVar3[6];
  uVar11 = puVar4[0xb];
  uVar15 = puVar4[0xd];
  uVar10 = puVar4[0xc];
  *(undefined4 *)(iVar9 + 0x10) = puVar4[10];
  *(undefined4 *)(iVar9 + 0x14) = uVar11;
  iVar9 = puVar3[7];
  *(undefined4 *)(iVar9 + 0x10) = uVar10;
  *(undefined4 *)(iVar9 + 0x14) = uVar15;
  iVar9 = puVar3[8];
  *(int *)(iVar9 + 0x10) = (int)uVar17;
  *(int *)(iVar9 + 0x14) = (int)((ulonglong)uVar17 >> 0x20);
  local_24 = s_cState_Invalid_0046a6fc;
  local_28 = iVar16;
  func_0010BEC4((int)puVar3,3,&local_28);
  uVar11 = puVar4[0xe];
  iVar16 = puVar3[6];
  uVar15 = puVar4[0xf];
  uVar10 = puVar4[0x10];
  iVar9 = puVar4[0x11];
  *(undefined4 *)(iVar16 + 0x18) = uVar11;
  *(undefined4 *)(iVar16 + 0x1c) = uVar15;
  iVar16 = puVar3[7];
  *(undefined4 *)(iVar16 + 0x18) = uVar10;
  *(int *)(iVar16 + 0x1c) = iVar9;
  iVar16 = puVar3[8];
  *(int *)(iVar16 + 0x18) = (int)uVar17;
  *(int *)(iVar16 + 0x1c) = (int)((ulonglong)uVar17 >> 0x20);
  if ((*DAT_0046a77c == 0) && (bVar2 = func_00584B94(0,DAT_0046a780), bVar2)) {
    uVar14 = (uint)*(byte *)((int)puVar3 + -0x43);
    bVar2 = uVar14 == 0;
    if (bVar2) {
      uVar14 = (uint)*(byte *)((int)puVar3 + -0x42);
    }
    if (bVar2 && uVar14 == 0) {
      *(undefined1 *)((int)puVar3 + -0x42) = 1;
      func_001B6A48(piVar12,uVar14,uVar11,iVar9);
    }
  }
  return piVar12;
}

