#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002B1FB4(int param_1,int param_2,ushort param_3);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB0A4(int param_1,float fparam_0);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FC5EC(int param_1,undefined1 param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00520FC0(void);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_0065D4EC(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_002073e0;
extern int DAT_002073e4;
extern int DAT_002073e8;
extern undefined4 DAT_002073ec;
extern int DAT_002073f0;
extern undefined4 DAT_002073f4;
extern int *DAT_002073f8;
extern int DAT_002073fc;
extern int DAT_00207400;
extern float DAT_00207404;
extern int DAT_00207408;
extern undefined *DAT_0020740c;
extern int DAT_00207410;
extern int DAT_00207420;
extern undefined4 DAT_00207874;
extern int DAT_00207878;
extern int *DAT_0020787c;
extern char s_cState_Die_002077dc[];
extern char s_cState_Kyorokyoro_00207424[];
extern char s_cState_PetrifactionRevive_00207838[];
extern char s_cState_PetrifactionShake_0020781c[];
extern char s_cState_PetrifactionStart_002077e8[];
extern char s_cState_PetrifactionStop_00207804[];
extern char s_cState_Reaction_002077cc[];
extern char s_cState_Stop_00207444[];
extern char s_cState_Turn_00207854[];
extern char s_cState_UniqueDie_00207860[];
extern char s_cState_Wait_00207414[];
extern char s_cState_Walk_00207438[];

// USA 00206FBC <- EU 00206FBC (Ghidra, non-matching)
// GLOBAL DAT_002073e0 uint *
// GLOBAL DAT_002073e4 int
// GLOBAL DAT_002073e8 int
// GLOBAL DAT_002073ec undefined4
// GLOBAL DAT_002073f0 int
// GLOBAL DAT_002073f4 undefined4
// GLOBAL DAT_002073f8 int *
// GLOBAL DAT_002073fc int
// GLOBAL DAT_00207400 int
// GLOBAL DAT_00207404 float
// GLOBAL DAT_00207408 int
// GLOBAL DAT_0020740c undefined *
// GLOBAL DAT_00207410 int
// GLOBAL DAT_00207420 int
// GLOBAL DAT_00207874 undefined4
// GLOBAL DAT_00207878 int
// GLOBAL DAT_0020787c int *
// GLOBAL s_cState_Die_002077dc string
// GLOBAL s_cState_Kyorokyoro_00207424 string
// GLOBAL s_cState_PetrifactionRevive_00207838 string
// GLOBAL s_cState_PetrifactionShake_0020781c string
// GLOBAL s_cState_PetrifactionStart_002077e8 string
// GLOBAL s_cState_PetrifactionStop_00207804 string
// GLOBAL s_cState_Reaction_002077cc string
// GLOBAL s_cState_Stop_00207444 string
// GLOBAL s_cState_Turn_00207854 string
// GLOBAL s_cState_UniqueDie_00207860 string
// GLOBAL s_cState_Wait_00207414 string
// GLOBAL s_cState_Walk_00207438 string

int * func_00206FBC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  float fparam_0;
  undefined4 uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(char * *)(albw_frame + 0xc))
  #define local_34 ((uint *)(albw_frame + 0x1c))
  piVar2 = func_004FD464(param_1,param_2,DAT_002073e0);
  iVar10 = DAT_002073e4;
  *piVar2 = DAT_002073e4;
  piVar2[200] = iVar10 + 0x84;
  puVar3 = func_0010A794(piVar2 + 0x22f);
  puVar3[5] = 0;
  iVar10 = DAT_002073e8;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  uVar15 = DAT_002073ec;
  uVar7 = *(undefined4 *)(iVar10 + 4);
  uVar11 = *(undefined4 *)(iVar10 + 8);
  puVar3[10] = puVar3 + -0x22f;
  puVar3[0xb] = uVar7;
  puVar3[0xc] = uVar11;
  puVar3[9] = uVar15;
  iVar6 = DAT_002073f0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  *(undefined1 *)(puVar3 + 0x12) = 0;
  *(undefined1 *)((int)puVar3 + 0x49) = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  *(undefined1 *)(puVar3 + 0x15) = 0;
  *(undefined1 *)((int)puVar3 + 0x55) = 0;
  *(undefined2 *)(iVar6 + (int)(puVar3 + -0x22f)) = 0;
  puVar3[0x16] = 0;
  *(undefined1 *)(puVar3 + 0x17) = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  uVar7 = DAT_002073f4;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = uVar7;
  piVar2 = DAT_002073f8;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = uVar7;
  puVar3[0x1f] = 0;
  iVar6 = piVar2[1];
  iVar8 = piVar2[2];
  piVar12 = puVar3 + 0x20;
  *piVar12 = *piVar2;
  puVar3[0x21] = iVar6;
  puVar3[0x22] = iVar8;
  iVar6 = func_0054D964((int)(puVar3 + -0x22f),0);
  puVar3[0x23] = iVar6;
  puVar3 = func_004EDC9C(puVar3 + 0x24);
  piVar2 = puVar3 + -0x253;
  uVar7 = *(undefined4 *)(iVar10 + 0xc);
  uVar11 = *(undefined4 *)(iVar10 + 0x10);
  puVar3[0x13] = piVar2;
  puVar3[0x12] = uVar15;
  puVar3[0x14] = uVar7;
  puVar3[0x15] = uVar11;
  if (((short)param_2[0xb] == 1) && (iVar6 = func_00520FC0(), *(int *)(iVar6 + 4) < DAT_002073fc)) {
    *(undefined1 *)((int)puVar3 + -0x675) = 1;
  }
  else {
    puVar3[-0x158] = puVar3 + -0x1b;
    func_004FB344((int)piVar2,9);
    iVar6 = DAT_00207400;
    uVar13 = 0;
    do {
      func_004FACA4((int)piVar2,uVar13,(int *)(iVar6 + uVar13 * 8));
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < 9);
    func_004FB468((int)piVar2);
    uVar17 = (ulonglong)(uint)ALBW_AS_U32(DAT_00207404);
    func_004FB0A4((int)piVar2,DAT_00207404);
    func_004FC5EC((int)piVar2,5);
    func_004FB30C((int)piVar2,3);
    iVar6 = DAT_00207408;
    uVar13 = 0;
    do {
      piVar9 = (int *)(iVar6 + uVar13 * 8);
      func_004FAC70((int)piVar2,uVar13,piVar9);
      fparam_0 = ALBW_AS_F32(uVar17);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < 3);
    func_004FB408((int)piVar2);
    func_004FB070((int)piVar2,fparam_0);
    func_004FB4C4((int)piVar2,fparam_0);
    func_004FACD4((int)piVar2,(int *)0x0,piVar9,piVar12);
    iVar6 = func_0054DDF4((int)piVar2,1);
    puVar3[-0xc] = iVar6;
    *(undefined1 *)((int)puVar3 + -0x8a) = 0xc;
    puVar14 = puVar3 + -0x24;
    puVar3[-0x1f] = piVar2;
    iVar6 = func_0010BA78(0xc0);
    puVar3[-0x1e] = iVar6;
    puVar3[-0x1d] = iVar6 + (uint)*(byte *)((int)puVar3 + -0x8a) * 8;
    iVar8 = 0xc;
    puVar4 = (undefined4 *)(iVar6 + -8);
    do {
      uVar15 = *(undefined4 *)(iVar10 + 0xe0);
      iVar8 = iVar8 + -1;
      puVar4[2] = *(undefined4 *)(iVar10 + 0xdc);
      puVar4[3] = uVar15;
      uVar15 = *(undefined4 *)(iVar10 + 0xe0);
      puVar4[4] = *(undefined4 *)(iVar10 + 0xdc);
      puVar4[5] = uVar15;
      puVar4 = puVar4 + 4;
    } while (iVar8 != 0);
    bVar1 = *(byte *)((int)puVar3 + -0x8a);
    uVar13 = (uint)bVar1;
    puVar4 = (undefined4 *)func_0010BA78(uVar13 << 3);
    puVar3[-0x1c] = puVar4;
    if (uVar13 != 0) {
      puVar5 = puVar4 + -2;
      if ((bVar1 & 1) != 0) {
        uVar15 = *(undefined4 *)(iVar10 + 0x28);
        *puVar4 = *(undefined4 *)(iVar10 + 0x24);
        puVar4[1] = uVar15;
        puVar5 = puVar4;
      }
      for (iVar6 = (int)uVar13 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
        uVar15 = *(undefined4 *)(iVar10 + 0x28);
        puVar5[2] = *(undefined4 *)(iVar10 + 0x24);
        puVar5[3] = uVar15;
        uVar15 = *(undefined4 *)(iVar10 + 0x28);
        puVar5[4] = *(undefined4 *)(iVar10 + 0x24);
        puVar5[5] = uVar15;
        puVar5 = puVar5 + 4;
      }
    }
    puVar4 = (undefined4 *)func_0010CEE0(0x1b8,(int *)0x0,4);
    iVar6 = 0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0x24;
      puVar4[1] = 0xc;
      iVar6 = func_00100118((int)(puVar4 + 2),DAT_0020740c,0x24,0xc);
    }
    if (iVar6 != 0) {
      puVar3[-0x21] = iVar6;
      puVar3[-0x22] = 0xc;
    }
    iVar6 = DAT_00207410;
    puVar3[-0x17e] = puVar14;
    iVar8 = DAT_00207420;
    *(undefined2 *)(iVar6 + (int)piVar2) = 0xc;
    local_44 = s_cState_Wait_00207414;
    local_48 = iVar8;
    func_0010BEC4((int)puVar14,0,&local_48);
    puVar4 = (undefined4 *)puVar3[-0x1e];
    uVar18 = *(undefined4 *)(iVar10 + 0x24);
    uVar16 = *(undefined4 *)(iVar10 + 0x28);
    uVar15 = *(undefined4 *)(iVar10 + 0x18);
    uVar7 = *(undefined4 *)(iVar10 + 0x1c);
    uVar11 = *(undefined4 *)(iVar10 + 0x20);
    *puVar4 = *(undefined4 *)(iVar10 + 0x14);
    puVar4[1] = uVar15;
    puVar4 = (undefined4 *)puVar3[-0x1d];
    *puVar4 = uVar7;
    puVar4[1] = uVar11;
    puVar4 = (undefined4 *)puVar3[-0x1c];
    *puVar4 = uVar18;
    puVar4[1] = uVar16;
    local_44 = s_cState_Kyorokyoro_00207424;
    local_48 = iVar8;
    func_0010BEC4((int)puVar14,1,&local_48);
    iVar6 = puVar3[-0x1e];
    uVar11 = *(undefined4 *)(iVar10 + 0x38);
    uVar7 = *(undefined4 *)(iVar10 + 0x30);
    uVar15 = *(undefined4 *)(iVar10 + 0x34);
    *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar10 + 0x2c);
    *(undefined4 *)(iVar6 + 0xc) = uVar7;
    iVar6 = puVar3[-0x1d];
    *(undefined4 *)(iVar6 + 8) = uVar15;
    *(undefined4 *)(iVar6 + 0xc) = uVar11;
    iVar6 = puVar3[-0x1c];
    *(undefined4 *)(iVar6 + 8) = uVar18;
    *(undefined4 *)(iVar6 + 0xc) = uVar16;
    local_44 = s_cState_Walk_00207438;
    local_48 = iVar8;
    func_0010BEC4((int)puVar14,2,&local_48);
    iVar6 = puVar3[-0x1e];
    uVar15 = *(undefined4 *)(iVar10 + 0x40);
    uVar7 = *(undefined4 *)(iVar10 + 0x44);
    uVar11 = *(undefined4 *)(iVar10 + 0x48);
    *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar10 + 0x3c);
    *(undefined4 *)(iVar6 + 0x14) = uVar15;
    iVar6 = puVar3[-0x1d];
    *(undefined4 *)(iVar6 + 0x10) = uVar7;
    *(undefined4 *)(iVar6 + 0x14) = uVar11;
    iVar6 = puVar3[-0x1c];
    *(undefined4 *)(iVar6 + 0x10) = uVar18;
    *(undefined4 *)(iVar6 + 0x14) = uVar16;
    local_44 = s_cState_Stop_00207444;
    local_48 = iVar8;
    func_0010BEC4((int)puVar14,3,&local_48);
    iVar6 = puVar3[-0x1e];
    uVar15 = *(undefined4 *)(iVar10 + 0x50);
    uVar7 = *(undefined4 *)(iVar10 + 0x54);
    uVar11 = *(undefined4 *)(iVar10 + 0x58);
    *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar10 + 0x4c);
    *(undefined4 *)(iVar6 + 0x1c) = uVar15;
    iVar6 = puVar3[-0x1d];
    *(undefined4 *)(iVar6 + 0x18) = uVar7;
    *(undefined4 *)(iVar6 + 0x1c) = uVar11;
    iVar6 = puVar3[-0x1c];
    *(undefined4 *)(iVar6 + 0x18) = uVar18;
    *(undefined4 *)(iVar6 + 0x1c) = uVar16;
    local_44 = s_cState_Reaction_002077cc;
    local_48 = iVar8;
    func_0010BEC4((int)puVar14,4,&local_48);
    iVar6 = puVar3[-0x1e];
    uVar15 = *(undefined4 *)(iVar10 + 0x60);
    uVar7 = *(undefined4 *)(iVar10 + 100);
    uVar11 = *(undefined4 *)(iVar10 + 0x68);
    *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar10 + 0x5c);
    *(undefined4 *)(iVar6 + 0x24) = uVar15;
    iVar6 = puVar3[-0x1d];
    *(undefined4 *)(iVar6 + 0x20) = uVar7;
    *(undefined4 *)(iVar6 + 0x24) = uVar11;
    iVar6 = puVar3[-0x1c];
    *(undefined4 *)(iVar6 + 0x20) = uVar18;
    *(undefined4 *)(iVar6 + 0x24) = uVar16;
    local_44 = s_cState_Die_002077dc;
    local_48 = iVar8;
    func_0010BEC4((int)puVar14,5,&local_48);
    iVar6 = puVar3[-0x1e];
    uVar15 = *(undefined4 *)(iVar10 + 0x70);
    uVar7 = *(undefined4 *)(iVar10 + 0x74);
    uVar11 = *(undefined4 *)(iVar10 + 0x78);
    *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar10 + 0x6c);
    *(undefined4 *)(iVar6 + 0x2c) = uVar15;
    iVar6 = puVar3[-0x1d];
    *(undefined4 *)(iVar6 + 0x28) = uVar7;
    *(undefined4 *)(iVar6 + 0x2c) = uVar11;
    iVar6 = puVar3[-0x1c];
    *(undefined4 *)(iVar6 + 0x28) = uVar18;
    *(undefined4 *)(iVar6 + 0x2c) = uVar16;
    local_44 = s_cState_PetrifactionStart_002077e8;
    local_48 = iVar8;
    func_0010BEC4((int)puVar14,6,&local_48);
    iVar6 = puVar3[-0x1e];
    uVar15 = *(undefined4 *)(iVar10 + 0x80);
    uVar7 = *(undefined4 *)(iVar10 + 0x84);
    uVar11 = *(undefined4 *)(iVar10 + 0x88);
    *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(iVar10 + 0x7c);
    *(undefined4 *)(iVar6 + 0x34) = uVar15;
    iVar6 = puVar3[-0x1d];
    *(undefined4 *)(iVar6 + 0x30) = uVar7;
    *(undefined4 *)(iVar6 + 0x34) = uVar11;
    iVar6 = puVar3[-0x1c];
    *(undefined4 *)(iVar6 + 0x30) = uVar18;
    *(undefined4 *)(iVar6 + 0x34) = uVar16;
    local_44 = s_cState_PetrifactionStop_00207804;
    local_48 = iVar8;
    func_0010BEC4((int)puVar14,7,&local_48);
    iVar6 = puVar3[-0x1e];
    uVar15 = *(undefined4 *)(iVar10 + 0x90);
    uVar7 = *(undefined4 *)(iVar10 + 0x94);
    uVar11 = *(undefined4 *)(iVar10 + 0x98);
    *(undefined4 *)(iVar6 + 0x38) = *(undefined4 *)(iVar10 + 0x8c);
    *(undefined4 *)(iVar6 + 0x3c) = uVar15;
    iVar6 = puVar3[-0x1d];
    *(undefined4 *)(iVar6 + 0x38) = uVar7;
    *(undefined4 *)(iVar6 + 0x3c) = uVar11;
    iVar6 = puVar3[-0x1c];
    *(undefined4 *)(iVar6 + 0x38) = uVar18;
    *(undefined4 *)(iVar6 + 0x3c) = uVar16;
    local_44 = s_cState_PetrifactionShake_0020781c;
    local_48 = iVar8;
    func_0010BEC4((int)puVar14,8,&local_48);
    iVar6 = puVar3[-0x1e];
    uVar7 = *(undefined4 *)(iVar10 + 0xa0);
    uVar15 = *(undefined4 *)(iVar10 + 0xa8);
    uVar11 = *(undefined4 *)(iVar10 + 0xa4);
    *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(iVar10 + 0x9c);
    *(undefined4 *)(iVar6 + 0x44) = uVar7;
    iVar6 = puVar3[-0x1d];
    *(undefined4 *)(iVar6 + 0x40) = uVar11;
    *(undefined4 *)(iVar6 + 0x44) = uVar15;
    iVar6 = puVar3[-0x1c];
    *(undefined4 *)(iVar6 + 0x40) = uVar18;
    *(undefined4 *)(iVar6 + 0x44) = uVar16;
    local_44 = s_cState_PetrifactionRevive_00207838;
    local_48 = iVar8;
    func_0010BEC4((int)puVar14,9,&local_48);
    iVar6 = puVar3[-0x1e];
    uVar15 = *(undefined4 *)(iVar10 + 0xb4);
    uVar7 = *(undefined4 *)(iVar10 + 0xb0);
    uVar11 = *(undefined4 *)(iVar10 + 0xb8);
    *(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(iVar10 + 0xac);
    *(undefined4 *)(iVar6 + 0x4c) = uVar7;
    iVar6 = puVar3[-0x1d];
    *(undefined4 *)(iVar6 + 0x48) = uVar15;
    *(undefined4 *)(iVar6 + 0x4c) = uVar11;
    iVar6 = puVar3[-0x1c];
    *(undefined4 *)(iVar6 + 0x48) = uVar18;
    *(undefined4 *)(iVar6 + 0x4c) = uVar16;
    local_44 = s_cState_Turn_00207854;
    local_48 = iVar8;
    func_0010BEC4((int)puVar14,10,&local_48);
    iVar6 = puVar3[-0x1e];
    uVar15 = *(undefined4 *)(iVar10 + 0xc0);
    uVar7 = *(undefined4 *)(iVar10 + 0xc4);
    uVar11 = *(undefined4 *)(iVar10 + 200);
    *(undefined4 *)(iVar6 + 0x50) = *(undefined4 *)(iVar10 + 0xbc);
    *(undefined4 *)(iVar6 + 0x54) = uVar15;
    iVar6 = puVar3[-0x1d];
    *(undefined4 *)(iVar6 + 0x50) = uVar7;
    *(undefined4 *)(iVar6 + 0x54) = uVar11;
    iVar6 = puVar3[-0x1c];
    *(undefined4 *)(iVar6 + 0x50) = uVar18;
    *(undefined4 *)(iVar6 + 0x54) = uVar16;
    local_44 = s_cState_UniqueDie_00207860;
    local_48 = iVar8;
    func_0010BEC4((int)puVar14,0xb,&local_48);
    uVar7 = *(undefined4 *)(iVar10 + 0xd4);
    uVar15 = *(undefined4 *)(iVar10 + 0xd8);
    iVar6 = puVar3[-0x1e];
    uVar11 = *(undefined4 *)(iVar10 + 0xd0);
    *(undefined4 *)(iVar6 + 0x58) = *(undefined4 *)(iVar10 + 0xcc);
    *(undefined4 *)(iVar6 + 0x5c) = uVar11;
    iVar10 = puVar3[-0x1d];
    *(undefined4 *)(iVar10 + 0x58) = uVar7;
    *(undefined4 *)(iVar10 + 0x5c) = uVar15;
    iVar10 = puVar3[-0x1c];
    *(undefined4 *)(iVar10 + 0x58) = uVar18;
    *(undefined4 *)(iVar10 + 0x5c) = uVar16;
    if (*(short *)((int)param_2 + 0x2a) == 0) {
      func_0065D4EC(puVar14,1);
    }
    else {
      puVar3[-0xe] = 0x32;
      func_004F88A0(piVar2,(undefined2 *)puVar3[-0xc]);
      func_0065D4EC(puVar14,7);
    }
    puVar3[-0x139] = DAT_00207874;
    *(undefined1 *)((int)puVar3 + -0xf9) = 1;
    func_002B1FB4((int)piVar2,-1,0x80);
    *(undefined1 *)((int)puVar3 + -0x1cf) = 8;
    *(undefined1 *)((int)puVar3 + -0x1ce) = 0xff;
    *(undefined1 *)((int)puVar3 + -0x1cd) = 0;
    iVar10 = puVar3[-1];
    uVar15 = puVar3[-0x15e];
    uVar7 = puVar3[-0x15d];
    *(undefined4 *)(iVar10 + 4) = puVar3[-0x15f];
    *(undefined4 *)(iVar10 + 8) = uVar15;
    *(undefined4 *)(iVar10 + 0xc) = uVar7;
    *(undefined2 *)(puVar3[-1] + 0x28) = 0xa4;
    puVar3[6] = puVar3[-1];
    local_34[0] = puVar3[-0x1a0];
    func_004EDAD0((int)puVar3,local_34);
    *(undefined2 *)(DAT_00207878 + (int)piVar2) = *(undefined2 *)(puVar3 + -0x23e);
    func_004A7F00(*DAT_0020787c,(int)puVar3,2);
    *(undefined1 *)(puVar3 + 0x11) = 0;
    puVar3[-0x141] = puVar3 + 0x12;
  }
  return piVar2;
}

