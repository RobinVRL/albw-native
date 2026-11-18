#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern void func_00288CAC(int param_1);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00564A78(int param_1,int *param_2);
extern int func_0065AAC8(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_001ab48c;
extern int DAT_001ab490;
extern undefined4 DAT_001ab494;
extern undefined4 DAT_001ab498;
extern undefined4 DAT_001ab49c;
extern undefined4 DAT_001ab4a0;
extern int DAT_001ab4a4;
extern undefined4 DAT_001ab4a8;
extern int DAT_001ab4ac;
extern undefined *DAT_001ab4b0;
extern int DAT_001ab4b4;
extern int DAT_001ab4c4;
extern undefined4 DAT_001ab7b8;
extern float DAT_001ab7bc;
extern float DAT_001ab7c0;
extern undefined4 DAT_001ab7c4;
extern undefined4 DAT_001ab7c8;
extern undefined4 DAT_001ab7cc;
extern char s_cState_AttackEight_001ab4f4[];
extern char s_cState_AttackNormal_001ab4e0[];
extern char s_cState_AttackTurn_001ab770[];
extern char s_cState_CreateRock_001ab508[];
extern char s_cState_Die_001ab7a4[];
extern char s_cState_Reaction_001ab794[];
extern char s_cState_Stiff_001ab784[];
extern char s_cState_Turn_001ab4c8[];
extern char s_cState_Wait_001ab4b8[];
extern char s_cState_Walk_001ab4d4[];
extern char s_mouth_001ab7b0[];

// USA 001AB038 <- EU 001AB038 (Ghidra, non-matching)
// GLOBAL DAT_001ab48c uint *
// GLOBAL DAT_001ab490 int
// GLOBAL DAT_001ab494 undefined4
// GLOBAL DAT_001ab498 undefined4
// GLOBAL DAT_001ab49c undefined4
// GLOBAL DAT_001ab4a0 undefined4
// GLOBAL DAT_001ab4a4 int
// GLOBAL DAT_001ab4a8 undefined4
// GLOBAL DAT_001ab4ac int
// GLOBAL DAT_001ab4b0 undefined *
// GLOBAL DAT_001ab4b4 int
// GLOBAL DAT_001ab4c4 int
// GLOBAL DAT_001ab7b8 undefined4
// GLOBAL DAT_001ab7bc float
// GLOBAL DAT_001ab7c0 float
// GLOBAL DAT_001ab7c4 undefined4
// GLOBAL DAT_001ab7c8 undefined4
// GLOBAL DAT_001ab7cc undefined4
// GLOBAL s_cState_AttackEight_001ab4f4 string
// GLOBAL s_cState_AttackNormal_001ab4e0 string
// GLOBAL s_cState_AttackTurn_001ab770 string
// GLOBAL s_cState_CreateRock_001ab508 string
// GLOBAL s_cState_Die_001ab7a4 string
// GLOBAL s_cState_Reaction_001ab794 string
// GLOBAL s_cState_Stiff_001ab784 string
// GLOBAL s_cState_Turn_001ab4c8 string
// GLOBAL s_cState_Wait_001ab4b8 string
// GLOBAL s_cState_Walk_001ab4d4 string
// GLOBAL s_mouth_001ab7b0 string

undefined4 * func_001AB038(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  float *pfVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar3 = func_004FD464(param_1,param_2,DAT_001ab48c);
  iVar12 = DAT_001ab490;
  *piVar3 = DAT_001ab490;
  piVar4 = piVar3 + 0x22f;
  piVar3[200] = iVar12 + 0x84;
  piVar10 = piVar3 + 0x235;
  piVar3[0x230] = (int)piVar4;
  piVar3[0x231] = 0;
  piVar3[0x232] = 0;
  *piVar4 = (int)piVar4;
  piVar3[0x233] = 0;
  piVar3[0x234] = 0;
  if (piVar10 != (int *)0x0) {
    iVar12 = 0;
    iVar15 = 3;
    piVar3[0x232] = (int)piVar10;
    do {
      iVar15 = iVar15 + -1;
      piVar10[iVar12] = (int)(piVar10 + iVar12 + 3);
      iVar12 = iVar12 + 3;
    } while (iVar15 != 0);
    piVar3[0x23e] = 0;
    piVar3[0x233] = (int)piVar10;
    piVar3[0x234] = 4;
  }
  puVar5 = func_0010A794(piVar3 + 0x241);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  uVar11 = DAT_001ab494;
  puVar5[9] = 0;
  uVar16 = DAT_001ab498;
  puVar5[0xb] = uVar11;
  puVar5[0xc] = uVar16;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  uVar11 = DAT_001ab4a0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = uVar11;
  puVar5[0x11] = 0;
  iVar12 = DAT_001ab4a4;
  uVar11 = DAT_001ab49c;
  puVar5[0x12] = 0;
  puVar5[0x13] = uVar11;
  puVar6 = puVar5 + -0x241;
  uVar11 = *(undefined4 *)(iVar12 + 8);
  pfVar13 = *(float **)(iVar12 + 0xc);
  puVar5[0x15] = puVar6;
  puVar5[0x16] = uVar11;
  puVar5[0x17] = pfVar13;
  puVar5[0x14] = DAT_001ab4a8;
  *(undefined1 *)(puVar5 + 0x18) = 0;
  *(undefined1 *)((int)puVar5 + 0x61) = 0;
  *(undefined1 *)((int)puVar5 + 0x62) = 0;
  puVar5[-0x146] = puVar5 + 0x14;
  func_004FB344((int)puVar6,9);
  iVar15 = DAT_001ab4ac;
  uVar14 = 0;
  do {
    func_004FACA4((int)puVar6,uVar14,(int *)(iVar15 + uVar14 * 8));
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 9);
  func_004FB468((int)puVar6);
  func_004F5BD8((int)puVar6,(uint *)0x0,(int **)0x0,pfVar13);
  puVar5[5] = puVar6;
  *(undefined1 *)((int)puVar5 + 6) = 10;
  iVar15 = func_0010BA78(0xa0);
  puVar5[6] = iVar15;
  puVar5[7] = iVar15 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar7 = 10;
  puVar8 = (undefined4 *)(iVar15 + -8);
  do {
    uVar11 = *(undefined4 *)(iVar12 + 0xbc);
    iVar7 = iVar7 + -1;
    puVar8[2] = *(undefined4 *)(iVar12 + 0xb8);
    puVar8[3] = uVar11;
    uVar11 = *(undefined4 *)(iVar12 + 0xbc);
    puVar8[4] = *(undefined4 *)(iVar12 + 0xb8);
    puVar8[5] = uVar11;
    puVar8 = puVar8 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar14 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar5[8] = puVar8;
  if (uVar14 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = *(undefined4 *)(iVar12 + 0x24);
      *puVar8 = *(undefined4 *)(iVar12 + 0x20);
      puVar8[1] = uVar11;
      puVar9 = puVar8;
    }
    for (iVar15 = (int)uVar14 >> 1; iVar15 != 0; iVar15 = iVar15 + -1) {
      uVar11 = *(undefined4 *)(iVar12 + 0x24);
      puVar9[2] = *(undefined4 *)(iVar12 + 0x20);
      puVar9[3] = uVar11;
      uVar11 = *(undefined4 *)(iVar12 + 0x24);
      puVar9[4] = *(undefined4 *)(iVar12 + 0x20);
      puVar9[5] = uVar11;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x170,(int *)0x0,4);
  puVar2 = DAT_001ab4b0;
  iVar15 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar8[1] = 10;
    *puVar8 = 0x24;
    iVar15 = func_00100118((int)(puVar8 + 2),puVar2,0x24,10);
  }
  if (iVar15 != 0) {
    puVar5[3] = iVar15;
    puVar5[2] = 10;
  }
  iVar15 = DAT_001ab4b4;
  puVar5[-0x16c] = puVar5;
  iVar7 = DAT_001ab4c4;
  *(undefined2 *)(iVar15 + (int)puVar6) = 10;
  local_34 = s_cState_Wait_001ab4b8;
  local_38 = iVar7;
  func_0010BEC4((int)puVar5,0,&local_38);
  puVar8 = (undefined4 *)puVar5[6];
  uVar11 = *(undefined4 *)(iVar12 + 0x14);
  uVar16 = *(undefined4 *)(iVar12 + 0x18);
  uVar17 = *(undefined4 *)(iVar12 + 0x1c);
  uVar18 = *(undefined8 *)(iVar12 + 0x20);
  *puVar8 = *(undefined4 *)(iVar12 + 0x10);
  puVar8[1] = uVar11;
  puVar8 = (undefined4 *)puVar5[7];
  *puVar8 = uVar16;
  puVar8[1] = uVar17;
  puVar8 = (undefined4 *)puVar5[8];
  *puVar8 = (int)uVar18;
  puVar8[1] = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Turn_001ab4c8;
  local_38 = iVar7;
  func_0010BEC4((int)puVar5,1,&local_38);
  iVar15 = puVar5[6];
  uVar11 = *(undefined4 *)(iVar12 + 0x2c);
  uVar16 = *(undefined4 *)(iVar12 + 0x30);
  uVar17 = *(undefined4 *)(iVar12 + 0x34);
  *(undefined4 *)(iVar15 + 8) = *(undefined4 *)(iVar12 + 0x28);
  *(undefined4 *)(iVar15 + 0xc) = uVar11;
  iVar15 = puVar5[7];
  *(undefined4 *)(iVar15 + 8) = uVar16;
  *(undefined4 *)(iVar15 + 0xc) = uVar17;
  iVar15 = puVar5[8];
  *(int *)(iVar15 + 8) = (int)uVar18;
  *(int *)(iVar15 + 0xc) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Walk_001ab4d4;
  local_38 = iVar7;
  func_0010BEC4((int)puVar5,2,&local_38);
  iVar15 = puVar5[6];
  uVar11 = *(undefined4 *)(iVar12 + 0x3c);
  uVar16 = *(undefined4 *)(iVar12 + 0x40);
  uVar17 = *(undefined4 *)(iVar12 + 0x44);
  *(undefined4 *)(iVar15 + 0x10) = *(undefined4 *)(iVar12 + 0x38);
  *(undefined4 *)(iVar15 + 0x14) = uVar11;
  iVar15 = puVar5[7];
  *(undefined4 *)(iVar15 + 0x10) = uVar16;
  *(undefined4 *)(iVar15 + 0x14) = uVar17;
  iVar15 = puVar5[8];
  *(int *)(iVar15 + 0x10) = (int)uVar18;
  *(int *)(iVar15 + 0x14) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_AttackNormal_001ab4e0;
  local_38 = iVar7;
  func_0010BEC4((int)puVar5,3,&local_38);
  iVar15 = puVar5[6];
  uVar17 = *(undefined4 *)(iVar12 + 0x4c);
  uVar11 = *(undefined4 *)(iVar12 + 0x50);
  uVar16 = *(undefined4 *)(iVar12 + 0x54);
  *(undefined4 *)(iVar15 + 0x18) = *(undefined4 *)(iVar12 + 0x48);
  *(undefined4 *)(iVar15 + 0x1c) = uVar17;
  iVar15 = puVar5[7];
  *(undefined4 *)(iVar15 + 0x18) = uVar11;
  *(undefined4 *)(iVar15 + 0x1c) = uVar16;
  iVar15 = puVar5[8];
  *(int *)(iVar15 + 0x18) = (int)uVar18;
  *(int *)(iVar15 + 0x1c) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_AttackEight_001ab4f4;
  local_38 = iVar7;
  func_0010BEC4((int)puVar5,4,&local_38);
  iVar15 = puVar5[6];
  uVar17 = *(undefined4 *)(iVar12 + 0x5c);
  uVar11 = *(undefined4 *)(iVar12 + 0x60);
  uVar16 = *(undefined4 *)(iVar12 + 100);
  *(undefined4 *)(iVar15 + 0x20) = *(undefined4 *)(iVar12 + 0x58);
  *(undefined4 *)(iVar15 + 0x24) = uVar17;
  iVar15 = puVar5[7];
  *(undefined4 *)(iVar15 + 0x20) = uVar11;
  *(undefined4 *)(iVar15 + 0x24) = uVar16;
  iVar15 = puVar5[8];
  *(int *)(iVar15 + 0x20) = (int)uVar18;
  *(int *)(iVar15 + 0x24) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_CreateRock_001ab508;
  local_38 = iVar7;
  func_0010BEC4((int)puVar5,5,&local_38);
  iVar15 = puVar5[6];
  uVar11 = *(undefined4 *)(iVar12 + 0x6c);
  uVar16 = *(undefined4 *)(iVar12 + 0x70);
  uVar17 = *(undefined4 *)(iVar12 + 0x74);
  *(undefined4 *)(iVar15 + 0x28) = *(undefined4 *)(iVar12 + 0x68);
  *(undefined4 *)(iVar15 + 0x2c) = uVar11;
  iVar15 = puVar5[7];
  *(undefined4 *)(iVar15 + 0x28) = uVar16;
  *(undefined4 *)(iVar15 + 0x2c) = uVar17;
  iVar15 = puVar5[8];
  *(int *)(iVar15 + 0x28) = (int)uVar18;
  *(int *)(iVar15 + 0x2c) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_AttackTurn_001ab770;
  local_38 = iVar7;
  func_0010BEC4((int)puVar5,6,&local_38);
  iVar15 = puVar5[6];
  uVar11 = *(undefined4 *)(iVar12 + 0x80);
  uVar17 = *(undefined4 *)(iVar12 + 0x84);
  uVar16 = *(undefined4 *)(iVar12 + 0x7c);
  *(undefined4 *)(iVar15 + 0x30) = *(undefined4 *)(iVar12 + 0x78);
  *(undefined4 *)(iVar15 + 0x34) = uVar16;
  iVar15 = puVar5[7];
  *(undefined4 *)(iVar15 + 0x30) = uVar11;
  *(undefined4 *)(iVar15 + 0x34) = uVar17;
  iVar15 = puVar5[8];
  *(int *)(iVar15 + 0x30) = (int)uVar18;
  *(int *)(iVar15 + 0x34) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Stiff_001ab784;
  local_38 = iVar7;
  func_0010BEC4((int)puVar5,7,&local_38);
  iVar15 = puVar5[6];
  uVar11 = *(undefined4 *)(iVar12 + 0x8c);
  uVar16 = *(undefined4 *)(iVar12 + 0x90);
  uVar17 = *(undefined4 *)(iVar12 + 0x94);
  *(undefined4 *)(iVar15 + 0x38) = *(undefined4 *)(iVar12 + 0x88);
  *(undefined4 *)(iVar15 + 0x3c) = uVar11;
  iVar15 = puVar5[7];
  *(undefined4 *)(iVar15 + 0x38) = uVar16;
  *(undefined4 *)(iVar15 + 0x3c) = uVar17;
  iVar15 = puVar5[8];
  *(int *)(iVar15 + 0x38) = (int)uVar18;
  *(int *)(iVar15 + 0x3c) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Reaction_001ab794;
  local_38 = iVar7;
  func_0010BEC4((int)puVar5,8,&local_38);
  iVar15 = puVar5[6];
  uVar16 = *(undefined4 *)(iVar12 + 0x9c);
  uVar17 = *(undefined4 *)(iVar12 + 0xa0);
  uVar11 = *(undefined4 *)(iVar12 + 0xa4);
  *(undefined4 *)(iVar15 + 0x40) = *(undefined4 *)(iVar12 + 0x98);
  *(undefined4 *)(iVar15 + 0x44) = uVar16;
  iVar15 = puVar5[7];
  *(undefined4 *)(iVar15 + 0x40) = uVar17;
  *(undefined4 *)(iVar15 + 0x44) = uVar11;
  iVar15 = puVar5[8];
  *(int *)(iVar15 + 0x40) = (int)uVar18;
  *(int *)(iVar15 + 0x44) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Die_001ab7a4;
  local_38 = iVar7;
  func_0010BEC4((int)puVar5,9,&local_38);
  iVar15 = puVar5[6];
  uVar11 = *(undefined4 *)(iVar12 + 0xac);
  uVar16 = *(undefined4 *)(iVar12 + 0xb0);
  uVar17 = *(undefined4 *)(iVar12 + 0xb4);
  *(undefined4 *)(iVar15 + 0x48) = *(undefined4 *)(iVar12 + 0xa8);
  *(undefined4 *)(iVar15 + 0x4c) = uVar11;
  iVar12 = puVar5[7];
  *(undefined4 *)(iVar12 + 0x48) = uVar16;
  *(undefined4 *)(iVar12 + 0x4c) = uVar17;
  iVar12 = puVar5[8];
  *(int *)(iVar12 + 0x48) = (int)uVar18;
  *(int *)(iVar12 + 0x4c) = (int)((ulonglong)uVar18 >> 0x20);
  func_0065AAC8(puVar5,0);
  puVar5[-0xda] = puVar5[-0xda] | 0x8000;
  local_34 = s_mouth_001ab7b0;
  local_38 = iVar7;
  uVar14 = func_00564A78(puVar5[-0x13e],&local_38);
  uVar11 = DAT_001ab7b8;
  puVar5[0xd] = uVar14;
  func_004FC218((int)puVar6,'\x04',-1,(ushort)uVar11);
  func_004FBA18((int)puVar6,7,8,-1,0x15,0,(ushort)uVar11,DAT_001ab7c0,DAT_001ab7bc);
  func_002AF5FC((int)puVar6,5,-1);
  func_002AED68((int)puVar6,5);
  *(undefined1 *)((int)puVar5 + -0x187) = 6;
  *(undefined1 *)((int)puVar5 + -0x186) = 0xff;
  *(undefined1 *)((int)puVar5 + -0x185) = 0;
  iVar12 = 0;
  if (0 < (int)puVar5[-0xd]) {
    do {
      func_00288CAC((int)puVar6);
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)puVar5[-0xd]);
  }
  if (*(short *)(puVar5 + -0x235) == 0) {
    puVar5[0x10] = DAT_001ab7cc;
  }
  else {
    uVar11 = DAT_001ab7c4;
    if (*(short *)(puVar5 + -0x235) != 1) {
      uVar11 = DAT_001ab7c8;
    }
    puVar5[0x10] = uVar11;
  }
  return puVar6;
}

