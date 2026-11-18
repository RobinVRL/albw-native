#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0021992C(int param_1,undefined1 param_2,undefined1 param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_006553BC(undefined4 *param_1,uint *param_2,undefined1 param_3,uint *param_4);
extern int func_0065DDC8(undefined4 *param_1,undefined1 param_2);
extern float *DAT_0021a198;
extern int DAT_0021a19c;
extern int DAT_0021a1a0;
extern int DAT_0021a1a4;
extern undefined *DAT_0021a1a8;
extern int DAT_0021a1ac;
extern int DAT_0021a1c0;
extern char s_cStateBase_AttackPlayer_0021a1f0[];
extern char s_cStateBase_ChasePlayer_0021a1d8[];
extern char s_cStateBase_Die_0021a260[];
extern char s_cStateBase_EatStart_0021a208[];
extern char s_cStateBase_Eat_0021a21c[];
extern char s_cStateBase_GoHome_0021a1c4[];
extern char s_cStateBase_Reaction_0021a24c[];
extern char s_cStateBase_Run_0021a23c[];
extern char s_cStateBase_Spit_0021a22c[];
extern char s_cStateBase_Walk_0021a1b0[];
extern char s_cState_Belch_0021a280[];
extern char s_cState_Swallow_0021a270[];

// USA 00219C60 <- EU 00219C60 (Ghidra, non-matching)
// GLOBAL DAT_0021a198 float *
// GLOBAL DAT_0021a19c int
// GLOBAL DAT_0021a1a0 int
// GLOBAL DAT_0021a1a4 int
// GLOBAL DAT_0021a1a8 undefined *
// GLOBAL DAT_0021a1ac int
// GLOBAL DAT_0021a1c0 int
// GLOBAL s_cStateBase_AttackPlayer_0021a1f0 string
// GLOBAL s_cStateBase_ChasePlayer_0021a1d8 string
// GLOBAL s_cStateBase_Die_0021a260 string
// GLOBAL s_cStateBase_EatStart_0021a208 string
// GLOBAL s_cStateBase_Eat_0021a21c string
// GLOBAL s_cStateBase_GoHome_0021a1c4 string
// GLOBAL s_cStateBase_Reaction_0021a24c string
// GLOBAL s_cStateBase_Run_0021a23c string
// GLOBAL s_cStateBase_Spit_0021a22c string
// GLOBAL s_cStateBase_Walk_0021a1b0 string
// GLOBAL s_cState_Belch_0021a280 string
// GLOBAL s_cState_Swallow_0021a270 string

int * func_00219C60(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  pfVar9 = DAT_0021a198;
  piVar2 = (int *)func_006553BC(param_1,param_2,0,(uint *)DAT_0021a198);
  iVar3 = DAT_0021a19c + 0x84;
  *piVar2 = DAT_0021a19c;
  piVar2[200] = iVar3;
  func_0021992C((int)piVar2,0xb,0xff);
  func_004FB344((int)piVar2,0xc);
  iVar3 = DAT_0021a1a0;
  uVar10 = 0;
  do {
    func_004FACA4((int)piVar2,uVar10,(int *)(iVar3 + uVar10 * 8));
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0xc);
  func_004FB468((int)piVar2);
  func_004F5BD8((int)piVar2,(uint *)0x0,(int **)0x0,pfVar9);
  piVar2[0x241] = (int)piVar2;
  *(undefined1 *)((int)piVar2 + 0x8f6) = 0xc;
  iVar4 = func_0010BA78(0xc0);
  iVar3 = DAT_0021a1a4;
  piVar2[0x242] = iVar4;
  piVar2[0x243] = iVar4 + (uint)*(byte *)((int)piVar2 + 0x8f6) * 8;
  iVar7 = 0xc;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar11 = *(undefined4 *)(iVar3 + 0xf0);
    iVar7 = iVar7 + -1;
    puVar5[2] = *(undefined4 *)(iVar3 + 0xec);
    puVar5[3] = uVar11;
    uVar11 = *(undefined4 *)(iVar3 + 0xf0);
    puVar5[4] = *(undefined4 *)(iVar3 + 0xec);
    puVar5[5] = uVar11;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)piVar2 + 0x8f6);
  uVar10 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar10 << 3);
  piVar2[0x244] = (int)puVar5;
  if (uVar10 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = *(undefined4 *)(iVar3 + 0x18);
      *puVar5 = *(undefined4 *)(iVar3 + 0x14);
      puVar5[1] = uVar11;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar10 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar11 = *(undefined4 *)(iVar3 + 0x18);
      puVar6[2] = *(undefined4 *)(iVar3 + 0x14);
      puVar6[3] = uVar11;
      uVar11 = *(undefined4 *)(iVar3 + 0x18);
      puVar6[4] = *(undefined4 *)(iVar3 + 0x14);
      puVar6[5] = uVar11;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x1b8,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 0xc;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_0021a1a8,0x24,0xc);
  }
  if (iVar4 != 0) {
    piVar2[0x23e] = 0xc;
    piVar2[0x23f] = iVar4;
  }
  iVar4 = DAT_0021a1ac;
  piVar2[0xd5] = (int)(piVar2 + 0x23c);
  iVar7 = DAT_0021a1c0;
  *(undefined2 *)(iVar4 + (int)piVar2) = 0xc;
  local_2c = s_cStateBase_Walk_0021a1b0;
  local_30 = iVar7;
  func_0010BEC4((int)(piVar2 + 0x23c),0,&local_30);
  puVar5 = (undefined4 *)piVar2[0x242];
  uVar11 = *(undefined4 *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  uVar12 = *(undefined4 *)(iVar3 + 0x10);
  uVar15 = *(undefined8 *)(iVar3 + 0x14);
  *puVar5 = *(undefined4 *)(iVar3 + 4);
  puVar5[1] = uVar11;
  puVar5 = (undefined4 *)piVar2[0x243];
  *puVar5 = uVar8;
  puVar5[1] = uVar12;
  puVar5 = (undefined4 *)piVar2[0x244];
  *puVar5 = (int)uVar15;
  puVar5[1] = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cStateBase_GoHome_0021a1c4;
  local_30 = iVar7;
  func_0010BEC4((int)(piVar2 + 0x23c),1,&local_30);
  iVar4 = piVar2[0x242];
  uVar11 = *(undefined4 *)(iVar3 + 0x24);
  uVar8 = *(undefined4 *)(iVar3 + 0x28);
  uVar12 = *(undefined4 *)(iVar3 + 0x20);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(iVar4 + 0xc) = uVar12;
  iVar4 = piVar2[0x243];
  *(undefined4 *)(iVar4 + 8) = uVar11;
  *(undefined4 *)(iVar4 + 0xc) = uVar8;
  iVar4 = piVar2[0x244];
  *(int *)(iVar4 + 8) = (int)uVar15;
  *(int *)(iVar4 + 0xc) = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cStateBase_ChasePlayer_0021a1d8;
  local_30 = iVar7;
  func_0010BEC4((int)(piVar2 + 0x23c),2,&local_30);
  iVar4 = piVar2[0x242];
  uVar11 = *(undefined4 *)(iVar3 + 0x34);
  uVar8 = *(undefined4 *)(iVar3 + 0x38);
  uVar12 = *(undefined4 *)(iVar3 + 0x30);
  *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar3 + 0x2c);
  *(undefined4 *)(iVar4 + 0x14) = uVar12;
  iVar4 = piVar2[0x243];
  *(undefined4 *)(iVar4 + 0x10) = uVar11;
  *(undefined4 *)(iVar4 + 0x14) = uVar8;
  iVar4 = piVar2[0x244];
  *(int *)(iVar4 + 0x10) = (int)uVar15;
  *(int *)(iVar4 + 0x14) = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cStateBase_AttackPlayer_0021a1f0;
  local_30 = iVar7;
  func_0010BEC4((int)(piVar2 + 0x23c),3,&local_30);
  iVar4 = piVar2[0x242];
  uVar8 = *(undefined4 *)(iVar3 + 0x40);
  uVar11 = *(undefined4 *)(iVar3 + 0x44);
  uVar12 = *(undefined4 *)(iVar3 + 0x48);
  *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar3 + 0x3c);
  *(undefined4 *)(iVar4 + 0x1c) = uVar8;
  iVar4 = piVar2[0x243];
  *(undefined4 *)(iVar4 + 0x18) = uVar11;
  *(undefined4 *)(iVar4 + 0x1c) = uVar12;
  iVar4 = piVar2[0x244];
  *(int *)(iVar4 + 0x18) = (int)uVar15;
  *(int *)(iVar4 + 0x1c) = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cStateBase_EatStart_0021a208;
  local_30 = iVar7;
  func_0010BEC4((int)(piVar2 + 0x23c),4,&local_30);
  iVar4 = piVar2[0x242];
  uVar11 = *(undefined4 *)(iVar3 + 0x50);
  uVar8 = *(undefined4 *)(iVar3 + 0x54);
  uVar12 = *(undefined4 *)(iVar3 + 0x58);
  uVar13 = *(undefined4 *)(iVar3 + 0x5c);
  uVar14 = *(undefined4 *)(iVar3 + 0x60);
  *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(iVar3 + 0x4c);
  *(undefined4 *)(iVar4 + 0x24) = uVar11;
  iVar4 = piVar2[0x243];
  *(undefined4 *)(iVar4 + 0x20) = uVar8;
  *(undefined4 *)(iVar4 + 0x24) = uVar12;
  iVar4 = piVar2[0x244];
  *(undefined4 *)(iVar4 + 0x20) = uVar13;
  *(undefined4 *)(iVar4 + 0x24) = uVar14;
  local_2c = s_cStateBase_Eat_0021a21c;
  local_30 = iVar7;
  func_0010BEC4((int)(piVar2 + 0x23c),5,&local_30);
  iVar4 = piVar2[0x242];
  uVar11 = *(undefined4 *)(iVar3 + 0x68);
  uVar8 = *(undefined4 *)(iVar3 + 0x6c);
  uVar12 = *(undefined4 *)(iVar3 + 0x70);
  uVar13 = *(undefined4 *)(iVar3 + 0x74);
  uVar14 = *(undefined4 *)(iVar3 + 0x78);
  *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(iVar3 + 100);
  *(undefined4 *)(iVar4 + 0x2c) = uVar11;
  iVar4 = piVar2[0x243];
  *(undefined4 *)(iVar4 + 0x28) = uVar8;
  *(undefined4 *)(iVar4 + 0x2c) = uVar12;
  iVar4 = piVar2[0x244];
  *(undefined4 *)(iVar4 + 0x28) = uVar13;
  *(undefined4 *)(iVar4 + 0x2c) = uVar14;
  local_2c = s_cStateBase_Spit_0021a22c;
  local_30 = iVar7;
  func_0010BEC4((int)(piVar2 + 0x23c),6,&local_30);
  iVar4 = piVar2[0x242];
  uVar11 = *(undefined4 *)(iVar3 + 0x84);
  uVar12 = *(undefined4 *)(iVar3 + 0x88);
  uVar8 = *(undefined4 *)(iVar3 + 0x14);
  uVar14 = *(undefined4 *)(iVar3 + 0x18);
  uVar13 = *(undefined4 *)(iVar3 + 0x80);
  *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(iVar3 + 0x7c);
  *(undefined4 *)(iVar4 + 0x34) = uVar13;
  iVar4 = piVar2[0x243];
  *(undefined4 *)(iVar4 + 0x30) = uVar11;
  *(undefined4 *)(iVar4 + 0x34) = uVar12;
  iVar4 = piVar2[0x244];
  *(undefined4 *)(iVar4 + 0x30) = uVar8;
  *(undefined4 *)(iVar4 + 0x34) = uVar14;
  local_2c = s_cStateBase_Run_0021a23c;
  local_30 = iVar7;
  func_0010BEC4((int)(piVar2 + 0x23c),7,&local_30);
  iVar4 = piVar2[0x242];
  uVar11 = *(undefined4 *)(iVar3 + 0x90);
  uVar8 = *(undefined4 *)(iVar3 + 0x94);
  uVar12 = *(undefined4 *)(iVar3 + 0x98);
  uVar13 = *(undefined4 *)(iVar3 + 0x9c);
  uVar14 = *(undefined4 *)(iVar3 + 0xa0);
  *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(iVar3 + 0x8c);
  *(undefined4 *)(iVar4 + 0x3c) = uVar11;
  iVar4 = piVar2[0x243];
  *(undefined4 *)(iVar4 + 0x38) = uVar8;
  *(undefined4 *)(iVar4 + 0x3c) = uVar12;
  iVar4 = piVar2[0x244];
  *(undefined4 *)(iVar4 + 0x38) = uVar13;
  *(undefined4 *)(iVar4 + 0x3c) = uVar14;
  local_2c = s_cStateBase_Reaction_0021a24c;
  local_30 = iVar7;
  func_0010BEC4((int)(piVar2 + 0x23c),8,&local_30);
  iVar4 = piVar2[0x242];
  uVar8 = *(undefined4 *)(iVar3 + 0xa8);
  uVar12 = *(undefined4 *)(iVar3 + 0xac);
  uVar11 = *(undefined4 *)(iVar3 + 0xb0);
  uVar15 = *(undefined8 *)(iVar3 + 0x14);
  *(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(iVar3 + 0xa4);
  *(undefined4 *)(iVar4 + 0x44) = uVar8;
  iVar4 = piVar2[0x243];
  *(undefined4 *)(iVar4 + 0x40) = uVar12;
  *(undefined4 *)(iVar4 + 0x44) = uVar11;
  iVar4 = piVar2[0x244];
  *(int *)(iVar4 + 0x40) = (int)uVar15;
  *(int *)(iVar4 + 0x44) = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cStateBase_Die_0021a260;
  local_30 = iVar7;
  func_0010BEC4((int)(piVar2 + 0x23c),9,&local_30);
  iVar4 = piVar2[0x242];
  uVar11 = *(undefined4 *)(iVar3 + 0xb8);
  uVar8 = *(undefined4 *)(iVar3 + 0xbc);
  uVar12 = *(undefined4 *)(iVar3 + 0xc0);
  *(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(iVar3 + 0xb4);
  *(undefined4 *)(iVar4 + 0x4c) = uVar11;
  iVar4 = piVar2[0x243];
  *(undefined4 *)(iVar4 + 0x48) = uVar8;
  *(undefined4 *)(iVar4 + 0x4c) = uVar12;
  iVar4 = piVar2[0x244];
  *(int *)(iVar4 + 0x48) = (int)uVar15;
  *(int *)(iVar4 + 0x4c) = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cState_Swallow_0021a270;
  local_30 = iVar7;
  func_0010BEC4((int)(piVar2 + 0x23c),10,&local_30);
  iVar4 = piVar2[0x242];
  uVar11 = *(undefined4 *)(iVar3 + 200);
  uVar8 = *(undefined4 *)(iVar3 + 0xcc);
  uVar12 = *(undefined4 *)(iVar3 + 0xd0);
  uVar13 = *(undefined4 *)(iVar3 + 0xd4);
  uVar14 = *(undefined4 *)(iVar3 + 0xd8);
  *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(iVar3 + 0xc4);
  *(undefined4 *)(iVar4 + 0x54) = uVar11;
  iVar4 = piVar2[0x243];
  *(undefined4 *)(iVar4 + 0x50) = uVar8;
  *(undefined4 *)(iVar4 + 0x54) = uVar12;
  iVar4 = piVar2[0x244];
  *(undefined4 *)(iVar4 + 0x50) = uVar13;
  *(undefined4 *)(iVar4 + 0x54) = uVar14;
  local_2c = s_cState_Belch_0021a280;
  local_30 = iVar7;
  func_0010BEC4((int)(piVar2 + 0x23c),0xb,&local_30);
  iVar4 = piVar2[0x242];
  uVar8 = *(undefined4 *)(iVar3 + 0xe0);
  uVar12 = *(undefined4 *)(iVar3 + 0x18);
  uVar13 = *(undefined4 *)(iVar3 + 0xe4);
  uVar14 = *(undefined4 *)(iVar3 + 0xe8);
  uVar11 = *(undefined4 *)(iVar3 + 0x14);
  *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(iVar3 + 0xdc);
  *(undefined4 *)(iVar4 + 0x5c) = uVar8;
  iVar3 = piVar2[0x243];
  *(undefined4 *)(iVar3 + 0x58) = uVar13;
  *(undefined4 *)(iVar3 + 0x5c) = uVar14;
  iVar3 = piVar2[0x244];
  *(undefined4 *)(iVar3 + 0x58) = uVar11;
  *(undefined4 *)(iVar3 + 0x5c) = uVar12;
  func_0065DDC8(piVar2 + 0x23c,0);
  *(undefined1 *)(piVar2 + 0x245) = 10;
  *(undefined2 *)((int)piVar2 + 0x8ea) = 8;
  return piVar2;
}

