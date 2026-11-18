#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004BFF4C(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004C17C0(int param_1);
extern int func_0060C57C(int param_1,int param_2,undefined1 param_3);
extern int func_0060D1E8(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern undefined4 *DAT_0013c2f0;
extern int DAT_0013c2f4;
extern float DAT_0013c2f8;
extern float DAT_0013c2fc;
extern int DAT_0013c300;
extern undefined DAT_0013c304;
extern int DAT_0013c30c;
extern undefined4 DAT_0013c310;
extern undefined4 *DAT_0013c314;
extern undefined *DAT_0013c318;
extern int DAT_0013c31c;
extern undefined4 *DAT_0013c4e8;
extern char s_cState_Clean_0013c4d8[];
extern char s_cState_CutTurn_0013c370[];
extern char s_cState_CutWait_0013c4c8[];
extern char s_cState_Cut_0013c364[];
extern char s_cState_EventEnd_0013c348[];
extern char s_cState_Event_0013c338[];
extern char s_cState_Hide_0013c358[];
extern char s_cState_Wait_0013c320[];
extern char s_cState_Walk_0013c32c[];

// USA 0013BF0C <- EU 0013BF0C (Ghidra, non-matching)
// GLOBAL DAT_0013c2f0 undefined4 *
// GLOBAL DAT_0013c2f4 int
// GLOBAL DAT_0013c2f8 float
// GLOBAL DAT_0013c2fc float
// GLOBAL DAT_0013c300 int
// GLOBAL DAT_0013c304 undefined
// GLOBAL DAT_0013c30c int
// GLOBAL DAT_0013c310 undefined4
// GLOBAL DAT_0013c314 undefined4 *
// GLOBAL DAT_0013c318 undefined *
// GLOBAL DAT_0013c31c int
// GLOBAL DAT_0013c4e8 undefined4 *
// GLOBAL s_cState_Clean_0013c4d8 string
// GLOBAL s_cState_CutTurn_0013c370 string
// GLOBAL s_cState_CutWait_0013c4c8 string
// GLOBAL s_cState_Cut_0013c364 string
// GLOBAL s_cState_EventEnd_0013c348 string
// GLOBAL s_cState_Event_0013c338 string
// GLOBAL s_cState_Hide_0013c358 string
// GLOBAL s_cState_Wait_0013c320 string
// GLOBAL s_cState_Walk_0013c32c string

int * func_0013BF0C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  float fparam_0;
  undefined4 uVar15;
  undefined4 uVar17;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar5 = (int *)func_0060D1E8(param_1,param_2,0,0xff,DAT_0013c2f0);
  iVar14 = DAT_0013c2f4;
  piVar5[200] = DAT_0013c2f4 + 0xb8;
  *piVar5 = iVar14;
  *(undefined1 *)((int)piVar5 + 0x989) = 0;
  fparam_0 = DAT_0013c2f8;
  piVar5[0x263] = 0;
  piVar5[0x264] = 0;
  piVar5[0x265] = (int)ALBW_AS_U32(fparam_0);
  piVar5[0x266] = 0;
  iVar14 = DAT_0013c300;
  uVar3 = *(ushort *)((int)param_2 + 0x2a);
  *(char *)((int)piVar5 + 0x989) = (char)uVar3;
  if ((uVar3 & 0xff) != 3) {
    fparam_0 = DAT_0013c2fc;
  }
  func_004BFF4C((int)piVar5,1,iVar14,0,fparam_0);
  iVar14 = DAT_0013c30c;
  local_34 = &DAT_0013c304;
  local_38 = DAT_0013c30c;
  func_004BE114(piVar5,7,0,0,DAT_0013c310);
  piVar5[0x25d] = (int)piVar5;
  *(undefined1 *)((int)piVar5 + 0x966) = 9;
  iVar6 = func_0010BA78(0x90);
  puVar4 = DAT_0013c314;
  piVar5[0x25e] = iVar6;
  piVar5[0x25f] = iVar6 + (uint)*(byte *)((int)piVar5 + 0x966) * 8;
  iVar9 = 9;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar12 = puVar4[0x2b];
    iVar9 = iVar9 + -1;
    puVar7[2] = puVar4[0x2a];
    puVar7[3] = uVar12;
    uVar12 = puVar4[0x2b];
    puVar7[4] = puVar4[0x2a];
    puVar7[5] = uVar12;
    puVar7 = puVar7 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)piVar5 + 0x966);
  uVar11 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar11 << 3);
  piVar5[0x260] = (int)puVar7;
  if (uVar11 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = puVar4[5];
      *puVar7 = puVar4[4];
      puVar7[1] = uVar12;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar11 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar12 = puVar4[5];
      puVar8[2] = puVar4[4];
      puVar8[3] = uVar12;
      uVar12 = puVar4[5];
      puVar8[4] = puVar4[4];
      puVar8[5] = uVar12;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 9;
    iVar6 = func_00100118((int)(puVar7 + 2),DAT_0013c318,0x24,9);
  }
  if (iVar6 != 0) {
    piVar5[0x25a] = 9;
    piVar5[0x25b] = iVar6;
  }
  iVar6 = DAT_0013c31c;
  piVar5[0xd5] = (int)(piVar5 + 600);
  *(undefined2 *)(iVar6 + (int)piVar5) = 9;
  local_34 = s_cState_Wait_0013c320;
  local_38 = iVar14;
  func_0010BEC4((int)(piVar5 + 600),0,&local_38);
  puVar7 = (undefined4 *)piVar5[0x25e];
  uVar10 = puVar4[1];
  uVar12 = puVar4[2];
  uVar13 = puVar4[3];
  uVar17 = puVar4[4];
  uVar15 = puVar4[5];
  *puVar7 = *puVar4;
  puVar7[1] = uVar10;
  puVar7 = (undefined4 *)piVar5[0x25f];
  *puVar7 = uVar12;
  puVar7[1] = uVar13;
  puVar7 = (undefined4 *)piVar5[0x260];
  *puVar7 = uVar17;
  puVar7[1] = uVar15;
  local_34 = s_cState_Walk_0013c32c;
  local_38 = iVar14;
  func_0010BEC4((int)(piVar5 + 600),1,&local_38);
  iVar6 = piVar5[0x25e];
  uVar12 = puVar4[8];
  uVar13 = puVar4[9];
  uVar10 = puVar4[7];
  *(undefined4 *)(iVar6 + 8) = puVar4[6];
  *(undefined4 *)(iVar6 + 0xc) = uVar10;
  iVar6 = piVar5[0x25f];
  *(undefined4 *)(iVar6 + 8) = uVar12;
  *(undefined4 *)(iVar6 + 0xc) = uVar13;
  iVar6 = piVar5[0x260];
  *(undefined4 *)(iVar6 + 8) = uVar17;
  *(undefined4 *)(iVar6 + 0xc) = uVar15;
  local_34 = s_cState_Event_0013c338;
  local_38 = iVar14;
  func_0010BEC4((int)(piVar5 + 600),2,&local_38);
  iVar6 = piVar5[0x25e];
  uVar10 = puVar4[0xb];
  uVar12 = puVar4[0xc];
  uVar13 = puVar4[0xd];
  *(undefined4 *)(iVar6 + 0x10) = puVar4[10];
  *(undefined4 *)(iVar6 + 0x14) = uVar10;
  iVar6 = piVar5[0x25f];
  *(undefined4 *)(iVar6 + 0x10) = uVar12;
  *(undefined4 *)(iVar6 + 0x14) = uVar13;
  iVar6 = piVar5[0x260];
  *(undefined4 *)(iVar6 + 0x10) = uVar17;
  *(undefined4 *)(iVar6 + 0x14) = uVar15;
  local_34 = s_cState_EventEnd_0013c348;
  local_38 = iVar14;
  func_0010BEC4((int)(piVar5 + 600),3,&local_38);
  iVar6 = piVar5[0x25e];
  uVar10 = puVar4[0xf];
  uVar13 = puVar4[0x10];
  uVar17 = puVar4[0x11];
  uVar12 = puVar4[0x12];
  uVar15 = puVar4[0x13];
  *(undefined4 *)(iVar6 + 0x18) = puVar4[0xe];
  *(undefined4 *)(iVar6 + 0x1c) = uVar10;
  iVar6 = piVar5[0x25f];
  *(undefined4 *)(iVar6 + 0x18) = uVar13;
  *(undefined4 *)(iVar6 + 0x1c) = uVar17;
  iVar6 = piVar5[0x260];
  *(undefined4 *)(iVar6 + 0x18) = uVar12;
  *(undefined4 *)(iVar6 + 0x1c) = uVar15;
  local_34 = s_cState_Hide_0013c358;
  local_38 = iVar14;
  func_0010BEC4((int)(piVar5 + 600),4,&local_38);
  iVar6 = piVar5[0x25e];
  uVar12 = puVar4[0x15];
  uVar10 = puVar4[0x16];
  uVar13 = puVar4[0x17];
  uVar15 = puVar4[0x18];
  uVar17 = puVar4[0x19];
  *(undefined4 *)(iVar6 + 0x20) = puVar4[0x14];
  *(undefined4 *)(iVar6 + 0x24) = uVar12;
  iVar6 = piVar5[0x25f];
  *(undefined4 *)(iVar6 + 0x20) = uVar10;
  *(undefined4 *)(iVar6 + 0x24) = uVar13;
  iVar6 = piVar5[0x260];
  *(undefined4 *)(iVar6 + 0x20) = uVar15;
  *(undefined4 *)(iVar6 + 0x24) = uVar17;
  local_34 = s_cState_Cut_0013c364;
  local_38 = iVar14;
  func_0010BEC4((int)(piVar5 + 600),5,&local_38);
  iVar6 = piVar5[0x25e];
  uVar12 = puVar4[0x1c];
  uVar10 = puVar4[0x1d];
  uVar13 = puVar4[0x1b];
  uVar16 = *(undefined8 *)(puVar4 + 4);
  *(undefined4 *)(iVar6 + 0x28) = puVar4[0x1a];
  *(undefined4 *)(iVar6 + 0x2c) = uVar13;
  iVar6 = piVar5[0x25f];
  *(undefined4 *)(iVar6 + 0x28) = uVar12;
  *(undefined4 *)(iVar6 + 0x2c) = uVar10;
  iVar6 = piVar5[0x260];
  *(int *)(iVar6 + 0x28) = (int)uVar16;
  *(int *)(iVar6 + 0x2c) = (int)((ulonglong)uVar16 >> 0x20);
  local_34 = s_cState_CutTurn_0013c370;
  local_38 = iVar14;
  func_0010BEC4((int)(piVar5 + 600),6,&local_38);
  uVar12 = puVar4[0x20];
  uVar13 = puVar4[0x21];
  uVar10 = puVar4[0x1f];
  iVar6 = piVar5[0x25e];
  *(undefined4 *)(iVar6 + 0x30) = puVar4[0x1e];
  *(undefined4 *)(iVar6 + 0x34) = uVar10;
  iVar6 = piVar5[0x25f];
  *(undefined4 *)(iVar6 + 0x30) = uVar12;
  *(undefined4 *)(iVar6 + 0x34) = uVar13;
  iVar6 = piVar5[0x260];
  *(int *)(iVar6 + 0x30) = (int)uVar16;
  *(int *)(iVar6 + 0x34) = (int)((ulonglong)uVar16 >> 0x20);
  local_34 = s_cState_CutWait_0013c4c8;
  local_38 = iVar14;
  func_0010BEC4((int)(piVar5 + 600),7,&local_38);
  iVar6 = piVar5[0x25e];
  uVar12 = puVar4[0x23];
  uVar10 = puVar4[0x24];
  uVar13 = puVar4[0x25];
  *(undefined4 *)(iVar6 + 0x38) = puVar4[0x22];
  *(undefined4 *)(iVar6 + 0x3c) = uVar12;
  iVar6 = piVar5[0x25f];
  *(undefined4 *)(iVar6 + 0x38) = uVar10;
  *(undefined4 *)(iVar6 + 0x3c) = uVar13;
  iVar6 = piVar5[0x260];
  *(int *)(iVar6 + 0x38) = (int)uVar16;
  *(int *)(iVar6 + 0x3c) = (int)((ulonglong)uVar16 >> 0x20);
  local_34 = s_cState_Clean_0013c4d8;
  local_38 = iVar14;
  func_0010BEC4((int)(piVar5 + 600),8,&local_38);
  uVar12 = puVar4[0x28];
  uVar10 = puVar4[0x29];
  iVar14 = piVar5[0x25e];
  uVar13 = puVar4[0x27];
  *(undefined4 *)(iVar14 + 0x40) = puVar4[0x26];
  *(undefined4 *)(iVar14 + 0x44) = uVar13;
  iVar14 = piVar5[0x25f];
  *(undefined4 *)(iVar14 + 0x40) = uVar12;
  *(undefined4 *)(iVar14 + 0x44) = uVar10;
  iVar14 = piVar5[0x260];
  *(int *)(iVar14 + 0x40) = (int)uVar16;
  *(int *)(iVar14 + 0x44) = (int)((ulonglong)uVar16 >> 0x20);
  cVar2 = *(char *)((int)piVar5 + 0x989);
  iVar14 = 0;
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      iVar14 = 5;
    }
    else if (cVar2 == '\x02') {
      iVar14 = 6;
    }
    else if (cVar2 == '\x03') {
      iVar14 = 8;
    }
    else {
      iVar14 = piVar5[0x261];
    }
  }
  func_0060C57C((int)piVar5,iVar14,0);
  func_004C03B8((int)piVar5,DAT_0013c4e8);
  func_004BC8D8((int)piVar5);
  piVar5[0x22b] = piVar5[0x22b] | 0x20;
  if ((short)param_2[0xb] == 1) {
    piVar5[0xb8] = piVar5[0xb8] | 2;
  }
  func_004C17C0((int)piVar5);
  return piVar5;
}

