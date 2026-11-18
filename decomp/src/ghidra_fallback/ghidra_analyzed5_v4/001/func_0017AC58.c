#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_00588BE4(int param_1);
extern int func_0060D3F8(int param_1,int param_2,undefined1 param_3);
extern int func_0060E270(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_0017b1bc;
extern int *DAT_0017b1c0;
extern int DAT_0017b1c4;
extern undefined4 DAT_0017b1c8;
extern undefined4 DAT_0017b1cc;
extern int *DAT_0017b1d0;
extern undefined4 DAT_0017b1d4;
extern undefined4 DAT_0017b1d8;
extern undefined4 *DAT_0017b1dc;
extern undefined *DAT_0017b1e0;
extern int DAT_0017b1e4;
extern undefined4 *DAT_0017b270;
extern undefined4 *DAT_0017b274;
extern char s_cState_EndBGM_0017b260[];
extern char s_cState_EventEnd_0017b210[];
extern char s_cState_Event_0017b200[];
extern char s_cState_Hide_0017b220[];
extern char s_cState_PlayAnim_0017b240[];
extern char s_cState_PlayBGM_0017b250[];
extern char s_cState_PlaySetup_0017b22c[];
extern char s_cState_Wait_0017b1e8[];
extern char s_cState_Walk_0017b1f4[];

// USA 0017AC58 <- EU 0017AC58 (Ghidra, non-matching)
// GLOBAL DAT_0017b1bc int
// GLOBAL DAT_0017b1c0 int *
// GLOBAL DAT_0017b1c4 int
// GLOBAL DAT_0017b1c8 undefined4
// GLOBAL DAT_0017b1cc undefined4
// GLOBAL DAT_0017b1d0 int *
// GLOBAL DAT_0017b1d4 undefined4
// GLOBAL DAT_0017b1d8 undefined4
// GLOBAL DAT_0017b1dc undefined4 *
// GLOBAL DAT_0017b1e0 undefined *
// GLOBAL DAT_0017b1e4 int
// GLOBAL DAT_0017b270 undefined4 *
// GLOBAL DAT_0017b274 undefined4 *
// GLOBAL s_cState_EndBGM_0017b260 string
// GLOBAL s_cState_EventEnd_0017b210 string
// GLOBAL s_cState_Event_0017b200 string
// GLOBAL s_cState_Hide_0017b220 string
// GLOBAL s_cState_PlayAnim_0017b240 string
// GLOBAL s_cState_PlayBGM_0017b250 string
// GLOBAL s_cState_PlaySetup_0017b22c string
// GLOBAL s_cState_Wait_0017b1e8 string
// GLOBAL s_cState_Walk_0017b1f4 string

int * func_0017AC58(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(char * *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(undefined1 *)(albw_frame + 0x2c))
  #define local_33 (*(undefined1 *)(albw_frame + 0x2d))
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_34 = 0;
  local_33 = 1;
  piVar4 = (int *)func_0060E270(param_1,param_2,0,0xff,&local_40);
  iVar13 = DAT_0017b1bc;
  iVar7 = DAT_0017b1bc + 0xbc;
  piVar4[0x263] = 0;
  piVar4[200] = iVar7;
  *piVar4 = iVar13;
  *(undefined1 *)(piVar4 + 0x264) = 0;
  piVar4[0x265] = 0;
  piVar4[0x266] = 0;
  piVar4[0x267] = 0;
  *(undefined1 *)(piVar4 + 0x268) = 0;
  iVar7 = func_00588BE4((int)piVar4);
  iVar13 = DAT_0017b1c4;
  piVar2 = DAT_0017b1c0;
  if (iVar7 == *DAT_0017b1c0) {
    func_004BE114(piVar4,5,0,0,DAT_0017b1cc);
  }
  iVar7 = func_00588BE4((int)piVar4);
  if (iVar7 == *DAT_0017b1d0) {
    func_004BE114(piVar4,3,0,0,DAT_0017b1d8);
  }
  piVar4[0x25d] = (int)piVar4;
  *(undefined1 *)((int)piVar4 + 0x966) = 9;
  iVar7 = func_0010BA78(0x90);
  puVar3 = DAT_0017b1dc;
  piVar4[0x25e] = iVar7;
  piVar4[0x25f] = iVar7 + (uint)*(byte *)((int)piVar4 + 0x966) * 8;
  iVar8 = 9;
  puVar5 = (undefined4 *)(iVar7 + -8);
  do {
    uVar11 = puVar3[0x2b];
    iVar8 = iVar8 + -1;
    puVar5[2] = puVar3[0x2a];
    puVar5[3] = uVar11;
    uVar11 = puVar3[0x2b];
    puVar5[4] = puVar3[0x2a];
    puVar5[5] = uVar11;
    puVar5 = puVar5 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)piVar4 + 0x966);
  uVar10 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar10 << 3);
  piVar4[0x260] = (int)puVar5;
  if (uVar10 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = puVar3[5];
      *puVar5 = puVar3[4];
      puVar5[1] = uVar11;
      puVar6 = puVar5;
    }
    for (iVar7 = (int)uVar10 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar11 = puVar3[5];
      puVar6[2] = puVar3[4];
      puVar6[3] = uVar11;
      uVar11 = puVar3[5];
      puVar6[4] = puVar3[4];
      puVar6[5] = uVar11;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
  iVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 9;
    iVar7 = func_00100118((int)(puVar5 + 2),DAT_0017b1e0,0x24,9);
  }
  if (iVar7 != 0) {
    piVar4[0x25a] = 9;
    piVar4[0x25b] = iVar7;
  }
  iVar7 = DAT_0017b1e4;
  piVar4[0xd5] = (int)(piVar4 + 600);
  *(undefined2 *)(iVar7 + (int)piVar4) = 9;
  local_54 = s_cState_Wait_0017b1e8;
  local_58 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),0,&local_58);
  puVar5 = (undefined4 *)piVar4[0x25e];
  uVar9 = *puVar3;
  uVar11 = puVar3[2];
  uVar12 = puVar3[3];
  uVar16 = *(undefined8 *)(puVar3 + 4);
  puVar5[1] = puVar3[1];
  *puVar5 = uVar9;
  puVar5 = (undefined4 *)piVar4[0x25f];
  *puVar5 = uVar11;
  puVar5[1] = uVar12;
  puVar5 = (undefined4 *)piVar4[0x260];
  *puVar5 = (int)uVar16;
  puVar5[1] = (int)((ulonglong)uVar16 >> 0x20);
  local_54 = s_cState_Walk_0017b1f4;
  local_58 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),1,&local_58);
  iVar7 = piVar4[0x25e];
  uVar9 = puVar3[7];
  uVar11 = puVar3[8];
  uVar12 = puVar3[9];
  *(undefined4 *)(iVar7 + 8) = puVar3[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar9;
  iVar7 = piVar4[0x25f];
  *(undefined4 *)(iVar7 + 8) = uVar11;
  *(undefined4 *)(iVar7 + 0xc) = uVar12;
  iVar7 = piVar4[0x260];
  *(int *)(iVar7 + 8) = (int)uVar16;
  *(int *)(iVar7 + 0xc) = (int)((ulonglong)uVar16 >> 0x20);
  local_54 = s_cState_Event_0017b200;
  local_58 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),2,&local_58);
  iVar7 = piVar4[0x25e];
  uVar9 = puVar3[0xb];
  uVar11 = puVar3[0xc];
  uVar12 = puVar3[0xd];
  *(undefined4 *)(iVar7 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar7 + 0x14) = uVar9;
  iVar7 = piVar4[0x25f];
  *(undefined4 *)(iVar7 + 0x10) = uVar11;
  *(undefined4 *)(iVar7 + 0x14) = uVar12;
  iVar7 = piVar4[0x260];
  *(int *)(iVar7 + 0x10) = (int)uVar16;
  *(int *)(iVar7 + 0x14) = (int)((ulonglong)uVar16 >> 0x20);
  local_54 = s_cState_EventEnd_0017b210;
  local_58 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),3,&local_58);
  iVar7 = piVar4[0x25e];
  uVar11 = puVar3[0xf];
  uVar9 = puVar3[0x10];
  uVar12 = puVar3[0x11];
  uVar14 = puVar3[0x12];
  uVar15 = puVar3[0x13];
  *(undefined4 *)(iVar7 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar7 + 0x1c) = uVar11;
  iVar7 = piVar4[0x25f];
  *(undefined4 *)(iVar7 + 0x18) = uVar9;
  *(undefined4 *)(iVar7 + 0x1c) = uVar12;
  iVar7 = piVar4[0x260];
  *(undefined4 *)(iVar7 + 0x18) = uVar14;
  *(undefined4 *)(iVar7 + 0x1c) = uVar15;
  local_54 = s_cState_Hide_0017b220;
  local_58 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),4,&local_58);
  iVar7 = piVar4[0x25e];
  uVar9 = puVar3[0x15];
  uVar11 = puVar3[0x17];
  uVar15 = puVar3[0x16];
  uVar12 = puVar3[0x18];
  uVar14 = puVar3[0x19];
  *(undefined4 *)(iVar7 + 0x20) = puVar3[0x14];
  *(undefined4 *)(iVar7 + 0x24) = uVar9;
  iVar7 = piVar4[0x25f];
  *(undefined4 *)(iVar7 + 0x20) = uVar15;
  *(undefined4 *)(iVar7 + 0x24) = uVar11;
  iVar7 = piVar4[0x260];
  *(undefined4 *)(iVar7 + 0x20) = uVar12;
  *(undefined4 *)(iVar7 + 0x24) = uVar14;
  local_54 = s_cState_PlaySetup_0017b22c;
  local_58 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),5,&local_58);
  iVar7 = piVar4[0x25e];
  uVar12 = puVar3[0x1b];
  uVar11 = puVar3[0x1c];
  uVar9 = puVar3[0x1d];
  uVar16 = *(undefined8 *)(puVar3 + 4);
  *(undefined4 *)(iVar7 + 0x28) = puVar3[0x1a];
  *(undefined4 *)(iVar7 + 0x2c) = uVar12;
  iVar7 = piVar4[0x25f];
  *(undefined4 *)(iVar7 + 0x28) = uVar11;
  *(undefined4 *)(iVar7 + 0x2c) = uVar9;
  iVar7 = piVar4[0x260];
  *(int *)(iVar7 + 0x28) = (int)uVar16;
  *(int *)(iVar7 + 0x2c) = (int)((ulonglong)uVar16 >> 0x20);
  local_54 = s_cState_PlayAnim_0017b240;
  local_58 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),6,&local_58);
  iVar7 = piVar4[0x25e];
  uVar12 = puVar3[0x1f];
  uVar11 = puVar3[0x21];
  uVar9 = puVar3[0x20];
  *(undefined4 *)(iVar7 + 0x30) = puVar3[0x1e];
  *(undefined4 *)(iVar7 + 0x34) = uVar12;
  iVar7 = piVar4[0x25f];
  *(undefined4 *)(iVar7 + 0x30) = uVar9;
  *(undefined4 *)(iVar7 + 0x34) = uVar11;
  iVar7 = piVar4[0x260];
  *(int *)(iVar7 + 0x30) = (int)uVar16;
  *(int *)(iVar7 + 0x34) = (int)((ulonglong)uVar16 >> 0x20);
  local_54 = s_cState_PlayBGM_0017b250;
  local_58 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),7,&local_58);
  iVar7 = piVar4[0x25e];
  uVar11 = puVar3[0x23];
  uVar12 = puVar3[0x24];
  uVar9 = puVar3[0x25];
  *(undefined4 *)(iVar7 + 0x38) = puVar3[0x22];
  *(undefined4 *)(iVar7 + 0x3c) = uVar11;
  iVar7 = piVar4[0x25f];
  *(undefined4 *)(iVar7 + 0x38) = uVar12;
  *(undefined4 *)(iVar7 + 0x3c) = uVar9;
  iVar7 = piVar4[0x260];
  *(int *)(iVar7 + 0x38) = (int)uVar16;
  *(int *)(iVar7 + 0x3c) = (int)((ulonglong)uVar16 >> 0x20);
  local_54 = s_cState_EndBGM_0017b260;
  local_58 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),8,&local_58);
  iVar13 = piVar4[0x25e];
  uVar11 = puVar3[0x27];
  uVar9 = puVar3[0x28];
  uVar12 = puVar3[0x29];
  *(undefined4 *)(iVar13 + 0x40) = puVar3[0x26];
  *(undefined4 *)(iVar13 + 0x44) = uVar11;
  iVar13 = piVar4[0x25f];
  *(undefined4 *)(iVar13 + 0x40) = uVar9;
  *(undefined4 *)(iVar13 + 0x44) = uVar12;
  iVar13 = piVar4[0x260];
  *(int *)(iVar13 + 0x40) = (int)uVar16;
  *(int *)(iVar13 + 0x44) = (int)((ulonglong)uVar16 >> 0x20);
  func_0060D3F8((int)piVar4,piVar4[0x261],0);
  iVar13 = func_00588BE4((int)piVar4);
  if (iVar13 == *piVar2) {
    func_004C03B8((int)piVar4,DAT_0017b270);
  }
  iVar13 = func_00588BE4((int)piVar4);
  if (iVar13 == *DAT_0017b1d0) {
    func_004C03B8((int)piVar4,DAT_0017b274);
  }
  piVar4[0x22b] = piVar4[0x22b] | 0x10;
  func_004BC8D8((int)piVar4);
  return piVar4;
}

