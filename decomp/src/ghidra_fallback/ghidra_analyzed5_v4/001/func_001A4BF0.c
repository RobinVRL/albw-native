#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FC78C(int param_1,undefined2 param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_0058A468(int param_1);
extern int func_0065A5B8(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_001a4fc8;
extern int DAT_001a4fcc;
extern int DAT_001a4fd0;
extern undefined4 DAT_001a4fd4;
extern undefined4 DAT_001a4fd8;
extern int DAT_001a4fdc;
extern undefined *DAT_001a4fe0;
extern int DAT_001a4ff0;
extern undefined4 *DAT_001a53d4;
extern float DAT_001a53d8;
extern undefined4 DAT_001a53dc;
extern float DAT_001a53e0;
extern double DAT_001a53e8;
extern undefined4 DAT_001a53f0;
extern float DAT_001a53f4;
extern float DAT_001a53f8;
extern float DAT_001a543c;
extern char s_cState_Die_001a53c8[];
extern char s_cState_Hide_001a4fe4[];
extern char s_cState_Reaction_001a53b8[];
extern char s_cState_Run_001a501c[];
extern char s_cState_SlipEd_001a53a8[];
extern char s_cState_SlipMd_001a5038[];
extern char s_cState_SlipSt_001a5028[];
extern char s_cState_Switch_001a4ff4[];
extern char s_cState_Wait_001a5004[];
extern char s_cState_Walk_001a5010[];

// USA 001A4BF0 <- EU 001A4BF0 (Ghidra, non-matching)
// GLOBAL DAT_001a4fc8 uint *
// GLOBAL DAT_001a4fcc int
// GLOBAL DAT_001a4fd0 int
// GLOBAL DAT_001a4fd4 undefined4
// GLOBAL DAT_001a4fd8 undefined4
// GLOBAL DAT_001a4fdc int
// GLOBAL DAT_001a4fe0 undefined *
// GLOBAL DAT_001a4ff0 int
// GLOBAL DAT_001a53d4 undefined4 *
// GLOBAL DAT_001a53d8 float
// GLOBAL DAT_001a53dc undefined4
// GLOBAL DAT_001a53e0 float
// GLOBAL DAT_001a53e8 double
// GLOBAL DAT_001a53f0 undefined4
// GLOBAL DAT_001a53f4 float
// GLOBAL DAT_001a53f8 float
// GLOBAL DAT_001a543c float
// GLOBAL s_cState_Die_001a53c8 string
// GLOBAL s_cState_Hide_001a4fe4 string
// GLOBAL s_cState_Reaction_001a53b8 string
// GLOBAL s_cState_Run_001a501c string
// GLOBAL s_cState_SlipEd_001a53a8 string
// GLOBAL s_cState_SlipMd_001a5038 string
// GLOBAL s_cState_SlipSt_001a5028 string
// GLOBAL s_cState_Switch_001a4ff4 string
// GLOBAL s_cState_Wait_001a5004 string
// GLOBAL s_cState_Walk_001a5010 string

undefined4 * func_001A4BF0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  ushort uVar14;
  float *pfVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint in_fpscr;
  double dVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar5 = func_004FD464(param_1,param_2,DAT_001a4fc8);
  iVar10 = DAT_001a4fcc;
  *piVar5 = DAT_001a4fcc;
  piVar5[200] = iVar10 + 0x84;
  puVar6 = func_0010A794(piVar5 + 0x22f);
  puVar6[5] = 0;
  puVar6[6] = 0;
  uVar11 = DAT_001a4fd4;
  puVar6[7] = 0;
  puVar6[8] = 0;
  uVar13 = DAT_001a4fd8;
  puVar6[9] = uVar11;
  iVar10 = DAT_001a4fd0;
  puVar6[0xd] = uVar13;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  *(undefined1 *)(puVar6 + 0x10) = 0;
  *(undefined1 *)((int)puVar6 + 0x41) = 0;
  *(undefined1 *)((int)puVar6 + 0x42) = 0;
  *(undefined1 *)((int)puVar6 + 0x43) = 0;
  uVar11 = *(undefined4 *)(iVar10 + 0xc);
  uVar13 = *(undefined4 *)(iVar10 + 0x10);
  puVar16 = puVar6 + -0x22f;
  puVar6[10] = puVar16;
  puVar6[0xb] = uVar11;
  puVar6[0xc] = uVar13;
  puVar6[-0x134] = puVar6 + 9;
  func_004FB344((int)puVar16,0xe);
  iVar7 = DAT_001a4fdc;
  uVar17 = 0;
  do {
    func_004FACA4((int)puVar16,uVar17,(int *)(iVar7 + uVar17 * 8));
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0xe);
  func_004FB468((int)puVar16);
  puVar6[5] = puVar16;
  *(undefined1 *)((int)puVar6 + 6) = 10;
  iVar7 = func_0010BA78(0xa0);
  puVar6[6] = iVar7;
  puVar6[7] = iVar7 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar12 = 10;
  puVar8 = (undefined4 *)(iVar7 + -8);
  do {
    uVar11 = *(undefined4 *)(iVar10 + 0xd0);
    iVar12 = iVar12 + -1;
    puVar8[2] = *(undefined4 *)(iVar10 + 0xcc);
    puVar8[3] = uVar11;
    uVar11 = *(undefined4 *)(iVar10 + 0xd0);
    puVar8[4] = *(undefined4 *)(iVar10 + 0xcc);
    puVar8[5] = uVar11;
    puVar8 = puVar8 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar17 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar17 << 3);
  puVar6[8] = puVar8;
  if (uVar17 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = *(undefined4 *)(iVar10 + 0x58);
      *puVar8 = *(undefined4 *)(iVar10 + 0x54);
      puVar8[1] = uVar11;
      puVar9 = puVar8;
    }
    for (iVar7 = (int)uVar17 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar11 = *(undefined4 *)(iVar10 + 0x58);
      puVar9[2] = *(undefined4 *)(iVar10 + 0x54);
      puVar9[3] = uVar11;
      uVar11 = *(undefined4 *)(iVar10 + 0x58);
      puVar9[4] = *(undefined4 *)(iVar10 + 0x54);
      puVar9[5] = uVar11;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x170,(int *)0x0,4);
  iVar7 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 10;
    iVar7 = func_00100118((int)(puVar8 + 2),DAT_001a4fe0,0x24,10);
  }
  if (iVar7 != 0) {
    puVar6[3] = iVar7;
    puVar6[2] = 10;
  }
  puVar6[-0x15a] = puVar6;
  *(undefined2 *)((int)puVar6 + -0x562) = 10;
  iVar7 = DAT_001a4ff0;
  local_34 = s_cState_Hide_001a4fe4;
  local_38 = DAT_001a4ff0;
  func_0010BEC4((int)puVar6,0,&local_38);
  puVar8 = (undefined4 *)puVar6[6];
  uVar20 = *(undefined8 *)(iVar10 + 0x14);
  uVar3 = *(undefined8 *)(iVar10 + 0x1c);
  uVar11 = *(undefined4 *)(iVar10 + 0x24);
  uVar13 = *(undefined4 *)(iVar10 + 0x28);
  *puVar8 = (int)uVar20;
  puVar8[1] = (int)((ulonglong)uVar20 >> 0x20);
  puVar8 = (undefined4 *)puVar6[7];
  *puVar8 = (int)uVar3;
  puVar8[1] = (int)((ulonglong)uVar3 >> 0x20);
  puVar8 = (undefined4 *)puVar6[8];
  *puVar8 = uVar11;
  puVar8[1] = uVar13;
  local_34 = s_cState_Switch_001a4ff4;
  local_38 = iVar7;
  func_0010BEC4((int)puVar6,1,&local_38);
  iVar12 = puVar6[6];
  uVar11 = *(undefined4 *)(iVar10 + 0x34);
  uVar13 = *(undefined4 *)(iVar10 + 0x38);
  uVar19 = *(undefined4 *)(iVar10 + 0x30);
  uVar20 = *(undefined8 *)(iVar10 + 0x3c);
  *(undefined4 *)(iVar12 + 8) = *(undefined4 *)(iVar10 + 0x2c);
  *(undefined4 *)(iVar12 + 0xc) = uVar19;
  iVar12 = puVar6[7];
  *(undefined4 *)(iVar12 + 8) = uVar11;
  *(undefined4 *)(iVar12 + 0xc) = uVar13;
  iVar12 = puVar6[8];
  *(int *)(iVar12 + 8) = (int)uVar20;
  *(int *)(iVar12 + 0xc) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_Wait_001a5004;
  local_38 = iVar7;
  func_0010BEC4((int)puVar6,2,&local_38);
  iVar12 = puVar6[6];
  uVar11 = *(undefined4 *)(iVar10 + 0x48);
  uVar13 = *(undefined4 *)(iVar10 + 0x4c);
  uVar19 = *(undefined4 *)(iVar10 + 0x50);
  uVar20 = *(undefined8 *)(iVar10 + 0x54);
  *(undefined4 *)(iVar12 + 0x10) = *(undefined4 *)(iVar10 + 0x44);
  *(undefined4 *)(iVar12 + 0x14) = uVar11;
  iVar12 = puVar6[7];
  *(undefined4 *)(iVar12 + 0x10) = uVar13;
  *(undefined4 *)(iVar12 + 0x14) = uVar19;
  iVar12 = puVar6[8];
  *(int *)(iVar12 + 0x10) = (int)uVar20;
  *(int *)(iVar12 + 0x14) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_Walk_001a5010;
  local_38 = iVar7;
  func_0010BEC4((int)puVar6,3,&local_38);
  iVar12 = puVar6[6];
  uVar11 = *(undefined4 *)(iVar10 + 0x60);
  uVar13 = *(undefined4 *)(iVar10 + 100);
  uVar19 = *(undefined4 *)(iVar10 + 0x68);
  *(undefined4 *)(iVar12 + 0x18) = *(undefined4 *)(iVar10 + 0x5c);
  *(undefined4 *)(iVar12 + 0x1c) = uVar11;
  iVar12 = puVar6[7];
  *(undefined4 *)(iVar12 + 0x18) = uVar13;
  *(undefined4 *)(iVar12 + 0x1c) = uVar19;
  iVar12 = puVar6[8];
  *(int *)(iVar12 + 0x18) = (int)uVar20;
  *(int *)(iVar12 + 0x1c) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_Run_001a501c;
  local_38 = iVar7;
  func_0010BEC4((int)puVar6,4,&local_38);
  iVar12 = puVar6[6];
  uVar11 = *(undefined4 *)(iVar10 + 0x70);
  pfVar15 = *(float **)(iVar10 + 0x74);
  uVar13 = *(undefined4 *)(iVar10 + 0x78);
  *(undefined4 *)(iVar12 + 0x20) = *(undefined4 *)(iVar10 + 0x6c);
  *(undefined4 *)(iVar12 + 0x24) = uVar11;
  iVar12 = puVar6[7];
  *(float **)(iVar12 + 0x20) = pfVar15;
  *(undefined4 *)(iVar12 + 0x24) = uVar13;
  iVar12 = puVar6[8];
  *(int *)(iVar12 + 0x20) = (int)uVar20;
  *(int *)(iVar12 + 0x24) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_SlipSt_001a5028;
  local_38 = iVar7;
  func_0010BEC4((int)puVar6,5,&local_38);
  iVar12 = puVar6[6];
  uVar3 = *(undefined8 *)(iVar10 + 0x7c);
  uVar4 = *(undefined8 *)(iVar10 + 0x84);
  *(int *)(iVar12 + 0x28) = (int)uVar3;
  *(int *)(iVar12 + 0x2c) = (int)((ulonglong)uVar3 >> 0x20);
  iVar12 = puVar6[7];
  *(int *)(iVar12 + 0x28) = (int)uVar4;
  *(int *)(iVar12 + 0x2c) = (int)((ulonglong)uVar4 >> 0x20);
  iVar12 = puVar6[8];
  *(int *)(iVar12 + 0x28) = (int)uVar20;
  *(int *)(iVar12 + 0x2c) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_SlipMd_001a5038;
  local_38 = iVar7;
  func_0010BEC4((int)puVar6,6,&local_38);
  iVar12 = puVar6[6];
  uVar3 = *(undefined8 *)(iVar10 + 0x8c);
  uVar4 = *(undefined8 *)(iVar10 + 0x94);
  *(int *)(iVar12 + 0x30) = (int)uVar3;
  *(int *)(iVar12 + 0x34) = (int)((ulonglong)uVar3 >> 0x20);
  iVar12 = puVar6[7];
  *(int *)(iVar12 + 0x30) = (int)uVar4;
  *(int *)(iVar12 + 0x34) = (int)((ulonglong)uVar4 >> 0x20);
  iVar12 = puVar6[8];
  *(int *)(iVar12 + 0x30) = (int)uVar20;
  *(int *)(iVar12 + 0x34) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_SlipEd_001a53a8;
  local_38 = iVar7;
  func_0010BEC4((int)puVar6,7,&local_38);
  iVar12 = puVar6[6];
  uVar3 = *(undefined8 *)(iVar10 + 0x9c);
  uVar4 = *(undefined8 *)(iVar10 + 0xa4);
  *(int *)(iVar12 + 0x38) = (int)uVar3;
  *(int *)(iVar12 + 0x3c) = (int)((ulonglong)uVar3 >> 0x20);
  iVar12 = puVar6[7];
  *(int *)(iVar12 + 0x38) = (int)uVar4;
  *(int *)(iVar12 + 0x3c) = (int)((ulonglong)uVar4 >> 0x20);
  iVar12 = puVar6[8];
  *(int *)(iVar12 + 0x38) = (int)uVar20;
  *(int *)(iVar12 + 0x3c) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_Reaction_001a53b8;
  local_38 = iVar7;
  func_0010BEC4((int)puVar6,8,&local_38);
  iVar12 = puVar6[6];
  uVar3 = *(undefined8 *)(iVar10 + 0xac);
  uVar13 = *(undefined4 *)(iVar10 + 0xb4);
  uVar11 = *(undefined4 *)(iVar10 + 0xb8);
  *(int *)(iVar12 + 0x40) = (int)uVar3;
  *(int *)(iVar12 + 0x44) = (int)((ulonglong)uVar3 >> 0x20);
  iVar12 = puVar6[7];
  *(undefined4 *)(iVar12 + 0x40) = uVar13;
  *(undefined4 *)(iVar12 + 0x44) = uVar11;
  iVar12 = puVar6[8];
  *(int *)(iVar12 + 0x40) = (int)uVar20;
  *(int *)(iVar12 + 0x44) = (int)((ulonglong)uVar20 >> 0x20);
  local_34 = s_cState_Die_001a53c8;
  local_38 = iVar7;
  func_0010BEC4((int)puVar6,9,&local_38);
  iVar7 = puVar6[6];
  uVar11 = *(undefined4 *)(iVar10 + 0xc0);
  uVar13 = *(undefined4 *)(iVar10 + 0xc4);
  uVar19 = *(undefined4 *)(iVar10 + 200);
  *(undefined4 *)(iVar7 + 0x48) = *(undefined4 *)(iVar10 + 0xbc);
  *(undefined4 *)(iVar7 + 0x4c) = uVar11;
  iVar10 = puVar6[7];
  *(undefined4 *)(iVar10 + 0x48) = uVar13;
  *(undefined4 *)(iVar10 + 0x4c) = uVar19;
  iVar10 = puVar6[8];
  *(int *)(iVar10 + 0x48) = (int)uVar20;
  *(int *)(iVar10 + 0x4c) = (int)((ulonglong)uVar20 >> 0x20);
  if (*(short *)((int)puVar6 + -0x886) == 0) {
    sVar2 = *(short *)((int)param_2 + 0x2a);
    if (sVar2 == 1) {
      puVar6[-0x135] = 0xc0000000;
      func_0065A5B8(puVar6,5);
    }
    else if (sVar2 == 2) {
      puVar6[-0x135] = 0x40000000;
      func_0065A5B8(puVar6,5);
    }
    else if (sVar2 == 3) {
      puVar6[-0x135] = 0x80000000;
      func_0065A5B8(puVar6,5);
    }
    else if (sVar2 == 4) {
      puVar6[-0x135] = 0;
      func_0065A5B8(puVar6,5);
    }
    else {
      func_0065A5B8(puVar6,2);
    }
  }
  else if (*(short *)((int)param_2 + 0x2e) == 0) {
    func_0065A5B8(puVar6,1);
  }
  else {
    *(undefined1 *)((int)puVar6 + 0x42) = 1;
    func_0065A5B8(puVar6,0);
  }
  func_004F8864((int)puVar16,DAT_001a53d4,0,DAT_001a53d8);
  uVar11 = DAT_001a53dc;
  puVar8 = DAT_001a53d4;
  if ((short)param_2[0xb] == 1) {
    puVar6[-0xf6] = DAT_001a53dc;
    puVar6[-0xf5] = uVar11;
    puVar6[-0xf4] = uVar11;
    puVar6[-0x119] = uVar11;
    puVar6[-0x118] = uVar11;
    puVar6[-0x117] = uVar11;
    puVar6[-0x113] = uVar11;
    puVar6[-0x112] = uVar11;
    puVar6[-0x111] = uVar11;
    func_004F8864((int)puVar16,puVar8,0,DAT_001a53e0);
    iVar10 = func_0058A468((int)puVar16);
    dVar18 = (double)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
    uVar11 = VectorFloatToSigned(dVar18 * DAT_001a53e8,3);
    func_004FC78C((int)puVar16,(short)uVar11);
    *(undefined1 *)((int)puVar6 + 0x41) = 1;
  }
  func_004F5BD8((int)puVar16,(uint *)0x0,(int **)0x0,pfVar15);
  uVar11 = DAT_001a53f0;
  puVar6[-200] = puVar6[-200] | 0x8000;
  uVar14 = (ushort)uVar11;
  if (*(char *)((int)puVar6 + 0x41) == '\x01') {
    func_004FC218((int)puVar16,'\x04',-1,uVar14);
  }
  else {
    func_004FC218((int)puVar16,'\x03',-1,uVar14);
  }
  if (*(char *)((int)puVar6 + 0x41) == '\x01') {
    func_004FBA18((int)puVar16,1,2,-1,0x14,0,uVar14,DAT_001a543c,DAT_001a53f4);
  }
  else {
    func_004FBA18((int)puVar16,1,2,-1,0x14,0,uVar14,DAT_001a53f8,DAT_001a53f4);
  }
  func_002AF5FC((int)puVar16,0xc,-1);
  func_002AED68((int)puVar16,0xc);
  *(undefined1 *)((int)puVar6 + -0x13f) = 0xd;
  *(undefined1 *)((int)puVar6 + -0x13e) = 0xff;
  *(undefined1 *)((int)puVar6 + -0x13d) = 0;
  return puVar16;
}

