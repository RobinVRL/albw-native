#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0032427C(int param_1,float fparam_0,float fparam_1);
extern int func_0036CF6C(undefined4 *param_1,int param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_004FD1A8(int param_1,int param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00663FA8(undefined4 *param_1,undefined1 param_2);
extern float fRam002e71d4;
extern float fRam002e71d8;
extern int iRam002e6e18;
extern int iRam002e6e20;
extern undefined4 uRam002e71dc;
extern undefined4 uRam002e71e0;
extern undefined4 *puRam002e6e1c;
extern uint *DAT_002e6dec;
extern int DAT_002e6df0;
extern uint DAT_002e6df4;
extern undefined *DAT_002e6df8;
extern uint DAT_002e6dfc;
extern undefined4 DAT_002e6e00;
extern undefined4 *DAT_002e6e04;
extern int DAT_002e6e08;
extern int *DAT_002e6e0c;
extern int *DAT_002e6e10;
extern int DAT_002e6e14;
extern char s_cState_Die_002e71a0[];
extern char s_cState_Fall_002e6e24[];
extern char s_cState_Reaction_002e7190[];
extern char s_cState_RotateWait_002e717c[];
extern char s_cState_RunEd_002e7160[];
extern char s_cState_RunEd_PreRotate_002e71ac[];
extern char s_cState_RunSt_002e6e30[];
extern char s_cState_Standby_002e71c4[];
extern char s_cState_Wait_002e7170[];
extern char s_cState_Walk_002e7154[];

// USA 002E6A38 <- EU 002E6A14 (Ghidra, non-matching)
// GLOBAL DAT_002e6dec uint *
// GLOBAL DAT_002e6df0 int
// GLOBAL DAT_002e6df4 uint
// GLOBAL DAT_002e6df8 undefined *
// GLOBAL DAT_002e6dfc uint
// GLOBAL DAT_002e6e00 undefined4
// GLOBAL DAT_002e6e04 undefined4 *
// GLOBAL DAT_002e6e08 int
// GLOBAL DAT_002e6e0c int *
// GLOBAL DAT_002e6e10 int *
// GLOBAL DAT_002e6e14 int
// GLOBAL UNK_002e6e18 int
// GLOBAL UNK_002e6e1c undefined *
// GLOBAL UNK_002e6e20 int
// GLOBAL UNK_002e71d4 float
// GLOBAL UNK_002e71d8 float
// GLOBAL UNK_002e71dc undefined4
// GLOBAL UNK_002e71e0 undefined4
// GLOBAL s_cState_Die_002e71a0 string
// GLOBAL s_cState_Fall_002e6e24 string
// GLOBAL s_cState_Reaction_002e7190 string
// GLOBAL s_cState_RotateWait_002e717c string
// GLOBAL s_cState_RunEd_002e7160 string
// GLOBAL s_cState_RunEd_PreRotate_002e71ac string
// GLOBAL s_cState_RunSt_002e6e30 string
// GLOBAL s_cState_Standby_002e71c4 string
// GLOBAL s_cState_Wait_002e7170 string
// GLOBAL s_cState_Walk_002e7154 string

undefined4 * func_002E6A38(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  float fparam_1;
  float fparam_0;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong lVar18;
  float fparam_0_00;
  ulonglong uVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(int *)(albw_frame + 0x8))
  #define local_94 (*(char * *)(albw_frame + 0xc))
  #define auStack_90 ((uint *)(albw_frame + 0x10))
  #define puStack_88 (*(undefined4 * *)(albw_frame + 0x18))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x20))
  #define fStack_7c (*(float *)(albw_frame + 0x24))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x28))
  #define fStack_74 (*(float *)(albw_frame + 0x2c))
  #define uStack_70 (*(uint *)(albw_frame + 0x30))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_38 (*(undefined1 *)(albw_frame + 0x68))
  piVar3 = func_004FD464(param_1,param_2,DAT_002e6dec);
  iVar5 = DAT_002e6df0;
  *piVar3 = DAT_002e6df0;
  piVar3[200] = iVar5 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  uVar14 = DAT_002e6df4;
  uVar19 = (ulonglong)DAT_002e6df4;
  puVar4[0xb] = 0;
  puVar4[0xc] = uVar14;
  iVar5 = func_00100118((int)(puVar4 + 0xd),DAT_002e6df8,0x10,8);
  *(undefined4 *)(iVar5 + 0x80) = 0;
  *(undefined4 *)(iVar5 + 0x84) = 0;
  *(undefined4 *)(iVar5 + 0x88) = 0;
  uVar14 = DAT_002e6dfc;
  lVar18 = (ulonglong)DAT_002e6dfc << 0x20;
  *(undefined4 *)(iVar5 + 0x8c) = 0;
  if (iVar5 + 0x90 != 0) {
    *(int *)(iVar5 + 0x80) = iVar5 + 0x90;
    *(undefined4 *)(iVar5 + 0x84) = 10;
  }
  *(uint *)(iVar5 + 0x108) = uVar14;
  *(uint *)(iVar5 + 0x10c) = uVar14;
  *(undefined1 *)(iVar5 + 0x110) = 0;
  puVar6 = func_0036CF6C((undefined4 *)(iVar5 + 0x114),4);
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar4 = DAT_002e6e04;
  puVar6[0xb] = DAT_002e6e00;
  puVar13 = puVar6 + -0x281;
  uVar16 = (undefined4)((ulonglong)lVar18 >> 0x20);
  puVar6[9] = uVar16;
  puVar6[10] = (int)uVar19;
  puVar6[0xc] = uVar16;
  puVar6[0xd] = uVar16;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  uVar11 = *puVar4;
  uVar12 = puVar4[1];
  uVar15 = puVar4[2];
  puVar6[0x13] = 0;
  puVar6[0x10] = uVar11;
  puVar6[0x11] = uVar12;
  puVar6[0x12] = uVar15;
  puVar6[0x14] = uVar16;
  uVar11 = puVar4[1];
  uVar12 = puVar4[2];
  puVar6[0x15] = *puVar4;
  puVar6[0x16] = uVar11;
  puVar6[0x17] = uVar12;
  uVar11 = puVar4[1];
  uVar12 = puVar4[2];
  puVar6[0x18] = *puVar4;
  puVar6[0x19] = uVar11;
  puVar6[0x1a] = uVar12;
  uVar11 = puVar4[1];
  uVar12 = puVar4[2];
  puVar6[0x1b] = *puVar4;
  puVar6[0x1c] = uVar11;
  puVar6[0x1d] = uVar12;
  puVar6[0x1e] = 0;
  puVar6[-0x18a] = uVar16;
  puVar6[-0x189] = uVar16;
  puVar6[-0x188] = uVar16;
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  piVar3 = DAT_002e6e0c;
  iVar5 = DAT_002e6e08;
  puVar4 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    (**(code **)(*DAT_002e6e0c + 8))(DAT_002e6e0c);
    local_94 = (char *)piVar3[1];
    local_98 = iVar5;
    puVar4 = func_0016A2FC(puVar7,1,&local_98,1);
  }
  puVar6[0x1e] = puVar4;
  func_00169608((uint *)puVar6[0x1e],0,DAT_002e6e10,*(int *)(puVar6[-0x1cd] + 0x1c8));
  func_0016A02C(puVar6[0x1e],-1,(int *)0xffffffff,0);
  func_004FB344((int)puVar13,8);
  iVar2 = DAT_002e6e14;
  uVar14 = 0;
  do {
    func_004FACA4((int)puVar13,uVar14,(int *)(iVar2 + uVar14 * 8));
    fparam_0_00 = ALBW_AS_F32(uVar19);
    uVar11 = (undefined4)((ulonglong)lVar18 >> 0x20);
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 8);
  func_004FB468((int)puVar13);
  func_004FABDC((int)puVar13,0,0xffffffff,0);
  func_004FB4E0((int)puVar13,fparam_0_00);
  puVar6[-0x4d] = puVar13;
  puVar7 = puVar6 + -0x52;
  *(undefined1 *)((int)puVar6 + -0x142) = 10;
  iVar8 = func_0010BA78(0xa0);
  iVar2 = iRam002e6e18;
  puVar6[-0x4c] = iVar8;
  puVar6[-0x4b] = iVar8 + (uint)*(byte *)((int)puVar6 + -0x142) * 8;
  iVar10 = 10;
  puVar4 = (undefined4 *)(iVar8 + -8);
  do {
    uVar12 = *(undefined4 *)(iVar2 + 0xb0);
    iVar10 = iVar10 + -1;
    puVar4[2] = *(undefined4 *)(iVar2 + 0xac);
    puVar4[3] = uVar12;
    uVar12 = *(undefined4 *)(iVar2 + 0xb0);
    puVar4[4] = *(undefined4 *)(iVar2 + 0xac);
    puVar4[5] = uVar12;
    puVar4 = puVar4 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar6 + -0x142);
  uVar14 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar6[-0x4a] = puVar4;
  if (uVar14 != 0) {
    puVar9 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = *(undefined4 *)(iVar2 + 0x18);
      *puVar4 = *(undefined4 *)(iVar2 + 0x14);
      puVar4[1] = uVar12;
      puVar9 = puVar4;
    }
    for (iVar8 = (int)uVar14 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar12 = *(undefined4 *)(iVar2 + 0x18);
      puVar9[2] = *(undefined4 *)(iVar2 + 0x14);
      puVar9[3] = uVar12;
      uVar12 = *(undefined4 *)(iVar2 + 0x18);
      puVar9[4] = *(undefined4 *)(iVar2 + 0x14);
      puVar9[5] = uVar12;
      puVar9 = puVar9 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0x170,(int *)0x0,4);
  iVar8 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x24;
    puVar4[1] = 10;
    iVar8 = func_00100118((int)(puVar4 + 2),puRam002e6e1c,0x24,10);
  }
  if (iVar8 != 0) {
    puVar6[-0x4f] = iVar8;
    puVar6[-0x50] = 10;
  }
  iVar8 = iRam002e6e20;
  puVar6[-0x1ac] = puVar7;
  *(undefined2 *)(iVar8 + (int)puVar13) = 10;
  local_94 = s_cState_Fall_002e6e24;
  local_98 = iVar5;
  func_0010BEC4((int)puVar7,0,&local_98);
  puVar4 = (undefined4 *)puVar6[-0x4c];
  uVar12 = *(undefined4 *)(iVar2 + 0xc);
  uVar15 = *(undefined4 *)(iVar2 + 8);
  uVar20 = *(undefined4 *)(iVar2 + 0x14);
  uVar16 = *(undefined4 *)(iVar2 + 0x10);
  uVar17 = *(undefined4 *)(iVar2 + 0x18);
  *puVar4 = *(undefined4 *)(iVar2 + 4);
  puVar4[1] = uVar15;
  puVar4 = (undefined4 *)puVar6[-0x4b];
  *puVar4 = uVar12;
  puVar4[1] = uVar16;
  puVar4 = (undefined4 *)puVar6[-0x4a];
  *puVar4 = uVar20;
  puVar4[1] = uVar17;
  local_94 = s_cState_RunSt_002e6e30;
  local_98 = iVar5;
  func_0010BEC4((int)puVar7,1,&local_98);
  iVar8 = puVar6[-0x4c];
  uVar12 = *(undefined4 *)(iVar2 + 0x20);
  uVar15 = *(undefined4 *)(iVar2 + 0x24);
  uVar16 = *(undefined4 *)(iVar2 + 0x28);
  *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(iVar8 + 0xc) = uVar12;
  iVar8 = puVar6[-0x4b];
  *(undefined4 *)(iVar8 + 8) = uVar15;
  *(undefined4 *)(iVar8 + 0xc) = uVar16;
  iVar8 = puVar6[-0x4a];
  *(undefined4 *)(iVar8 + 8) = uVar20;
  *(undefined4 *)(iVar8 + 0xc) = uVar17;
  local_94 = s_cState_Walk_002e7154;
  local_98 = iVar5;
  func_0010BEC4((int)puVar7,2,&local_98);
  iVar8 = puVar6[-0x4c];
  uVar15 = *(undefined4 *)(iVar2 + 0x30);
  uVar16 = *(undefined4 *)(iVar2 + 0x34);
  uVar12 = *(undefined4 *)(iVar2 + 0x38);
  *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(iVar8 + 0x14) = uVar15;
  iVar8 = puVar6[-0x4b];
  *(undefined4 *)(iVar8 + 0x10) = uVar16;
  *(undefined4 *)(iVar8 + 0x14) = uVar12;
  iVar8 = puVar6[-0x4a];
  *(undefined4 *)(iVar8 + 0x10) = uVar20;
  *(undefined4 *)(iVar8 + 0x14) = uVar17;
  local_94 = s_cState_RunEd_002e7160;
  local_98 = iVar5;
  func_0010BEC4((int)puVar7,3,&local_98);
  iVar8 = puVar6[-0x4c];
  uVar12 = *(undefined4 *)(iVar2 + 0x40);
  uVar15 = *(undefined4 *)(iVar2 + 0x44);
  uVar16 = *(undefined4 *)(iVar2 + 0x48);
  *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar2 + 0x3c);
  *(undefined4 *)(iVar8 + 0x1c) = uVar12;
  iVar8 = puVar6[-0x4b];
  *(undefined4 *)(iVar8 + 0x18) = uVar15;
  *(undefined4 *)(iVar8 + 0x1c) = uVar16;
  iVar8 = puVar6[-0x4a];
  *(undefined4 *)(iVar8 + 0x18) = uVar20;
  *(undefined4 *)(iVar8 + 0x1c) = uVar17;
  local_94 = s_cState_Wait_002e7170;
  local_98 = iVar5;
  func_0010BEC4((int)puVar7,4,&local_98);
  iVar8 = puVar6[-0x4c];
  uVar16 = *(undefined4 *)(iVar2 + 0x50);
  uVar12 = *(undefined4 *)(iVar2 + 0x54);
  uVar15 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(iVar8 + 0x24) = uVar16;
  iVar8 = puVar6[-0x4b];
  *(undefined4 *)(iVar8 + 0x20) = uVar12;
  *(undefined4 *)(iVar8 + 0x24) = uVar15;
  iVar8 = puVar6[-0x4a];
  *(undefined4 *)(iVar8 + 0x20) = uVar20;
  *(undefined4 *)(iVar8 + 0x24) = uVar17;
  local_94 = s_cState_RotateWait_002e717c;
  local_98 = iVar5;
  func_0010BEC4((int)puVar7,5,&local_98);
  iVar8 = puVar6[-0x4c];
  uVar12 = *(undefined4 *)(iVar2 + 0x60);
  uVar16 = *(undefined4 *)(iVar2 + 100);
  uVar15 = *(undefined4 *)(iVar2 + 0x68);
  *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(iVar2 + 0x5c);
  *(undefined4 *)(iVar8 + 0x2c) = uVar12;
  iVar8 = puVar6[-0x4b];
  *(undefined4 *)(iVar8 + 0x28) = uVar16;
  *(undefined4 *)(iVar8 + 0x2c) = uVar15;
  iVar8 = puVar6[-0x4a];
  *(undefined4 *)(iVar8 + 0x28) = uVar20;
  *(undefined4 *)(iVar8 + 0x2c) = uVar17;
  local_94 = s_cState_Reaction_002e7190;
  local_98 = iVar5;
  func_0010BEC4((int)puVar7,6,&local_98);
  iVar8 = puVar6[-0x4c];
  uVar12 = *(undefined4 *)(iVar2 + 0x70);
  uVar15 = *(undefined4 *)(iVar2 + 0x74);
  uVar16 = *(undefined4 *)(iVar2 + 0x78);
  *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)(iVar2 + 0x6c);
  *(undefined4 *)(iVar8 + 0x34) = uVar12;
  iVar8 = puVar6[-0x4b];
  *(undefined4 *)(iVar8 + 0x30) = uVar15;
  *(undefined4 *)(iVar8 + 0x34) = uVar16;
  iVar8 = puVar6[-0x4a];
  *(undefined4 *)(iVar8 + 0x30) = uVar20;
  *(undefined4 *)(iVar8 + 0x34) = uVar17;
  local_94 = s_cState_Die_002e71a0;
  local_98 = iVar5;
  func_0010BEC4((int)puVar7,7,&local_98);
  iVar8 = puVar6[-0x4c];
  uVar16 = *(undefined4 *)(iVar2 + 0x80);
  uVar12 = *(undefined4 *)(iVar2 + 0x88);
  uVar15 = *(undefined4 *)(iVar2 + 0x84);
  *(undefined4 *)(iVar8 + 0x38) = *(undefined4 *)(iVar2 + 0x7c);
  *(undefined4 *)(iVar8 + 0x3c) = uVar16;
  iVar8 = puVar6[-0x4b];
  *(undefined4 *)(iVar8 + 0x38) = uVar15;
  *(undefined4 *)(iVar8 + 0x3c) = uVar12;
  iVar8 = puVar6[-0x4a];
  *(undefined4 *)(iVar8 + 0x38) = uVar20;
  *(undefined4 *)(iVar8 + 0x3c) = uVar17;
  local_94 = s_cState_RunEd_PreRotate_002e71ac;
  local_98 = iVar5;
  func_0010BEC4((int)puVar7,8,&local_98);
  iVar8 = puVar6[-0x4c];
  uVar12 = *(undefined4 *)(iVar2 + 0x90);
  uVar15 = *(undefined4 *)(iVar2 + 0x94);
  uVar16 = *(undefined4 *)(iVar2 + 0x98);
  *(undefined4 *)(iVar8 + 0x40) = *(undefined4 *)(iVar2 + 0x8c);
  *(undefined4 *)(iVar8 + 0x44) = uVar12;
  iVar8 = puVar6[-0x4b];
  *(undefined4 *)(iVar8 + 0x40) = uVar15;
  *(undefined4 *)(iVar8 + 0x44) = uVar16;
  iVar8 = puVar6[-0x4a];
  *(undefined4 *)(iVar8 + 0x40) = uVar20;
  *(undefined4 *)(iVar8 + 0x44) = uVar17;
  local_94 = s_cState_Standby_002e71c4;
  local_98 = iVar5;
  func_0010BEC4((int)puVar7,9,&local_98);
  fparam_1 = fRam002e71d4;
  iVar5 = puVar6[-0x4c];
  uVar12 = *(undefined4 *)(iVar2 + 0xa8);
  uVar15 = *(undefined4 *)(iVar2 + 0xa0);
  uVar16 = *(undefined4 *)(iVar2 + 0xa4);
  puVar4 = (undefined4 *)(iVar5 + 0x48);
  *puVar4 = *(undefined4 *)(iVar2 + 0x9c);
  fparam_0 = fRam002e71d8;
  *(undefined4 *)(iVar5 + 0x4c) = uVar15;
  iVar5 = puVar6[-0x4b];
  *(undefined4 *)(iVar5 + 0x48) = uVar16;
  *(undefined4 *)(iVar5 + 0x4c) = uVar12;
  iVar5 = puVar6[-0x4a];
  *(undefined4 *)(iVar5 + 0x48) = uVar20;
  *(undefined4 *)(iVar5 + 0x4c) = uVar17;
  func_0032427C((int)(puVar6 + -0x45),fparam_0,fparam_1);
  func_00663FA8(puVar7,9);
  func_004FD1A8((int)puVar13,0);
  puVar6[-0x14e] = uRam002e71dc;
  puStack_88 = &uStack_84;
  auStack_90[1] = 3;
  uStack_3c = 10;
  uStack_38 = 0;
  auStack_90[0] = 1;
  uStack_84 = 0;
  uStack_78 = uRam002e71e0;
  uStack_70 = (uint)puVar4 | 0xff;
  uStack_80 = uVar11;
  fStack_7c = fparam_0_00;
  fStack_74 = fparam_0_00;
  func_0016898C(puVar6[0x1e],auStack_90);
  return puVar13;
}

