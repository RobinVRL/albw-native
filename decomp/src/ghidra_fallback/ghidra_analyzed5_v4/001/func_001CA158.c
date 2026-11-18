#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004BFF4C(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_004C00F4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_00614BFC(int param_1,int param_2,undefined1 param_3);
extern int func_00615880(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern undefined4 *DAT_001ca530;
extern int DAT_001ca534;
extern float DAT_001ca538;
extern int DAT_001ca53c;
extern undefined4 DAT_001ca540;
extern undefined DAT_001ca544;
extern int DAT_001ca550;
extern undefined4 DAT_001ca554;
extern undefined4 *DAT_001ca558;
extern undefined *DAT_001ca55c;
extern int DAT_001ca560;
extern undefined4 *DAT_001ca5a8;
extern float DAT_001ca5ac;
extern char s_cState_EventEnd_001ca58c[];
extern char s_cState_Event_001ca57c[];
extern char s_cState_Hide_001ca59c[];
extern char s_cState_Wait_001ca564[];
extern char s_cState_Walk_001ca570[];

// USA 001CA158 <- EU 001CA158 (Ghidra, non-matching)
// GLOBAL DAT_001ca530 undefined4 *
// GLOBAL DAT_001ca534 int
// GLOBAL DAT_001ca538 float
// GLOBAL DAT_001ca53c int
// GLOBAL DAT_001ca540 undefined4
// GLOBAL DAT_001ca544 undefined
// GLOBAL DAT_001ca550 int
// GLOBAL DAT_001ca554 undefined4
// GLOBAL DAT_001ca558 undefined4 *
// GLOBAL DAT_001ca55c undefined *
// GLOBAL DAT_001ca560 int
// GLOBAL DAT_001ca5a8 undefined4 *
// GLOBAL DAT_001ca5ac float
// GLOBAL s_cState_EventEnd_001ca58c string
// GLOBAL s_cState_Event_001ca57c string
// GLOBAL s_cState_Hide_001ca59c string
// GLOBAL s_cState_Wait_001ca564 string
// GLOBAL s_cState_Walk_001ca570 string

int * func_001CA158(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  short sVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar4 = (int *)func_00615880(param_1,param_2,0,0xff,DAT_001ca530);
  iVar13 = DAT_001ca534;
  piVar4[200] = DAT_001ca534 + 0xb8;
  *piVar4 = iVar13;
  sVar2 = *(short *)((int)piVar4 + 0x32);
  func_004BFF4C((int)piVar4,1,DAT_001ca53c,1,DAT_001ca538);
  iVar13 = DAT_001ca550;
  *(undefined4 *)(*(int *)(piVar4[0x1ed] + 0x14) + 0x10) = DAT_001ca540;
  local_34 = &DAT_001ca544;
  local_38 = iVar13;
  func_004BE114(piVar4,6,0,0,DAT_001ca554);
  if (sVar2 != 1) {
    *(undefined1 *)((int)piVar4 + 0x853) = 2;
    *(undefined1 *)((int)piVar4 + 0x855) = 5;
    *(undefined1 *)((int)piVar4 + 0x856) = 3;
    *(undefined1 *)(piVar4 + 0x215) = 4;
  }
  piVar4[0x25d] = (int)piVar4;
  *(undefined1 *)((int)piVar4 + 0x966) = 5;
  iVar5 = func_0010BA78(0x50);
  puVar3 = DAT_001ca558;
  piVar4[0x25e] = iVar5;
  piVar4[0x25f] = iVar5 + (uint)*(byte *)((int)piVar4 + 0x966) * 8;
  iVar8 = 5;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar14 = puVar3[0x1b];
    iVar8 = iVar8 + -1;
    puVar6[2] = puVar3[0x1a];
    puVar6[3] = uVar14;
    uVar14 = puVar3[0x1b];
    puVar6[4] = puVar3[0x1a];
    puVar6[5] = uVar14;
    puVar6 = puVar6 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)piVar4 + 0x966);
  uVar12 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar12 << 3);
  piVar4[0x260] = (int)puVar6;
  if (uVar12 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = puVar3[5];
      *puVar6 = puVar3[4];
      puVar6[1] = uVar14;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar12 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar14 = puVar3[5];
      puVar7[2] = puVar3[4];
      puVar7[3] = uVar14;
      uVar14 = puVar3[5];
      puVar7[4] = puVar3[4];
      puVar7[5] = uVar14;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 5;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_001ca55c,0x24,5);
  }
  if (iVar5 != 0) {
    piVar4[0x25a] = 5;
    piVar4[0x25b] = iVar5;
  }
  iVar5 = DAT_001ca560;
  piVar4[0xd5] = (int)(piVar4 + 600);
  *(undefined2 *)(iVar5 + (int)piVar4) = 5;
  local_34 = s_cState_Wait_001ca564;
  local_38 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),0,&local_38);
  puVar6 = (undefined4 *)piVar4[0x25e];
  uVar9 = puVar3[2];
  uVar10 = *puVar3;
  uVar14 = puVar3[3];
  uVar17 = *(undefined8 *)(puVar3 + 4);
  puVar6[1] = puVar3[1];
  *puVar6 = uVar10;
  puVar6 = (undefined4 *)piVar4[0x25f];
  puVar6[1] = uVar14;
  *puVar6 = uVar9;
  puVar6 = (undefined4 *)piVar4[0x260];
  *puVar6 = (int)uVar17;
  puVar6[1] = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_Walk_001ca570;
  local_38 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),1,&local_38);
  iVar5 = piVar4[0x25e];
  uVar10 = puVar3[7];
  uVar14 = puVar3[8];
  uVar9 = puVar3[9];
  *(undefined4 *)(iVar5 + 8) = puVar3[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar10;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 8) = uVar14;
  *(undefined4 *)(iVar5 + 0xc) = uVar9;
  iVar5 = piVar4[0x260];
  *(int *)(iVar5 + 8) = (int)uVar17;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_Event_001ca57c;
  local_38 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),2,&local_38);
  iVar5 = piVar4[0x25e];
  uVar14 = puVar3[0xb];
  uVar9 = puVar3[0xc];
  uVar10 = puVar3[0xd];
  *(undefined4 *)(iVar5 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar14;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x10) = uVar9;
  *(undefined4 *)(iVar5 + 0x14) = uVar10;
  iVar5 = piVar4[0x260];
  *(int *)(iVar5 + 0x10) = (int)uVar17;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar17 >> 0x20);
  local_34 = s_cState_EventEnd_001ca58c;
  local_38 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),3,&local_38);
  iVar5 = piVar4[0x25e];
  uVar14 = puVar3[0xf];
  uVar9 = puVar3[0x10];
  uVar10 = puVar3[0x11];
  uVar15 = puVar3[0x12];
  uVar16 = puVar3[0x13];
  *(undefined4 *)(iVar5 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar5 + 0x1c) = uVar14;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x18) = uVar9;
  *(undefined4 *)(iVar5 + 0x1c) = uVar10;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x18) = uVar15;
  *(undefined4 *)(iVar5 + 0x1c) = uVar16;
  local_34 = s_cState_Hide_001ca59c;
  local_38 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),4,&local_38);
  uVar10 = puVar3[0x17];
  uVar9 = puVar3[0x18];
  uVar14 = puVar3[0x19];
  iVar13 = piVar4[0x25e];
  piVar11 = (int *)puVar3[0x15];
  uVar15 = puVar3[0x16];
  *(undefined4 *)(iVar13 + 0x20) = puVar3[0x14];
  *(int **)(iVar13 + 0x24) = piVar11;
  iVar13 = piVar4[0x25f];
  *(undefined4 *)(iVar13 + 0x20) = uVar15;
  *(undefined4 *)(iVar13 + 0x24) = uVar10;
  iVar13 = piVar4[0x260];
  *(undefined4 *)(iVar13 + 0x20) = uVar9;
  *(undefined4 *)(iVar13 + 0x24) = uVar14;
  uVar14 = 0;
  func_00614BFC((int)piVar4,piVar4[0x261],0);
  func_004C03B8((int)piVar4,DAT_001ca5a8);
  if (sVar2 == 1) {
    uVar9 = *(undefined4 *)(piVar4[0x1ed] + 0xc);
    iVar13 = *(int *)(piVar4[0x1ed] + 0x14);
    if (*(float *)(iVar13 + 8) != DAT_001ca5ac) {
      *(float *)(iVar13 + 8) = DAT_001ca5ac;
      *(undefined1 *)(iVar13 + 0x26) = 1;
    }
    func_004C00F4((int)piVar4,uVar9,uVar14,piVar11);
  }
  func_004BC8D8((int)piVar4);
  return piVar4;
}

