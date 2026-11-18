#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern int func_003673F4(undefined4 *param_1,int param_2);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_00636588(int param_1,int param_2,undefined1 param_3);
extern int func_0063720C(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_004dff60;
extern undefined DAT_004dff64;
extern int DAT_004dff6c;
extern undefined4 DAT_004dff70;
extern undefined4 *DAT_004dff74;
extern undefined *DAT_004dff78;
extern int DAT_004dff7c;
extern undefined4 *DAT_004dffc4;
extern char s_cState_EventEnd_004dffa8[];
extern char s_cState_Event_004dff98[];
extern char s_cState_Hide_004dffb8[];
extern char s_cState_Wait_004dff80[];
extern char s_cState_Walk_004dff8c[];

// USA 004DFBCC <- EU 004DFBA4 (Ghidra, non-matching)
// GLOBAL DAT_004dff60 int
// GLOBAL DAT_004dff64 undefined
// GLOBAL DAT_004dff6c int
// GLOBAL DAT_004dff70 undefined4
// GLOBAL DAT_004dff74 undefined4 *
// GLOBAL DAT_004dff78 undefined *
// GLOBAL DAT_004dff7c int
// GLOBAL DAT_004dffc4 undefined4 *
// GLOBAL s_cState_EventEnd_004dffa8 string
// GLOBAL s_cState_Event_004dff98 string
// GLOBAL s_cState_Hide_004dffb8 string
// GLOBAL s_cState_Wait_004dff80 string
// GLOBAL s_cState_Walk_004dff8c string

int * func_004DFBCC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
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
  piVar3 = (int *)func_0063720C(param_1,param_2,0,0xff,&local_38);
  iVar4 = DAT_004dff60;
  piVar3[200] = DAT_004dff60 + 0xb8;
  *piVar3 = iVar4;
  piVar3[0x263] = 0xf;
  piVar3[0x264] = 0;
  piVar3[0x265] = 0;
  piVar3[0x266] = 0;
  iVar4 = func_003673F4(piVar3 + 0x267,3);
  puVar5 = func_002E1BB4((undefined4 *)(iVar4 + 0x38),0);
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  iVar4 = DAT_004dff6c;
  local_3c = &DAT_004dff64;
  piVar3 = puVar5 + -0x275;
  local_40 = DAT_004dff6c;
  func_004BE114(piVar3,0xe,0,0,DAT_004dff70);
  if (*(short *)((int)param_2 + 0x2a) == 1) {
    *(undefined1 *)((int)puVar5 + -0x181) = 5;
    *(undefined1 *)((int)puVar5 + -0x17f) = 6;
  }
  puVar5[-0x18] = piVar3;
  *(undefined1 *)((int)puVar5 + -0x6e) = 5;
  iVar6 = func_0010BA78(0x50);
  puVar2 = DAT_004dff74;
  puVar5[-0x17] = iVar6;
  puVar5[-0x16] = iVar6 + (uint)*(byte *)((int)puVar5 + -0x6e) * 8;
  iVar9 = 5;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar14 = puVar2[0x35];
    iVar9 = iVar9 + -1;
    puVar7[2] = puVar2[0x34];
    puVar7[3] = uVar14;
    uVar14 = puVar2[0x35];
    puVar7[4] = puVar2[0x34];
    puVar7[5] = uVar14;
    puVar7 = puVar7 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar5 + -0x6e);
  uVar13 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar13 << 3);
  puVar5[-0x15] = puVar7;
  if (uVar13 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = puVar2[5];
      *puVar7 = puVar2[4];
      puVar7[1] = uVar14;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar13 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar14 = puVar2[5];
      puVar8[2] = puVar2[4];
      puVar8[3] = uVar14;
      uVar14 = puVar2[5];
      puVar8[4] = puVar2[4];
      puVar8[5] = uVar14;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 5;
    iVar6 = func_00100118((int)(puVar7 + 2),DAT_004dff78,0x24,5);
  }
  if (iVar6 != 0) {
    puVar5[-0x1b] = 5;
    puVar5[-0x1a] = iVar6;
  }
  iVar6 = DAT_004dff7c;
  puVar5[-0x1a0] = puVar5 + -0x1d;
  *(undefined2 *)(iVar6 + (int)piVar3) = 5;
  local_3c = s_cState_Wait_004dff80;
  local_40 = iVar4;
  func_0010BEC4((int)(puVar5 + -0x1d),0,&local_40);
  puVar7 = (undefined4 *)puVar5[-0x17];
  uVar10 = puVar2[1];
  uVar14 = puVar2[2];
  uVar11 = puVar2[3];
  uVar12 = puVar2[4];
  uVar15 = puVar2[5];
  *puVar7 = *puVar2;
  puVar7[1] = uVar10;
  puVar7 = (undefined4 *)puVar5[-0x16];
  *puVar7 = uVar14;
  puVar7[1] = uVar11;
  puVar7 = (undefined4 *)puVar5[-0x15];
  *puVar7 = uVar12;
  puVar7[1] = uVar15;
  local_3c = s_cState_Walk_004dff8c;
  local_40 = iVar4;
  func_0010BEC4((int)(puVar5 + -0x1d),1,&local_40);
  iVar6 = puVar5[-0x17];
  uVar14 = puVar2[7];
  uVar11 = puVar2[8];
  uVar10 = puVar2[9];
  *(undefined4 *)(iVar6 + 8) = puVar2[6];
  *(undefined4 *)(iVar6 + 0xc) = uVar14;
  iVar6 = puVar5[-0x16];
  *(undefined4 *)(iVar6 + 8) = uVar11;
  *(undefined4 *)(iVar6 + 0xc) = uVar10;
  iVar6 = puVar5[-0x15];
  *(undefined4 *)(iVar6 + 8) = uVar12;
  *(undefined4 *)(iVar6 + 0xc) = uVar15;
  local_3c = s_cState_Event_004dff98;
  local_40 = iVar4;
  func_0010BEC4((int)(puVar5 + -0x1d),2,&local_40);
  iVar6 = puVar5[-0x17];
  uVar14 = puVar2[0xc];
  uVar10 = puVar2[0xd];
  uVar11 = puVar2[0xb];
  *(undefined4 *)(iVar6 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar6 + 0x14) = uVar11;
  iVar6 = puVar5[-0x16];
  *(undefined4 *)(iVar6 + 0x10) = uVar14;
  *(undefined4 *)(iVar6 + 0x14) = uVar10;
  iVar6 = puVar5[-0x15];
  *(undefined4 *)(iVar6 + 0x10) = uVar12;
  *(undefined4 *)(iVar6 + 0x14) = uVar15;
  local_3c = s_cState_EventEnd_004dffa8;
  local_40 = iVar4;
  func_0010BEC4((int)(puVar5 + -0x1d),3,&local_40);
  iVar6 = puVar5[-0x17];
  uVar12 = puVar2[0xf];
  uVar15 = puVar2[0x10];
  uVar14 = puVar2[0x12];
  uVar11 = puVar2[0x13];
  uVar10 = puVar2[0x11];
  *(undefined4 *)(iVar6 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar6 + 0x1c) = uVar12;
  iVar6 = puVar5[-0x16];
  *(undefined4 *)(iVar6 + 0x18) = uVar15;
  *(undefined4 *)(iVar6 + 0x1c) = uVar10;
  iVar6 = puVar5[-0x15];
  *(undefined4 *)(iVar6 + 0x18) = uVar14;
  *(undefined4 *)(iVar6 + 0x1c) = uVar11;
  local_3c = s_cState_Hide_004dffb8;
  local_40 = iVar4;
  func_0010BEC4((int)(puVar5 + -0x1d),4,&local_40);
  uVar10 = puVar2[0x18];
  uVar14 = puVar2[0x19];
  iVar4 = puVar5[-0x17];
  uVar11 = puVar2[0x15];
  uVar12 = puVar2[0x16];
  uVar15 = puVar2[0x17];
  *(undefined4 *)(iVar4 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar4 + 0x24) = uVar11;
  iVar4 = puVar5[-0x16];
  *(undefined4 *)(iVar4 + 0x20) = uVar12;
  *(undefined4 *)(iVar4 + 0x24) = uVar15;
  iVar4 = puVar5[-0x15];
  *(undefined4 *)(iVar4 + 0x20) = uVar10;
  *(undefined4 *)(iVar4 + 0x24) = uVar14;
  func_00636588((int)piVar3,puVar5[-0x14],0);
  func_004C03B8((int)piVar3,DAT_004dffc4);
  func_004BC8D8((int)piVar3);
  return piVar3;
}

