#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_002B1440(int param_1,int param_2,ushort param_3,undefined1 param_4);
extern int func_002B1FB4(int param_1,int param_2,ushort param_3);
extern int func_003C30DC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4, float fparam_0,float fparam_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB148(int param_1,undefined1 param_2,undefined1 param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00658228(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_0015a974;
extern int DAT_0015a978;
extern float DAT_0015a97c;
extern float DAT_0015a980;
extern undefined4 DAT_0015a984;
extern undefined4 DAT_0015a988;
extern undefined4 DAT_0015a98c;
extern undefined4 *DAT_0015a990;
extern int DAT_0015a994;
extern undefined4 DAT_0015a998;
extern int DAT_0015a99c;
extern undefined *DAT_0015a9a0;
extern int DAT_0015a9a4;
extern int DAT_0015a9b4;
extern undefined4 DAT_0015abd0;
extern char s_cState_Appear_0015a9c4[];
extern char s_cState_Die_0015abc4[];
extern char s_cState_Disappear_0015a9d4[];
extern char s_cState_Hide_0015a9b8[];
extern char s_cState_Idle_0015a9a8[];
extern char s_cState_Move_0015a9e8[];
extern char s_cState_Reaction_0015abb4[];
extern char s_cState_SandUpStop_0015a9f4[];

// USA 0015A578 <- EU 0015A57C (Ghidra, non-matching)
// GLOBAL DAT_0015a974 uint *
// GLOBAL DAT_0015a978 int
// GLOBAL DAT_0015a97c float
// GLOBAL DAT_0015a980 float
// GLOBAL DAT_0015a984 undefined4
// GLOBAL DAT_0015a988 undefined4
// GLOBAL DAT_0015a98c undefined4
// GLOBAL DAT_0015a990 undefined4 *
// GLOBAL DAT_0015a994 int
// GLOBAL DAT_0015a998 undefined4
// GLOBAL DAT_0015a99c int
// GLOBAL DAT_0015a9a0 undefined *
// GLOBAL DAT_0015a9a4 int
// GLOBAL DAT_0015a9b4 int
// GLOBAL DAT_0015abd0 undefined4
// GLOBAL s_cState_Appear_0015a9c4 string
// GLOBAL s_cState_Die_0015abc4 string
// GLOBAL s_cState_Disappear_0015a9d4 string
// GLOBAL s_cState_Hide_0015a9b8 string
// GLOBAL s_cState_Idle_0015a9a8 string
// GLOBAL s_cState_Move_0015a9e8 string
// GLOBAL s_cState_Reaction_0015abb4 string
// GLOBAL s_cState_SandUpStop_0015a9f4 string

undefined4 * func_0015A578(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  float *pfVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  piVar4 = func_004FD464(param_1,param_2,DAT_0015a974);
  iVar9 = DAT_0015a978;
  *piVar4 = DAT_0015a978;
  piVar4[200] = iVar9 + 0x84;
  puVar5 = func_0010A794(piVar4 + 0x22f);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar6 = func_003C30DC(puVar5 + 9,puVar5 + -0x22f,puVar5 + -0x13b,0,DAT_0015a97c,DAT_0015a980);
  puVar5 = DAT_0015a990;
  uVar10 = DAT_0015a988;
  *puVar6 = DAT_0015a984;
  puVar6[0x1f] = 0;
  puVar6[0x20] = 0;
  puVar6[0x21] = uVar10;
  puVar6[0x22] = 0;
  puVar14 = puVar6 + -0x238;
  puVar6[0x23] = 0;
  puVar6[0x24] = uVar10;
  puVar6[0x26] = DAT_0015a98c;
  iVar9 = DAT_0015a994;
  puVar6[0x27] = param_2[8];
  uVar10 = puVar5[1];
  uVar12 = puVar5[2];
  puVar6[0x28] = *puVar5;
  puVar6[0x29] = uVar10;
  puVar6[0x2a] = uVar12;
  puVar6[0x2b] = 0;
  puVar6[0x2d] = 0;
  uVar10 = *(undefined4 *)(iVar9 + 8);
  pfVar13 = (float *)(puVar6 + 0x30);
  *pfVar13 = *(float *)(iVar9 + 4);
  puVar6[0x31] = uVar10;
  puVar6[0x2e] = DAT_0015a998;
  puVar6[0x2f] = puVar14;
  puVar6[-0x13d] = puVar6 + 0x2e;
  func_004FB344((int)puVar14,6);
  iVar7 = DAT_0015a99c;
  uVar15 = 0;
  do {
    func_004FACA4((int)puVar14,uVar15,(int *)(iVar7 + uVar15 * 8));
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 6);
  func_004FB468((int)puVar14);
  func_004F5BD8((int)puVar14,(uint *)0x0,(int **)0x0,pfVar13);
  puVar6[-4] = puVar14;
  puVar16 = puVar6 + -9;
  *(undefined1 *)((int)puVar6 + -0x1e) = 8;
  iVar7 = func_0010BA78(0x80);
  puVar6[-3] = iVar7;
  puVar6[-2] = iVar7 + (uint)*(byte *)((int)puVar6 + -0x1e) * 8;
  iVar11 = 8;
  puVar5 = (undefined4 *)(iVar7 + -8);
  do {
    uVar10 = *(undefined4 *)(iVar9 + 0xa0);
    iVar11 = iVar11 + -1;
    puVar5[2] = *(undefined4 *)(iVar9 + 0x9c);
    puVar5[3] = uVar10;
    uVar10 = *(undefined4 *)(iVar9 + 0xa0);
    puVar5[4] = *(undefined4 *)(iVar9 + 0x9c);
    puVar5[5] = uVar10;
    puVar5 = puVar5 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar6 + -0x1e);
  uVar15 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar6[-1] = puVar5;
  if (uVar15 != 0) {
    puVar8 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = *(undefined4 *)(iVar9 + 0x20);
      *puVar5 = *(undefined4 *)(iVar9 + 0x1c);
      puVar5[1] = uVar10;
      puVar8 = puVar5;
    }
    for (iVar7 = (int)uVar15 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar10 = *(undefined4 *)(iVar9 + 0x20);
      puVar8[2] = *(undefined4 *)(iVar9 + 0x1c);
      puVar8[3] = uVar10;
      uVar10 = *(undefined4 *)(iVar9 + 0x20);
      puVar8[4] = *(undefined4 *)(iVar9 + 0x1c);
      puVar8[5] = uVar10;
      puVar8 = puVar8 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x128,(int *)0x0,4);
  puVar2 = DAT_0015a9a0;
  iVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[1] = 8;
    *puVar5 = 0x24;
    iVar7 = func_00100118((int)(puVar5 + 2),puVar2,0x24,8);
  }
  if (iVar7 != 0) {
    puVar6[-6] = iVar7;
    puVar6[-7] = 8;
  }
  iVar7 = DAT_0015a9a4;
  puVar6[-0x163] = puVar16;
  iVar11 = DAT_0015a9b4;
  *(undefined2 *)(iVar7 + (int)puVar14) = 8;
  local_2c = s_cState_Idle_0015a9a8;
  local_30 = iVar11;
  func_0010BEC4((int)puVar16,0,&local_30);
  puVar5 = (undefined4 *)puVar6[-3];
  uVar17 = *(undefined4 *)(iVar9 + 0x14);
  uVar10 = *(undefined4 *)(iVar9 + 0xc);
  uVar12 = *(undefined4 *)(iVar9 + 0x18);
  uVar20 = *(undefined8 *)(iVar9 + 0x1c);
  puVar5[1] = *(undefined4 *)(iVar9 + 0x10);
  *puVar5 = uVar10;
  puVar5 = (undefined4 *)puVar6[-2];
  puVar5[1] = uVar12;
  *puVar5 = uVar17;
  puVar5 = (undefined4 *)puVar6[-1];
  *puVar5 = (int)uVar20;
  puVar5[1] = (int)((ulonglong)uVar20 >> 0x20);
  local_2c = s_cState_Hide_0015a9b8;
  local_30 = iVar11;
  func_0010BEC4((int)puVar16,1,&local_30);
  iVar7 = puVar6[-3];
  uVar10 = *(undefined4 *)(iVar9 + 0x30);
  uVar12 = *(undefined4 *)(iVar9 + 0x2c);
  uVar17 = *(undefined4 *)(iVar9 + 0x28);
  *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar9 + 0x24);
  *(undefined4 *)(iVar7 + 0xc) = uVar17;
  iVar7 = puVar6[-2];
  *(undefined4 *)(iVar7 + 8) = uVar12;
  *(undefined4 *)(iVar7 + 0xc) = uVar10;
  iVar7 = puVar6[-1];
  *(int *)(iVar7 + 8) = (int)uVar20;
  *(int *)(iVar7 + 0xc) = (int)((ulonglong)uVar20 >> 0x20);
  local_2c = s_cState_Appear_0015a9c4;
  local_30 = iVar11;
  func_0010BEC4((int)puVar16,2,&local_30);
  iVar7 = puVar6[-3];
  uVar10 = *(undefined4 *)(iVar9 + 0x38);
  uVar12 = *(undefined4 *)(iVar9 + 0x3c);
  uVar17 = *(undefined4 *)(iVar9 + 0x40);
  *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar9 + 0x34);
  *(undefined4 *)(iVar7 + 0x14) = uVar10;
  iVar7 = puVar6[-2];
  *(undefined4 *)(iVar7 + 0x10) = uVar12;
  *(undefined4 *)(iVar7 + 0x14) = uVar17;
  iVar7 = puVar6[-1];
  *(int *)(iVar7 + 0x10) = (int)uVar20;
  *(int *)(iVar7 + 0x14) = (int)((ulonglong)uVar20 >> 0x20);
  local_2c = s_cState_Disappear_0015a9d4;
  local_30 = iVar11;
  func_0010BEC4((int)puVar16,3,&local_30);
  iVar7 = puVar6[-3];
  uVar10 = *(undefined4 *)(iVar9 + 0x48);
  uVar12 = *(undefined4 *)(iVar9 + 0x4c);
  uVar17 = *(undefined4 *)(iVar9 + 0x50);
  *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar9 + 0x44);
  *(undefined4 *)(iVar7 + 0x1c) = uVar10;
  iVar7 = puVar6[-2];
  *(undefined4 *)(iVar7 + 0x18) = uVar12;
  *(undefined4 *)(iVar7 + 0x1c) = uVar17;
  iVar7 = puVar6[-1];
  *(int *)(iVar7 + 0x18) = (int)uVar20;
  *(int *)(iVar7 + 0x1c) = (int)((ulonglong)uVar20 >> 0x20);
  local_2c = s_cState_Move_0015a9e8;
  local_30 = iVar11;
  func_0010BEC4((int)puVar16,4,&local_30);
  iVar7 = puVar6[-3];
  uVar12 = *(undefined4 *)(iVar9 + 0x58);
  uVar17 = *(undefined4 *)(iVar9 + 0x5c);
  uVar10 = *(undefined4 *)(iVar9 + 0x60);
  *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar9 + 0x54);
  *(undefined4 *)(iVar7 + 0x24) = uVar12;
  iVar7 = puVar6[-2];
  *(undefined4 *)(iVar7 + 0x20) = uVar17;
  *(undefined4 *)(iVar7 + 0x24) = uVar10;
  iVar7 = puVar6[-1];
  *(int *)(iVar7 + 0x20) = (int)uVar20;
  *(int *)(iVar7 + 0x24) = (int)((ulonglong)uVar20 >> 0x20);
  local_2c = s_cState_SandUpStop_0015a9f4;
  local_30 = iVar11;
  func_0010BEC4((int)puVar16,5,&local_30);
  iVar7 = puVar6[-3];
  uVar10 = *(undefined4 *)(iVar9 + 0x68);
  uVar12 = *(undefined4 *)(iVar9 + 0x6c);
  uVar17 = *(undefined4 *)(iVar9 + 0x70);
  uVar18 = *(undefined4 *)(iVar9 + 0x74);
  uVar19 = *(undefined4 *)(iVar9 + 0x78);
  *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(iVar9 + 100);
  *(undefined4 *)(iVar7 + 0x2c) = uVar10;
  iVar7 = puVar6[-2];
  *(undefined4 *)(iVar7 + 0x28) = uVar12;
  *(undefined4 *)(iVar7 + 0x2c) = uVar17;
  iVar7 = puVar6[-1];
  *(undefined4 *)(iVar7 + 0x28) = uVar18;
  *(undefined4 *)(iVar7 + 0x2c) = uVar19;
  local_2c = s_cState_Reaction_0015abb4;
  local_30 = iVar11;
  func_0010BEC4((int)puVar16,6,&local_30);
  iVar7 = puVar6[-3];
  uVar12 = *(undefined4 *)(iVar9 + 0x80);
  uVar10 = *(undefined4 *)(iVar9 + 0x84);
  uVar17 = *(undefined4 *)(iVar9 + 0x88);
  uVar20 = *(undefined8 *)(iVar9 + 0x1c);
  *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar9 + 0x7c);
  *(undefined4 *)(iVar7 + 0x34) = uVar12;
  iVar7 = puVar6[-2];
  *(undefined4 *)(iVar7 + 0x30) = uVar10;
  *(undefined4 *)(iVar7 + 0x34) = uVar17;
  iVar7 = puVar6[-1];
  *(int *)(iVar7 + 0x30) = (int)uVar20;
  *(int *)(iVar7 + 0x34) = (int)((ulonglong)uVar20 >> 0x20);
  local_2c = s_cState_Die_0015abc4;
  local_30 = iVar11;
  func_0010BEC4((int)puVar16,7,&local_30);
  iVar7 = puVar6[-3];
  uVar10 = *(undefined4 *)(iVar9 + 0x90);
  uVar12 = *(undefined4 *)(iVar9 + 0x94);
  uVar17 = *(undefined4 *)(iVar9 + 0x98);
  *(undefined4 *)(iVar7 + 0x38) = *(undefined4 *)(iVar9 + 0x8c);
  *(undefined4 *)(iVar7 + 0x3c) = uVar10;
  iVar9 = puVar6[-2];
  *(undefined4 *)(iVar9 + 0x38) = uVar12;
  *(undefined4 *)(iVar9 + 0x3c) = uVar17;
  iVar9 = puVar6[-1];
  *(int *)(iVar9 + 0x38) = (int)uVar20;
  *(int *)(iVar9 + 0x3c) = (int)((ulonglong)uVar20 >> 0x20);
  if (*(short *)((int)puVar6 + -0x8aa) == 0) {
    func_00658228(puVar16,1);
  }
  else {
    bVar3 = func_00588BF0((int)puVar14,0);
    if (bVar3) {
      *(undefined1 *)((int)puVar6 + -0x609) = 1;
    }
    else {
      func_00658228(puVar16,0);
    }
  }
  uVar10 = DAT_0015abd0;
  puVar6[-0xd1] = puVar6[-0xd1] | 0x8000;
  func_002B1FB4((int)puVar14,-1,(ushort)uVar10);
  func_002B1440((int)puVar14,-1,(ushort)uVar10,0);
  func_002AF5FC((int)puVar14,3,-1);
  *(undefined1 *)((int)puVar6 + -0x163) = 2;
  *(undefined1 *)((int)puVar6 + -0x162) = 0xff;
  *(undefined1 *)((int)puVar6 + -0x161) = 0;
  func_004FB148((int)puVar14,3,0xff);
  func_002AED68((int)puVar14,3);
  return puVar14;
}

