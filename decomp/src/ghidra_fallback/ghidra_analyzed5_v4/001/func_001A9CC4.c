#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB0A4(int param_1,float fparam_0);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00564A78(int param_1,int *param_2);
extern float func_0058AC38(int param_1);
extern int func_0065A984(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_001aa09c;
extern int DAT_001aa0a0;
extern undefined4 DAT_001aa0a4;
extern undefined4 DAT_001aa0a8;
extern undefined4 DAT_001aa0ac;
extern uint DAT_001aa0b0;
extern undefined4 *DAT_001aa0b4;
extern int DAT_001aa0b8;
extern undefined4 DAT_001aa0bc;
extern undefined4 DAT_001aa0c0;
extern int DAT_001aa0c4;
extern undefined *DAT_001aa0c8;
extern int DAT_001aa0cc;
extern int DAT_001aa0dc;
extern undefined4 DAT_001aa3bc;
extern undefined4 DAT_001aa3c0;
extern float DAT_001aa3c4;
extern float DAT_001aa3c8;
extern undefined DAT_001aa3cc;
extern char s_cState_Chase_001aa108[];
extern char s_cState_Die_001aa3b0[];
extern char s_cState_Reaction_001aa118[];
extern char s_cState_Return_001aa378[];
extern char s_cState_ToFieldEd_001aa0f4[];
extern char s_cState_ToFieldSt_001aa0e0[];
extern char s_cState_ToWaterEd_001aa39c[];
extern char s_cState_ToWaterSt_001aa388[];
extern char s_cState_Wait_001aa0d0[];

// USA 001A9CC4 <- EU 001A9CC4 (Ghidra, non-matching)
// GLOBAL DAT_001aa09c uint *
// GLOBAL DAT_001aa0a0 int
// GLOBAL DAT_001aa0a4 undefined4
// GLOBAL DAT_001aa0a8 undefined4
// GLOBAL DAT_001aa0ac undefined4
// GLOBAL DAT_001aa0b0 uint
// GLOBAL DAT_001aa0b4 undefined4 *
// GLOBAL DAT_001aa0b8 int
// GLOBAL DAT_001aa0bc undefined4
// GLOBAL DAT_001aa0c0 undefined4
// GLOBAL DAT_001aa0c4 int
// GLOBAL DAT_001aa0c8 undefined *
// GLOBAL DAT_001aa0cc int
// GLOBAL DAT_001aa0dc int
// GLOBAL DAT_001aa3bc undefined4
// GLOBAL DAT_001aa3c0 undefined4
// GLOBAL DAT_001aa3c4 float
// GLOBAL DAT_001aa3c8 float
// GLOBAL DAT_001aa3cc undefined
// GLOBAL s_cState_Chase_001aa108 string
// GLOBAL s_cState_Die_001aa3b0 string
// GLOBAL s_cState_Reaction_001aa118 string
// GLOBAL s_cState_Return_001aa378 string
// GLOBAL s_cState_ToFieldEd_001aa0f4 string
// GLOBAL s_cState_ToFieldSt_001aa0e0 string
// GLOBAL s_cState_ToWaterEd_001aa39c string
// GLOBAL s_cState_ToWaterSt_001aa388 string
// GLOBAL s_cState_Wait_001aa0d0 string

undefined4 * func_001A9CC4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  ushort uVar10;
  float *pfVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  float fparam_0;
  undefined4 uVar16;
  float fparam_0_00;
  ulonglong uVar17;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar3 = func_004FD464(param_1,param_2,DAT_001aa09c);
  iVar2 = DAT_001aa0a0;
  *piVar3 = DAT_001aa0a0;
  piVar3[200] = iVar2 + 0x84;
  puVar4 = func_0010A794(piVar3 + 0x22f);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined1 *)(puVar4 + 9) = 0;
  puVar4[10] = 0;
  uVar13 = DAT_001aa0a4;
  puVar4[0xb] = 0;
  puVar4[0xc] = uVar13;
  uVar15 = DAT_001aa0ac;
  uVar13 = DAT_001aa0a8;
  puVar4[0xf] = DAT_001aa0a8;
  puVar4[0x10] = uVar15;
  puVar4[0xe] = 0;
  puVar4[0x12] = uVar13;
  puVar12 = DAT_001aa0b4;
  puVar4[0x13] = uVar15;
  puVar4[0x11] = 0;
  iVar2 = DAT_001aa0b8;
  uVar14 = DAT_001aa0b0;
  uVar13 = puVar12[1];
  uVar15 = puVar12[2];
  uVar17 = (ulonglong)DAT_001aa0b0;
  puVar4[0x14] = *puVar12;
  puVar4[0x15] = uVar13;
  puVar4[0x16] = uVar15;
  puVar4[0x17] = uVar14;
  puVar4[0x18] = uVar14;
  puVar4[0x19] = 0;
  puVar4[0x1b] = 0;
  uVar13 = *(undefined4 *)(iVar2 + 0xb0);
  puVar4[0x1c] = *(undefined4 *)(iVar2 + 0xac);
  puVar4[0x1d] = uVar13;
  puVar12 = puVar4 + -0x22f;
  puVar4[0x1a] = DAT_001aa0bc;
  puVar4[0x1e] = DAT_001aa0c0;
  puVar4[0x1f] = puVar12;
  puVar4[0x20] = 0;
  puVar4[0x21] = 0;
  puVar4[0x22] = 0;
  puVar4[-0x138] = uVar14;
  puVar4[-0x137] = uVar14;
  puVar4[-0x136] = uVar14;
  func_004FB344((int)puVar12,10);
  iVar5 = DAT_001aa0c4;
  uVar14 = 0;
  do {
    func_004FACA4((int)puVar12,uVar14,(int *)(iVar5 + uVar14 * 8));
    fparam_0_00 = ALBW_AS_F32(uVar17);
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 10);
  func_004FB468((int)puVar12);
  func_004FC07C((int)puVar12,3,0,0);
  fparam_0 = func_0058AC38(puVar12);
  func_004FB0A4((int)puVar12,fparam_0);
  func_004FB4E0((int)puVar12,fparam_0_00);
  puVar4[5] = puVar12;
  *(undefined1 *)((int)puVar4 + 6) = 9;
  iVar5 = func_0010BA78(0x90);
  puVar4[6] = iVar5;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar9 = 9;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar13 = *(undefined4 *)(iVar2 + 0xa8);
    iVar9 = iVar9 + -1;
    puVar6[2] = *(undefined4 *)(iVar2 + 0xa4);
    puVar6[3] = uVar13;
    uVar13 = *(undefined4 *)(iVar2 + 0xa8);
    puVar6[4] = *(undefined4 *)(iVar2 + 0xa4);
    puVar6[5] = uVar13;
    puVar6 = puVar6 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar14 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar4[8] = puVar6;
  if (uVar14 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = *(undefined4 *)(iVar2 + 0x18);
      *puVar6 = *(undefined4 *)(iVar2 + 0x14);
      puVar6[1] = uVar13;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar14 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar13 = *(undefined4 *)(iVar2 + 0x18);
      puVar7[2] = *(undefined4 *)(iVar2 + 0x14);
      puVar7[3] = uVar13;
      uVar13 = *(undefined4 *)(iVar2 + 0x18);
      puVar7[4] = *(undefined4 *)(iVar2 + 0x14);
      puVar7[5] = uVar13;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 9;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_001aa0c8,0x24,9);
  }
  if (iVar5 != 0) {
    puVar4[3] = iVar5;
    puVar4[2] = 9;
  }
  iVar5 = DAT_001aa0cc;
  puVar4[-0x15a] = puVar4;
  iVar9 = DAT_001aa0dc;
  *(undefined2 *)(iVar5 + (int)puVar12) = 9;
  local_34 = s_cState_Wait_001aa0d0;
  local_38 = iVar9;
  func_0010BEC4((int)puVar4,0,&local_38);
  puVar6 = (undefined4 *)puVar4[6];
  uVar13 = *(undefined4 *)(iVar2 + 8);
  uVar15 = *(undefined4 *)(iVar2 + 0xc);
  uVar16 = *(undefined4 *)(iVar2 + 0x10);
  uVar18 = *(undefined8 *)(iVar2 + 0x14);
  *puVar6 = *(undefined4 *)(iVar2 + 4);
  puVar6[1] = uVar13;
  puVar6 = (undefined4 *)puVar4[7];
  *puVar6 = uVar15;
  puVar6[1] = uVar16;
  puVar6 = (undefined4 *)puVar4[8];
  *puVar6 = (int)uVar18;
  puVar6[1] = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_ToFieldSt_001aa0e0;
  local_38 = iVar9;
  func_0010BEC4((int)puVar4,1,&local_38);
  iVar5 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar2 + 0x20);
  uVar15 = *(undefined4 *)(iVar2 + 0x24);
  uVar16 = *(undefined4 *)(iVar2 + 0x28);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(iVar5 + 0xc) = uVar13;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar15;
  *(undefined4 *)(iVar5 + 0xc) = uVar16;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 8) = (int)uVar18;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_ToFieldEd_001aa0f4;
  local_38 = iVar9;
  func_0010BEC4((int)puVar4,2,&local_38);
  iVar5 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar2 + 0x30);
  uVar15 = *(undefined4 *)(iVar2 + 0x34);
  uVar16 = *(undefined4 *)(iVar2 + 0x38);
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(iVar5 + 0x14) = uVar13;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar15;
  *(undefined4 *)(iVar5 + 0x14) = uVar16;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x10) = (int)uVar18;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Chase_001aa108;
  local_38 = iVar9;
  func_0010BEC4((int)puVar4,3,&local_38);
  iVar5 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar2 + 0x40);
  uVar15 = *(undefined4 *)(iVar2 + 0x44);
  uVar16 = *(undefined4 *)(iVar2 + 0x48);
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar2 + 0x3c);
  *(undefined4 *)(iVar5 + 0x1c) = uVar13;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x18) = uVar15;
  *(undefined4 *)(iVar5 + 0x1c) = uVar16;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x18) = (int)uVar18;
  *(int *)(iVar5 + 0x1c) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Reaction_001aa118;
  local_38 = iVar9;
  func_0010BEC4((int)puVar4,4,&local_38);
  iVar5 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar2 + 0x50);
  uVar15 = *(undefined4 *)(iVar2 + 0x54);
  uVar16 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(iVar5 + 0x24) = uVar13;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x20) = uVar15;
  *(undefined4 *)(iVar5 + 0x24) = uVar16;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x20) = (int)uVar18;
  *(int *)(iVar5 + 0x24) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Return_001aa378;
  local_38 = iVar9;
  func_0010BEC4((int)puVar4,5,&local_38);
  iVar5 = puVar4[6];
  uVar15 = *(undefined4 *)(iVar2 + 0x60);
  uVar13 = *(undefined4 *)(iVar2 + 0x68);
  uVar16 = *(undefined4 *)(iVar2 + 100);
  *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar2 + 0x5c);
  *(undefined4 *)(iVar5 + 0x2c) = uVar15;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x28) = uVar16;
  *(undefined4 *)(iVar5 + 0x2c) = uVar13;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x28) = (int)uVar18;
  *(int *)(iVar5 + 0x2c) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_ToWaterSt_001aa388;
  local_38 = iVar9;
  func_0010BEC4((int)puVar4,6,&local_38);
  iVar5 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar2 + 0x70);
  uVar15 = *(undefined4 *)(iVar2 + 0x74);
  uVar16 = *(undefined4 *)(iVar2 + 0x78);
  *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(iVar2 + 0x6c);
  *(undefined4 *)(iVar5 + 0x34) = uVar13;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x30) = uVar15;
  *(undefined4 *)(iVar5 + 0x34) = uVar16;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x30) = (int)uVar18;
  *(int *)(iVar5 + 0x34) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_ToWaterEd_001aa39c;
  local_38 = iVar9;
  func_0010BEC4((int)puVar4,7,&local_38);
  iVar5 = puVar4[6];
  uVar13 = *(undefined4 *)(iVar2 + 0x80);
  uVar15 = *(undefined4 *)(iVar2 + 0x84);
  uVar16 = *(undefined4 *)(iVar2 + 0x88);
  *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(iVar2 + 0x7c);
  *(undefined4 *)(iVar5 + 0x3c) = uVar13;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x38) = uVar15;
  *(undefined4 *)(iVar5 + 0x3c) = uVar16;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x38) = (int)uVar18;
  *(int *)(iVar5 + 0x3c) = (int)((ulonglong)uVar18 >> 0x20);
  local_34 = s_cState_Die_001aa3b0;
  local_38 = iVar9;
  func_0010BEC4((int)puVar4,8,&local_38);
  iVar5 = puVar4[6];
  uVar16 = *(undefined4 *)(iVar2 + 0x90);
  uVar13 = *(undefined4 *)(iVar2 + 0x94);
  uVar15 = *(undefined4 *)(iVar2 + 0x98);
  pfVar11 = (float *)(iVar5 + 0x40);
  *pfVar11 = *(float *)(iVar2 + 0x8c);
  *(undefined4 *)(iVar5 + 0x44) = uVar16;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x40) = uVar13;
  *(undefined4 *)(iVar5 + 0x44) = uVar15;
  iVar5 = puVar4[8];
  *(int *)(iVar5 + 0x40) = (int)uVar18;
  *(int *)(iVar5 + 0x44) = (int)((ulonglong)uVar18 >> 0x20);
  func_0065A984(puVar4,0);
  puVar4[-0x13a] = DAT_001aa3bc;
  func_004F5BD8((int)puVar12,(uint *)0x0,(int **)0x0,pfVar11);
  func_004F87F8((int)puVar12,4);
  *(undefined1 *)((int)puVar4 + -0x13f) = 8;
  *(undefined1 *)((int)puVar4 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar4 + -0x13d) = 0;
  func_002AF5FC((int)puVar12,7,-1);
  uVar10 = (ushort)DAT_001aa3c0;
  func_004FC218((int)puVar12,'\x06',-1,uVar10);
  func_004FBA18((int)puVar12,9,0xff,-1,0x14,0,uVar10,DAT_001aa3c8,DAT_001aa3c4);
  func_002AED68((int)puVar12,7);
  uVar13 = *(undefined4 *)(iVar2 + 0x9c);
  uVar15 = *(undefined4 *)(iVar2 + 0xa0);
  puVar4[0x1b] = puVar12;
  puVar4[0x1c] = uVar13;
  puVar4[0x1d] = uVar15;
  local_34 = &DAT_001aa3cc;
  local_38 = iVar9;
  uVar14 = func_00564A78(puVar4[-300],&local_38);
  puVar4[0x20] = uVar14;
  puVar8 = (uint *)(*(int *)(*(int *)(puVar4[-300] + 0x24) + 0xc) + uVar14 * 0x40);
  *puVar8 = *puVar8 | 0x10;
  *(undefined4 **)(puVar4[-300] + 0x16c) = puVar4 + 0x1e;
  return puVar12;
}

