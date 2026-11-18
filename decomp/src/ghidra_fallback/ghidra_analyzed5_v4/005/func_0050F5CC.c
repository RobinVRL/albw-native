#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_0015C274(void);
extern int func_0015C580(void);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern int func_003673F4(undefined4 *param_1,int param_2);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004C173C(int *param_1,int param_2,undefined4 param_3);
extern int func_004C1820(int param_1,int param_2,int param_3,int *param_4,undefined8 param_5);
extern int func_0050E5B8(int param_1);
extern int func_0050F444(int param_1);
extern int func_0050F4A8(int param_1);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00639238(int param_1,int param_2,undefined1 param_3);
extern int func_00639EBC(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_0050f9c4;
extern int *DAT_0050f9c8;
extern undefined DAT_0050f9cc;
extern int DAT_0050f9dc;
extern undefined4 *DAT_0050f9ec;
extern undefined *DAT_0050f9f0;
extern int DAT_0050f9f4;
extern undefined4 *DAT_0050fa3c;
extern undefined4 DAT_0050fc1c;
extern int *DAT_0050fc20;
extern undefined4 *DAT_0050fc24;
extern int DAT_0050fc28;
extern float DAT_0050fc2c;
extern undefined4 DAT_0050fc30;
extern float *DAT_0050fc34;
extern char s_cState_EventEnd_0050fa20[];
extern char s_cState_Event_0050fa10[];
extern char s_cState_Hide_0050fa30[];
extern char s_cState_Wait_0050f9f8[];
extern char s_cState_Walk_0050fa04[];
extern char s_skl_root_0050f9e0[];

// USA 0050F5CC <- EU 0050F5A4 (Ghidra, non-matching)
// GLOBAL DAT_0050f9c4 int
// GLOBAL DAT_0050f9c8 int *
// GLOBAL DAT_0050f9cc undefined
// GLOBAL DAT_0050f9dc int
// GLOBAL DAT_0050f9ec undefined4 *
// GLOBAL DAT_0050f9f0 undefined *
// GLOBAL DAT_0050f9f4 int
// GLOBAL DAT_0050fa3c undefined4 *
// GLOBAL DAT_0050fc1c undefined4
// GLOBAL DAT_0050fc20 int *
// GLOBAL DAT_0050fc24 undefined4 *
// GLOBAL DAT_0050fc28 int
// GLOBAL DAT_0050fc2c float
// GLOBAL DAT_0050fc30 undefined4
// GLOBAL DAT_0050fc34 float *
// GLOBAL s_cState_EventEnd_0050fa20 string
// GLOBAL s_cState_Event_0050fa10 string
// GLOBAL s_cState_Hide_0050fa30 string
// GLOBAL s_cState_Wait_0050f9f8 string
// GLOBAL s_cState_Walk_0050fa04 string
// GLOBAL s_skl_root_0050f9e0 string

int * func_0050F5CC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  short sVar2;
  float *pfVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(int *)(albw_frame + 0x10))
  #define local_4c (*(char * *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined1 *)(albw_frame + 0x24))
  #define local_3b (*(undefined1 *)(albw_frame + 0x25))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x34))
  #define local_28 (*(uint * *)(albw_frame + 0x38))
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_3b = 1;
  puStack_2c = param_1;
  local_28 = param_2;
  piVar4 = (int *)func_00639EBC(param_1,param_2,0,0xff,&local_48);
  iVar14 = DAT_0050f9c4;
  piVar4[200] = DAT_0050f9c4 + 0xb8;
  *piVar4 = iVar14;
  puVar5 = func_002E1BB4(piVar4 + 0x263,0);
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  iVar6 = func_003673F4(puVar5 + 0x10,3);
  *(undefined2 *)(iVar6 + 0x38) = 0xffff;
  *(undefined2 *)(iVar6 + 0x3a) = 0xffff;
  piVar13 = (int *)(iVar6 + -0x9cc);
  *(undefined4 *)(iVar6 + 0x3c) = 0;
  *(undefined4 *)(iVar6 + 0x40) = 0;
  *(undefined4 *)(iVar6 + 0x48) = 0xffff;
  piVar4 = DAT_0050f9c8;
  *(undefined4 *)(iVar6 + 0x44) = 0;
  *(undefined1 *)(iVar6 + 0x4c) = 0;
  func_004C1820((int)piVar13,0xd,(int)(piVar4 + 2),piVar4,1);
  iVar14 = DAT_0050f9dc;
  local_4c = &DAT_0050f9cc;
  local_50 = DAT_0050f9dc;
  func_004C173C(piVar13,0xd,0);
  local_4c = s_skl_root_0050f9e0;
  local_50 = iVar14;
  uVar7 = func_00564A78(*(int *)(iVar6 + -0x228),&local_50);
  *(uint *)(iVar6 + 0x48) = uVar7;
  *(undefined1 *)(iVar6 + -0x66) = 5;
  *(int **)(iVar6 + -0x58) = piVar13;
  iVar8 = func_0010BA78(0x50);
  *(int *)(iVar6 + -0x54) = iVar8;
  puVar5 = DAT_0050f9ec;
  *(uint *)(iVar6 + -0x50) = iVar8 + (uint)*(byte *)(iVar6 + -0x66) * 8;
  iVar11 = 5;
  puVar9 = (undefined4 *)(iVar8 + -8);
  do {
    uVar15 = puVar5[0x1b];
    iVar11 = iVar11 + -1;
    puVar9[2] = puVar5[0x1a];
    puVar9[3] = uVar15;
    uVar15 = puVar5[0x1b];
    puVar9[4] = puVar5[0x1a];
    puVar9[5] = uVar15;
    puVar9 = puVar9 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)(iVar6 + -0x66);
  uVar7 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar7 << 3);
  *(undefined4 **)(iVar6 + -0x4c) = puVar9;
  if (uVar7 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = puVar5[5];
      *puVar9 = puVar5[4];
      puVar9[1] = uVar15;
      puVar10 = puVar9;
    }
    for (iVar8 = (int)uVar7 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar15 = puVar5[5];
      puVar10[2] = puVar5[4];
      puVar10[3] = uVar15;
      uVar15 = puVar5[5];
      puVar10[4] = puVar5[4];
      puVar10[5] = uVar15;
      puVar10 = puVar10 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar8 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 5;
    iVar8 = func_00100118((int)(puVar9 + 2),DAT_0050f9f0,0x24,5);
  }
  if (iVar8 != 0) {
    *(undefined4 *)(iVar6 + -100) = 5;
    *(int *)(iVar6 + -0x60) = iVar8;
  }
  iVar8 = DAT_0050f9f4;
  *(int *)(iVar6 + -0x678) = iVar6 + -0x6c;
  *(undefined2 *)(iVar8 + (int)piVar13) = 5;
  local_4c = s_cState_Wait_0050f9f8;
  local_50 = iVar14;
  func_0010BEC4(iVar6 + -0x6c,0,&local_50);
  puVar9 = *(undefined4 **)(iVar6 + -0x54);
  uVar15 = puVar5[1];
  uVar16 = puVar5[2];
  uVar12 = puVar5[3];
  uVar19 = *(undefined8 *)(puVar5 + 4);
  *puVar9 = *puVar5;
  puVar9[1] = uVar15;
  puVar9 = *(undefined4 **)(iVar6 + -0x50);
  puVar9[1] = uVar12;
  *puVar9 = uVar16;
  puVar9 = *(undefined4 **)(iVar6 + -0x4c);
  *puVar9 = (int)uVar19;
  puVar9[1] = (int)((ulonglong)uVar19 >> 0x20);
  local_4c = s_cState_Walk_0050fa04;
  local_50 = iVar14;
  func_0010BEC4(iVar6 + -0x6c,1,&local_50);
  iVar8 = *(int *)(iVar6 + -0x54);
  uVar16 = puVar5[7];
  uVar15 = puVar5[9];
  uVar12 = puVar5[8];
  *(undefined4 *)(iVar8 + 8) = puVar5[6];
  *(undefined4 *)(iVar8 + 0xc) = uVar16;
  iVar8 = *(int *)(iVar6 + -0x50);
  *(undefined4 *)(iVar8 + 8) = uVar12;
  *(undefined4 *)(iVar8 + 0xc) = uVar15;
  iVar8 = *(int *)(iVar6 + -0x4c);
  *(int *)(iVar8 + 8) = (int)uVar19;
  *(int *)(iVar8 + 0xc) = (int)((ulonglong)uVar19 >> 0x20);
  local_4c = s_cState_Event_0050fa10;
  local_50 = iVar14;
  func_0010BEC4(iVar6 + -0x6c,2,&local_50);
  iVar8 = *(int *)(iVar6 + -0x54);
  uVar15 = puVar5[0xd];
  uVar12 = puVar5[0xc];
  uVar16 = puVar5[0xb];
  *(undefined4 *)(iVar8 + 0x10) = puVar5[10];
  *(undefined4 *)(iVar8 + 0x14) = uVar16;
  iVar8 = *(int *)(iVar6 + -0x50);
  *(undefined4 *)(iVar8 + 0x10) = uVar12;
  *(undefined4 *)(iVar8 + 0x14) = uVar15;
  iVar8 = *(int *)(iVar6 + -0x4c);
  *(int *)(iVar8 + 0x10) = (int)uVar19;
  *(int *)(iVar8 + 0x14) = (int)((ulonglong)uVar19 >> 0x20);
  local_4c = s_cState_EventEnd_0050fa20;
  local_50 = iVar14;
  func_0010BEC4(iVar6 + -0x6c,3,&local_50);
  iVar8 = *(int *)(iVar6 + -0x54);
  uVar15 = puVar5[0xf];
  uVar12 = puVar5[0x10];
  uVar16 = puVar5[0x11];
  uVar17 = puVar5[0x12];
  uVar18 = puVar5[0x13];
  *(undefined4 *)(iVar8 + 0x18) = puVar5[0xe];
  *(undefined4 *)(iVar8 + 0x1c) = uVar15;
  iVar8 = *(int *)(iVar6 + -0x50);
  *(undefined4 *)(iVar8 + 0x18) = uVar12;
  *(undefined4 *)(iVar8 + 0x1c) = uVar16;
  iVar8 = *(int *)(iVar6 + -0x4c);
  *(undefined4 *)(iVar8 + 0x18) = uVar17;
  *(undefined4 *)(iVar8 + 0x1c) = uVar18;
  local_4c = s_cState_Hide_0050fa30;
  local_50 = iVar14;
  func_0010BEC4(iVar6 + -0x6c,4,&local_50);
  uVar17 = puVar5[0x19];
  iVar14 = *(int *)(iVar6 + -0x54);
  uVar12 = puVar5[0x15];
  uVar15 = puVar5[0x16];
  uVar16 = puVar5[0x17];
  uVar18 = puVar5[0x18];
  *(undefined4 *)(iVar14 + 0x20) = puVar5[0x14];
  *(undefined4 *)(iVar14 + 0x24) = uVar12;
  iVar14 = *(int *)(iVar6 + -0x50);
  *(undefined4 *)(iVar14 + 0x20) = uVar15;
  *(undefined4 *)(iVar14 + 0x24) = uVar16;
  iVar14 = *(int *)(iVar6 + -0x4c);
  *(undefined4 *)(iVar14 + 0x20) = uVar18;
  *(undefined4 *)(iVar14 + 0x24) = uVar17;
  func_00639238((int)piVar13,*(int *)(iVar6 + -0x48),0);
  func_004C03B8((int)piVar13,DAT_0050fa3c);
  sVar2 = *(short *)((int)local_28 + 0x2a);
  if (sVar2 == 0) {
    *(undefined4 *)(iVar6 + -0x118) = DAT_0050fc1c;
    *(undefined4 *)(iVar6 + 0x44) = 0;
    func_0050F444((int)piVar13);
  }
  else if (sVar2 == 1) {
    *(uint *)(iVar6 + -0x6ec) = *(uint *)(iVar6 + -0x6ec) | 2;
    *(undefined4 *)(iVar6 + 0x44) = 0;
    iVar14 = func_0015C580();
    if ((iVar14 != 0) && (iVar14 = func_0015C274(), iVar14 != 0)) {
      uVar15 = *(undefined4 *)(iVar14 + 0x3d4);
      uVar12 = *(undefined4 *)(iVar14 + 0x3d8);
      *(undefined4 *)(iVar6 + -0x664) = *(undefined4 *)(iVar14 + 0x3d0);
      *(undefined4 *)(iVar6 + -0x660) = uVar15;
      *(undefined4 *)(iVar6 + -0x65c) = uVar12;
      uVar15 = *(undefined4 *)(iVar14 + 0x3d0);
      uVar12 = *(undefined4 *)(iVar14 + 0x3d4);
      *(undefined4 *)(iVar6 + -0x5f4) = *(undefined4 *)(iVar14 + 0x3d8);
      *(undefined4 *)(iVar6 + -0x5fc) = uVar15;
      *(undefined4 *)(iVar6 + -0x5f8) = uVar12;
      *(undefined4 *)(iVar6 + 0x44) = 1;
    }
    *(undefined1 *)(iVar6 + -0x176) = 7;
    func_0050F444((int)piVar13);
  }
  else if (sVar2 == 2) {
    *(uint *)(iVar6 + -0x6ec) = *(uint *)(iVar6 + -0x6ec) | 2;
    *(undefined4 *)(iVar6 + 0x44) = 0;
    iVar14 = func_0015C580();
    if ((iVar14 != 0) && (iVar14 = func_0015C274(), iVar14 != 0)) {
      uVar15 = *(undefined4 *)(iVar14 + 0x3d4);
      uVar12 = *(undefined4 *)(iVar14 + 0x3d8);
      *(undefined4 *)(iVar6 + -0x664) = *(undefined4 *)(iVar14 + 0x3d0);
      *(undefined4 *)(iVar6 + -0x660) = uVar15;
      *(undefined4 *)(iVar6 + -0x65c) = uVar12;
      uVar15 = *(undefined4 *)(iVar14 + 0x3d0);
      uVar12 = *(undefined4 *)(iVar14 + 0x3d4);
      *(undefined4 *)(iVar6 + -0x5f4) = *(undefined4 *)(iVar14 + 0x3d8);
      *(undefined4 *)(iVar6 + -0x5fc) = uVar15;
      *(undefined4 *)(iVar6 + -0x5f8) = uVar12;
    }
    func_0050E5B8((int)piVar13);
    func_0050F4A8((int)piVar13);
    local_5c = DAT_0050fc2c;
    puVar5 = DAT_0050fc24;
    iVar14 = *(int *)(*DAT_0050fc20 + 0x18);
    if (iVar14 != 0) {
      *(undefined4 *)(iVar6 + -0x38) = *DAT_0050fc24;
      uStack_58 = DAT_0050fc30;
      *(undefined4 *)(iVar6 + -0x34) = puVar5[1];
      *(undefined4 *)(iVar6 + -0x30) = puVar5[2];
      *(undefined4 *)(iVar6 + -0x2c) = puVar5[3];
      uVar15 = puVar5[5];
      uVar12 = puVar5[6];
      *(undefined4 *)(iVar6 + -0x28) = puVar5[4];
      *(undefined4 *)(iVar6 + -0x24) = uVar15;
      *(undefined4 *)(iVar6 + -0x20) = uVar12;
      *(undefined4 *)(iVar6 + -0x1c) = puVar5[7];
      *(undefined4 *)(iVar6 + -0x18) = puVar5[8];
      *(undefined4 *)(iVar6 + -0x14) = puVar5[9];
      pfVar3 = DAT_0050fc34;
      *(undefined2 *)(iVar6 + -0x10) = *(undefined2 *)(puVar5 + 10);
      *(undefined2 *)(iVar6 + -0xe) = *(undefined2 *)((int)puVar5 + 0x2a);
      *(undefined2 *)(DAT_0050fc28 + (int)piVar13) = 0;
      local_54 = local_5c;
      func_00120FBC(iVar14,(undefined4 *)(iVar6 + -0x40),pfVar3,(undefined4 *)(iVar6 + -0x38),0,0,
                    &local_5c);
    }
  }
  return piVar13;
}

