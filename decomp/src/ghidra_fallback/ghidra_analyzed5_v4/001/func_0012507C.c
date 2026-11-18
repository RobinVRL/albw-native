#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_002B1FB4(int param_1,int param_2,ushort param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB148(int param_1,undefined1 param_2,undefined1 param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065650C(undefined4 *param_1,undefined1 param_2);
extern float fRam00125790;
extern int iRam00125478;
extern int iRam00125488;
extern undefined4 *puRam00125474;
extern undefined4 *puRam0012578c;
extern uint *DAT_00125458;
extern int DAT_0012545c;
extern undefined4 DAT_00125460;
extern int DAT_00125464;
extern undefined4 DAT_00125468;
extern undefined4 DAT_0012546c;
extern int DAT_00125470;
extern char s_cState_Die_00125780[];
extern char s_cState_Hide_0012547c[];
extern char s_cState_Reaction_00125770[];
extern char s_cState_SearchBranch_001254bc[];
extern char s_cState_Search_0012548c[];
extern char s_cState_Transform_00125748[];
extern char s_cState_TurnAtWall_001254a8[];
extern char s_cState_Turn_0012549c[];
extern char s_cState_Walk_0012573c[];
extern char s_cState_WatchStalfos_0012575c[];

// USA 0012507C <- EU 0012507C (Ghidra, non-matching)
// GLOBAL DAT_00125458 uint *
// GLOBAL DAT_0012545c int
// GLOBAL DAT_00125460 undefined4
// GLOBAL DAT_00125464 int
// GLOBAL DAT_00125468 undefined4
// GLOBAL DAT_0012546c undefined4
// GLOBAL DAT_00125470 int
// GLOBAL UNK_00125474 undefined *
// GLOBAL UNK_00125478 int
// GLOBAL UNK_00125488 int
// GLOBAL UNK_0012578c undefined4 *
// GLOBAL UNK_00125790 float
// GLOBAL s_cState_Die_00125780 string
// GLOBAL s_cState_Hide_0012547c string
// GLOBAL s_cState_Reaction_00125770 string
// GLOBAL s_cState_SearchBranch_001254bc string
// GLOBAL s_cState_Search_0012548c string
// GLOBAL s_cState_Transform_00125748 string
// GLOBAL s_cState_TurnAtWall_001254a8 string
// GLOBAL s_cState_Turn_0012549c string
// GLOBAL s_cState_Walk_0012573c string
// GLOBAL s_cState_WatchStalfos_0012575c string

undefined4 * func_0012507C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define iStack_30 (*(int *)(albw_frame + 0x0))
  #define pcStack_2c (*(char * *)(albw_frame + 0x4))
  piVar3 = func_004FD464(param_1,param_2,DAT_00125458);
  iVar9 = DAT_0012545c;
  *piVar3 = DAT_0012545c;
  piVar3[200] = iVar9 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  uVar16 = DAT_00125460;
  puVar5 = puVar4 + -0x22f;
  puVar4[0xc] = 0;
  puVar4[0xd] = uVar16;
  iVar9 = DAT_00125464;
  puVar4[0xe] = 2;
  puVar4[0xf] = uVar16;
  puVar4[0x10] = 0;
  uVar14 = *(undefined4 *)(iVar9 + 8);
  puVar4[0x13] = *(undefined4 *)(iVar9 + 4);
  puVar4[0x14] = uVar14;
  uVar14 = DAT_00125468;
  puVar4[0x11] = DAT_00125468;
  puVar4[0x12] = puVar5;
  uVar12 = *(undefined4 *)(iVar9 + 0xc);
  uVar15 = *(undefined4 *)(iVar9 + 0x10);
  puVar4[0x15] = uVar14;
  puVar4[0x16] = puVar5;
  puVar4[0x17] = uVar12;
  puVar4[0x18] = uVar15;
  uVar12 = *(undefined4 *)(iVar9 + 0x14);
  uVar15 = *(undefined4 *)(iVar9 + 0x18);
  puVar4[0x19] = uVar14;
  puVar4[0x1a] = puVar5;
  puVar4[0x1b] = uVar12;
  puVar4[0x1c] = uVar15;
  puVar4[0x1d] = uVar16;
  puVar4[0x1e] = uVar16;
  puVar4[0x1f] = uVar16;
  *(undefined1 *)(puVar4 + 0x20) = 0;
  puVar4[0x21] = 0;
  uVar16 = DAT_0012546c;
  puVar4[0x22] = 0;
  puVar4[0x23] = 0;
  puVar4[0x24] = uVar16;
  puVar4[0x25] = 0;
  *(undefined1 *)(puVar4 + 0x27) = 0;
  *(undefined1 *)((int)puVar4 + 0x9d) = 0;
  *(undefined1 *)((int)puVar4 + 0x9e) = 0;
  puVar4[-0x134] = puVar4 + 0x15;
  func_004FB344((int)puVar5,9);
  iVar6 = DAT_00125470;
  uVar13 = 0;
  do {
    func_004FACA4((int)puVar5,uVar13,(int *)(iVar6 + uVar13 * 8));
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 9);
  func_004FB468((int)puVar5);
  func_004FABDC((int)puVar5,0,0xffffffff,0);
  puVar4[5] = puVar5;
  *(undefined1 *)((int)puVar4 + 6) = 10;
  iVar6 = func_0010BA78(0xa0);
  puVar4[6] = iVar6;
  puVar4[7] = iVar6 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar10 = 10;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar16 = *(undefined4 *)(iVar9 + 0xd0);
    iVar10 = iVar10 + -1;
    puVar7[2] = *(undefined4 *)(iVar9 + 0xcc);
    puVar7[3] = uVar16;
    uVar16 = *(undefined4 *)(iVar9 + 0xd0);
    puVar7[4] = *(undefined4 *)(iVar9 + 0xcc);
    puVar7[5] = uVar16;
    puVar7 = puVar7 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar13 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar4[8] = puVar7;
  if (uVar13 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = *(undefined4 *)(iVar9 + 0x48);
      *puVar7 = *(undefined4 *)(iVar9 + 0x44);
      puVar7[1] = uVar16;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar13 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar16 = *(undefined4 *)(iVar9 + 0x48);
      puVar8[2] = *(undefined4 *)(iVar9 + 0x44);
      puVar8[3] = uVar16;
      uVar16 = *(undefined4 *)(iVar9 + 0x48);
      puVar8[4] = *(undefined4 *)(iVar9 + 0x44);
      puVar8[5] = uVar16;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x170,(int *)0x0,4);
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 10;
    iVar6 = func_00100118((int)(puVar7 + 2),puRam00125474,0x24,10);
  }
  if (iVar6 != 0) {
    puVar4[3] = iVar6;
    puVar4[2] = 10;
  }
  iVar6 = iRam00125478;
  puVar4[-0x15a] = puVar4;
  iVar10 = iRam00125488;
  *(undefined2 *)(iVar6 + (int)puVar5) = 10;
  pcStack_2c = s_cState_Hide_0012547c;
  iStack_30 = iVar10;
  func_0010BEC4((int)puVar4,0,&iStack_30);
  puVar7 = (undefined4 *)puVar4[6];
  uVar16 = *(undefined4 *)(iVar9 + 0x20);
  uVar14 = *(undefined4 *)(iVar9 + 0x24);
  uVar12 = *(undefined4 *)(iVar9 + 0x28);
  uVar15 = *(undefined4 *)(iVar9 + 0x2c);
  uVar17 = *(undefined4 *)(iVar9 + 0x30);
  *puVar7 = *(undefined4 *)(iVar9 + 0x1c);
  puVar7[1] = uVar16;
  puVar7 = (undefined4 *)puVar4[7];
  *puVar7 = uVar14;
  puVar7[1] = uVar12;
  puVar7 = (undefined4 *)puVar4[8];
  *puVar7 = uVar15;
  puVar7[1] = uVar17;
  pcStack_2c = s_cState_Search_0012548c;
  iStack_30 = iVar10;
  func_0010BEC4((int)puVar4,1,&iStack_30);
  iVar6 = puVar4[6];
  uVar14 = *(undefined4 *)(iVar9 + 0x38);
  uVar12 = *(undefined4 *)(iVar9 + 0x3c);
  uVar16 = *(undefined4 *)(iVar9 + 0x40);
  uVar18 = *(undefined8 *)(iVar9 + 0x44);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar9 + 0x34);
  *(undefined4 *)(iVar6 + 0xc) = uVar14;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 8) = uVar12;
  *(undefined4 *)(iVar6 + 0xc) = uVar16;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 8) = (int)uVar18;
  *(int *)(iVar6 + 0xc) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_2c = s_cState_Turn_0012549c;
  iStack_30 = iVar10;
  func_0010BEC4((int)puVar4,2,&iStack_30);
  iVar6 = puVar4[6];
  uVar16 = *(undefined4 *)(iVar9 + 0x50);
  uVar14 = *(undefined4 *)(iVar9 + 0x54);
  uVar12 = *(undefined4 *)(iVar9 + 0x58);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar9 + 0x4c);
  *(undefined4 *)(iVar6 + 0x14) = uVar16;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x10) = uVar14;
  *(undefined4 *)(iVar6 + 0x14) = uVar12;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 0x10) = (int)uVar18;
  *(int *)(iVar6 + 0x14) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_2c = s_cState_TurnAtWall_001254a8;
  iStack_30 = iVar10;
  func_0010BEC4((int)puVar4,3,&iStack_30);
  iVar6 = puVar4[6];
  uVar16 = *(undefined4 *)(iVar9 + 0x60);
  uVar14 = *(undefined4 *)(iVar9 + 100);
  uVar12 = *(undefined4 *)(iVar9 + 0x68);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar9 + 0x5c);
  *(undefined4 *)(iVar6 + 0x1c) = uVar16;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x18) = uVar14;
  *(undefined4 *)(iVar6 + 0x1c) = uVar12;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 0x18) = (int)uVar18;
  *(int *)(iVar6 + 0x1c) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_2c = s_cState_SearchBranch_001254bc;
  iStack_30 = iVar10;
  func_0010BEC4((int)puVar4,4,&iStack_30);
  iVar6 = puVar4[6];
  uVar16 = *(undefined4 *)(iVar9 + 0x70);
  uVar14 = *(undefined4 *)(iVar9 + 0x74);
  uVar12 = *(undefined4 *)(iVar9 + 0x78);
  *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar9 + 0x6c);
  *(undefined4 *)(iVar6 + 0x24) = uVar16;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x20) = uVar14;
  *(undefined4 *)(iVar6 + 0x24) = uVar12;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 0x20) = (int)uVar18;
  *(int *)(iVar6 + 0x24) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_2c = s_cState_Walk_0012573c;
  iStack_30 = iVar10;
  func_0010BEC4((int)puVar4,5,&iStack_30);
  iVar6 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar9 + 0x80);
  uVar16 = *(undefined4 *)(iVar9 + 0x84);
  uVar14 = *(undefined4 *)(iVar9 + 0x88);
  *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar9 + 0x7c);
  *(undefined4 *)(iVar6 + 0x2c) = uVar12;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x28) = uVar16;
  *(undefined4 *)(iVar6 + 0x2c) = uVar14;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 0x28) = (int)uVar18;
  *(int *)(iVar6 + 0x2c) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_2c = s_cState_Transform_00125748;
  iStack_30 = iVar10;
  func_0010BEC4((int)puVar4,6,&iStack_30);
  iVar6 = puVar4[6];
  uVar16 = *(undefined4 *)(iVar9 + 0x90);
  uVar14 = *(undefined4 *)(iVar9 + 0x94);
  uVar12 = *(undefined4 *)(iVar9 + 0x98);
  *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(iVar9 + 0x8c);
  *(undefined4 *)(iVar6 + 0x34) = uVar16;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x30) = uVar14;
  *(undefined4 *)(iVar6 + 0x34) = uVar12;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 0x30) = (int)uVar18;
  *(int *)(iVar6 + 0x34) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_2c = s_cState_WatchStalfos_0012575c;
  iStack_30 = iVar10;
  func_0010BEC4((int)puVar4,7,&iStack_30);
  iVar6 = puVar4[6];
  uVar16 = *(undefined4 *)(iVar9 + 0xa0);
  uVar14 = *(undefined4 *)(iVar9 + 0xa4);
  uVar12 = *(undefined4 *)(iVar9 + 0xa8);
  *(undefined4 *)(iVar6 + 0x38) = *(undefined4 *)(iVar9 + 0x9c);
  *(undefined4 *)(iVar6 + 0x3c) = uVar16;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x38) = uVar14;
  *(undefined4 *)(iVar6 + 0x3c) = uVar12;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 0x38) = (int)uVar18;
  *(int *)(iVar6 + 0x3c) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_2c = s_cState_Reaction_00125770;
  iStack_30 = iVar10;
  func_0010BEC4((int)puVar4,8,&iStack_30);
  iVar6 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar9 + 0xb0);
  uVar16 = *(undefined4 *)(iVar9 + 0xb4);
  uVar14 = *(undefined4 *)(iVar9 + 0xb8);
  *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(iVar9 + 0xac);
  *(undefined4 *)(iVar6 + 0x44) = uVar12;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x40) = uVar16;
  *(undefined4 *)(iVar6 + 0x44) = uVar14;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 0x40) = (int)uVar18;
  *(int *)(iVar6 + 0x44) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_2c = s_cState_Die_00125780;
  iStack_30 = iVar10;
  func_0010BEC4((int)puVar4,9,&iStack_30);
  iVar6 = puVar4[6];
  uVar16 = *(undefined4 *)(iVar9 + 0xc0);
  uVar14 = *(undefined4 *)(iVar9 + 0xc4);
  pfVar11 = *(float **)(iVar9 + 200);
  *(undefined4 *)(iVar6 + 0x48) = *(undefined4 *)(iVar9 + 0xbc);
  *(undefined4 *)(iVar6 + 0x4c) = uVar16;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 0x48) = uVar14;
  *(float **)(iVar9 + 0x4c) = pfVar11;
  iVar9 = puVar4[8];
  *(int *)(iVar9 + 0x48) = (int)uVar18;
  *(int *)(iVar9 + 0x4c) = (int)((ulonglong)uVar18 >> 0x20);
  if (*(short *)((int)puVar4 + -0x886) == 0) {
    func_0065650C(puVar4,1);
  }
  else {
    bVar2 = func_00588BF0((int)puVar5,0);
    if (bVar2) {
      *(undefined1 *)((int)puVar4 + -0x5e5) = 1;
    }
    else {
      func_0065650C(puVar4,0);
    }
  }
  func_004F5BD8((int)puVar5,(uint *)0x0,(int **)0x0,pfVar11);
  puVar4[-200] = puVar4[-200] & 0xefff7fff;
  puVar4[-0xce] = puVar4[-0xce] | 4;
  *(undefined1 *)((int)puVar4 + -0x13f) = 8;
  *(undefined1 *)((int)puVar4 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x13d) = 0;
  func_002AF5FC((int)puVar5,7,-1);
  func_004FB148((int)puVar5,7,0xff);
  puVar4[-0x11d] = puVar4 + 0x19;
  puVar4[-0x11f] = puVar4 + 0x11;
  func_002B1FB4((int)puVar5,0,0);
  func_004F8864((int)puVar5,puRam0012578c,0,fRam00125790);
  return puVar5;
}

