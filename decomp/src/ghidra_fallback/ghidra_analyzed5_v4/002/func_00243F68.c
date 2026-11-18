#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004C081C(int param_1,int param_2,int param_3,int *param_4,int param_5,undefined4 param_6);
extern int func_0061A37C(int param_1,int param_2,undefined1 param_3);
extern int func_0061B000(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_002442d0;
extern int *DAT_002442d4;
extern undefined DAT_002442d8;
extern int DAT_002442e8;
extern undefined4 DAT_002442ec;
extern undefined4 *DAT_002442f0;
extern undefined *DAT_002442f4;
extern int DAT_002442f8;
extern undefined4 *DAT_00244340;
extern char s_cState_EventEnd_00244324[];
extern char s_cState_Event_00244314[];
extern char s_cState_Hide_00244334[];
extern char s_cState_Wait_002442fc[];
extern char s_cState_Walk_00244308[];

// USA 00243F68 <- EU 00243F68 (Ghidra, non-matching)
// GLOBAL DAT_002442d0 int
// GLOBAL DAT_002442d4 int *
// GLOBAL DAT_002442d8 undefined
// GLOBAL DAT_002442e8 int
// GLOBAL DAT_002442ec undefined4
// GLOBAL DAT_002442f0 undefined4 *
// GLOBAL DAT_002442f4 undefined *
// GLOBAL DAT_002442f8 int
// GLOBAL DAT_00244340 undefined4 *
// GLOBAL s_cState_EventEnd_00244324 string
// GLOBAL s_cState_Event_00244314 string
// GLOBAL s_cState_Hide_00244334 string
// GLOBAL s_cState_Wait_002442fc string
// GLOBAL s_cState_Walk_00244308 string

int * func_00243F68(undefined4 *param_1,uint *param_2)

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
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
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
  piVar3 = (int *)func_0061B000(param_1,param_2,0,0xff,&local_38);
  iVar12 = DAT_002442d0;
  piVar3[0x263] = 0;
  *piVar3 = iVar12;
  piVar3[200] = iVar12 + 0xb8;
  *(undefined2 *)(piVar3 + 0x264) = 0xffff;
  func_004C081C((int)piVar3,0,0,DAT_002442d4,1,0);
  iVar12 = DAT_002442e8;
  local_3c = &DAT_002442d8;
  local_40 = DAT_002442e8;
  func_004BE114(piVar3,4,0,0,DAT_002442ec);
  *(undefined1 *)((int)piVar3 + 0x966) = 5;
  piVar3[0x25d] = (int)piVar3;
  iVar4 = func_0010BA78(0x50);
  piVar3[0x25e] = iVar4;
  puVar2 = DAT_002442f0;
  piVar3[0x25f] = iVar4 + (uint)*(byte *)((int)piVar3 + 0x966) * 8;
  iVar7 = 5;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar14 = puVar2[0x1b];
    iVar7 = iVar7 + -1;
    puVar5[2] = puVar2[0x1a];
    puVar5[3] = uVar14;
    uVar14 = puVar2[0x1b];
    puVar5[4] = puVar2[0x1a];
    puVar5[5] = uVar14;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)piVar3 + 0x966);
  uVar13 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar13 << 3);
  piVar3[0x260] = (int)puVar5;
  if (uVar13 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = puVar2[5];
      *puVar5 = puVar2[4];
      puVar5[1] = uVar14;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar13 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar14 = puVar2[5];
      puVar6[2] = puVar2[4];
      puVar6[3] = uVar14;
      uVar14 = puVar2[5];
      puVar6[4] = puVar2[4];
      puVar6[5] = uVar14;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 5;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_002442f4,0x24,5);
  }
  if (iVar4 != 0) {
    piVar3[0x25a] = 5;
    piVar3[0x25b] = iVar4;
  }
  iVar4 = DAT_002442f8;
  piVar3[0xd5] = (int)(piVar3 + 600);
  *(undefined2 *)(iVar4 + (int)piVar3) = 5;
  local_3c = s_cState_Wait_002442fc;
  local_40 = iVar12;
  func_0010BEC4((int)(piVar3 + 600),0,&local_40);
  puVar5 = (undefined4 *)piVar3[0x25e];
  uVar8 = puVar2[1];
  uVar14 = puVar2[2];
  uVar9 = puVar2[3];
  uVar15 = *(undefined8 *)(puVar2 + 4);
  *puVar5 = *puVar2;
  puVar5[1] = uVar8;
  puVar5 = (undefined4 *)piVar3[0x25f];
  *puVar5 = uVar14;
  puVar5[1] = uVar9;
  puVar5 = (undefined4 *)piVar3[0x260];
  *puVar5 = (int)uVar15;
  puVar5[1] = (int)((ulonglong)uVar15 >> 0x20);
  local_3c = s_cState_Walk_00244308;
  local_40 = iVar12;
  func_0010BEC4((int)(piVar3 + 600),1,&local_40);
  iVar4 = piVar3[0x25e];
  uVar14 = puVar2[8];
  uVar8 = puVar2[9];
  uVar9 = puVar2[7];
  *(undefined4 *)(iVar4 + 8) = puVar2[6];
  *(undefined4 *)(iVar4 + 0xc) = uVar9;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 8) = uVar14;
  *(undefined4 *)(iVar4 + 0xc) = uVar8;
  iVar4 = piVar3[0x260];
  *(int *)(iVar4 + 8) = (int)uVar15;
  *(int *)(iVar4 + 0xc) = (int)((ulonglong)uVar15 >> 0x20);
  local_3c = s_cState_Event_00244314;
  local_40 = iVar12;
  func_0010BEC4((int)(piVar3 + 600),2,&local_40);
  iVar4 = piVar3[0x25e];
  uVar14 = puVar2[0xb];
  uVar8 = puVar2[0xc];
  uVar9 = puVar2[0xd];
  *(undefined4 *)(iVar4 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar4 + 0x14) = uVar14;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x10) = uVar8;
  *(undefined4 *)(iVar4 + 0x14) = uVar9;
  iVar4 = piVar3[0x260];
  *(int *)(iVar4 + 0x10) = (int)uVar15;
  *(int *)(iVar4 + 0x14) = (int)((ulonglong)uVar15 >> 0x20);
  local_3c = s_cState_EventEnd_00244324;
  local_40 = iVar12;
  func_0010BEC4((int)(piVar3 + 600),3,&local_40);
  iVar4 = piVar3[0x25e];
  uVar14 = puVar2[0x10];
  uVar8 = puVar2[0x11];
  uVar10 = puVar2[0x12];
  uVar11 = puVar2[0x13];
  uVar9 = puVar2[0xf];
  *(undefined4 *)(iVar4 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar4 + 0x1c) = uVar9;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x18) = uVar14;
  *(undefined4 *)(iVar4 + 0x1c) = uVar8;
  iVar4 = piVar3[0x260];
  *(undefined4 *)(iVar4 + 0x18) = uVar10;
  *(undefined4 *)(iVar4 + 0x1c) = uVar11;
  local_3c = s_cState_Hide_00244334;
  local_40 = iVar12;
  func_0010BEC4((int)(piVar3 + 600),4,&local_40);
  uVar8 = puVar2[0x19];
  iVar12 = piVar3[0x25e];
  uVar14 = puVar2[0x15];
  uVar9 = puVar2[0x16];
  uVar10 = puVar2[0x17];
  uVar11 = puVar2[0x18];
  *(undefined4 *)(iVar12 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar12 + 0x24) = uVar14;
  iVar12 = piVar3[0x25f];
  *(undefined4 *)(iVar12 + 0x20) = uVar9;
  *(undefined4 *)(iVar12 + 0x24) = uVar10;
  iVar12 = piVar3[0x260];
  *(undefined4 *)(iVar12 + 0x20) = uVar11;
  *(undefined4 *)(iVar12 + 0x24) = uVar8;
  func_0061A37C((int)piVar3,piVar3[0x261],0);
  func_004C03B8((int)piVar3,DAT_00244340);
  return piVar3;
}

