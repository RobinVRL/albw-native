#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_006218EC(int param_1,int param_2,undefined1 param_3);
extern int func_00622570(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_00285f60;
extern int *DAT_00285f64;
extern int DAT_00285f68;
extern undefined DAT_00285f6c;
extern int DAT_00285f78;
extern undefined4 DAT_00285f7c;
extern undefined *DAT_00285f80;
extern int DAT_00285f84;
extern undefined4 *DAT_00285fcc;
extern char s_cState_EventEnd_00285fb0[];
extern char s_cState_Event_00285fa0[];
extern char s_cState_Hide_00285fc0[];
extern char s_cState_Wait_00285f88[];
extern char s_cState_Walk_00285f94[];

// USA 00285BA4 <- EU 00285BCC (Ghidra, non-matching)
// GLOBAL DAT_00285f60 int
// GLOBAL DAT_00285f64 int *
// GLOBAL DAT_00285f68 int
// GLOBAL DAT_00285f6c undefined
// GLOBAL DAT_00285f78 int
// GLOBAL DAT_00285f7c undefined4
// GLOBAL DAT_00285f80 undefined *
// GLOBAL DAT_00285f84 int
// GLOBAL DAT_00285fcc undefined4 *
// GLOBAL s_cState_EventEnd_00285fb0 string
// GLOBAL s_cState_Event_00285fa0 string
// GLOBAL s_cState_Hide_00285fc0 string
// GLOBAL s_cState_Wait_00285f88 string
// GLOBAL s_cState_Walk_00285f94 string

int * func_00285BA4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
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
  piVar3 = (int *)func_00622570(param_1,param_2,0,0xff,&local_38);
  piVar2 = DAT_00285f64;
  iVar7 = DAT_00285f60;
  piVar3[200] = DAT_00285f60 + 0xb8;
  *piVar3 = iVar7;
  iVar7 = DAT_00285f78;
  iVar9 = piVar2[1];
  piVar3[0x265] = *piVar2;
  piVar3[0x266] = iVar9;
  piVar3[0x263] = DAT_00285f68;
  piVar3[0x264] = (int)piVar3;
  *(undefined1 *)(piVar3 + 0x267) = 0;
  local_3c = &DAT_00285f6c;
  local_40 = iVar7;
  func_004BE114(piVar3,4,0,0,DAT_00285f7c);
  *(undefined1 *)((int)piVar3 + 0x966) = 5;
  piVar3[0x25d] = (int)piVar3;
  iVar9 = func_0010BA78(0x50);
  piVar3[0x25e] = iVar9;
  piVar3[0x25f] = iVar9 + (uint)*(byte *)((int)piVar3 + 0x966) * 8;
  iVar8 = 5;
  piVar4 = (int *)(iVar9 + -8);
  do {
    iVar9 = piVar2[0x1d];
    iVar8 = iVar8 + -1;
    piVar4[2] = piVar2[0x1c];
    piVar4[3] = iVar9;
    iVar9 = piVar2[0x1d];
    piVar4[4] = piVar2[0x1c];
    piVar4[5] = iVar9;
    piVar4 = piVar4 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)piVar3 + 0x966);
  uVar11 = (uint)bVar1;
  piVar4 = (int *)func_0010BA78(uVar11 << 3);
  piVar3[0x260] = (int)piVar4;
  if (uVar11 != 0) {
    piVar5 = piVar4 + -2;
    if ((bVar1 & 1) != 0) {
      iVar9 = piVar2[7];
      *piVar4 = piVar2[6];
      piVar4[1] = iVar9;
      piVar5 = piVar4;
    }
    for (iVar9 = (int)uVar11 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      iVar8 = piVar2[7];
      piVar5[2] = piVar2[6];
      piVar5[3] = iVar8;
      iVar8 = piVar2[7];
      piVar5[4] = piVar2[6];
      piVar5[5] = iVar8;
      piVar5 = piVar5 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar9 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 5;
    iVar9 = func_00100118((int)(puVar6 + 2),DAT_00285f80,0x24,5);
  }
  if (iVar9 != 0) {
    piVar3[0x25a] = 5;
    piVar3[0x25b] = iVar9;
  }
  iVar9 = DAT_00285f84;
  piVar3[0xd5] = (int)(piVar3 + 600);
  *(undefined2 *)(iVar9 + (int)piVar3) = 5;
  local_3c = s_cState_Wait_00285f88;
  local_40 = iVar7;
  func_0010BEC4((int)(piVar3 + 600),0,&local_40);
  piVar4 = (int *)piVar3[0x25e];
  iVar8 = piVar2[2];
  iVar9 = piVar2[4];
  iVar10 = piVar2[5];
  uVar15 = *(undefined8 *)(piVar2 + 6);
  piVar4[1] = piVar2[3];
  *piVar4 = iVar8;
  piVar4 = (int *)piVar3[0x25f];
  *piVar4 = iVar9;
  piVar4[1] = iVar10;
  puVar6 = (undefined4 *)piVar3[0x260];
  *puVar6 = (int)uVar15;
  puVar6[1] = (int)((ulonglong)uVar15 >> 0x20);
  local_3c = s_cState_Walk_00285f94;
  local_40 = iVar7;
  func_0010BEC4((int)(piVar3 + 600),1,&local_40);
  iVar13 = piVar3[0x25e];
  iVar8 = piVar2[9];
  iVar9 = piVar2[10];
  iVar10 = piVar2[0xb];
  *(int *)(iVar13 + 8) = piVar2[8];
  *(int *)(iVar13 + 0xc) = iVar8;
  iVar8 = piVar3[0x25f];
  *(int *)(iVar8 + 8) = iVar9;
  *(int *)(iVar8 + 0xc) = iVar10;
  iVar9 = piVar3[0x260];
  *(int *)(iVar9 + 8) = (int)uVar15;
  *(int *)(iVar9 + 0xc) = (int)((ulonglong)uVar15 >> 0x20);
  local_3c = s_cState_Event_00285fa0;
  local_40 = iVar7;
  func_0010BEC4((int)(piVar3 + 600),2,&local_40);
  iVar13 = piVar3[0x25e];
  iVar9 = piVar2[0xd];
  iVar10 = piVar2[0xe];
  iVar8 = piVar2[0xf];
  *(int *)(iVar13 + 0x10) = piVar2[0xc];
  *(int *)(iVar13 + 0x14) = iVar9;
  iVar9 = piVar3[0x25f];
  *(int *)(iVar9 + 0x10) = iVar10;
  *(int *)(iVar9 + 0x14) = iVar8;
  iVar9 = piVar3[0x260];
  *(int *)(iVar9 + 0x10) = (int)uVar15;
  *(int *)(iVar9 + 0x14) = (int)((ulonglong)uVar15 >> 0x20);
  local_3c = s_cState_EventEnd_00285fb0;
  local_40 = iVar7;
  func_0010BEC4((int)(piVar3 + 600),3,&local_40);
  iVar12 = piVar3[0x25e];
  iVar9 = piVar2[0x12];
  iVar8 = piVar2[0x13];
  iVar14 = piVar2[0x14];
  iVar10 = piVar2[0x11];
  iVar13 = piVar2[0x15];
  *(int *)(iVar12 + 0x18) = piVar2[0x10];
  *(int *)(iVar12 + 0x1c) = iVar10;
  iVar10 = piVar3[0x25f];
  *(int *)(iVar10 + 0x18) = iVar9;
  *(int *)(iVar10 + 0x1c) = iVar8;
  iVar9 = piVar3[0x260];
  *(int *)(iVar9 + 0x18) = iVar14;
  *(int *)(iVar9 + 0x1c) = iVar13;
  local_3c = s_cState_Hide_00285fc0;
  local_40 = iVar7;
  func_0010BEC4((int)(piVar3 + 600),4,&local_40);
  iVar9 = piVar2[0x19];
  iVar10 = piVar2[0x18];
  iVar8 = piVar3[0x25e];
  iVar12 = piVar2[0x17];
  iVar7 = piVar2[0x1a];
  iVar13 = piVar2[0x1b];
  *(int *)(iVar8 + 0x20) = piVar2[0x16];
  *(int *)(iVar8 + 0x24) = iVar12;
  iVar8 = piVar3[0x25f];
  *(int *)(iVar8 + 0x20) = iVar10;
  *(int *)(iVar8 + 0x24) = iVar9;
  iVar9 = piVar3[0x260];
  *(int *)(iVar9 + 0x20) = iVar7;
  *(int *)(iVar9 + 0x24) = iVar13;
  func_006218EC((int)piVar3,piVar3[0x261],0);
  func_004C03B8((int)piVar3,DAT_00285fcc);
  func_004BC8D8((int)piVar3);
  return piVar3;
}

