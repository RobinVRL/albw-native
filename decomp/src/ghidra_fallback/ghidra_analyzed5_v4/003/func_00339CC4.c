#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_00627E58(int param_1,int param_2,undefined1 param_3);
extern int func_00628CE0(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_00339ff0;
extern undefined DAT_00339ff4;
extern int DAT_0033a004;
extern undefined4 *DAT_0033a008;
extern undefined *DAT_0033a00c;
extern int DAT_0033a010;
extern char s_cState_EventEnd_0033a03c[];
extern char s_cState_Event_0033a02c[];
extern char s_cState_Hide_0033a04c[];
extern char s_cState_Wait_0033a014[];
extern char s_cState_Walk_0033a020[];

// USA 00339CC4 <- EU 00339CA0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// GLOBAL DAT_00339ff0 int
// GLOBAL DAT_00339ff4 undefined
// GLOBAL DAT_0033a004 int
// GLOBAL DAT_0033a008 undefined4 *
// GLOBAL DAT_0033a00c undefined *
// GLOBAL DAT_0033a010 int
// GLOBAL s_cState_EventEnd_0033a03c string
// GLOBAL s_cState_Event_0033a02c string
// GLOBAL s_cState_Hide_0033a04c string
// GLOBAL s_cState_Wait_0033a014 string
// GLOBAL s_cState_Walk_0033a020 string

int * func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4,
                   undefined1 param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined1 *)(albw_frame + 0x14))
  #define local_2b (*(undefined1 *)(albw_frame + 0x15))
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_2c = 0;
  local_2b = 1;
  piVar3 = (int *)func_00628CE0(param_1,param_2,0,param_5,&local_38);
  iVar11 = DAT_0033a004;
  iVar7 = DAT_00339ff0 + 0xb8;
  *piVar3 = DAT_00339ff0;
  piVar3[200] = iVar7;
  local_3c = &DAT_00339ff4;
  local_40 = iVar11;
  func_004BE114(piVar3,param_3,0,0,param_4);
  *(undefined1 *)((int)piVar3 + 0x966) = 5;
  piVar3[0x25d] = (int)piVar3;
  iVar7 = func_0010BA78(0x50);
  piVar3[0x25e] = iVar7;
  puVar2 = DAT_0033a008;
  piVar3[0x25f] = iVar7 + (uint)*(byte *)((int)piVar3 + 0x966) * 8;
  iVar6 = 5;
  puVar4 = (undefined4 *)(iVar7 + -8);
  do {
    uVar13 = puVar2[0x1b];
    iVar6 = iVar6 + -1;
    puVar4[2] = puVar2[0x1a];
    puVar4[3] = uVar13;
    uVar13 = puVar2[0x1b];
    puVar4[4] = puVar2[0x1a];
    puVar4[5] = uVar13;
    puVar4 = puVar4 + 4;
  } while (iVar6 != 0);
  bVar1 = *(byte *)((int)piVar3 + 0x966);
  uVar12 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar12 << 3);
  piVar3[0x260] = (int)puVar4;
  if (uVar12 != 0) {
    puVar5 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar2[5];
      *puVar4 = puVar2[4];
      puVar4[1] = uVar13;
      puVar5 = puVar4;
    }
    for (iVar7 = (int)uVar12 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar13 = puVar2[5];
      puVar5[2] = puVar2[4];
      puVar5[3] = uVar13;
      uVar13 = puVar2[5];
      puVar5[4] = puVar2[4];
      puVar5[5] = uVar13;
      puVar5 = puVar5 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar7 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x24;
    puVar4[1] = 5;
    iVar7 = func_00100118((int)(puVar4 + 2),DAT_0033a00c,0x24,5);
  }
  if (iVar7 != 0) {
    piVar3[0x25a] = 5;
    piVar3[0x25b] = iVar7;
  }
  iVar7 = DAT_0033a010;
  piVar3[0xd5] = (int)(piVar3 + 600);
  *(undefined2 *)(iVar7 + (int)piVar3) = 5;
  local_3c = s_cState_Wait_0033a014;
  local_40 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),0,&local_40);
  puVar4 = (undefined4 *)piVar3[0x25e];
  uVar8 = puVar2[1];
  uVar13 = puVar2[2];
  uVar9 = puVar2[3];
  uVar15 = *(undefined8 *)(puVar2 + 4);
  *puVar4 = *puVar2;
  puVar4[1] = uVar8;
  puVar4 = (undefined4 *)piVar3[0x25f];
  *puVar4 = uVar13;
  puVar4[1] = uVar9;
  puVar4 = (undefined4 *)piVar3[0x260];
  *puVar4 = (int)uVar15;
  puVar4[1] = (int)((ulonglong)uVar15 >> 0x20);
  local_3c = s_cState_Walk_0033a020;
  local_40 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),1,&local_40);
  iVar7 = piVar3[0x25e];
  uVar13 = puVar2[7];
  uVar8 = puVar2[8];
  uVar9 = puVar2[9];
  *(undefined4 *)(iVar7 + 8) = puVar2[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar13;
  iVar7 = piVar3[0x25f];
  *(undefined4 *)(iVar7 + 8) = uVar8;
  *(undefined4 *)(iVar7 + 0xc) = uVar9;
  iVar7 = piVar3[0x260];
  *(int *)(iVar7 + 8) = (int)uVar15;
  *(int *)(iVar7 + 0xc) = (int)((ulonglong)uVar15 >> 0x20);
  local_3c = s_cState_Event_0033a02c;
  local_40 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),2,&local_40);
  iVar7 = piVar3[0x25e];
  uVar13 = puVar2[0xb];
  uVar8 = puVar2[0xc];
  uVar9 = puVar2[0xd];
  *(undefined4 *)(iVar7 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar7 + 0x14) = uVar13;
  iVar7 = piVar3[0x25f];
  *(undefined4 *)(iVar7 + 0x10) = uVar8;
  *(undefined4 *)(iVar7 + 0x14) = uVar9;
  iVar7 = piVar3[0x260];
  *(int *)(iVar7 + 0x10) = (int)uVar15;
  *(int *)(iVar7 + 0x14) = (int)((ulonglong)uVar15 >> 0x20);
  local_3c = s_cState_EventEnd_0033a03c;
  local_40 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),3,&local_40);
  iVar7 = piVar3[0x25e];
  uVar14 = puVar2[0xf];
  uVar13 = puVar2[0x11];
  uVar10 = puVar2[0x12];
  uVar8 = puVar2[0x13];
  uVar9 = puVar2[0x10];
  *(undefined4 *)(iVar7 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar7 + 0x1c) = uVar14;
  iVar7 = piVar3[0x25f];
  *(undefined4 *)(iVar7 + 0x18) = uVar9;
  *(undefined4 *)(iVar7 + 0x1c) = uVar13;
  iVar7 = piVar3[0x260];
  *(undefined4 *)(iVar7 + 0x18) = uVar10;
  *(undefined4 *)(iVar7 + 0x1c) = uVar8;
  local_3c = s_cState_Hide_0033a04c;
  local_40 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),4,&local_40);
  uVar13 = puVar2[0x18];
  uVar10 = puVar2[0x19];
  uVar8 = puVar2[0x16];
  uVar14 = puVar2[0x17];
  iVar11 = piVar3[0x25e];
  uVar9 = puVar2[0x15];
  *(undefined4 *)(iVar11 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar11 + 0x24) = uVar9;
  iVar11 = piVar3[0x25f];
  *(undefined4 *)(iVar11 + 0x20) = uVar8;
  *(undefined4 *)(iVar11 + 0x24) = uVar14;
  iVar11 = piVar3[0x260];
  *(undefined4 *)(iVar11 + 0x20) = uVar13;
  *(undefined4 *)(iVar11 + 0x24) = uVar10;
  func_00627E58((int)piVar3,piVar3[0x261],0);
  return piVar3;
}

