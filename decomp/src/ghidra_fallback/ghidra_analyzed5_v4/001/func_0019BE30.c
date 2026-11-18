#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_0019B9C4(int param_1);
extern int func_002C40E4(int *param_1,int param_2);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern int func_004356B4(int *param_1);
extern int func_004ECF6C(int param_1);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00659F64(undefined4 *param_1,undefined1 param_2);
extern int DAT_0019c254;
extern int DAT_0019c258;
extern undefined DAT_0019c25c;
extern undefined4 DAT_0019c270;
extern undefined4 *DAT_0019c274;
extern undefined4 DAT_0019c278;
extern undefined *DAT_0019c27c;
extern int DAT_0019c280;
extern char s_cState_Hide_0019c284[];
extern char s_cState_Hold_0019c29c[];
extern char s_cState_Near_0019c2a8[];
extern char s_cState_Show_0019c290[];
extern char s_cState_Wait_0019c2b4[];

// USA 0019BE30 <- EU 0019BE30 (Ghidra, non-matching)
// GLOBAL DAT_0019c254 int
// GLOBAL DAT_0019c258 int
// GLOBAL DAT_0019c25c undefined
// GLOBAL DAT_0019c270 undefined4
// GLOBAL DAT_0019c274 undefined4 *
// GLOBAL DAT_0019c278 undefined4
// GLOBAL DAT_0019c27c undefined *
// GLOBAL DAT_0019c280 int
// GLOBAL s_cState_Hide_0019c284 string
// GLOBAL s_cState_Hold_0019c29c string
// GLOBAL s_cState_Near_0019c2a8 string
// GLOBAL s_cState_Show_0019c290 string
// GLOBAL s_cState_Wait_0019c2b4 string

undefined4 * func_0019BE30(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar5 = func_00150E40(param_1,param_2);
  iVar6 = DAT_0019c254;
  *piVar5 = DAT_0019c254;
  piVar5[0x103] = 0;
  piVar5[200] = iVar6 + 0x5c;
  iVar6 = func_0054D964((int)piVar5,0);
  piVar5[0x104] = iVar6;
  fVar19 = func_0054DE3C(piVar5,0,1);
  piVar5[0x105] = (int)ALBW_AS_U32(fVar19);
  puVar7 = (undefined4 *)func_0010BAB4(0x108);
  iVar2 = DAT_0019c258;
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    local_34 = &DAT_0019c25c;
    local_38 = DAT_0019c258;
    iVar6 = func_001663BC(puVar7,&local_38,piVar5[0xb3],0,1);
  }
  piVar5[0x106] = iVar6;
  puVar8 = func_0010A794(piVar5 + 0x107);
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  uVar13 = DAT_0019c270;
  puVar8[10] = 0;
  puVar8[0xb] = uVar13;
  *(undefined1 *)(puVar8 + 0xc) = 0;
  *(undefined1 *)((int)puVar8 + 0x31) = 0;
  *(undefined1 *)((int)puVar8 + 0x32) = 0;
  *(undefined1 *)((int)puVar8 + 0x33) = 0;
  puVar8[0xd] = 0;
  *(undefined1 *)(puVar8 + 0xf) = 0;
  puVar8[0x10] = 0;
  puVar7 = DAT_0019c274;
  *(undefined2 *)(puVar8 + 0x11) = 0;
  *(undefined1 *)((int)puVar8 + 0x46) = 0;
  puVar8[0x13] = 0;
  uVar13 = puVar7[0x1b];
  puVar8[0x14] = puVar7[0x1a];
  puVar8[0x15] = uVar13;
  puVar8[0x12] = DAT_0019c278;
  puVar9 = func_002E1BB4(puVar8 + 0x16,0);
  puVar9[2] = 0;
  puVar15 = puVar9 + -0x11d;
  *(undefined1 *)(puVar9[-0x17] + 0x13) = 4;
  uVar13 = puVar7[1];
  uVar11 = *puVar7;
  puVar9[-3] = puVar15;
  puVar9[-1] = uVar13;
  puVar9[-2] = uVar11;
  *(undefined1 *)((int)puVar9 + -0x52) = 5;
  puVar16 = puVar9 + -0x16;
  puVar9[-0x11] = puVar15;
  iVar6 = func_0010BA78(0x50);
  puVar9[-0x10] = iVar6;
  puVar9[-0xf] = iVar6 + (uint)*(byte *)((int)puVar9 + -0x52) * 8;
  iVar12 = 5;
  puVar8 = (undefined4 *)(iVar6 + -8);
  do {
    uVar13 = puVar7[0x19];
    iVar12 = iVar12 + -1;
    puVar8[2] = puVar7[0x18];
    puVar8[3] = uVar13;
    uVar13 = puVar7[0x19];
    puVar8[4] = puVar7[0x18];
    puVar8[5] = uVar13;
    puVar8 = puVar8 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar9 + -0x52);
  uVar17 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar17 << 3);
  puVar9[-0xe] = puVar8;
  if (uVar17 != 0) {
    puVar10 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar7[7];
      *puVar8 = puVar7[6];
      puVar8[1] = uVar13;
      puVar10 = puVar8;
    }
    for (iVar6 = (int)uVar17 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar13 = puVar7[7];
      puVar10[2] = puVar7[6];
      puVar10[3] = uVar13;
      uVar13 = puVar7[7];
      puVar10[4] = puVar7[6];
      puVar10[5] = uVar13;
      puVar10 = puVar10 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  puVar3 = DAT_0019c27c;
  iVar6 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar8[1] = 5;
    *puVar8 = 0x24;
    iVar6 = func_00100118((int)(puVar8 + 2),puVar3,0x24,5);
  }
  if (iVar6 != 0) {
    puVar9[-0x13] = iVar6;
    puVar9[-0x14] = 5;
  }
  iVar6 = DAT_0019c280;
  puVar9[-0x48] = puVar16;
  *(undefined2 *)(iVar6 + (int)puVar15) = 5;
  local_34 = s_cState_Hide_0019c284;
  local_38 = iVar2;
  func_0010BEC4((int)puVar16,0,&local_38);
  puVar8 = (undefined4 *)puVar9[-0x10];
  uVar11 = puVar7[3];
  uVar14 = puVar7[4];
  uVar20 = puVar7[7];
  uVar13 = puVar7[5];
  uVar18 = puVar7[6];
  *puVar8 = puVar7[2];
  puVar8[1] = uVar11;
  puVar8 = (undefined4 *)puVar9[-0xf];
  puVar8[1] = uVar13;
  *puVar8 = uVar14;
  puVar8 = (undefined4 *)puVar9[-0xe];
  *puVar8 = uVar18;
  puVar8[1] = uVar20;
  local_34 = s_cState_Show_0019c290;
  local_38 = iVar2;
  func_0010BEC4((int)puVar16,1,&local_38);
  iVar6 = puVar9[-0x10];
  uVar13 = puVar7[9];
  uVar11 = puVar7[10];
  uVar14 = puVar7[0xb];
  *(undefined4 *)(iVar6 + 8) = puVar7[8];
  *(undefined4 *)(iVar6 + 0xc) = uVar13;
  iVar6 = puVar9[-0xf];
  *(undefined4 *)(iVar6 + 8) = uVar11;
  *(undefined4 *)(iVar6 + 0xc) = uVar14;
  iVar6 = puVar9[-0xe];
  *(undefined4 *)(iVar6 + 8) = uVar18;
  *(undefined4 *)(iVar6 + 0xc) = uVar20;
  local_34 = s_cState_Hold_0019c29c;
  local_38 = iVar2;
  func_0010BEC4((int)puVar16,2,&local_38);
  iVar6 = puVar9[-0x10];
  uVar11 = puVar7[0xd];
  uVar14 = puVar7[0xe];
  uVar13 = puVar7[0xf];
  *(undefined4 *)(iVar6 + 0x10) = puVar7[0xc];
  *(undefined4 *)(iVar6 + 0x14) = uVar11;
  iVar6 = puVar9[-0xf];
  *(undefined4 *)(iVar6 + 0x10) = uVar14;
  *(undefined4 *)(iVar6 + 0x14) = uVar13;
  iVar6 = puVar9[-0xe];
  *(undefined4 *)(iVar6 + 0x10) = uVar18;
  *(undefined4 *)(iVar6 + 0x14) = uVar20;
  local_34 = s_cState_Near_0019c2a8;
  local_38 = iVar2;
  func_0010BEC4((int)puVar16,3,&local_38);
  iVar6 = puVar9[-0x10];
  uVar14 = puVar7[0x11];
  uVar13 = puVar7[0x13];
  uVar11 = puVar7[0x12];
  *(undefined4 *)(iVar6 + 0x18) = puVar7[0x10];
  *(undefined4 *)(iVar6 + 0x1c) = uVar14;
  iVar6 = puVar9[-0xf];
  *(undefined4 *)(iVar6 + 0x18) = uVar11;
  *(undefined4 *)(iVar6 + 0x1c) = uVar13;
  iVar6 = puVar9[-0xe];
  *(undefined4 *)(iVar6 + 0x18) = uVar18;
  *(undefined4 *)(iVar6 + 0x1c) = uVar20;
  local_34 = s_cState_Wait_0019c2b4;
  local_38 = iVar2;
  func_0010BEC4((int)puVar16,4,&local_38);
  iVar6 = puVar9[-0x10];
  uVar13 = puVar7[0x16];
  uVar11 = puVar7[0x17];
  uVar14 = puVar7[0x15];
  *(undefined4 *)(iVar6 + 0x20) = puVar7[0x14];
  *(undefined4 *)(iVar6 + 0x24) = uVar14;
  iVar6 = puVar9[-0xf];
  *(undefined4 *)(iVar6 + 0x20) = uVar13;
  *(undefined4 *)(iVar6 + 0x24) = uVar11;
  iVar6 = puVar9[-0xe];
  *(undefined4 *)(iVar6 + 0x20) = uVar18;
  *(undefined4 *)(iVar6 + 0x24) = uVar20;
  bVar4 = func_00588BF0((int)puVar15,0);
  if (bVar4) {
    func_002C40E4(puVar9 + -0x55,(int)puVar15);
    func_00659F64(puVar16,3);
  }
  else {
    func_00659F64(puVar16,0);
  }
  func_004356B4((int *)puVar9[-0x19]);
  func_004ECF6C((int)puVar15);
  func_0019B9C4((int)puVar15);
  return puVar15;
}

