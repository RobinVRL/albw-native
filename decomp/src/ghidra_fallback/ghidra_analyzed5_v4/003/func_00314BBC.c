#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004BFF4C(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_00626FA4(int param_1,int param_2,undefined1 param_3);
extern int func_00627C48(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int iRam00314fd4;
extern int iRam00315034;
extern undefined4 *puRam00314fcc;
extern undefined4 *puRam00314fd0;
extern undefined4 *puRam00315030;
extern undefined4 *DAT_00314fa4;
extern int DAT_00314fa8;
extern int DAT_00314fac;
extern int DAT_00314fb0;
extern undefined DAT_00314fb4;
extern int DAT_00314fc4;
extern undefined4 DAT_00314fc8;
extern char s_cState_EventEnd_00315000[];
extern char s_cState_Event_00314ff0[];
extern char s_cState_Hide_00315010[];
extern char s_cState_TurnAction_0031501c[];
extern char s_cState_Wait_00314fd8[];
extern char s_cState_Walk_00314fe4[];

// USA 00314BBC <- EU 00314B98 (Ghidra, non-matching)
// GLOBAL DAT_00314fa4 undefined4 *
// GLOBAL DAT_00314fa8 int
// GLOBAL DAT_00314fac int
// GLOBAL DAT_00314fb0 int
// GLOBAL DAT_00314fb4 undefined
// GLOBAL DAT_00314fc4 int
// GLOBAL DAT_00314fc8 undefined4
// GLOBAL UNK_00314fcc undefined4 *
// GLOBAL UNK_00314fd0 undefined *
// GLOBAL UNK_00314fd4 int
// GLOBAL UNK_00315030 undefined4 *
// GLOBAL UNK_00315034 int
// GLOBAL s_cState_EventEnd_00315000 string
// GLOBAL s_cState_Event_00314ff0 string
// GLOBAL s_cState_Hide_00315010 string
// GLOBAL s_cState_TurnAction_0031501c string
// GLOBAL s_cState_Wait_00314fd8 string
// GLOBAL s_cState_Walk_00314fe4 string

int * func_00314BBC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint in_fpscr;
  float fparam_0;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  piVar3 = (int *)func_00627C48(param_1,param_2,0,3,DAT_00314fa4);
  iVar5 = DAT_00314fac;
  iVar12 = DAT_00314fa8;
  iVar9 = DAT_00314fa8 + 0xb8;
  piVar3[0x263] = 0;
  piVar3[200] = iVar9;
  *piVar3 = iVar12;
  piVar3[0x264] = 0;
  *(undefined2 *)(iVar5 + (int)piVar3) = 0;
  piVar3[0x266] = 0;
  *(undefined1 *)(piVar3 + 0x267) = 0;
  *(char *)((int)piVar3 + 0x996) = (char)*(undefined2 *)((int)piVar3 + 0x32);
  uVar4 = (uint)(short)piVar3[0xc];
  if (2 < uVar4) {
    uVar4 = 0;
  }
  if (*(short *)((int)piVar3 + 0x2e) == 1) {
    piVar3[0x22b] = piVar3[0x22b] | 2;
  }
  fparam_0 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  func_004BFF4C((int)piVar3,1,DAT_00314fb0,0,fparam_0);
  iVar12 = DAT_00314fc4;
  local_2c = &DAT_00314fb4;
  local_30 = DAT_00314fc4;
  func_004BE114(piVar3,7,0,0,DAT_00314fc8);
  func_004BC8D8((int)piVar3);
  piVar3[0x25d] = (int)piVar3;
  *(undefined1 *)((int)piVar3 + 0x966) = 6;
  iVar5 = func_0010BA78(0x60);
  puVar2 = puRam00314fcc;
  piVar3[0x25e] = iVar5;
  piVar3[0x25f] = iVar5 + (uint)*(byte *)((int)piVar3 + 0x966) * 8;
  iVar9 = 6;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar13 = puVar2[0x1f];
    iVar9 = iVar9 + -1;
    puVar6[2] = puVar2[0x1e];
    puVar6[3] = uVar13;
    uVar13 = puVar2[0x1f];
    puVar6[4] = puVar2[0x1e];
    puVar6[5] = uVar13;
    puVar6 = puVar6 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)piVar3 + 0x966);
  uVar4 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar4 << 3);
  piVar3[0x260] = (int)puVar6;
  if (uVar4 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar2[5];
      *puVar6 = puVar2[4];
      puVar6[1] = uVar13;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar4 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar13 = puVar2[5];
      puVar7[2] = puVar2[4];
      puVar7[3] = uVar13;
      uVar13 = puVar2[5];
      puVar7[4] = puVar2[4];
      puVar7[5] = uVar13;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 6;
    iVar5 = func_00100118((int)(puVar6 + 2),puRam00314fd0,0x24,6);
  }
  if (iVar5 != 0) {
    piVar3[0x25a] = 6;
    piVar3[0x25b] = iVar5;
  }
  iVar5 = iRam00314fd4;
  piVar3[0xd5] = (int)(piVar3 + 600);
  *(undefined2 *)(iVar5 + (int)piVar3) = 6;
  local_2c = s_cState_Wait_00314fd8;
  local_30 = iVar12;
  func_0010BEC4((int)(piVar3 + 600),0,&local_30);
  puVar6 = (undefined4 *)piVar3[0x25e];
  uVar8 = puVar2[1];
  uVar13 = puVar2[2];
  uVar10 = puVar2[3];
  uVar15 = *(undefined8 *)(puVar2 + 4);
  *puVar6 = *puVar2;
  puVar6[1] = uVar8;
  puVar6 = (undefined4 *)piVar3[0x25f];
  *puVar6 = uVar13;
  puVar6[1] = uVar10;
  puVar6 = (undefined4 *)piVar3[0x260];
  *puVar6 = (int)uVar15;
  puVar6[1] = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cState_Walk_00314fe4;
  local_30 = iVar12;
  func_0010BEC4((int)(piVar3 + 600),1,&local_30);
  iVar5 = piVar3[0x25e];
  uVar13 = puVar2[7];
  uVar8 = puVar2[8];
  uVar10 = puVar2[9];
  *(undefined4 *)(iVar5 + 8) = puVar2[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar13;
  iVar5 = piVar3[0x25f];
  *(undefined4 *)(iVar5 + 8) = uVar8;
  *(undefined4 *)(iVar5 + 0xc) = uVar10;
  iVar5 = piVar3[0x260];
  *(int *)(iVar5 + 8) = (int)uVar15;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cState_Event_00314ff0;
  local_30 = iVar12;
  func_0010BEC4((int)(piVar3 + 600),2,&local_30);
  iVar5 = piVar3[0x25e];
  uVar10 = puVar2[0xb];
  uVar13 = puVar2[0xc];
  uVar8 = puVar2[0xd];
  *(undefined4 *)(iVar5 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar10;
  iVar5 = piVar3[0x25f];
  *(undefined4 *)(iVar5 + 0x10) = uVar13;
  *(undefined4 *)(iVar5 + 0x14) = uVar8;
  iVar5 = piVar3[0x260];
  *(int *)(iVar5 + 0x10) = (int)uVar15;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar15 >> 0x20);
  local_2c = s_cState_EventEnd_00315000;
  local_30 = iVar12;
  func_0010BEC4((int)(piVar3 + 600),3,&local_30);
  iVar5 = piVar3[0x25e];
  uVar13 = puVar2[0x11];
  uVar10 = puVar2[0x12];
  uVar11 = puVar2[0x13];
  uVar8 = puVar2[0xf];
  uVar14 = puVar2[0x10];
  *(undefined4 *)(iVar5 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar5 + 0x1c) = uVar8;
  iVar5 = piVar3[0x25f];
  *(undefined4 *)(iVar5 + 0x18) = uVar14;
  *(undefined4 *)(iVar5 + 0x1c) = uVar13;
  iVar5 = piVar3[0x260];
  *(undefined4 *)(iVar5 + 0x18) = uVar10;
  *(undefined4 *)(iVar5 + 0x1c) = uVar11;
  local_2c = s_cState_Hide_00315010;
  local_30 = iVar12;
  func_0010BEC4((int)(piVar3 + 600),4,&local_30);
  iVar5 = piVar3[0x25e];
  uVar11 = puVar2[0x15];
  uVar14 = puVar2[0x16];
  uVar13 = puVar2[0x18];
  uVar10 = puVar2[0x19];
  uVar8 = puVar2[0x17];
  *(undefined4 *)(iVar5 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar5 + 0x24) = uVar11;
  iVar5 = piVar3[0x25f];
  *(undefined4 *)(iVar5 + 0x20) = uVar14;
  *(undefined4 *)(iVar5 + 0x24) = uVar8;
  iVar5 = piVar3[0x260];
  *(undefined4 *)(iVar5 + 0x20) = uVar13;
  *(undefined4 *)(iVar5 + 0x24) = uVar10;
  local_2c = s_cState_TurnAction_0031501c;
  local_30 = iVar12;
  func_0010BEC4((int)(piVar3 + 600),5,&local_30);
  iVar12 = piVar3[0x25e];
  uVar13 = puVar2[0x1b];
  uVar11 = puVar2[0x1c];
  uVar14 = puVar2[0x1d];
  uVar8 = puVar2[5];
  uVar10 = puVar2[4];
  *(undefined4 *)(iVar12 + 0x28) = puVar2[0x1a];
  *(undefined4 *)(iVar12 + 0x2c) = uVar13;
  iVar12 = piVar3[0x25f];
  *(undefined4 *)(iVar12 + 0x28) = uVar11;
  *(undefined4 *)(iVar12 + 0x2c) = uVar14;
  iVar12 = piVar3[0x260];
  *(undefined4 *)(iVar12 + 0x28) = uVar10;
  *(undefined4 *)(iVar12 + 0x2c) = uVar8;
  func_00626FA4((int)piVar3,piVar3[0x261],0);
  func_004C03B8((int)piVar3,puRam00315030);
  piVar3[0x22e] = iRam00315034;
  return piVar3;
}

