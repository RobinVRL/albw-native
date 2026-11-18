#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BD474(int param_1);
extern float func_004BDB2C(undefined4 param_1,int param_2,float fparam_0);
extern int func_004BDEE8(int param_1);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004C173C(int *param_1,int param_2,undefined4 param_3);
extern int func_004C1820(int param_1,int param_2,int param_3,int *param_4,undefined8 param_5);
extern int func_00634834(int param_1,int param_2,undefined1 param_3);
extern int func_006354D0(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern undefined4 *DAT_004dc588;
extern int DAT_004dc58c;
extern int DAT_004dc590;
extern int DAT_004dc594;
extern int DAT_004dc598;
extern undefined4 *DAT_004dc5a8;
extern undefined4 *DAT_004dc5ac;
extern undefined *DAT_004dc5b0;
extern int DAT_004dc5b4;
extern int DAT_004dc9d8;
extern undefined4 *DAT_004dc9dc;
extern float DAT_004dca24;
extern char s_cState_EvAppearFlyLeaveEnd_004dc9a8[];
extern char s_cState_EvAppearFlyLeaveStart_004dc96c[];
extern char s_cState_EvAppearFlyLeaveWait_004dc98c[];
extern char s_cState_EvAppearFlyReturn_004dc938[];
extern char s_cState_EvAppearFlyThrough_004dc91c[];
extern char s_cState_EvAppearFlyWait_004dc954[];
extern char s_cState_EvAppearInit_004dc5fc[];
extern char s_cState_EventEnd_004dc5e0[];
extern char s_cState_Event_004dc5d0[];
extern char s_cState_FlyThrough_004dc9c4[];
extern char s_cState_Hide_004dc5f0[];
extern char s_cState_Wait_004dc5b8[];
extern char s_cState_Walk_004dc5c4[];

// USA 004DC1D8 <- EU 004DC1B0 (Ghidra, non-matching)
// GLOBAL DAT_004dc588 undefined4 *
// GLOBAL DAT_004dc58c int
// GLOBAL DAT_004dc590 int
// GLOBAL DAT_004dc594 int
// GLOBAL DAT_004dc598 int
// GLOBAL DAT_004dc5a8 undefined4 *
// GLOBAL DAT_004dc5ac undefined4 *
// GLOBAL DAT_004dc5b0 undefined *
// GLOBAL DAT_004dc5b4 int
// GLOBAL DAT_004dc9d8 int
// GLOBAL DAT_004dc9dc undefined4 *
// GLOBAL DAT_004dca24 float
// GLOBAL s_cState_EvAppearFlyLeaveEnd_004dc9a8 string
// GLOBAL s_cState_EvAppearFlyLeaveStart_004dc96c string
// GLOBAL s_cState_EvAppearFlyLeaveWait_004dc98c string
// GLOBAL s_cState_EvAppearFlyReturn_004dc938 string
// GLOBAL s_cState_EvAppearFlyThrough_004dc91c string
// GLOBAL s_cState_EvAppearFlyWait_004dc954 string
// GLOBAL s_cState_EvAppearInit_004dc5fc string
// GLOBAL s_cState_EventEnd_004dc5e0 string
// GLOBAL s_cState_Event_004dc5d0 string
// GLOBAL s_cState_FlyThrough_004dc9c4 string
// GLOBAL s_cState_Hide_004dc5f0 string
// GLOBAL s_cState_Wait_004dc5b8 string
// GLOBAL s_cState_Walk_004dc5c4 string

int * func_004DC1D8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  piVar4 = (int *)func_006354D0(param_1,param_2,0,0xff,DAT_004dc588);
  iVar5 = DAT_004dc590;
  iVar10 = DAT_004dc58c;
  piVar4[200] = DAT_004dc58c + 0xb8;
  *piVar4 = iVar10;
  piVar4[0x263] = 0;
  piVar4[0x264] = 0;
  piVar4[0x265] = 0;
  piVar4[0x266] = 0;
  piVar4[0x267] = iVar5;
  piVar4[0x268] = iVar5;
  piVar4[0x269] = iVar5;
  piVar4[0x26a] = 0;
  piVar4[0x26b] = iVar5;
  piVar4[0x26c] = iVar5;
  piVar4[0x26d] = 0;
  *(undefined2 *)(piVar4 + 0x26e) = 0;
  *(undefined1 *)((int)piVar4 + 0x9bd) = 0xff;
  *(undefined1 *)((int)piVar4 + 0x9be) = 0;
  *(undefined1 *)((int)piVar4 + 0x9bf) = 0;
  iVar10 = DAT_004dc594;
  *(char *)(piVar4 + 0x26f) = (char)*(ushort *)((int)piVar4 + 0x32);
  if ((*(ushort *)((int)piVar4 + 0x32) & 0xff) == 2) {
    func_004C1820((int)piVar4,5,DAT_004dc9d8,(int *)0x0,2);
    func_004C173C(piVar4,5,0);
  }
  else {
    func_004C1820((int)piVar4,9,DAT_004dc598,(int *)0x0,1);
    func_004C173C(piVar4,9,0);
  }
  piVar4[0x25d] = (int)piVar4;
  *(undefined1 *)((int)piVar4 + 0x966) = 0xd;
  iVar5 = func_0010BA78(0xd0);
  puVar3 = DAT_004dc5a8;
  piVar4[0x25e] = iVar5;
  piVar4[0x25f] = iVar5 + (uint)*(byte *)((int)piVar4 + 0x966) * 8;
  iVar8 = 0xd;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar13 = DAT_004dc5ac[0x3f];
    iVar8 = iVar8 + -1;
    puVar6[2] = DAT_004dc5ac[0x3e];
    puVar6[3] = uVar13;
    uVar13 = puVar3[1];
    puVar6[4] = *puVar3;
    puVar6[5] = uVar13;
    puVar6 = puVar6 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)piVar4 + 0x966);
  uVar12 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar3 = DAT_004dc5ac;
  piVar4[0x260] = (int)puVar6;
  if (uVar12 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar3[5];
      *puVar6 = puVar3[4];
      puVar6[1] = uVar13;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar12 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar13 = puVar3[5];
      puVar7[2] = puVar3[4];
      puVar7[3] = uVar13;
      uVar13 = puVar3[5];
      puVar7[4] = puVar3[4];
      puVar7[5] = uVar13;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x1dc,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 0xd;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_004dc5b0,0x24,0xd);
  }
  if (iVar5 != 0) {
    piVar4[0x25a] = 0xd;
    piVar4[0x25b] = iVar5;
  }
  iVar5 = DAT_004dc5b4;
  piVar4[0xd5] = (int)(piVar4 + 600);
  *(undefined2 *)(iVar5 + (int)piVar4) = 0xd;
  local_34 = s_cState_Wait_004dc5b8;
  local_38 = iVar10;
  func_0010BEC4((int)(piVar4 + 600),0,&local_38);
  puVar6 = (undefined4 *)piVar4[0x25e];
  uVar9 = *puVar3;
  uVar13 = puVar3[2];
  uVar14 = puVar3[3];
  uVar16 = *(undefined8 *)(puVar3 + 4);
  puVar6[1] = puVar3[1];
  *puVar6 = uVar9;
  puVar6 = (undefined4 *)piVar4[0x25f];
  *puVar6 = uVar13;
  puVar6[1] = uVar14;
  puVar6 = (undefined4 *)piVar4[0x260];
  *puVar6 = (int)uVar16;
  puVar6[1] = (int)((ulonglong)uVar16 >> 0x20);
  local_34 = s_cState_Walk_004dc5c4;
  local_38 = iVar10;
  func_0010BEC4((int)(piVar4 + 600),1,&local_38);
  iVar5 = piVar4[0x25e];
  uVar14 = puVar3[7];
  uVar13 = puVar3[8];
  uVar9 = puVar3[9];
  *(undefined4 *)(iVar5 + 8) = puVar3[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar14;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 8) = uVar13;
  *(undefined4 *)(iVar5 + 0xc) = uVar9;
  iVar5 = piVar4[0x260];
  *(int *)(iVar5 + 8) = (int)uVar16;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar16 >> 0x20);
  local_34 = s_cState_Event_004dc5d0;
  local_38 = iVar10;
  func_0010BEC4((int)(piVar4 + 600),2,&local_38);
  iVar5 = piVar4[0x25e];
  uVar9 = puVar3[0xb];
  uVar13 = puVar3[0xc];
  uVar14 = puVar3[0xd];
  *(undefined4 *)(iVar5 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x10) = uVar13;
  *(undefined4 *)(iVar5 + 0x14) = uVar14;
  iVar5 = piVar4[0x260];
  *(int *)(iVar5 + 0x10) = (int)uVar16;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar16 >> 0x20);
  local_34 = s_cState_EventEnd_004dc5e0;
  local_38 = iVar10;
  func_0010BEC4((int)(piVar4 + 600),3,&local_38);
  iVar5 = piVar4[0x25e];
  uVar9 = puVar3[0xf];
  uVar14 = puVar3[0x10];
  uVar15 = puVar3[0x11];
  uVar13 = puVar3[0x13];
  uVar11 = puVar3[0x12];
  *(undefined4 *)(iVar5 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar5 + 0x1c) = uVar9;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x18) = uVar14;
  *(undefined4 *)(iVar5 + 0x1c) = uVar15;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x18) = uVar11;
  *(undefined4 *)(iVar5 + 0x1c) = uVar13;
  local_34 = s_cState_Hide_004dc5f0;
  local_38 = iVar10;
  func_0010BEC4((int)(piVar4 + 600),4,&local_38);
  iVar5 = piVar4[0x25e];
  uVar13 = puVar3[0x15];
  uVar9 = puVar3[0x16];
  uVar14 = puVar3[0x17];
  uVar11 = puVar3[0x18];
  uVar15 = puVar3[0x19];
  *(undefined4 *)(iVar5 + 0x20) = puVar3[0x14];
  *(undefined4 *)(iVar5 + 0x24) = uVar13;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x20) = uVar9;
  *(undefined4 *)(iVar5 + 0x24) = uVar14;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x20) = uVar11;
  *(undefined4 *)(iVar5 + 0x24) = uVar15;
  local_34 = s_cState_EvAppearInit_004dc5fc;
  local_38 = iVar10;
  func_0010BEC4((int)(piVar4 + 600),5,&local_38);
  iVar5 = piVar4[0x25e];
  uVar13 = puVar3[0x1b];
  uVar9 = puVar3[0x1c];
  uVar14 = puVar3[0x1d];
  uVar11 = puVar3[0x1e];
  uVar15 = puVar3[0x1f];
  *(undefined4 *)(iVar5 + 0x28) = puVar3[0x1a];
  *(undefined4 *)(iVar5 + 0x2c) = uVar13;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x28) = uVar9;
  *(undefined4 *)(iVar5 + 0x2c) = uVar14;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x28) = uVar11;
  *(undefined4 *)(iVar5 + 0x2c) = uVar15;
  local_34 = s_cState_EvAppearFlyThrough_004dc91c;
  local_38 = iVar10;
  func_0010BEC4((int)(piVar4 + 600),6,&local_38);
  iVar5 = piVar4[0x25e];
  uVar14 = puVar3[0x21];
  uVar13 = puVar3[0x22];
  uVar9 = puVar3[0x23];
  uVar15 = puVar3[4];
  uVar11 = puVar3[5];
  *(undefined4 *)(iVar5 + 0x30) = puVar3[0x20];
  *(undefined4 *)(iVar5 + 0x34) = uVar14;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x30) = uVar13;
  *(undefined4 *)(iVar5 + 0x34) = uVar9;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x30) = uVar15;
  *(undefined4 *)(iVar5 + 0x34) = uVar11;
  local_34 = s_cState_EvAppearFlyReturn_004dc938;
  local_38 = iVar10;
  func_0010BEC4((int)(piVar4 + 600),7,&local_38);
  iVar5 = piVar4[0x25e];
  uVar13 = puVar3[0x25];
  uVar9 = puVar3[0x26];
  uVar14 = puVar3[0x27];
  *(undefined4 *)(iVar5 + 0x38) = puVar3[0x24];
  *(undefined4 *)(iVar5 + 0x3c) = uVar13;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x38) = uVar9;
  *(undefined4 *)(iVar5 + 0x3c) = uVar14;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x38) = uVar15;
  *(undefined4 *)(iVar5 + 0x3c) = uVar11;
  local_34 = s_cState_EvAppearFlyWait_004dc954;
  local_38 = iVar10;
  func_0010BEC4((int)(piVar4 + 600),8,&local_38);
  iVar5 = piVar4[0x25e];
  uVar13 = puVar3[0x29];
  uVar9 = puVar3[0x2a];
  uVar14 = puVar3[0x2b];
  uVar11 = puVar3[0x2c];
  uVar15 = puVar3[0x2d];
  *(undefined4 *)(iVar5 + 0x40) = puVar3[0x28];
  *(undefined4 *)(iVar5 + 0x44) = uVar13;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x40) = uVar9;
  *(undefined4 *)(iVar5 + 0x44) = uVar14;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x40) = uVar11;
  *(undefined4 *)(iVar5 + 0x44) = uVar15;
  local_34 = s_cState_EvAppearFlyLeaveStart_004dc96c;
  local_38 = iVar10;
  func_0010BEC4((int)(piVar4 + 600),9,&local_38);
  iVar5 = piVar4[0x25e];
  uVar15 = puVar3[4];
  uVar11 = puVar3[5];
  uVar13 = puVar3[0x30];
  uVar9 = puVar3[0x31];
  uVar14 = puVar3[0x2f];
  *(undefined4 *)(iVar5 + 0x48) = puVar3[0x2e];
  *(undefined4 *)(iVar5 + 0x4c) = uVar14;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x48) = uVar13;
  *(undefined4 *)(iVar5 + 0x4c) = uVar9;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x48) = uVar15;
  *(undefined4 *)(iVar5 + 0x4c) = uVar11;
  local_34 = s_cState_EvAppearFlyLeaveWait_004dc98c;
  local_38 = iVar10;
  func_0010BEC4((int)(piVar4 + 600),10,&local_38);
  iVar5 = piVar4[0x25e];
  uVar13 = puVar3[0x33];
  uVar9 = puVar3[0x34];
  uVar14 = puVar3[0x35];
  *(undefined4 *)(iVar5 + 0x50) = puVar3[0x32];
  *(undefined4 *)(iVar5 + 0x54) = uVar13;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x50) = uVar9;
  *(undefined4 *)(iVar5 + 0x54) = uVar14;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x50) = uVar15;
  *(undefined4 *)(iVar5 + 0x54) = uVar11;
  local_34 = s_cState_EvAppearFlyLeaveEnd_004dc9a8;
  local_38 = iVar10;
  func_0010BEC4((int)(piVar4 + 600),0xb,&local_38);
  iVar5 = piVar4[0x25e];
  uVar13 = puVar3[0x37];
  uVar9 = puVar3[0x38];
  uVar14 = puVar3[0x39];
  *(undefined4 *)(iVar5 + 0x58) = puVar3[0x36];
  *(undefined4 *)(iVar5 + 0x5c) = uVar13;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x58) = uVar9;
  *(undefined4 *)(iVar5 + 0x5c) = uVar14;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x58) = uVar15;
  *(undefined4 *)(iVar5 + 0x5c) = uVar11;
  local_34 = s_cState_FlyThrough_004dc9c4;
  local_38 = iVar10;
  func_0010BEC4((int)(piVar4 + 600),0xc,&local_38);
  iVar10 = piVar4[0x25e];
  uVar13 = puVar3[0x3b];
  uVar9 = puVar3[0x3c];
  uVar14 = puVar3[0x3d];
  *(undefined4 *)(iVar10 + 0x60) = puVar3[0x3a];
  *(undefined4 *)(iVar10 + 100) = uVar13;
  iVar10 = piVar4[0x25f];
  *(undefined4 *)(iVar10 + 0x60) = uVar9;
  *(undefined4 *)(iVar10 + 100) = uVar14;
  iVar10 = piVar4[0x260];
  *(undefined4 *)(iVar10 + 0x60) = uVar15;
  *(undefined4 *)(iVar10 + 100) = uVar11;
  cVar2 = (char)piVar4[0x26f];
  if (cVar2 == '\x01') {
    func_004BDEE8((int)piVar4);
    *(undefined1 *)((int)piVar4 + 0x855) = 6;
    *(undefined1 *)((int)piVar4 + 0x853) = 5;
    *(undefined1 *)(piVar4 + 0x215) = 5;
    piVar4[0x261] = 5;
    func_00634834((int)piVar4,5,0);
  }
  else {
    if (cVar2 == '\x02') {
      piVar4[0x22b] = piVar4[0x22b] & 0xfffffffe;
      *(undefined1 *)((int)piVar4 + 0x853) = 4;
    }
    else if (cVar2 == '\n') {
      func_004BD474((int)piVar4);
      func_00634834((int)piVar4,0,0);
      piVar4[0x261] = 0;
      goto LAB_004dc900;
    }
    func_00634834((int)piVar4,piVar4[0x261],0);
  }
LAB_004dc900:
  func_004C03B8((int)piVar4,DAT_004dc9dc);
  if ((char)piVar4[0x26f] == '\n') {
    func_004BDB2C(piVar4,piVar4[0x103],DAT_004dca24);
  }
  return piVar4;
}

