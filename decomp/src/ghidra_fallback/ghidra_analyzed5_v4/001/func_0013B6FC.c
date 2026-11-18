#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004C081C(int param_1,int param_2,int param_3,int *param_4,int param_5,undefined4 param_6);
extern int func_004CF478(int param_1,int param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0060B6E8(int param_1,int param_2,undefined1 param_3);
extern int func_0060C36C(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_0013bb44;
extern int DAT_0013bb48;
extern undefined DAT_0013bb4c;
extern int DAT_0013bb54;
extern undefined4 *DAT_0013bb58;
extern undefined *DAT_0013bb5c;
extern int DAT_0013bb60;
extern undefined4 *DAT_0013bbbc;
extern char s_cState_ClimberWait_0013bba8[];
extern char s_cState_EventEnd_0013bb8c[];
extern char s_cState_Event_0013bb7c[];
extern char s_cState_Hide_0013bb9c[];
extern char s_cState_Wait_0013bb64[];
extern char s_cState_Walk_0013bb70[];

// USA 0013B6FC <- EU 0013B6FC (Ghidra, non-matching)
// GLOBAL DAT_0013bb44 int
// GLOBAL DAT_0013bb48 int
// GLOBAL DAT_0013bb4c undefined
// GLOBAL DAT_0013bb54 int
// GLOBAL DAT_0013bb58 undefined4 *
// GLOBAL DAT_0013bb5c undefined *
// GLOBAL DAT_0013bb60 int
// GLOBAL DAT_0013bbbc undefined4 *
// GLOBAL s_cState_ClimberWait_0013bba8 string
// GLOBAL s_cState_EventEnd_0013bb8c string
// GLOBAL s_cState_Event_0013bb7c string
// GLOBAL s_cState_Hide_0013bb9c string
// GLOBAL s_cState_Wait_0013bb64 string
// GLOBAL s_cState_Walk_0013bb70 string

int * func_0013B6FC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(char * *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined1 *)(albw_frame + 0x1c))
  #define local_33 (*(undefined1 *)(albw_frame + 0x1d))
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_34 = 0;
  local_33 = 1;
  piVar4 = (int *)func_0060C36C(param_1,param_2,5,0xff,&local_40);
  iVar11 = DAT_0013bb44;
  *piVar4 = DAT_0013bb44;
  *(undefined1 *)((int)piVar4 + 0x989) = 0;
  piVar4[200] = iVar11 + 0xb8;
  piVar4[0x263] = 3;
  piVar4[0x264] = 0;
  bVar3 = func_00588BF0((int)piVar4,0);
  if (bVar3) {
    *(undefined1 *)((int)piVar4 + 0x989) = 1;
  }
  iVar11 = DAT_0013bb48;
  if (*(short *)((int)param_2 + 0x2a) == 1) {
    *(undefined1 *)((int)piVar4 + 0x989) = 3;
  }
  func_004C081C((int)piVar4,0xf,iVar11,(int *)0x0,1,0);
  iVar11 = DAT_0013bb54;
  local_44 = &DAT_0013bb4c;
  local_48 = DAT_0013bb54;
  func_004BE114(piVar4,0xf,0,0,0);
  piVar4[0x25d] = (int)piVar4;
  *(undefined1 *)((int)piVar4 + 0x966) = 6;
  iVar5 = func_0010BA78(0x60);
  puVar2 = DAT_0013bb58;
  piVar4[0x25e] = iVar5;
  piVar4[0x25f] = iVar5 + (uint)*(byte *)((int)piVar4 + 0x966) * 8;
  iVar6 = 6;
  puVar7 = (undefined4 *)(iVar5 + -8);
  do {
    uVar13 = puVar2[0x1f];
    iVar6 = iVar6 + -1;
    puVar7[2] = puVar2[0x1e];
    puVar7[3] = uVar13;
    uVar13 = puVar2[0x1f];
    puVar7[4] = puVar2[0x1e];
    puVar7[5] = uVar13;
    puVar7 = puVar7 + 4;
  } while (iVar6 != 0);
  bVar1 = *(byte *)((int)piVar4 + 0x966);
  uVar12 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar12 << 3);
  piVar4[0x260] = (int)puVar7;
  if (uVar12 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar2[5];
      *puVar7 = puVar2[4];
      puVar7[1] = uVar13;
      puVar8 = puVar7;
    }
    for (iVar5 = (int)uVar12 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar13 = puVar2[5];
      puVar8[2] = puVar2[4];
      puVar8[3] = uVar13;
      uVar13 = puVar2[5];
      puVar8[4] = puVar2[4];
      puVar8[5] = uVar13;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar5 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 6;
    iVar5 = func_00100118((int)(puVar7 + 2),DAT_0013bb5c,0x24,6);
  }
  if (iVar5 != 0) {
    piVar4[0x25a] = 6;
    piVar4[0x25b] = iVar5;
  }
  iVar5 = DAT_0013bb60;
  piVar4[0xd5] = (int)(piVar4 + 600);
  *(undefined2 *)(iVar5 + (int)piVar4) = 6;
  local_44 = s_cState_Wait_0013bb64;
  local_48 = iVar11;
  func_0010BEC4((int)(piVar4 + 600),0,&local_48);
  puVar7 = (undefined4 *)piVar4[0x25e];
  uVar9 = puVar2[2];
  uVar13 = *puVar2;
  uVar10 = puVar2[3];
  uVar15 = puVar2[4];
  uVar14 = puVar2[5];
  puVar7[1] = puVar2[1];
  *puVar7 = uVar13;
  puVar7 = (undefined4 *)piVar4[0x25f];
  *puVar7 = uVar9;
  puVar7[1] = uVar10;
  puVar7 = (undefined4 *)piVar4[0x260];
  *puVar7 = uVar15;
  puVar7[1] = uVar14;
  local_44 = s_cState_Walk_0013bb70;
  local_48 = iVar11;
  func_0010BEC4((int)(piVar4 + 600),1,&local_48);
  iVar5 = piVar4[0x25e];
  uVar13 = puVar2[7];
  uVar9 = puVar2[8];
  uVar10 = puVar2[9];
  *(undefined4 *)(iVar5 + 8) = puVar2[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar13;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 8) = uVar9;
  *(undefined4 *)(iVar5 + 0xc) = uVar10;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 8) = uVar15;
  *(undefined4 *)(iVar5 + 0xc) = uVar14;
  local_44 = s_cState_Event_0013bb7c;
  local_48 = iVar11;
  func_0010BEC4((int)(piVar4 + 600),2,&local_48);
  iVar5 = piVar4[0x25e];
  uVar13 = puVar2[0xc];
  uVar10 = puVar2[0xd];
  uVar9 = puVar2[0xb];
  *(undefined4 *)(iVar5 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x10) = uVar13;
  *(undefined4 *)(iVar5 + 0x14) = uVar10;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x10) = uVar15;
  *(undefined4 *)(iVar5 + 0x14) = uVar14;
  local_44 = s_cState_EventEnd_0013bb8c;
  local_48 = iVar11;
  func_0010BEC4((int)(piVar4 + 600),3,&local_48);
  iVar5 = piVar4[0x25e];
  uVar13 = puVar2[0xf];
  uVar9 = puVar2[0x12];
  uVar15 = puVar2[0x13];
  uVar10 = puVar2[0x10];
  uVar14 = puVar2[0x11];
  *(undefined4 *)(iVar5 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar5 + 0x1c) = uVar13;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x18) = uVar10;
  *(undefined4 *)(iVar5 + 0x1c) = uVar14;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x18) = uVar9;
  *(undefined4 *)(iVar5 + 0x1c) = uVar15;
  local_44 = s_cState_Hide_0013bb9c;
  local_48 = iVar11;
  func_0010BEC4((int)(piVar4 + 600),4,&local_48);
  iVar5 = piVar4[0x25e];
  uVar13 = puVar2[0x15];
  uVar9 = puVar2[0x16];
  uVar10 = puVar2[0x17];
  uVar14 = puVar2[0x18];
  uVar15 = puVar2[0x19];
  *(undefined4 *)(iVar5 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar5 + 0x24) = uVar13;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x20) = uVar9;
  *(undefined4 *)(iVar5 + 0x24) = uVar10;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x20) = uVar14;
  *(undefined4 *)(iVar5 + 0x24) = uVar15;
  local_44 = s_cState_ClimberWait_0013bba8;
  local_48 = iVar11;
  func_0010BEC4((int)(piVar4 + 600),5,&local_48);
  iVar11 = piVar4[0x25e];
  uVar9 = puVar2[0x1b];
  uVar10 = puVar2[0x1c];
  uVar14 = puVar2[0x1d];
  uVar13 = puVar2[4];
  uVar15 = puVar2[5];
  *(undefined4 *)(iVar11 + 0x28) = puVar2[0x1a];
  *(undefined4 *)(iVar11 + 0x2c) = uVar9;
  iVar11 = piVar4[0x25f];
  *(undefined4 *)(iVar11 + 0x28) = uVar10;
  *(undefined4 *)(iVar11 + 0x2c) = uVar14;
  iVar11 = piVar4[0x260];
  *(undefined4 *)(iVar11 + 0x28) = uVar13;
  *(undefined4 *)(iVar11 + 0x2c) = uVar15;
  func_0060B6E8((int)piVar4,piVar4[0x261],0);
  uVar12 = piVar4[0x22b];
  piVar4[0x22b] = uVar12 | 0x8410;
  if (*(char *)((int)piVar4 + 0x989) == '\x03') {
    piVar4[0x22b] = (uVar12 | 0x8410) & 0xffffffef | 0x20;
  }
  func_004C03B8((int)piVar4,DAT_0013bbbc);
  *(undefined1 *)((int)piVar4 + 0x919) = 1;
  if (piVar4[0x1e9] != 0) {
    func_004CF478(piVar4[0x1e9],0);
  }
  func_004BC8D8((int)piVar4);
  return piVar4;
}

