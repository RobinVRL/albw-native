#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00360B48(int param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00666D48(undefined4 *param_1,undefined1 param_2);
extern int DAT_003610b0;
extern int DAT_003610b4;
extern undefined4 DAT_003610b8;
extern undefined4 DAT_003610bc;
extern undefined4 DAT_003610c0;
extern undefined4 DAT_003610c4;
extern undefined4 DAT_003610c8;
extern undefined4 DAT_003610cc;
extern undefined4 *DAT_003610d0;
extern undefined4 DAT_003610d4;
extern undefined4 DAT_003610d8;
extern undefined4 DAT_003610dc;
extern int *DAT_003610e0;
extern undefined *DAT_003610e4;
extern int DAT_003610e8;
extern int DAT_003610fc;
extern char s_cState_Delete_00361398[];
extern char s_cState_HitGanon_00361388[];
extern char s_cState_Idle_0036137c[];
extern char s_cState_MoveToGanon_00361354[];
extern char s_cState_MoveToPlayer_00361100[];
extern char s_cState_Parent_003610ec[];
extern char s_cState_ReflectFail_00361368[];

// USA 00360C94 <- EU 00360C70 (Ghidra, non-matching)
// GLOBAL DAT_003610b0 int
// GLOBAL DAT_003610b4 int
// GLOBAL DAT_003610b8 undefined4
// GLOBAL DAT_003610bc undefined4
// GLOBAL DAT_003610c0 undefined4
// GLOBAL DAT_003610c4 undefined4
// GLOBAL DAT_003610c8 undefined4
// GLOBAL DAT_003610cc undefined4
// GLOBAL DAT_003610d0 undefined4 *
// GLOBAL DAT_003610d4 undefined4
// GLOBAL DAT_003610d8 undefined4
// GLOBAL DAT_003610dc undefined4
// GLOBAL DAT_003610e0 int *
// GLOBAL DAT_003610e4 undefined *
// GLOBAL DAT_003610e8 int
// GLOBAL DAT_003610fc int
// GLOBAL s_cState_Delete_00361398 string
// GLOBAL s_cState_HitGanon_00361388 string
// GLOBAL s_cState_Idle_0036137c string
// GLOBAL s_cState_MoveToGanon_00361354 string
// GLOBAL s_cState_MoveToPlayer_00361100 string
// GLOBAL s_cState_Parent_003610ec string
// GLOBAL s_cState_ReflectFail_00361368 string

undefined4 * func_00360C94(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(uint *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar3 = func_00150E40(param_1,param_2);
  iVar9 = DAT_003610b0;
  *piVar3 = DAT_003610b0;
  piVar3[200] = iVar9 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x103);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  iVar5 = func_0054D89C((int)(puVar4 + -0x103),0);
  iVar9 = DAT_003610b4;
  puVar4[0xe] = iVar5;
  uVar16 = DAT_003610c4;
  uVar7 = DAT_003610bc;
  uVar12 = *(undefined4 *)(iVar9 + 8);
  puVar4[0x11] = *(undefined4 *)(iVar9 + 4);
  puVar4[0x12] = uVar12;
  uVar18 = DAT_003610d8;
  uVar17 = DAT_003610c8;
  uVar12 = DAT_003610b8;
  puVar4[0xf] = DAT_003610b8;
  puVar4[0x10] = puVar4 + -0x103;
  uVar10 = *(undefined4 *)(iVar9 + 0xc);
  uVar15 = *(undefined4 *)(iVar9 + 0x10);
  puVar4[0x13] = uVar12;
  uVar2 = DAT_003610dc;
  puVar4[0x14] = puVar4 + -0x103;
  puVar4[0x15] = uVar10;
  puVar4[0x16] = uVar15;
  uVar10 = *(undefined4 *)(iVar9 + 0x14);
  uVar15 = *(undefined4 *)(iVar9 + 0x18);
  puVar4[0x17] = uVar12;
  puVar4[0x18] = puVar4 + -0x103;
  puVar4[0x19] = uVar10;
  puVar4[0x1a] = uVar15;
  puVar4[0x1c] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x1f] = 0;
  puVar4[0x20] = uVar7;
  puVar4[0x21] = 0;
  puVar4[0x22] = 0;
  uVar12 = DAT_003610c0;
  puVar4[0x23] = uVar7;
  puVar4[0x25] = uVar12;
  puVar4[0x26] = uVar16;
  puVar4[0x24] = 0;
  puVar4[0x27] = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = uVar7;
  puVar13 = puVar4 + -0x103;
  puVar4[0x2a] = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = uVar7;
  uVar16 = DAT_003610cc;
  puVar4[0x2d] = 0;
  puVar4[0x2e] = 0x14;
  puVar4[0x2f] = uVar7;
  puVar6 = DAT_003610d0;
  puVar4[0x30] = uVar17;
  puVar4[0x31] = uVar16;
  puVar4[0x32] = uVar17;
  uVar16 = DAT_003610d4;
  uVar10 = puVar6[1];
  uVar15 = puVar6[2];
  puVar4[0x33] = *puVar6;
  puVar4[0x34] = uVar10;
  puVar4[0x35] = uVar15;
  uVar15 = puVar6[1];
  uVar10 = puVar6[2];
  puVar4[0x36] = *puVar6;
  puVar4[0x37] = uVar15;
  puVar4[0x38] = uVar10;
  puVar4[0x39] = uVar16;
  puVar4[0x3a] = uVar18;
  puVar4[0x3b] = uVar2;
  puVar4[0x3c] = uVar7;
  puVar4[0x3d] = 0;
  if (*(short *)(puVar4 + -0xf7) == 1) {
    iVar5 = 3;
  }
  else {
    iVar5 = (int)*(short *)(puVar4 + -0xf8);
  }
  puVar4[0x3e] = iVar5;
  puVar4[0x3f] = 0;
  puVar4[0x40] = 0;
  *(undefined1 *)(puVar4 + 0x41) = 1;
  *(undefined1 *)((int)puVar4 + 0x105) = 0;
  *(bool *)((int)puVar4 + 0x106) = *(short *)(puVar4 + -0xf7) == 1;
  *(undefined1 *)((int)puVar4 + 0x107) = 1;
  puVar4[0x42] = uVar17;
  if (*(char *)(puVar4 + 1) == '\0') {
    func_0052FBA0(*DAT_003610e0 + 0x3dbbc,puVar4[-0xef]);
  }
  func_001512B4(puVar4[0xe],(float *)(puVar4 + -0xf));
  iVar5 = func_0054D964((int)puVar13,0);
  puVar4[0xb] = iVar5;
  *(uint *)(iVar5 + 0x2c) = *(uint *)(iVar5 + 0x2c) | 0x70008;
  iVar5 = func_0054D964((int)puVar13,0);
  puVar4[0xc] = iVar5;
  puVar6 = (undefined4 *)func_0010BAB4(100);
  uVar7 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    uVar7 = func_004EE484(puVar6);
  }
  puVar4[10] = uVar7;
  iVar5 = func_0054D964((int)puVar13,1);
  puVar4[0xd] = iVar5;
  *(uint *)(iVar5 + 0x2c) = *(uint *)(iVar5 + 0x2c) | 0x70;
  func_00360B48((int)puVar13);
  local_3c = puVar4[-0x50];
  func_0014EB8C(puVar4[10],puVar4[0xb],(undefined2 *)puVar4[-0x1b],&local_3c,
                *(undefined2 *)(puVar4 + -0xee),puVar4 + 0x17,(short)uVar12);
  *(undefined1 *)((int)puVar4 + 6) = 7;
  puVar4[5] = puVar13;
  iVar5 = func_0010BA78(0x70);
  puVar4[6] = iVar5;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar11 = 7;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar12 = *(undefined4 *)(iVar9 + 0xb0);
    iVar11 = iVar11 + -1;
    puVar6[2] = *(undefined4 *)(iVar9 + 0xac);
    puVar6[3] = uVar12;
    uVar12 = *(undefined4 *)(iVar9 + 0xb0);
    puVar6[4] = *(undefined4 *)(iVar9 + 0xac);
    puVar6[5] = uVar12;
    puVar6 = puVar6 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar14 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar4[8] = puVar6;
  if (uVar14 != 0) {
    puVar8 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = *(undefined4 *)(iVar9 + 0x30);
      *puVar6 = *(undefined4 *)(iVar9 + 0x2c);
      puVar6[1] = uVar12;
      puVar8 = puVar6;
    }
    for (iVar5 = (int)uVar14 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar12 = *(undefined4 *)(iVar9 + 0x30);
      puVar8[2] = *(undefined4 *)(iVar9 + 0x2c);
      puVar8[3] = uVar12;
      uVar12 = *(undefined4 *)(iVar9 + 0x30);
      puVar8[4] = *(undefined4 *)(iVar9 + 0x2c);
      puVar8[5] = uVar12;
      puVar8 = puVar8 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 7;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_003610e4,0x24,7);
  }
  if (iVar5 != 0) {
    puVar4[3] = iVar5;
    puVar4[2] = 7;
  }
  iVar5 = DAT_003610e8;
  puVar4[-0x2e] = puVar4;
  iVar11 = DAT_003610fc;
  *(undefined2 *)(iVar5 + (int)puVar13) = 7;
  local_34 = s_cState_Parent_003610ec;
  local_38 = iVar11;
  func_0010BEC4((int)puVar4,0,&local_38);
  puVar6 = (undefined4 *)puVar4[6];
  uVar12 = *(undefined4 *)(iVar9 + 0x20);
  uVar7 = *(undefined4 *)(iVar9 + 0x24);
  uVar16 = *(undefined4 *)(iVar9 + 0x28);
  uVar19 = *(undefined8 *)(iVar9 + 0x2c);
  *puVar6 = *(undefined4 *)(iVar9 + 0x1c);
  puVar6[1] = uVar12;
  puVar6 = (undefined4 *)puVar4[7];
  *puVar6 = uVar7;
  puVar6[1] = uVar16;
  puVar6 = (undefined4 *)puVar4[8];
  *puVar6 = (int)uVar19;
  puVar6[1] = (int)((ulonglong)uVar19 >> 0x20);
  local_34 = s_cState_MoveToPlayer_00361100;
  local_38 = iVar11;
  func_0010BEC4((int)puVar4,1,&local_38);
  iVar5 = puVar4[6];
  uVar16 = *(undefined4 *)(iVar9 + 0x38);
  uVar12 = *(undefined4 *)(iVar9 + 0x3c);
  uVar7 = *(undefined4 *)(iVar9 + 0x40);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar9 + 0x34);
  *(undefined4 *)(iVar5 + 0xc) = uVar16;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar12;
  *(undefined4 *)(iVar5 + 0xc) = uVar7;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 8) = (int)uVar19;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar19 >> 0x20);
  local_34 = s_cState_MoveToGanon_00361354;
  local_38 = iVar11;
  func_0010BEC4((int)puVar4,2,&local_38);
  iVar5 = puVar4[6];
  uVar16 = *(undefined4 *)(iVar9 + 0x48);
  uVar12 = *(undefined4 *)(iVar9 + 0x4c);
  uVar7 = *(undefined4 *)(iVar9 + 0x50);
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar9 + 0x44);
  *(undefined4 *)(iVar5 + 0x14) = uVar16;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar12;
  *(undefined4 *)(iVar5 + 0x14) = uVar7;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x10) = (int)uVar19;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar19 >> 0x20);
  local_34 = s_cState_ReflectFail_00361368;
  local_38 = iVar11;
  func_0010BEC4((int)puVar4,3,&local_38);
  iVar5 = puVar4[6];
  uVar7 = *(undefined4 *)(iVar9 + 0x58);
  uVar12 = *(undefined4 *)(iVar9 + 0x5c);
  uVar16 = *(undefined4 *)(iVar9 + 0x60);
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar9 + 0x54);
  *(undefined4 *)(iVar5 + 0x1c) = uVar7;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x18) = uVar12;
  *(undefined4 *)(iVar5 + 0x1c) = uVar16;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x18) = (int)uVar19;
  *(int *)(iVar5 + 0x1c) = (int)((ulonglong)uVar19 >> 0x20);
  local_34 = s_cState_Idle_0036137c;
  local_38 = iVar11;
  func_0010BEC4((int)puVar4,4,&local_38);
  iVar5 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar9 + 0x68);
  uVar7 = *(undefined4 *)(iVar9 + 0x6c);
  uVar16 = *(undefined4 *)(iVar9 + 0x70);
  uVar17 = *(undefined4 *)(iVar9 + 0x74);
  uVar18 = *(undefined4 *)(iVar9 + 0x78);
  *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar9 + 100);
  *(undefined4 *)(iVar5 + 0x24) = uVar12;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x20) = uVar7;
  *(undefined4 *)(iVar5 + 0x24) = uVar16;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x20) = uVar17;
  *(undefined4 *)(iVar5 + 0x24) = uVar18;
  local_34 = s_cState_HitGanon_00361388;
  local_38 = iVar11;
  func_0010BEC4((int)puVar4,5,&local_38);
  iVar5 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar9 + 0x80);
  uVar7 = *(undefined4 *)(iVar9 + 0x84);
  uVar16 = *(undefined4 *)(iVar9 + 0x88);
  uVar17 = *(undefined4 *)(iVar9 + 0x8c);
  uVar18 = *(undefined4 *)(iVar9 + 0x90);
  *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar9 + 0x7c);
  *(undefined4 *)(iVar5 + 0x2c) = uVar12;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x28) = uVar7;
  *(undefined4 *)(iVar5 + 0x2c) = uVar16;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x28) = uVar17;
  *(undefined4 *)(iVar5 + 0x2c) = uVar18;
  local_34 = s_cState_Delete_00361398;
  local_38 = iVar11;
  func_0010BEC4((int)puVar4,6,&local_38);
  iVar5 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar9 + 0x98);
  uVar17 = *(undefined4 *)(iVar9 + 0x9c);
  uVar16 = *(undefined4 *)(iVar9 + 0xa0);
  uVar7 = *(undefined4 *)(iVar9 + 0xa4);
  uVar18 = *(undefined4 *)(iVar9 + 0xa8);
  *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(iVar9 + 0x94);
  *(undefined4 *)(iVar5 + 0x34) = uVar12;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 0x30) = uVar17;
  *(undefined4 *)(iVar9 + 0x34) = uVar16;
  iVar9 = puVar4[8];
  *(undefined4 *)(iVar9 + 0x30) = uVar7;
  *(undefined4 *)(iVar9 + 0x34) = uVar18;
  func_00666D48(puVar4,0);
  piVar3 = DAT_003610e0;
  iVar9 = func_0052FBA0(*DAT_003610e0 + 0x3dbbc,puVar4[-0xef]);
  if (iVar9 != 0) {
    if (*(short *)((int)puVar4 + -0x3de) == 0) {
      *(undefined4 *)(iVar9 + 0xc94) = puVar4[-0x50];
    }
    else if (*(short *)((int)puVar4 + -0x3de) == 1) {
      *(undefined4 *)(iVar9 + 0xc98) = puVar4[-0x50];
    }
  }
  if (*(char *)(puVar4 + 1) == '\0') {
    func_0052FBA0(*piVar3 + 0x3dbbc,puVar4[-0xef]);
  }
  func_001512B4(puVar4[0xe],(float *)(puVar4 + -0xf));
  *(undefined1 *)((int)puVar4 + 0x107) = 0;
  return puVar13;
}

