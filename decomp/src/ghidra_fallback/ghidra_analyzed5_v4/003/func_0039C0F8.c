#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0039BFEC(int *param_1);
extern int func_004BC8D8(int param_1);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00630BA8(int param_1,int param_2,undefined1 param_3);
extern int func_00631A20(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_0039c4f8;
extern undefined4 *DAT_0039c4fc;
extern undefined *DAT_0039c500;
extern int DAT_0039c504;
extern int DAT_0039c514;
extern int *DAT_0039c55c;
extern undefined4 *DAT_0039c560;
extern int *DAT_0039c564;
extern undefined4 *DAT_0039c568;
extern int *DAT_0039c56c;
extern undefined4 *DAT_0039c570;
extern char s_cState_EventEnd_0039c534[];
extern char s_cState_Event_0039c524[];
extern char s_cState_Hide_0039c544[];
extern char s_cState_Main_0039c550[];
extern char s_cState_Wait_0039c508[];
extern char s_cState_Walk_0039c518[];

// USA 0039C0F8 <- EU 0039C0D4 (Ghidra, non-matching)
// GLOBAL DAT_0039c4f8 int
// GLOBAL DAT_0039c4fc undefined4 *
// GLOBAL DAT_0039c500 undefined *
// GLOBAL DAT_0039c504 int
// GLOBAL DAT_0039c514 int
// GLOBAL DAT_0039c55c int *
// GLOBAL DAT_0039c560 undefined4 *
// GLOBAL DAT_0039c564 int *
// GLOBAL DAT_0039c568 undefined4 *
// GLOBAL DAT_0039c56c int *
// GLOBAL DAT_0039c570 undefined4 *
// GLOBAL s_cState_EventEnd_0039c534 string
// GLOBAL s_cState_Event_0039c524 string
// GLOBAL s_cState_Hide_0039c544 string
// GLOBAL s_cState_Main_0039c550 string
// GLOBAL s_cState_Wait_0039c508 string
// GLOBAL s_cState_Walk_0039c518 string

int * func_0039C0F8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
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
  piVar4 = (int *)func_00631A20(param_1,param_2,0,0xff,&local_38);
  iVar5 = DAT_0039c4f8;
  piVar4[200] = DAT_0039c4f8 + 0xbc;
  *piVar4 = iVar5;
  bVar3 = func_00588BF0((int)piVar4,0);
  if (bVar3) {
    *(undefined1 *)((int)piVar4 + 0x2d7) = 1;
  }
  else {
    func_0039BFEC(piVar4);
    piVar4[0x25d] = (int)piVar4;
    *(undefined1 *)((int)piVar4 + 0x966) = 6;
    iVar5 = func_0010BA78(0x60);
    puVar2 = DAT_0039c4fc;
    piVar4[0x25e] = iVar5;
    piVar4[0x25f] = iVar5 + (uint)*(byte *)((int)piVar4 + 0x966) * 8;
    iVar8 = 6;
    puVar6 = (undefined4 *)(iVar5 + -8);
    do {
      uVar14 = puVar2[0x1f];
      iVar8 = iVar8 + -1;
      puVar6[2] = puVar2[0x1e];
      puVar6[3] = uVar14;
      uVar14 = puVar2[0x1f];
      puVar6[4] = puVar2[0x1e];
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
        uVar14 = puVar2[5];
        *puVar6 = puVar2[4];
        puVar6[1] = uVar14;
        puVar7 = puVar6;
      }
      for (iVar5 = (int)uVar12 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar14 = puVar2[5];
        puVar7[2] = puVar2[4];
        puVar7[3] = uVar14;
        uVar14 = puVar2[5];
        puVar7[4] = puVar2[4];
        puVar7[5] = uVar14;
        puVar7 = puVar7 + 4;
      }
    }
    puVar6 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
    iVar5 = 0;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0x24;
      puVar6[1] = 6;
      iVar5 = func_00100118((int)(puVar6 + 2),DAT_0039c500,0x24,6);
    }
    if (iVar5 != 0) {
      piVar4[0x25a] = 6;
      piVar4[0x25b] = iVar5;
    }
    iVar5 = DAT_0039c504;
    piVar4[0xd5] = (int)(piVar4 + 600);
    iVar8 = DAT_0039c514;
    *(undefined2 *)(iVar5 + (int)piVar4) = 6;
    local_3c = s_cState_Wait_0039c508;
    local_40 = iVar8;
    func_0010BEC4((int)(piVar4 + 600),0,&local_40);
    puVar6 = (undefined4 *)piVar4[0x25e];
    uVar9 = puVar2[1];
    uVar14 = puVar2[2];
    uVar10 = puVar2[3];
    uVar15 = *(undefined8 *)(puVar2 + 4);
    *puVar6 = *puVar2;
    puVar6[1] = uVar9;
    puVar6 = (undefined4 *)piVar4[0x25f];
    *puVar6 = uVar14;
    puVar6[1] = uVar10;
    puVar6 = (undefined4 *)piVar4[0x260];
    *puVar6 = (int)uVar15;
    puVar6[1] = (int)((ulonglong)uVar15 >> 0x20);
    local_3c = s_cState_Walk_0039c518;
    local_40 = iVar8;
    func_0010BEC4((int)(piVar4 + 600),1,&local_40);
    iVar5 = piVar4[0x25e];
    uVar14 = puVar2[7];
    uVar10 = puVar2[8];
    uVar9 = puVar2[9];
    *(undefined4 *)(iVar5 + 8) = puVar2[6];
    *(undefined4 *)(iVar5 + 0xc) = uVar14;
    iVar5 = piVar4[0x25f];
    *(undefined4 *)(iVar5 + 8) = uVar10;
    *(undefined4 *)(iVar5 + 0xc) = uVar9;
    iVar5 = piVar4[0x260];
    *(int *)(iVar5 + 8) = (int)uVar15;
    *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar15 >> 0x20);
    local_3c = s_cState_Event_0039c524;
    local_40 = iVar8;
    func_0010BEC4((int)(piVar4 + 600),2,&local_40);
    iVar5 = piVar4[0x25e];
    uVar14 = puVar2[0xb];
    uVar9 = puVar2[0xc];
    uVar10 = puVar2[0xd];
    *(undefined4 *)(iVar5 + 0x10) = puVar2[10];
    *(undefined4 *)(iVar5 + 0x14) = uVar14;
    iVar5 = piVar4[0x25f];
    *(undefined4 *)(iVar5 + 0x10) = uVar9;
    *(undefined4 *)(iVar5 + 0x14) = uVar10;
    iVar5 = piVar4[0x260];
    *(int *)(iVar5 + 0x10) = (int)uVar15;
    *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar15 >> 0x20);
    local_3c = s_cState_EventEnd_0039c534;
    local_40 = iVar8;
    func_0010BEC4((int)(piVar4 + 600),3,&local_40);
    iVar5 = piVar4[0x25e];
    uVar14 = puVar2[0xf];
    uVar11 = puVar2[0x10];
    uVar13 = puVar2[0x11];
    uVar9 = puVar2[0x13];
    uVar10 = puVar2[0x12];
    *(undefined4 *)(iVar5 + 0x18) = puVar2[0xe];
    *(undefined4 *)(iVar5 + 0x1c) = uVar14;
    iVar5 = piVar4[0x25f];
    *(undefined4 *)(iVar5 + 0x18) = uVar11;
    *(undefined4 *)(iVar5 + 0x1c) = uVar13;
    iVar5 = piVar4[0x260];
    *(undefined4 *)(iVar5 + 0x18) = uVar10;
    *(undefined4 *)(iVar5 + 0x1c) = uVar9;
    local_3c = s_cState_Hide_0039c544;
    local_40 = iVar8;
    func_0010BEC4((int)(piVar4 + 600),4,&local_40);
    iVar5 = piVar4[0x25e];
    uVar14 = puVar2[0x17];
    uVar13 = puVar2[0x15];
    uVar10 = puVar2[0x16];
    uVar9 = puVar2[0x18];
    uVar11 = puVar2[0x19];
    *(undefined4 *)(iVar5 + 0x20) = puVar2[0x14];
    *(undefined4 *)(iVar5 + 0x24) = uVar13;
    iVar5 = piVar4[0x25f];
    *(undefined4 *)(iVar5 + 0x20) = uVar10;
    *(undefined4 *)(iVar5 + 0x24) = uVar14;
    iVar5 = piVar4[0x260];
    *(undefined4 *)(iVar5 + 0x20) = uVar9;
    *(undefined4 *)(iVar5 + 0x24) = uVar11;
    local_3c = s_cState_Main_0039c550;
    local_40 = iVar8;
    func_0010BEC4((int)(piVar4 + 600),5,&local_40);
    iVar5 = piVar4[0x25e];
    uVar10 = puVar2[0x1b];
    uVar13 = puVar2[0x1c];
    uVar14 = puVar2[5];
    uVar9 = puVar2[0x1d];
    uVar11 = puVar2[4];
    *(undefined4 *)(iVar5 + 0x28) = puVar2[0x1a];
    *(undefined4 *)(iVar5 + 0x2c) = uVar10;
    iVar5 = piVar4[0x25f];
    *(undefined4 *)(iVar5 + 0x28) = uVar13;
    *(undefined4 *)(iVar5 + 0x2c) = uVar9;
    iVar5 = piVar4[0x260];
    *(undefined4 *)(iVar5 + 0x28) = uVar11;
    *(undefined4 *)(iVar5 + 0x2c) = uVar14;
    func_00630BA8((int)piVar4,piVar4[0x261],0);
    iVar5 = func_00588BE4((int)piVar4);
    if (iVar5 == *DAT_0039c55c) {
      func_004C03B8((int)piVar4,DAT_0039c560);
    }
    iVar5 = func_00588BE4((int)piVar4);
    if (iVar5 == *DAT_0039c564) {
      func_004C03B8((int)piVar4,DAT_0039c568);
    }
    iVar5 = func_00588BE4((int)piVar4);
    if (iVar5 == *DAT_0039c56c) {
      func_004C03B8((int)piVar4,DAT_0039c570);
    }
    piVar4[0x22b] = piVar4[0x22b] | 0x20;
    func_004BC8D8((int)piVar4);
  }
  return piVar4;
}

