#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0065E110(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_0021d840;
extern int DAT_0021d844;
extern undefined4 *DAT_0021d848;
extern undefined4 DAT_0021d84c;
extern int DAT_0021d850;
extern undefined4 DAT_0021d854;
extern int DAT_0021d858;
extern undefined *DAT_0021d85c;
extern int DAT_0021d860;
extern int DAT_0021d870;
extern undefined4 DAT_0021d8b0;
extern float DAT_0021d8b4;
extern char s_cState_CreateBomb_0021d880[];
extern char s_cState_Die_0021d8a4[];
extern char s_cState_Reaction_0021d894[];
extern char s_cState_Wait_0021d864[];
extern char s_cState_Walk_0021d874[];

// USA 0021D408 <- EU 0021D408 (Ghidra, non-matching)
// GLOBAL DAT_0021d840 uint *
// GLOBAL DAT_0021d844 int
// GLOBAL DAT_0021d848 undefined4 *
// GLOBAL DAT_0021d84c undefined4
// GLOBAL DAT_0021d850 int
// GLOBAL DAT_0021d854 undefined4
// GLOBAL DAT_0021d858 int
// GLOBAL DAT_0021d85c undefined *
// GLOBAL DAT_0021d860 int
// GLOBAL DAT_0021d870 int
// GLOBAL DAT_0021d8b0 undefined4
// GLOBAL DAT_0021d8b4 float
// GLOBAL s_cState_CreateBomb_0021d880 string
// GLOBAL s_cState_Die_0021d8a4 string
// GLOBAL s_cState_Reaction_0021d894 string
// GLOBAL s_cState_Wait_0021d864 string
// GLOBAL s_cState_Walk_0021d874 string

undefined4 * func_0021D408(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  float fparam_0;
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
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar18;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar3 = func_004FD464(param_1,param_2,DAT_0021d840);
  iVar9 = DAT_0021d844;
  *piVar3 = DAT_0021d844;
  piVar3[200] = iVar9 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  puVar5 = DAT_0021d848;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined1 *)(puVar4 + 9) = 4;
  uVar11 = DAT_0021d84c;
  uVar13 = puVar5[1];
  uVar15 = puVar5[2];
  puVar4[10] = *puVar5;
  puVar4[0xb] = uVar13;
  puVar4[0xc] = uVar15;
  iVar9 = DAT_0021d850;
  uVar13 = *puVar5;
  uVar15 = puVar5[1];
  puVar4[0xf] = puVar5[2];
  puVar4[0xd] = uVar13;
  puVar4[0xe] = uVar15;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = uVar11;
  puVar5 = puVar4 + -0x22f;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  puVar4[0x15] = uVar11;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0;
  puVar4[0x18] = uVar11;
  uVar11 = *(undefined4 *)(iVar9 + 4);
  pfVar12 = *(float **)(iVar9 + 8);
  puVar4[0x1a] = puVar5;
  puVar4[0x1b] = uVar11;
  puVar4[0x1c] = pfVar12;
  puVar4[0x19] = DAT_0021d854;
  func_004FB344((int)puVar5,8);
  iVar6 = DAT_0021d858;
  uVar14 = 0;
  do {
    func_004FACA4((int)puVar5,uVar14,(int *)(iVar6 + uVar14 * 8));
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 8);
  func_004FB468((int)puVar5);
  func_004F5BD8((int)puVar5,(uint *)0x0,(int **)0x0,pfVar12);
  puVar4[5] = puVar5;
  *(undefined1 *)((int)puVar4 + 6) = 5;
  iVar6 = func_0010BA78(0x50);
  puVar4[6] = iVar6;
  puVar4[7] = iVar6 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar10 = 5;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar11 = *(undefined4 *)(iVar9 + 0x70);
    iVar10 = iVar10 + -1;
    puVar7[2] = *(undefined4 *)(iVar9 + 0x6c);
    puVar7[3] = uVar11;
    uVar11 = *(undefined4 *)(iVar9 + 0x70);
    puVar7[4] = *(undefined4 *)(iVar9 + 0x6c);
    puVar7[5] = uVar11;
    puVar7 = puVar7 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar14 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar4[8] = puVar7;
  if (uVar14 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = *(undefined4 *)(iVar9 + 0x20);
      *puVar7 = *(undefined4 *)(iVar9 + 0x1c);
      puVar7[1] = uVar11;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar14 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar11 = *(undefined4 *)(iVar9 + 0x20);
      puVar8[2] = *(undefined4 *)(iVar9 + 0x1c);
      puVar8[3] = uVar11;
      uVar11 = *(undefined4 *)(iVar9 + 0x20);
      puVar8[4] = *(undefined4 *)(iVar9 + 0x1c);
      puVar8[5] = uVar11;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  puVar2 = DAT_0021d85c;
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 5;
    *puVar7 = 0x24;
    iVar6 = func_00100118((int)(puVar7 + 2),puVar2,0x24,5);
  }
  if (iVar6 != 0) {
    puVar4[3] = iVar6;
    puVar4[2] = 5;
  }
  iVar6 = DAT_0021d860;
  puVar4[-0x15a] = puVar4;
  iVar10 = DAT_0021d870;
  *(undefined2 *)(iVar6 + (int)puVar5) = 5;
  local_34 = s_cState_Wait_0021d864;
  local_38 = iVar10;
  func_0010BEC4((int)puVar4,0,&local_38);
  puVar7 = (undefined4 *)puVar4[6];
  uVar13 = *(undefined4 *)(iVar9 + 0x14);
  uVar11 = *(undefined4 *)(iVar9 + 0xc);
  uVar15 = *(undefined4 *)(iVar9 + 0x18);
  uVar18 = *(undefined4 *)(iVar9 + 0x1c);
  uVar16 = *(undefined4 *)(iVar9 + 0x20);
  puVar7[1] = *(undefined4 *)(iVar9 + 0x10);
  *puVar7 = uVar11;
  puVar7 = (undefined4 *)puVar4[7];
  *puVar7 = uVar13;
  puVar7[1] = uVar15;
  puVar7 = (undefined4 *)puVar4[8];
  *puVar7 = uVar18;
  puVar7[1] = uVar16;
  local_34 = s_cState_Walk_0021d874;
  local_38 = iVar10;
  func_0010BEC4((int)puVar4,1,&local_38);
  iVar6 = puVar4[6];
  uVar11 = *(undefined4 *)(iVar9 + 0x28);
  uVar13 = *(undefined4 *)(iVar9 + 0x2c);
  uVar15 = *(undefined4 *)(iVar9 + 0x30);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar9 + 0x24);
  *(undefined4 *)(iVar6 + 0xc) = uVar11;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 8) = uVar13;
  *(undefined4 *)(iVar6 + 0xc) = uVar15;
  iVar6 = puVar4[8];
  *(undefined4 *)(iVar6 + 8) = uVar18;
  *(undefined4 *)(iVar6 + 0xc) = uVar16;
  local_34 = s_cState_CreateBomb_0021d880;
  local_38 = iVar10;
  func_0010BEC4((int)puVar4,2,&local_38);
  iVar6 = puVar4[6];
  uVar11 = *(undefined4 *)(iVar9 + 0x38);
  uVar13 = *(undefined4 *)(iVar9 + 0x3c);
  uVar15 = *(undefined4 *)(iVar9 + 0x40);
  uVar18 = *(undefined4 *)(iVar9 + 0x44);
  uVar16 = *(undefined4 *)(iVar9 + 0x48);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar9 + 0x34);
  *(undefined4 *)(iVar6 + 0x14) = uVar11;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x10) = uVar13;
  *(undefined4 *)(iVar6 + 0x14) = uVar15;
  iVar6 = puVar4[8];
  *(undefined4 *)(iVar6 + 0x10) = uVar18;
  *(undefined4 *)(iVar6 + 0x14) = uVar16;
  local_34 = s_cState_Reaction_0021d894;
  local_38 = iVar10;
  func_0010BEC4((int)puVar4,3,&local_38);
  iVar6 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar9 + 0x50);
  uVar11 = *(undefined4 *)(iVar9 + 0x54);
  uVar15 = *(undefined4 *)(iVar9 + 0x58);
  uVar17 = *(undefined8 *)(iVar9 + 0x1c);
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar9 + 0x4c);
  *(undefined4 *)(iVar6 + 0x1c) = uVar13;
  iVar6 = puVar4[7];
  *(undefined4 *)(iVar6 + 0x18) = uVar11;
  *(undefined4 *)(iVar6 + 0x1c) = uVar15;
  iVar6 = puVar4[8];
  *(int *)(iVar6 + 0x18) = (int)uVar17;
  *(int *)(iVar6 + 0x1c) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_Die_0021d8a4;
  local_38 = iVar10;
  func_0010BEC4((int)puVar4,4,&local_38);
  uVar13 = *(undefined4 *)(iVar9 + 0x68);
  iVar6 = puVar4[6];
  uVar11 = *(undefined4 *)(iVar9 + 0x60);
  uVar15 = *(undefined4 *)(iVar9 + 100);
  *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar9 + 0x5c);
  *(undefined4 *)(iVar6 + 0x24) = uVar11;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 0x20) = uVar15;
  *(undefined4 *)(iVar9 + 0x24) = uVar13;
  iVar9 = puVar4[8];
  *(int *)(iVar9 + 0x20) = (int)uVar17;
  *(int *)(iVar9 + 0x24) = (int)((ulonglong)uVar17 >> 0x20);
  func_0065E110(puVar4,1);
  puVar4[-0x134] = puVar4 + 0x19;
  uVar11 = DAT_0021d8b0;
  puVar4[-200] = puVar4[-200] | 0x8000;
  func_004FC218((int)puVar5,'\x04',-1,(ushort)uVar11);
  func_002AF5FC((int)puVar5,5,-1);
  fparam_0 = DAT_0021d8b4;
  *(undefined1 *)((int)puVar4 + -0x13f) = 6;
  *(undefined1 *)((int)puVar4 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x13d) = 0;
  func_004FBA18((int)puVar5,7,0xff,-1,-1,0,(ushort)uVar11,fparam_0,fparam_0);
  return puVar5;
}

