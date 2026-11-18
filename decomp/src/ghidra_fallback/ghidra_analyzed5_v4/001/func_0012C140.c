#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_00656B60(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_0012c544;
extern int DAT_0012c548;
extern int DAT_0012c54c;
extern undefined4 DAT_0012c550;
extern undefined4 *DAT_0012c554;
extern undefined4 DAT_0012c558;
extern int DAT_0012c55c;
extern undefined *DAT_0012c560;
extern int DAT_0012c564;
extern int DAT_0012c574;
extern char s_cState_Die_0012c5c8[];
extern char s_cState_Lie_0012c578[];
extern char s_cState_PreReturn_0012c594[];
extern char s_cState_Reaction_0012c5b8[];
extern char s_cState_Return_0012c5a8[];
extern char s_cState_Struggle_0012c584[];
extern char s_cState_Walk_0012c568[];

// USA 0012C140 <- EU 0012C140 (Ghidra, non-matching)
// GLOBAL DAT_0012c544 uint *
// GLOBAL DAT_0012c548 int
// GLOBAL DAT_0012c54c int
// GLOBAL DAT_0012c550 undefined4
// GLOBAL DAT_0012c554 undefined4 *
// GLOBAL DAT_0012c558 undefined4
// GLOBAL DAT_0012c55c int
// GLOBAL DAT_0012c560 undefined *
// GLOBAL DAT_0012c564 int
// GLOBAL DAT_0012c574 int
// GLOBAL s_cState_Die_0012c5c8 string
// GLOBAL s_cState_Lie_0012c578 string
// GLOBAL s_cState_PreReturn_0012c594 string
// GLOBAL s_cState_Reaction_0012c5b8 string
// GLOBAL s_cState_Return_0012c5a8 string
// GLOBAL s_cState_Struggle_0012c584 string
// GLOBAL s_cState_Walk_0012c568 string

undefined4 * func_0012C140(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  float *pfVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  piVar3 = func_004FD464(param_1,param_2,DAT_0012c544);
  iVar10 = DAT_0012c548;
  *piVar3 = DAT_0012c548;
  piVar3[200] = iVar10 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  iVar10 = DAT_0012c54c;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  uVar11 = *(undefined4 *)(iVar10 + 4);
  uVar15 = *(undefined4 *)(iVar10 + 8);
  puVar4[0xb] = puVar4 + -0x22f;
  puVar4[0xc] = uVar11;
  puVar4[0xd] = uVar15;
  uVar11 = DAT_0012c558;
  puVar5 = puVar4 + -0x22f;
  puVar4[10] = DAT_0012c550;
  puVar7 = DAT_0012c554;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  uVar15 = *puVar7;
  uVar14 = puVar7[1];
  uVar16 = puVar7[2];
  puVar4[0x13] = 0;
  puVar4[0x10] = uVar15;
  puVar4[0x11] = uVar14;
  puVar4[0x12] = uVar16;
  puVar4[0x14] = uVar11;
  *(undefined1 *)(puVar4 + 0x15) = 0;
  puVar4[-0x134] = puVar4 + 10;
  func_004FB344((int)puVar5,9);
  iVar6 = DAT_0012c55c;
  uVar13 = 0;
  do {
    func_004FACA4((int)puVar5,uVar13,(int *)(iVar6 + uVar13 * 8));
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 9);
  func_004FB468((int)puVar5);
  iVar6 = func_0054DDF4((int)puVar5,1);
  puVar4[9] = iVar6;
  *(undefined1 *)((int)puVar4 + 6) = 7;
  puVar4[5] = puVar5;
  iVar6 = func_0010BA78(0x70);
  puVar4[6] = iVar6;
  puVar4[7] = iVar6 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar9 = 7;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar11 = *(undefined4 *)(iVar10 + 0xa8);
    iVar9 = iVar9 + -1;
    puVar7[2] = *(undefined4 *)(iVar10 + 0xa4);
    puVar7[3] = uVar11;
    uVar11 = *(undefined4 *)(iVar10 + 0xa8);
    puVar7[4] = *(undefined4 *)(iVar10 + 0xa4);
    puVar7[5] = uVar11;
    puVar7 = puVar7 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar7;
  if (uVar13 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = *(undefined4 *)(iVar10 + 0x20);
      *puVar7 = *(undefined4 *)(iVar10 + 0x1c);
      puVar7[1] = uVar11;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar13 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar11 = *(undefined4 *)(iVar10 + 0x20);
      puVar8[2] = *(undefined4 *)(iVar10 + 0x1c);
      puVar8[3] = uVar11;
      uVar11 = *(undefined4 *)(iVar10 + 0x20);
      puVar8[4] = *(undefined4 *)(iVar10 + 0x1c);
      puVar8[5] = uVar11;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
  puVar2 = DAT_0012c560;
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 7;
    *puVar7 = 0x24;
    iVar6 = func_00100118((int)(puVar7 + 2),puVar2,0x24,7);
  }
  if (iVar6 != 0) {
    puVar4[3] = iVar6;
    puVar4[2] = 7;
  }
  iVar6 = DAT_0012c564;
  puVar4[-0x15a] = puVar4;
  iVar9 = DAT_0012c574;
  *(undefined2 *)(iVar6 + (int)puVar5) = 7;
  local_2c = s_cState_Walk_0012c568;
  local_30 = iVar9;
  func_0010BEC4((int)puVar4,0,&local_30);
  puVar7 = (undefined4 *)puVar4[6];
  uVar14 = *(undefined4 *)(iVar10 + 0x10);
  uVar11 = *(undefined4 *)(iVar10 + 0x14);
  uVar15 = *(undefined4 *)(iVar10 + 0x18);
  uVar17 = *(undefined4 *)(iVar10 + 0x1c);
  uVar16 = *(undefined4 *)(iVar10 + 0x20);
  *puVar7 = *(undefined4 *)(iVar10 + 0xc);
  puVar7[1] = uVar14;
  puVar7 = (undefined4 *)puVar4[7];
  *puVar7 = uVar11;
  puVar7[1] = uVar15;
  puVar7 = (undefined4 *)puVar4[8];
  puVar7[1] = uVar16;
  *puVar7 = uVar17;
  local_2c = s_cState_Lie_0012c578;
  local_30 = iVar9;
  func_0010BEC4((int)puVar4,1,&local_30);
  iVar6 = puVar4[6];
  uVar11 = *(undefined4 *)(iVar10 + 0x28);
  uVar15 = *(undefined4 *)(iVar10 + 0x2c);
  uVar14 = *(undefined4 *)(iVar10 + 0x30);
  uVar16 = *(undefined4 *)(iVar10 + 0x34);
  uVar17 = *(undefined4 *)(iVar10 + 0x38);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar10 + 0x24);
  *(undefined4 *)(iVar6 + 0xc) = uVar11;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 8) = uVar15;
  *(undefined4 *)(iVar6 + 0xc) = uVar14;
  iVar6 = puVar4[8];
  *(undefined4 *)(iVar6 + 8) = uVar16;
  *(undefined4 *)(iVar6 + 0xc) = uVar17;
  local_2c = s_cState_Struggle_0012c584;
  local_30 = iVar9;
  func_0010BEC4((int)puVar4,2,&local_30);
  iVar6 = puVar4[6];
  uVar11 = *(undefined4 *)(iVar10 + 0x44);
  uVar14 = *(undefined4 *)(iVar10 + 0x48);
  uVar16 = *(undefined4 *)(iVar10 + 0x4c);
  uVar17 = *(undefined4 *)(iVar10 + 0x50);
  uVar15 = *(undefined4 *)(iVar10 + 0x40);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar10 + 0x3c);
  *(undefined4 *)(iVar6 + 0x14) = uVar15;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x10) = uVar11;
  *(undefined4 *)(iVar6 + 0x14) = uVar14;
  iVar6 = puVar4[8];
  *(undefined4 *)(iVar6 + 0x10) = uVar16;
  *(undefined4 *)(iVar6 + 0x14) = uVar17;
  local_2c = s_cState_PreReturn_0012c594;
  local_30 = iVar9;
  func_0010BEC4((int)puVar4,3,&local_30);
  iVar6 = puVar4[6];
  uVar11 = *(undefined4 *)(iVar10 + 0x5c);
  uVar16 = *(undefined4 *)(iVar10 + 0x60);
  uVar15 = *(undefined4 *)(iVar10 + 100);
  uVar17 = *(undefined4 *)(iVar10 + 0x68);
  uVar14 = *(undefined4 *)(iVar10 + 0x58);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar10 + 0x54);
  *(undefined4 *)(iVar6 + 0x1c) = uVar14;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x18) = uVar11;
  *(undefined4 *)(iVar6 + 0x1c) = uVar16;
  iVar6 = puVar4[8];
  *(undefined4 *)(iVar6 + 0x18) = uVar15;
  *(undefined4 *)(iVar6 + 0x1c) = uVar17;
  local_2c = s_cState_Return_0012c5a8;
  local_30 = iVar9;
  func_0010BEC4((int)puVar4,4,&local_30);
  iVar6 = puVar4[6];
  uVar11 = *(undefined4 *)(iVar10 + 0x70);
  uVar15 = *(undefined4 *)(iVar10 + 0x74);
  uVar14 = *(undefined4 *)(iVar10 + 0x78);
  uVar16 = *(undefined4 *)(iVar10 + 0x7c);
  uVar17 = *(undefined4 *)(iVar10 + 0x80);
  *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar10 + 0x6c);
  *(undefined4 *)(iVar6 + 0x24) = uVar11;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x20) = uVar15;
  *(undefined4 *)(iVar6 + 0x24) = uVar14;
  iVar6 = puVar4[8];
  *(undefined4 *)(iVar6 + 0x20) = uVar16;
  *(undefined4 *)(iVar6 + 0x24) = uVar17;
  local_2c = s_cState_Reaction_0012c5b8;
  local_30 = iVar9;
  func_0010BEC4((int)puVar4,5,&local_30);
  iVar6 = puVar4[6];
  uVar15 = *(undefined4 *)(iVar10 + 0x88);
  uVar11 = *(undefined4 *)(iVar10 + 0x8c);
  uVar14 = *(undefined4 *)(iVar10 + 0x90);
  uVar18 = *(undefined8 *)(iVar10 + 0x1c);
  *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar10 + 0x84);
  *(undefined4 *)(iVar6 + 0x2c) = uVar15;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x28) = uVar11;
  *(undefined4 *)(iVar6 + 0x2c) = uVar14;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 0x28) = (int)uVar18;
  *(int *)(iVar6 + 0x2c) = (int)((ulonglong)uVar18 >> 0x20);
  local_2c = s_cState_Die_0012c5c8;
  local_30 = iVar9;
  func_0010BEC4((int)puVar4,6,&local_30);
  iVar6 = puVar4[6];
  uVar15 = *(undefined4 *)(iVar10 + 0x98);
  uVar11 = *(undefined4 *)(iVar10 + 0x9c);
  pfVar12 = *(float **)(iVar10 + 0xa0);
  *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(iVar10 + 0x94);
  *(undefined4 *)(iVar6 + 0x34) = uVar15;
  iVar10 = puVar4[7];
  *(undefined4 *)(iVar10 + 0x30) = uVar11;
  *(float **)(iVar10 + 0x34) = pfVar12;
  iVar10 = puVar4[8];
  *(int *)(iVar10 + 0x30) = (int)uVar18;
  *(int *)(iVar10 + 0x34) = (int)((ulonglong)uVar18 >> 0x20);
  func_00656B60(puVar4,0);
  puVar4[-200] = puVar4[-200] & 0xfff7ffff | 0x8000;
  func_002AF5FC((int)puVar5,0xffff,0);
  func_002AED68((int)puVar5,5);
  func_004F5BD8((int)puVar5,(uint *)0x0,(int **)0x0,pfVar12);
  return puVar5;
}

