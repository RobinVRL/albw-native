#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00662638(undefined4 *param_1,undefined1 param_2);
extern undefined DAT_0000000b;
extern uint *DAT_002b4f44;
extern int DAT_002b4f48;
extern int DAT_002b4f4c;
extern int DAT_002b4f50;
extern undefined4 DAT_002b4f54;
extern undefined4 DAT_002b4f58;
extern int DAT_002b4f5c;
extern undefined4 DAT_002b4f60;
extern undefined4 *DAT_002b4f64;
extern int DAT_002b4f68;
extern int DAT_002b4f6c;
extern undefined4 DAT_002b4f70;
extern int DAT_002b4f80;
extern undefined4 DAT_002b4f84;
extern undefined DAT_002b4f98;
extern undefined *DAT_002b54b4;
extern char s_Salamander_002b4f74[];
extern char s_cState_Burn_002b54f4[];
extern char s_cState_Die_002b5520[];
extern char s_cState_Ignition_002b5500[];
extern char s_cState_PostAppeal_002b554c[];
extern char s_cState_PreAppeal_002b5538[];
extern char s_cState_PreBurn_002b54e4[];
extern char s_cState_Reaction_002b5510[];
extern char s_cState_Wait_002b552c[];
extern char s_cState_Walk00_002b54b8[];
extern char s_cState_Walk01_002b54d4[];
extern char s_cState_Wind_002b54c8[];
extern char s_tail1_002b4f88[];
extern char s_tail2_002b4f90[];

// USA 002B4BA0 <- EU 002B4B7C (Ghidra, non-matching)
// GLOBAL DAT_0000000b undefined
// GLOBAL DAT_002b4f44 uint *
// GLOBAL DAT_002b4f48 int
// GLOBAL DAT_002b4f4c int
// GLOBAL DAT_002b4f50 int
// GLOBAL DAT_002b4f54 undefined4
// GLOBAL DAT_002b4f58 undefined4
// GLOBAL DAT_002b4f5c int
// GLOBAL DAT_002b4f60 undefined4
// GLOBAL DAT_002b4f64 undefined4 *
// GLOBAL DAT_002b4f68 int
// GLOBAL DAT_002b4f6c int
// GLOBAL DAT_002b4f70 undefined4
// GLOBAL DAT_002b4f80 int
// GLOBAL DAT_002b4f84 undefined4
// GLOBAL DAT_002b4f98 undefined
// GLOBAL DAT_002b54b4 undefined *
// GLOBAL s_Salamander_002b4f74 string
// GLOBAL s_cState_Burn_002b54f4 string
// GLOBAL s_cState_Die_002b5520 string
// GLOBAL s_cState_Ignition_002b5500 string
// GLOBAL s_cState_PostAppeal_002b554c string
// GLOBAL s_cState_PreAppeal_002b5538 string
// GLOBAL s_cState_PreBurn_002b54e4 string
// GLOBAL s_cState_Reaction_002b5510 string
// GLOBAL s_cState_Wait_002b552c string
// GLOBAL s_cState_Walk00_002b54b8 string
// GLOBAL s_cState_Walk01_002b54d4 string
// GLOBAL s_cState_Wind_002b54c8 string
// GLOBAL s_tail1_002b4f88 string
// GLOBAL s_tail2_002b4f90 string

undefined4 * func_002B4BA0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  float *pfVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_b8 (*(int *)(albw_frame + 0x8))
  #define local_b4 (*(char * *)(albw_frame + 0xc))
  #define local_b0 (*(int *)(albw_frame + 0x10))
  #define local_ac (*(char * *)(albw_frame + 0x14))
  #define local_98 ((uint *)(albw_frame + 0x28))
  #define local_90 (*(undefined4 * *)(albw_frame + 0x30))
  #define local_8c (*(undefined4 *)(albw_frame + 0x34))
  #define local_88 (*(undefined4 *)(albw_frame + 0x38))
  #define local_84 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x40))
  #define local_7c (*(undefined4 *)(albw_frame + 0x44))
  #define local_78 (*(uint *)(albw_frame + 0x48))
  #define local_44 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_40 (*(undefined1 *)(albw_frame + 0x80))
  piVar3 = func_004FD464(param_1,param_2,DAT_002b4f44);
  iVar17 = DAT_002b4f48;
  piVar3[200] = DAT_002b4f48 + 0x84;
  *piVar3 = iVar17;
  piVar3[0x22f] = (int)piVar3;
  iVar17 = DAT_002b4f4c;
  piVar3[0x230] = 0;
  piVar3[0x231] = 0;
  piVar3[0x232] = iVar17;
  iVar12 = DAT_002b4f50;
  uVar19 = CONCAT44(iVar17,DAT_002b4f50);
  piVar3[0x233] = 0;
  piVar3[0x234] = 0;
  piVar3[0x235] = iVar17;
  piVar3[0x236] = 0;
  piVar3[0x237] = iVar12;
  piVar3[0x238] = iVar12;
  piVar3[0x239] = iVar12;
  *(undefined1 *)(piVar3 + 0x23a) = 0;
  puVar4 = func_0010A794(piVar3 + 0x23b);
  puVar4[5] = 0;
  uVar11 = DAT_002b4f54;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[10] = uVar11;
  puVar4[9] = 0;
  puVar5 = puVar4 + -0x23b;
  puVar4[0xb] = puVar5;
  puVar4[0xc] = 0xffffffff;
  puVar4[0xd] = 0xffffffff;
  puVar4[0xe] = 0xffffffff;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  uVar11 = DAT_002b4f58;
  puVar4[0x13] = 0xffff;
  puVar4[0x14] = uVar11;
  puVar4[0x12] = 0;
  puVar4[0x16] = 0xffff;
  iVar17 = DAT_002b4f5c;
  puVar4[0x17] = uVar11;
  puVar4[0x15] = 0;
  puVar4[0x19] = 0xffff;
  puVar4[0x1a] = uVar11;
  puVar4[0x1c] = 0;
  puVar4[0x18] = 0;
  uVar11 = *(undefined4 *)(iVar17 + 8);
  puVar4[0x1f] = *(undefined4 *)(iVar17 + 4);
  puVar4[0x20] = uVar11;
  uVar11 = DAT_002b4f60;
  puVar4[0x1d] = DAT_002b4f60;
  puVar4[0x1e] = puVar5;
  uVar13 = *(undefined4 *)(iVar17 + 0xc);
  puVar4[0x24] = *(undefined4 *)(iVar17 + 0x10);
  puVar4[0x23] = uVar13;
  puVar4[0x21] = uVar11;
  puVar4[0x22] = puVar5;
  puVar4[0x25] = 0;
  *(undefined1 *)(puVar4 + 0x26) = 0;
  *(undefined1 *)((int)puVar4 + 0x99) = 1;
  *(undefined1 *)((int)puVar4 + 0x9a) = 0;
  *(undefined1 *)((int)puVar4 + 0x9b) = 0;
  *(undefined1 *)(puVar4 + 0x27) = 0;
  *(undefined1 *)((int)puVar4 + 0x9d) = 0;
  func_0036D0C8(puVar4 + 9,0);
  *(uint *)(puVar4[-0x12f] + 0x2c) = *(uint *)(puVar4[-0x12f] + 0x2c) | 0x2000;
  puVar4[-0x140] = puVar4 + 0x1d;
  puVar4[-0x129] = puVar4 + 0x21;
  if (puVar4[9] == 0) {
    iVar17 = 1;
  }
  else {
    iVar17 = func_0010983C(*DAT_002b4f64,puVar4[9]);
  }
  func_004FB344((int)puVar5,10);
  iVar12 = DAT_002b4f68;
  uVar15 = 0;
  do {
    func_004FACA4((int)puVar5,uVar15,(int *)(iVar12 + uVar15 * 8));
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 10);
  func_004FB468((int)puVar5);
  func_004FB30C((int)puVar5,3);
  iVar12 = DAT_002b4f6c;
  uVar15 = 0;
  do {
    func_004FAC70((int)puVar5,uVar15,(int *)(iVar12 + uVar15 * 8));
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 3);
  func_004FB408((int)puVar5);
  puVar6 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_0016A2FC(puVar6,1,DAT_002b4f70,1);
  }
  puVar4[0x1b] = puVar7;
  iVar12 = DAT_002b4f80;
  piVar3 = puVar4 + 0x1b;
  local_ac = s_Salamander_002b4f74;
  local_b0 = DAT_002b4f80;
  func_00169608((uint *)puVar4[0x1b],0,&local_b0,*(int *)(puVar4[-0x187] + 0x1c8));
  piVar16 = puVar4 + -0x138;
  func_00133870(*piVar3,0,puVar4[-0x138]);
  func_0016A02C(*piVar3,-1,(int *)0xffffffff,0);
  local_98[1] = 3;
  local_90 = &local_8c;
  local_84 = (undefined4)((ulonglong)uVar19 >> 0x20);
  local_44 = 10;
  local_40 = 0;
  local_98[0] = 1;
  local_8c = 0;
  local_88 = (undefined4)uVar19;
  local_80 = DAT_002b4f84;
  local_78 = (uint)piVar3 | 0xff;
  local_7c = local_84;
  func_0016898C(puVar4[0x1b],local_98);
  local_b4 = s_tail1_002b4f88;
  local_b8 = iVar12;
  uVar15 = func_00564A78(puVar4[-0x138],&local_b8);
  if (uVar15 != 0xffff) {
    puVar4[0xd] = uVar15;
    puVar8 = (uint *)(*(int *)(*(int *)(puVar4[-0x138] + 0x24) + 0xc) + uVar15 * 0x40);
    *puVar8 = *puVar8 | 0x10;
    *(undefined4 **)(*piVar16 + 0x16c) = puVar4 + 10;
  }
  local_b4 = s_tail2_002b4f90;
  local_b8 = iVar12;
  uVar15 = func_00564A78(puVar4[-0x138],&local_b8);
  if (uVar15 != 0xffff) {
    puVar4[0xe] = uVar15;
    puVar8 = (uint *)(*(int *)(*(int *)(puVar4[-0x138] + 0x24) + 0xc) + uVar15 * 0x40);
    *puVar8 = *puVar8 | 0x10;
    *(undefined4 **)(*piVar16 + 0x16c) = puVar4 + 10;
  }
  local_b4 = &DAT_002b4f98;
  local_b8 = iVar12;
  uVar15 = func_00564A78(puVar4[-0x138],&local_b8);
  if (uVar15 != 0xffff) {
    puVar4[0xc] = uVar15;
    puVar8 = (uint *)(*(int *)(*(int *)(puVar4[-0x138] + 0x24) + 0xc) + uVar15 * 0x40);
    *puVar8 = *puVar8 | 0x10;
    *(undefined4 **)(*piVar16 + 0x16c) = puVar4 + 10;
  }
  puVar4[0x1c] = puVar4[-0x141];
  *(uint *)(puVar4[-0x132] + 0x2c) = *(uint *)(puVar4[-0x132] + 0x2c) | 0x8000;
  *(undefined1 *)((int)puVar4 + 6) = 0xb;
  puVar4[5] = puVar5;
  iVar9 = func_0010BA78(0xb0);
  puVar4[6] = iVar9;
  iVar2 = DAT_002b4f5c;
  puVar4[7] = iVar9 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar10 = 0xb;
  puVar7 = (undefined4 *)(iVar9 + -8);
  do {
    uVar11 = *(undefined4 *)(iVar2 + 0xd0);
    iVar10 = iVar10 + -1;
    puVar7[2] = *(undefined4 *)(iVar2 + 0xcc);
    puVar7[3] = uVar11;
    pfVar14 = *(float **)(iVar2 + 0xd0);
    puVar7[4] = *(undefined4 *)(iVar2 + 0xcc);
    puVar7[5] = pfVar14;
    puVar7 = puVar7 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar15 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar4[8] = puVar7;
  if (uVar15 != 0) {
    puVar6 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = *(undefined4 *)(iVar2 + 0x28);
      *puVar7 = *(undefined4 *)(iVar2 + 0x24);
      puVar7[1] = uVar11;
      puVar6 = puVar7;
    }
    for (iVar9 = (int)uVar15 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar11 = *(undefined4 *)(iVar2 + 0x28);
      puVar6[2] = *(undefined4 *)(iVar2 + 0x24);
      puVar6[3] = uVar11;
      pfVar14 = *(float **)(iVar2 + 0x28);
      puVar6[4] = *(undefined4 *)(iVar2 + 0x24);
      puVar6[5] = pfVar14;
      puVar6 = puVar6 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x194,(int *)0x0,4);
  iVar9 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 0xb;
    pfVar14 = (float *)&DAT_0000000b;
    iVar9 = func_00100118((int)(puVar7 + 2),DAT_002b54b4,0x24,0xb);
  }
  if (iVar9 != 0) {
    puVar4[3] = iVar9;
    puVar4[2] = 0xb;
  }
  puVar4[-0x166] = puVar4;
  *(undefined2 *)((int)puVar4 + -0x592) = 0xb;
  local_ac = s_cState_Walk00_002b54b8;
  local_b0 = iVar12;
  func_0010BEC4((int)puVar4,0,&local_b0);
  puVar7 = (undefined4 *)puVar4[6];
  uVar11 = *(undefined4 *)(iVar2 + 0x1c);
  uVar13 = *(undefined4 *)(iVar2 + 0x18);
  uVar18 = *(undefined4 *)(iVar2 + 0x20);
  uVar19 = *(undefined8 *)(iVar2 + 0x24);
  *puVar7 = *(undefined4 *)(iVar2 + 0x14);
  puVar7[1] = uVar13;
  puVar7 = (undefined4 *)puVar4[7];
  *puVar7 = uVar11;
  puVar7[1] = uVar18;
  puVar7 = (undefined4 *)puVar4[8];
  *puVar7 = (int)uVar19;
  puVar7[1] = (int)((ulonglong)uVar19 >> 0x20);
  local_ac = s_cState_Wind_002b54c8;
  local_b0 = iVar12;
  func_0010BEC4((int)puVar4,1,&local_b0);
  iVar9 = puVar4[6];
  uVar11 = *(undefined4 *)(iVar2 + 0x30);
  uVar13 = *(undefined4 *)(iVar2 + 0x34);
  uVar18 = *(undefined4 *)(iVar2 + 0x38);
  *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(iVar9 + 0xc) = uVar11;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 8) = uVar13;
  *(undefined4 *)(iVar9 + 0xc) = uVar18;
  iVar9 = puVar4[8];
  *(int *)(iVar9 + 8) = (int)uVar19;
  *(int *)(iVar9 + 0xc) = (int)((ulonglong)uVar19 >> 0x20);
  local_ac = s_cState_Walk01_002b54d4;
  local_b0 = iVar12;
  func_0010BEC4((int)puVar4,2,&local_b0);
  iVar9 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar2 + 0x40);
  uVar18 = *(undefined4 *)(iVar2 + 0x44);
  uVar11 = *(undefined4 *)(iVar2 + 0x48);
  *(undefined4 *)(iVar9 + 0x10) = *(undefined4 *)(iVar2 + 0x3c);
  *(undefined4 *)(iVar9 + 0x14) = uVar13;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 0x10) = uVar18;
  *(undefined4 *)(iVar9 + 0x14) = uVar11;
  iVar9 = puVar4[8];
  *(int *)(iVar9 + 0x10) = (int)uVar19;
  *(int *)(iVar9 + 0x14) = (int)((ulonglong)uVar19 >> 0x20);
  local_ac = s_cState_PreBurn_002b54e4;
  local_b0 = iVar12;
  func_0010BEC4((int)puVar4,3,&local_b0);
  iVar9 = puVar4[6];
  uVar11 = *(undefined4 *)(iVar2 + 0x50);
  uVar13 = *(undefined4 *)(iVar2 + 0x54);
  uVar18 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(iVar9 + 0x1c) = uVar11;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 0x18) = uVar13;
  *(undefined4 *)(iVar9 + 0x1c) = uVar18;
  iVar9 = puVar4[8];
  *(int *)(iVar9 + 0x18) = (int)uVar19;
  *(int *)(iVar9 + 0x1c) = (int)((ulonglong)uVar19 >> 0x20);
  local_ac = s_cState_Burn_002b54f4;
  local_b0 = iVar12;
  func_0010BEC4((int)puVar4,4,&local_b0);
  iVar9 = puVar4[6];
  uVar11 = *(undefined4 *)(iVar2 + 0x60);
  uVar13 = *(undefined4 *)(iVar2 + 100);
  uVar18 = *(undefined4 *)(iVar2 + 0x68);
  *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(iVar2 + 0x5c);
  *(undefined4 *)(iVar9 + 0x24) = uVar11;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 0x20) = uVar13;
  *(undefined4 *)(iVar9 + 0x24) = uVar18;
  iVar9 = puVar4[8];
  *(int *)(iVar9 + 0x20) = (int)uVar19;
  *(int *)(iVar9 + 0x24) = (int)((ulonglong)uVar19 >> 0x20);
  local_ac = s_cState_Ignition_002b5500;
  local_b0 = iVar12;
  func_0010BEC4((int)puVar4,5,&local_b0);
  iVar9 = puVar4[6];
  uVar11 = *(undefined4 *)(iVar2 + 0x70);
  uVar13 = *(undefined4 *)(iVar2 + 0x74);
  uVar18 = *(undefined4 *)(iVar2 + 0x78);
  *(undefined4 *)(iVar9 + 0x28) = *(undefined4 *)(iVar2 + 0x6c);
  *(undefined4 *)(iVar9 + 0x2c) = uVar11;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 0x28) = uVar13;
  *(undefined4 *)(iVar9 + 0x2c) = uVar18;
  iVar9 = puVar4[8];
  *(int *)(iVar9 + 0x28) = (int)uVar19;
  *(int *)(iVar9 + 0x2c) = (int)((ulonglong)uVar19 >> 0x20);
  local_ac = s_cState_Reaction_002b5510;
  local_b0 = iVar12;
  func_0010BEC4((int)puVar4,6,&local_b0);
  iVar9 = puVar4[6];
  uVar11 = *(undefined4 *)(iVar2 + 0x80);
  uVar13 = *(undefined4 *)(iVar2 + 0x84);
  uVar18 = *(undefined4 *)(iVar2 + 0x88);
  *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar2 + 0x7c);
  *(undefined4 *)(iVar9 + 0x34) = uVar11;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 0x30) = uVar13;
  *(undefined4 *)(iVar9 + 0x34) = uVar18;
  iVar9 = puVar4[8];
  *(int *)(iVar9 + 0x30) = (int)uVar19;
  *(int *)(iVar9 + 0x34) = (int)((ulonglong)uVar19 >> 0x20);
  local_ac = s_cState_Die_002b5520;
  local_b0 = iVar12;
  func_0010BEC4((int)puVar4,7,&local_b0);
  iVar9 = puVar4[6];
  uVar11 = *(undefined4 *)(iVar2 + 0x90);
  uVar13 = *(undefined4 *)(iVar2 + 0x94);
  uVar18 = *(undefined4 *)(iVar2 + 0x98);
  *(undefined4 *)(iVar9 + 0x38) = *(undefined4 *)(iVar2 + 0x8c);
  *(undefined4 *)(iVar9 + 0x3c) = uVar11;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 0x38) = uVar13;
  *(undefined4 *)(iVar9 + 0x3c) = uVar18;
  iVar9 = puVar4[8];
  *(int *)(iVar9 + 0x38) = (int)uVar19;
  *(int *)(iVar9 + 0x3c) = (int)((ulonglong)uVar19 >> 0x20);
  local_ac = s_cState_Wait_002b552c;
  local_b0 = iVar12;
  func_0010BEC4((int)puVar4,8,&local_b0);
  iVar9 = puVar4[6];
  uVar18 = *(undefined4 *)(iVar2 + 0xa0);
  uVar11 = *(undefined4 *)(iVar2 + 0xa4);
  uVar13 = *(undefined4 *)(iVar2 + 0xa8);
  *(undefined4 *)(iVar9 + 0x40) = *(undefined4 *)(iVar2 + 0x9c);
  *(undefined4 *)(iVar9 + 0x44) = uVar18;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 0x40) = uVar11;
  *(undefined4 *)(iVar9 + 0x44) = uVar13;
  iVar9 = puVar4[8];
  *(int *)(iVar9 + 0x40) = (int)uVar19;
  *(int *)(iVar9 + 0x44) = (int)((ulonglong)uVar19 >> 0x20);
  local_ac = s_cState_PreAppeal_002b5538;
  local_b0 = iVar12;
  func_0010BEC4((int)puVar4,9,&local_b0);
  iVar9 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar2 + 0xb0);
  uVar18 = *(undefined4 *)(iVar2 + 0xb4);
  uVar11 = *(undefined4 *)(iVar2 + 0xb8);
  *(undefined4 *)(iVar9 + 0x48) = *(undefined4 *)(iVar2 + 0xac);
  *(undefined4 *)(iVar9 + 0x4c) = uVar13;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 0x48) = uVar18;
  *(undefined4 *)(iVar9 + 0x4c) = uVar11;
  iVar9 = puVar4[8];
  *(int *)(iVar9 + 0x48) = (int)uVar19;
  *(int *)(iVar9 + 0x4c) = (int)((ulonglong)uVar19 >> 0x20);
  local_ac = s_cState_PostAppeal_002b554c;
  local_b0 = iVar12;
  func_0010BEC4((int)puVar4,10,&local_b0);
  iVar12 = puVar4[6];
  uVar11 = *(undefined4 *)(iVar2 + 0xc0);
  uVar13 = *(undefined4 *)(iVar2 + 0xc4);
  uVar18 = *(undefined4 *)(iVar2 + 200);
  *(undefined4 *)(iVar12 + 0x50) = *(undefined4 *)(iVar2 + 0xbc);
  *(undefined4 *)(iVar12 + 0x54) = uVar11;
  iVar12 = puVar4[7];
  *(undefined4 *)(iVar12 + 0x50) = uVar13;
  *(undefined4 *)(iVar12 + 0x54) = uVar18;
  iVar12 = puVar4[8];
  *(int *)(iVar12 + 0x50) = (int)uVar19;
  *(int *)(iVar12 + 0x54) = (int)((ulonglong)uVar19 >> 0x20);
  func_00662638(puVar4,8);
  func_004F5BD8((int)puVar5,(uint *)0x0,(int **)0x0,pfVar14);
  *(undefined1 *)((int)puVar4 + -0x16f) = 7;
  *(undefined1 *)((int)puVar4 + -0x16e) = 8;
  *(undefined1 *)((int)puVar4 + -0x16d) = 0;
  puVar4[-0xda] = puVar4[-0xda] & 0xfffffff7;
  if (iVar17 != 1) {
    func_0010983C(*DAT_002b4f64,iVar17);
  }
  return puVar5;
}

