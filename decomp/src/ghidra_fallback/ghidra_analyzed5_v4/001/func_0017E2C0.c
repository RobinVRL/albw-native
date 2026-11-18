#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004BFF4C(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_0060E480(int param_1,int param_2,undefined1 param_3);
extern int func_0060F068(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern undefined4 *DAT_0017e690;
extern int DAT_0017e694;
extern float DAT_0017e698;
extern int DAT_0017e69c;
extern int DAT_0017e6a0;
extern undefined DAT_0017e6a4;
extern int DAT_0017e6ac;
extern undefined4 DAT_0017e6b0;
extern undefined4 *DAT_0017e6b4;
extern undefined *DAT_0017e6b8;
extern int DAT_0017e6bc;
extern undefined4 *DAT_0017e7a0;
extern char s_cState_CheckPlayer_0017e704[];
extern char s_cState_EventEnd_0017e6e8[];
extern char s_cState_Event_0017e6d8[];
extern char s_cState_Hide_0017e6f8[];
extern char s_cState_Wait_0017e6c0[];
extern char s_cState_Walk_0017e6cc[];

// USA 0017E2C0 <- EU 0017E2C0 (Ghidra, non-matching)
// GLOBAL DAT_0017e690 undefined4 *
// GLOBAL DAT_0017e694 int
// GLOBAL DAT_0017e698 float
// GLOBAL DAT_0017e69c int
// GLOBAL DAT_0017e6a0 int
// GLOBAL DAT_0017e6a4 undefined
// GLOBAL DAT_0017e6ac int
// GLOBAL DAT_0017e6b0 undefined4
// GLOBAL DAT_0017e6b4 undefined4 *
// GLOBAL DAT_0017e6b8 undefined *
// GLOBAL DAT_0017e6bc int
// GLOBAL DAT_0017e7a0 undefined4 *
// GLOBAL s_cState_CheckPlayer_0017e704 string
// GLOBAL s_cState_EventEnd_0017e6e8 string
// GLOBAL s_cState_Event_0017e6d8 string
// GLOBAL s_cState_Hide_0017e6f8 string
// GLOBAL s_cState_Wait_0017e6c0 string
// GLOBAL s_cState_Walk_0017e6cc string

int * func_0017E2C0(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fparam_0;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  piVar3 = (int *)func_0060F068(param_1,param_2,0,0xff,DAT_0017e690);
  iVar12 = DAT_0017e694;
  piVar3[0x263] = 0;
  fparam_0 = DAT_0017e698;
  piVar3[200] = iVar12 + 0xb8;
  *piVar3 = iVar12;
  piVar3[0x264] = 0;
  iVar12 = DAT_0017e69c;
  piVar3[0x266] = (int)ALBW_AS_U32(fparam_0);
  piVar3[0x267] = (int)ALBW_AS_U32(fparam_0);
  piVar3[0x268] = (int)ALBW_AS_U32(fparam_0);
  piVar3[0x269] = iVar12;
  *(undefined2 *)(piVar3 + 0x26a) = 0;
  *(undefined2 *)((int)piVar3 + 0x9aa) = 0;
  *(undefined2 *)(piVar3 + 0x26b) = 0;
  *(undefined2 *)((int)piVar3 + 0x9ae) = 0;
  *(undefined1 *)(piVar3 + 0x26c) = 0;
  func_004BFF4C((int)piVar3,1,DAT_0017e6a0,1,fparam_0);
  iVar12 = DAT_0017e6ac;
  *(float *)(*(int *)(piVar3[0x1ed] + 0x14) + 0x10) = fparam_0;
  local_2c = &DAT_0017e6a4;
  local_30 = iVar12;
  func_004BE114(piVar3,5,0,0,DAT_0017e6b0);
  *(undefined1 *)((int)piVar3 + 0x966) = 7;
  piVar3[0x25d] = (int)piVar3;
  iVar4 = func_0010BA78(0x70);
  piVar3[0x25e] = iVar4;
  puVar2 = DAT_0017e6b4;
  piVar3[0x25f] = iVar4 + (uint)*(byte *)((int)piVar3 + 0x966) * 8;
  iVar7 = 7;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar11 = puVar2[0x1f];
    iVar7 = iVar7 + -1;
    puVar5[2] = puVar2[0x1e];
    puVar5[3] = uVar11;
    uVar11 = puVar2[0x1f];
    puVar5[4] = puVar2[0x1e];
    puVar5[5] = uVar11;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)piVar3 + 0x966);
  uVar10 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar10 << 3);
  piVar3[0x260] = (int)puVar5;
  if (uVar10 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = puVar2[5];
      *puVar5 = puVar2[4];
      puVar5[1] = uVar11;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar10 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar11 = puVar2[5];
      puVar6[2] = puVar2[4];
      puVar6[3] = uVar11;
      uVar11 = puVar2[5];
      puVar6[4] = puVar2[4];
      puVar6[5] = uVar11;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 7;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_0017e6b8,0x24,7);
  }
  if (iVar4 != 0) {
    piVar3[0x25a] = 7;
    piVar3[0x25b] = iVar4;
  }
  iVar4 = DAT_0017e6bc;
  piVar3[0xd5] = (int)(piVar3 + 600);
  *(undefined2 *)(iVar4 + (int)piVar3) = 7;
  local_2c = s_cState_Wait_0017e6c0;
  local_30 = iVar12;
  func_0010BEC4((int)(piVar3 + 600),0,&local_30);
  puVar5 = (undefined4 *)piVar3[0x25e];
  uVar8 = *puVar2;
  uVar11 = puVar2[2];
  uVar9 = puVar2[3];
  uVar15 = *(undefined8 *)(puVar2 + 4);
  puVar5[1] = puVar2[1];
  *puVar5 = uVar8;
  puVar5 = (undefined4 *)piVar3[0x25f];
  *puVar5 = uVar11;
  puVar5[1] = uVar9;
  puVar5 = (undefined4 *)piVar3[0x260];
  *puVar5 = (int)uVar15;
  puVar5[1] = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cState_Walk_0017e6cc;
  local_30 = iVar12;
  func_0010BEC4((int)(piVar3 + 600),1,&local_30);
  iVar4 = piVar3[0x25e];
  uVar8 = puVar2[7];
  uVar9 = puVar2[8];
  uVar11 = puVar2[9];
  *(undefined4 *)(iVar4 + 8) = puVar2[6];
  *(undefined4 *)(iVar4 + 0xc) = uVar8;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 8) = uVar9;
  *(undefined4 *)(iVar4 + 0xc) = uVar11;
  iVar4 = piVar3[0x260];
  *(int *)(iVar4 + 8) = (int)uVar15;
  *(int *)(iVar4 + 0xc) = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cState_Event_0017e6d8;
  local_30 = iVar12;
  func_0010BEC4((int)(piVar3 + 600),2,&local_30);
  iVar4 = piVar3[0x25e];
  uVar11 = puVar2[0xb];
  uVar8 = puVar2[0xc];
  uVar9 = puVar2[0xd];
  *(undefined4 *)(iVar4 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar4 + 0x14) = uVar11;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x10) = uVar8;
  *(undefined4 *)(iVar4 + 0x14) = uVar9;
  iVar4 = piVar3[0x260];
  *(int *)(iVar4 + 0x10) = (int)uVar15;
  *(int *)(iVar4 + 0x14) = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cState_EventEnd_0017e6e8;
  local_30 = iVar12;
  func_0010BEC4((int)(piVar3 + 600),6,&local_30);
  iVar4 = piVar3[0x25e];
  uVar11 = puVar2[0xf];
  uVar8 = puVar2[0x10];
  uVar9 = puVar2[0x11];
  uVar13 = puVar2[0x12];
  uVar14 = puVar2[0x13];
  *(undefined4 *)(iVar4 + 0x30) = puVar2[0xe];
  *(undefined4 *)(iVar4 + 0x34) = uVar11;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x30) = uVar8;
  *(undefined4 *)(iVar4 + 0x34) = uVar9;
  iVar4 = piVar3[0x260];
  *(undefined4 *)(iVar4 + 0x30) = uVar13;
  *(undefined4 *)(iVar4 + 0x34) = uVar14;
  local_2c = s_cState_Hide_0017e6f8;
  local_30 = iVar12;
  func_0010BEC4((int)(piVar3 + 600),4,&local_30);
  iVar4 = piVar3[0x25e];
  uVar11 = puVar2[0x15];
  uVar8 = puVar2[0x16];
  uVar9 = puVar2[0x17];
  uVar13 = puVar2[0x18];
  uVar14 = puVar2[0x19];
  *(undefined4 *)(iVar4 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar4 + 0x24) = uVar11;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x20) = uVar8;
  *(undefined4 *)(iVar4 + 0x24) = uVar9;
  iVar4 = piVar3[0x260];
  *(undefined4 *)(iVar4 + 0x20) = uVar13;
  *(undefined4 *)(iVar4 + 0x24) = uVar14;
  local_2c = s_cState_CheckPlayer_0017e704;
  local_30 = iVar12;
  func_0010BEC4((int)(piVar3 + 600),5,&local_30);
  iVar4 = piVar3[0x25e];
  uVar9 = puVar2[0x1b];
  uVar11 = puVar2[0x1c];
  uVar8 = puVar2[0x1d];
  uVar15 = *(undefined8 *)(puVar2 + 4);
  *(undefined4 *)(iVar4 + 0x28) = puVar2[0x1a];
  *(undefined4 *)(iVar4 + 0x2c) = uVar9;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x28) = uVar11;
  *(undefined4 *)(iVar4 + 0x2c) = uVar8;
  iVar4 = piVar3[0x260];
  *(int *)(iVar4 + 0x28) = (int)uVar15;
  *(int *)(iVar4 + 0x2c) = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cState_EventEnd_0017e6e8;
  local_30 = iVar12;
  func_0010BEC4((int)(piVar3 + 600),6,&local_30);
  iVar12 = piVar3[0x25e];
  uVar11 = puVar2[0xf];
  uVar8 = puVar2[0x10];
  uVar9 = puVar2[0x11];
  *(undefined4 *)(iVar12 + 0x30) = puVar2[0xe];
  *(undefined4 *)(iVar12 + 0x34) = uVar11;
  iVar12 = piVar3[0x25f];
  *(undefined4 *)(iVar12 + 0x30) = uVar8;
  *(undefined4 *)(iVar12 + 0x34) = uVar9;
  iVar12 = piVar3[0x260];
  *(int *)(iVar12 + 0x30) = (int)uVar15;
  *(int *)(iVar12 + 0x34) = (int)((ulonglong)uVar15 >> 0x20);
  func_0060E480((int)piVar3,5,0);
  puVar2 = DAT_0017e7a0;
  piVar3[0x261] = 6;
  func_004C03B8((int)piVar3,puVar2);
  func_004BC8D8((int)piVar3);
  piVar3[0x22b] = piVar3[0x22b] & 0xfffffff7U | 0x40;
  return piVar3;
}

