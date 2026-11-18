#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001692F8(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004BFF4C(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_004C00F4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_0061202C(int param_1,int param_2,undefined1 param_3);
extern int func_00612CB0(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern undefined4 *DAT_00186004;
extern int DAT_00186008;
extern float DAT_0018600c;
extern int DAT_00186010;
extern undefined DAT_00186014;
extern int DAT_00186030;
extern undefined4 DAT_00186034;
extern undefined4 *DAT_00186038;
extern undefined *DAT_0018603c;
extern int DAT_00186040;
extern undefined4 *DAT_00186088;
extern char s_cState_EventEnd_0018606c[];
extern char s_cState_Event_0018605c[];
extern char s_cState_Hide_0018607c[];
extern char s_cState_Wait_00186044[];
extern char s_cState_Walk_00186050[];

// USA 00185C54 <- EU 00185C54 (Ghidra, non-matching)
// GLOBAL DAT_00186004 undefined4 *
// GLOBAL DAT_00186008 int
// GLOBAL DAT_0018600c float
// GLOBAL DAT_00186010 int
// GLOBAL DAT_00186014 undefined
// GLOBAL DAT_00186030 int
// GLOBAL DAT_00186034 undefined4
// GLOBAL DAT_00186038 undefined4 *
// GLOBAL DAT_0018603c undefined *
// GLOBAL DAT_00186040 int
// GLOBAL DAT_00186088 undefined4 *
// GLOBAL s_cState_EventEnd_0018606c string
// GLOBAL s_cState_Event_0018605c string
// GLOBAL s_cState_Hide_0018607c string
// GLOBAL s_cState_Wait_00186044 string
// GLOBAL s_cState_Walk_00186050 string

int * func_00185C54(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  float fparam_0;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 extraout_r1;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(int *)(albw_frame + 0x8))
  #define local_94 (*(char * *)(albw_frame + 0xc))
  #define auStack_90 ((uint *)(albw_frame + 0x10))
  piVar3 = (int *)func_00612CB0(param_1,param_2,0,0xff,DAT_00186004);
  iVar11 = DAT_00186008;
  piVar3[200] = DAT_00186008 + 0xb8;
  *piVar3 = iVar11;
  piVar3[0x263] = 0;
  iVar11 = DAT_00186010;
  fparam_0 = DAT_0018600c;
  piVar3[0x264] = 0;
  func_004BFF4C((int)piVar3,1,iVar11,1,fparam_0);
  iVar11 = DAT_00186030;
  local_94 = &DAT_00186014;
  local_98 = DAT_00186030;
  func_004BE114(piVar3,4,0,0,DAT_00186034);
  piVar3[0x22b] = piVar3[0x22b] | 0x404;
  *(undefined1 *)((int)piVar3 + 0x857) = 0;
  *(undefined1 *)((int)piVar3 + 0x966) = 5;
  piVar3[0x25d] = (int)piVar3;
  iVar4 = func_0010BA78(0x50);
  piVar3[0x25e] = iVar4;
  puVar2 = DAT_00186038;
  iVar5 = 5;
  piVar3[0x25f] = iVar4 + (uint)*(byte *)((int)piVar3 + 0x966) * 8;
  puVar6 = (undefined4 *)(iVar4 + -8);
  do {
    uVar13 = puVar2[0x1b];
    iVar5 = iVar5 + -1;
    puVar6[2] = puVar2[0x1a];
    puVar6[3] = uVar13;
    uVar13 = puVar2[0x1b];
    puVar6[4] = puVar2[0x1a];
    puVar6[5] = uVar13;
    puVar6 = puVar6 + 4;
  } while (iVar5 != 0);
  bVar1 = *(byte *)((int)piVar3 + 0x966);
  uVar12 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar12 << 3);
  piVar3[0x260] = (int)puVar6;
  if (uVar12 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar2[5];
      *puVar6 = puVar2[4];
      puVar6[1] = uVar13;
      puVar7 = puVar6;
    }
    for (iVar4 = (int)uVar12 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar13 = puVar2[5];
      puVar7[2] = puVar2[4];
      puVar7[3] = uVar13;
      uVar13 = puVar2[5];
      puVar7[4] = puVar2[4];
      puVar7[5] = uVar13;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar4 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 5;
    iVar4 = func_00100118((int)(puVar6 + 2),DAT_0018603c,0x24,5);
  }
  if (iVar4 != 0) {
    piVar3[0x25a] = 5;
    piVar3[0x25b] = iVar4;
  }
  iVar4 = DAT_00186040;
  piVar3[0xd5] = (int)(piVar3 + 600);
  *(undefined2 *)(iVar4 + (int)piVar3) = 5;
  local_94 = s_cState_Wait_00186044;
  local_98 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),0,&local_98);
  puVar6 = (undefined4 *)piVar3[0x25e];
  uVar13 = puVar2[1];
  uVar8 = puVar2[2];
  uVar14 = puVar2[3];
  uVar16 = *(undefined8 *)(puVar2 + 4);
  *puVar6 = *puVar2;
  puVar6[1] = uVar13;
  puVar6 = (undefined4 *)piVar3[0x25f];
  *puVar6 = uVar8;
  puVar6[1] = uVar14;
  puVar6 = (undefined4 *)piVar3[0x260];
  *puVar6 = (int)uVar16;
  puVar6[1] = (int)((ulonglong)uVar16 >> 0x20);
  local_94 = s_cState_Walk_00186050;
  local_98 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),1,&local_98);
  iVar4 = piVar3[0x25e];
  uVar13 = puVar2[9];
  uVar8 = puVar2[8];
  uVar14 = puVar2[7];
  *(undefined4 *)(iVar4 + 8) = puVar2[6];
  *(undefined4 *)(iVar4 + 0xc) = uVar14;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 8) = uVar8;
  *(undefined4 *)(iVar4 + 0xc) = uVar13;
  iVar4 = piVar3[0x260];
  *(int *)(iVar4 + 8) = (int)uVar16;
  *(int *)(iVar4 + 0xc) = (int)((ulonglong)uVar16 >> 0x20);
  local_94 = s_cState_Event_0018605c;
  local_98 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),2,&local_98);
  iVar4 = piVar3[0x25e];
  uVar13 = puVar2[0xc];
  uVar14 = puVar2[0xd];
  uVar8 = puVar2[0xb];
  *(undefined4 *)(iVar4 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar4 + 0x14) = uVar8;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x10) = uVar13;
  *(undefined4 *)(iVar4 + 0x14) = uVar14;
  iVar4 = piVar3[0x260];
  *(int *)(iVar4 + 0x10) = (int)uVar16;
  *(int *)(iVar4 + 0x14) = (int)((ulonglong)uVar16 >> 0x20);
  local_94 = s_cState_EventEnd_0018606c;
  local_98 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),3,&local_98);
  iVar4 = piVar3[0x25e];
  uVar10 = puVar2[0xf];
  uVar15 = puVar2[0x10];
  uVar13 = puVar2[0x11];
  uVar8 = puVar2[0x12];
  uVar14 = puVar2[0x13];
  *(undefined4 *)(iVar4 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar4 + 0x1c) = uVar10;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x18) = uVar15;
  *(undefined4 *)(iVar4 + 0x1c) = uVar13;
  iVar4 = piVar3[0x260];
  *(undefined4 *)(iVar4 + 0x18) = uVar8;
  *(undefined4 *)(iVar4 + 0x1c) = uVar14;
  local_94 = s_cState_Hide_0018607c;
  local_98 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),4,&local_98);
  iVar11 = piVar3[0x25e];
  uVar10 = puVar2[0x15];
  uVar13 = puVar2[0x17];
  uVar15 = puVar2[0x18];
  uVar8 = puVar2[0x16];
  uVar14 = puVar2[0x19];
  *(undefined4 *)(iVar11 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar11 + 0x24) = uVar10;
  iVar11 = piVar3[0x25f];
  *(undefined4 *)(iVar11 + 0x20) = uVar8;
  *(undefined4 *)(iVar11 + 0x24) = uVar13;
  iVar11 = piVar3[0x260];
  *(undefined4 *)(iVar11 + 0x20) = uVar15;
  *(undefined4 *)(iVar11 + 0x24) = uVar14;
  func_0061202C((int)piVar3,piVar3[0x261],0);
  func_004C03B8((int)piVar3,DAT_00186088);
  iVar11 = piVar3[0x1ed];
  piVar9 = (int *)0x0;
  uVar13 = 10;
  func_002C11E8((int *)auStack_90,0xffffffff,10,0);
  func_001692F8(iVar11,auStack_90);
  func_004BC8D8((int)piVar3);
  func_004C00F4((int)piVar3,extraout_r1,uVar13,piVar9);
  return piVar3;
}

