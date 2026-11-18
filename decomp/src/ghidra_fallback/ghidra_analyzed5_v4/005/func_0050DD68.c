#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_006383A4(int param_1,int param_2,undefined1 param_3);
extern int func_00639028(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_0050e100;
extern undefined DAT_0050e104;
extern int DAT_0050e110;
extern undefined4 DAT_0050e114;
extern undefined4 *DAT_0050e118;
extern undefined *DAT_0050e11c;
extern int DAT_0050e120;
extern undefined4 *DAT_0050e1b8;
extern char s_cState_EventEnd_0050e14c[];
extern char s_cState_Event_0050e13c[];
extern char s_cState_Hide_0050e15c[];
extern char s_cState_Sample_0050e168[];
extern char s_cState_Wait_0050e124[];
extern char s_cState_Walk_0050e130[];

// USA 0050DD68 <- EU 0050DD40 (Ghidra, non-matching)
// GLOBAL DAT_0050e100 int
// GLOBAL DAT_0050e104 undefined
// GLOBAL DAT_0050e110 int
// GLOBAL DAT_0050e114 undefined4
// GLOBAL DAT_0050e118 undefined4 *
// GLOBAL DAT_0050e11c undefined *
// GLOBAL DAT_0050e120 int
// GLOBAL DAT_0050e1b8 undefined4 *
// GLOBAL s_cState_EventEnd_0050e14c string
// GLOBAL s_cState_Event_0050e13c string
// GLOBAL s_cState_Hide_0050e15c string
// GLOBAL s_cState_Sample_0050e168 string
// GLOBAL s_cState_Wait_0050e124 string
// GLOBAL s_cState_Walk_0050e130 string

int * func_0050DD68(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  int *piVar5;
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
  undefined8 uVar16;
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
  piVar5 = (int *)func_00639028(param_1,param_2,0,0xff,&local_38);
  iVar2 = DAT_0050e110;
  iVar6 = DAT_0050e100;
  piVar5[200] = DAT_0050e100 + 0xb8;
  *piVar5 = iVar6;
  local_3c = &DAT_0050e104;
  local_40 = iVar2;
  func_004BE114(piVar5,4,0,0,DAT_0050e114);
  *(undefined1 *)((int)piVar5 + 0x966) = 6;
  piVar5[0x25d] = (int)piVar5;
  iVar6 = func_0010BA78(0x60);
  piVar5[0x25e] = iVar6;
  puVar3 = DAT_0050e118;
  piVar5[0x25f] = iVar6 + (uint)*(byte *)((int)piVar5 + 0x966) * 8;
  iVar9 = 6;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar14 = puVar3[0x1f];
    iVar9 = iVar9 + -1;
    puVar7[2] = puVar3[0x1e];
    puVar7[3] = uVar14;
    uVar14 = puVar3[0x1f];
    puVar7[4] = puVar3[0x1e];
    puVar7[5] = uVar14;
    puVar7 = puVar7 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)piVar5 + 0x966);
  uVar13 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar13 << 3);
  piVar5[0x260] = (int)puVar7;
  if (uVar13 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar14 = puVar3[5];
      *puVar7 = puVar3[4];
      puVar7[1] = uVar14;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar13 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar14 = puVar3[5];
      puVar8[2] = puVar3[4];
      puVar8[3] = uVar14;
      uVar14 = puVar3[5];
      puVar8[4] = puVar3[4];
      puVar8[5] = uVar14;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 6;
    iVar6 = func_00100118((int)(puVar7 + 2),DAT_0050e11c,0x24,6);
  }
  if (iVar6 != 0) {
    piVar5[0x25a] = 6;
    piVar5[0x25b] = iVar6;
  }
  iVar6 = DAT_0050e120;
  piVar5[0xd5] = (int)(piVar5 + 600);
  *(undefined2 *)(iVar6 + (int)piVar5) = 6;
  local_3c = s_cState_Wait_0050e124;
  local_40 = iVar2;
  func_0010BEC4((int)(piVar5 + 600),0,&local_40);
  puVar7 = (undefined4 *)piVar5[0x25e];
  uVar10 = puVar3[1];
  uVar14 = puVar3[2];
  uVar11 = puVar3[3];
  uVar16 = *(undefined8 *)(puVar3 + 4);
  *puVar7 = *puVar3;
  puVar7[1] = uVar10;
  puVar7 = (undefined4 *)piVar5[0x25f];
  *puVar7 = uVar14;
  puVar7[1] = uVar11;
  puVar7 = (undefined4 *)piVar5[0x260];
  *puVar7 = (int)uVar16;
  puVar7[1] = (int)((ulonglong)uVar16 >> 0x20);
  local_3c = s_cState_Walk_0050e130;
  local_40 = iVar2;
  func_0010BEC4((int)(piVar5 + 600),1,&local_40);
  iVar6 = piVar5[0x25e];
  uVar14 = puVar3[7];
  uVar10 = puVar3[8];
  uVar11 = puVar3[9];
  *(undefined4 *)(iVar6 + 8) = puVar3[6];
  *(undefined4 *)(iVar6 + 0xc) = uVar14;
  iVar6 = piVar5[0x25f];
  *(undefined4 *)(iVar6 + 8) = uVar10;
  *(undefined4 *)(iVar6 + 0xc) = uVar11;
  iVar6 = piVar5[0x260];
  *(int *)(iVar6 + 8) = (int)uVar16;
  *(int *)(iVar6 + 0xc) = (int)((ulonglong)uVar16 >> 0x20);
  local_3c = s_cState_Event_0050e13c;
  local_40 = iVar2;
  func_0010BEC4((int)(piVar5 + 600),2,&local_40);
  iVar6 = piVar5[0x25e];
  uVar11 = puVar3[0xb];
  uVar14 = puVar3[0xd];
  uVar10 = puVar3[0xc];
  *(undefined4 *)(iVar6 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar6 + 0x14) = uVar11;
  iVar6 = piVar5[0x25f];
  *(undefined4 *)(iVar6 + 0x10) = uVar10;
  *(undefined4 *)(iVar6 + 0x14) = uVar14;
  iVar6 = piVar5[0x260];
  *(int *)(iVar6 + 0x10) = (int)uVar16;
  *(int *)(iVar6 + 0x14) = (int)((ulonglong)uVar16 >> 0x20);
  local_3c = s_cState_EventEnd_0050e14c;
  local_40 = iVar2;
  func_0010BEC4((int)(piVar5 + 600),3,&local_40);
  iVar6 = piVar5[0x25e];
  uVar12 = puVar3[0xf];
  uVar14 = puVar3[0x12];
  uVar15 = puVar3[0x13];
  uVar10 = puVar3[0x10];
  uVar11 = puVar3[0x11];
  *(undefined4 *)(iVar6 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar6 + 0x1c) = uVar12;
  iVar6 = piVar5[0x25f];
  *(undefined4 *)(iVar6 + 0x18) = uVar10;
  *(undefined4 *)(iVar6 + 0x1c) = uVar11;
  iVar6 = piVar5[0x260];
  *(undefined4 *)(iVar6 + 0x18) = uVar14;
  *(undefined4 *)(iVar6 + 0x1c) = uVar15;
  local_3c = s_cState_Hide_0050e15c;
  local_40 = iVar2;
  func_0010BEC4((int)(piVar5 + 600),4,&local_40);
  iVar6 = piVar5[0x25e];
  uVar15 = puVar3[0x15];
  uVar14 = puVar3[0x17];
  uVar10 = puVar3[0x18];
  uVar11 = puVar3[0x19];
  uVar12 = puVar3[0x16];
  *(undefined4 *)(iVar6 + 0x20) = puVar3[0x14];
  *(undefined4 *)(iVar6 + 0x24) = uVar15;
  iVar6 = piVar5[0x25f];
  *(undefined4 *)(iVar6 + 0x20) = uVar12;
  *(undefined4 *)(iVar6 + 0x24) = uVar14;
  iVar6 = piVar5[0x260];
  *(undefined4 *)(iVar6 + 0x20) = uVar10;
  *(undefined4 *)(iVar6 + 0x24) = uVar11;
  local_3c = s_cState_Sample_0050e168;
  local_40 = iVar2;
  func_0010BEC4((int)(piVar5 + 600),5,&local_40);
  iVar6 = piVar5[0x25e];
  uVar14 = puVar3[4];
  uVar12 = puVar3[5];
  uVar10 = puVar3[0x1c];
  uVar15 = puVar3[0x1d];
  uVar11 = puVar3[0x1b];
  *(undefined4 *)(iVar6 + 0x28) = puVar3[0x1a];
  *(undefined4 *)(iVar6 + 0x2c) = uVar11;
  iVar6 = piVar5[0x25f];
  *(undefined4 *)(iVar6 + 0x28) = uVar10;
  *(undefined4 *)(iVar6 + 0x2c) = uVar15;
  iVar6 = piVar5[0x260];
  *(undefined4 *)(iVar6 + 0x28) = uVar14;
  *(undefined4 *)(iVar6 + 0x2c) = uVar12;
  bVar4 = func_00588BF0((int)piVar5,0);
  if (bVar4) {
    piVar5[0x261] = 5;
    func_006383A4((int)piVar5,5,0);
  }
  else {
    func_006383A4((int)piVar5,0,0);
  }
  func_004C03B8((int)piVar5,DAT_0050e1b8);
  piVar5[0x22b] = piVar5[0x22b] | 0x400;
  func_004BC8D8((int)piVar5);
  return piVar5;
}

