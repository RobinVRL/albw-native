#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010FD28(uint *param_1,undefined4 param_2);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004BC7BC(int param_1);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004BFF4C(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_00521028(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int func_0062440C(int param_1,int param_2,undefined1 param_3);
extern int func_00625040(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern undefined4 *DAT_0030f5dc;
extern int DAT_0030f5e0;
extern float DAT_0030f5e4;
extern int DAT_0030f5e8;
extern int DAT_0030f5ec;
extern undefined DAT_0030f5f0;
extern int DAT_0030f600;
extern undefined4 DAT_0030f604;
extern undefined4 *DAT_0030f608;
extern undefined *DAT_0030f60c;
extern int DAT_0030f610;
extern int *DAT_0030f760;
extern undefined4 *DAT_0030f764;
extern char s_cState_CheckPlayer_0030f658[];
extern char s_cState_EventEnd_0030f63c[];
extern char s_cState_Event_0030f62c[];
extern char s_cState_Hide_0030f64c[];
extern char s_cState_Wait_0030f614[];
extern char s_cState_Walk_0030f620[];

// USA 0030F21C <- EU 0030F1F8 (Ghidra, non-matching)
// GLOBAL DAT_0030f5dc undefined4 *
// GLOBAL DAT_0030f5e0 int
// GLOBAL DAT_0030f5e4 float
// GLOBAL DAT_0030f5e8 int
// GLOBAL DAT_0030f5ec int
// GLOBAL DAT_0030f5f0 undefined
// GLOBAL DAT_0030f600 int
// GLOBAL DAT_0030f604 undefined4
// GLOBAL DAT_0030f608 undefined4 *
// GLOBAL DAT_0030f60c undefined *
// GLOBAL DAT_0030f610 int
// GLOBAL DAT_0030f760 int *
// GLOBAL DAT_0030f764 undefined4 *
// GLOBAL s_cState_CheckPlayer_0030f658 string
// GLOBAL s_cState_EventEnd_0030f63c string
// GLOBAL s_cState_Event_0030f62c string
// GLOBAL s_cState_Hide_0030f64c string
// GLOBAL s_cState_Wait_0030f614 string
// GLOBAL s_cState_Walk_0030f620 string

int * func_0030F21C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  float fparam_0;
  undefined4 uVar15;
  undefined4 uVar17;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(char * *)(albw_frame + 0xc))
  #define auStack_50 ((undefined4 *)(albw_frame + 0x10))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  piVar4 = (int *)func_00625040(param_1,param_2,5,0xff,DAT_0030f5dc);
  iVar14 = DAT_0030f5e0;
  *piVar4 = DAT_0030f5e0;
  piVar4[200] = iVar14 + 0xb8;
  piVar4[0x263] = 0;
  func_0010FD28((uint *)(piVar4 + 0x268),iVar14 + 0xb8);
  iVar14 = DAT_0030f5e8;
  fparam_0 = DAT_0030f5e4;
  piVar4[0x26c] = (int)ALBW_AS_U32(DAT_0030f5e4);
  *(undefined2 *)(iVar14 + (int)piVar4) = 0;
  *(undefined1 *)((int)piVar4 + 0x9ba) = 0;
  *(undefined1 *)((int)piVar4 + 0x9bb) = 0xff;
  *(undefined1 *)(piVar4 + 0x26f) = 0;
  *(undefined1 *)((int)piVar4 + 0x9bd) = 1;
  *(undefined1 *)((int)piVar4 + 0x9be) = 0;
  iVar14 = DAT_0030f5ec;
  piVar4[0x270] = 0;
  func_004BFF4C((int)piVar4,2,iVar14,1,fparam_0);
  iVar14 = DAT_0030f600;
  *(float *)(*(int *)(piVar4[0x1ed] + 0x14) + 0x10) = fparam_0;
  local_54 = &DAT_0030f5f0;
  local_58 = iVar14;
  func_004BE114(piVar4,4,0,0,DAT_0030f604);
  *(undefined1 *)((int)piVar4 + 0x966) = 7;
  piVar4[0x25d] = (int)piVar4;
  iVar5 = func_0010BA78(0x70);
  piVar4[0x25e] = iVar5;
  puVar2 = DAT_0030f608;
  piVar4[0x25f] = iVar5 + (uint)*(byte *)((int)piVar4 + 0x966) * 8;
  iVar9 = 7;
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
  bVar1 = *(byte *)((int)piVar4 + 0x966);
  uVar12 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar12 << 3);
  piVar4[0x260] = (int)puVar6;
  if (uVar12 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar2[5];
      *puVar6 = puVar2[4];
      puVar6[1] = uVar13;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar12 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar13 = puVar2[5];
      puVar7[2] = puVar2[4];
      puVar7[3] = uVar13;
      uVar13 = puVar2[5];
      puVar7[4] = puVar2[4];
      puVar7[5] = uVar13;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 7;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_0030f60c,0x24,7);
  }
  if (iVar5 != 0) {
    piVar4[0x25a] = 7;
    piVar4[0x25b] = iVar5;
  }
  iVar5 = DAT_0030f610;
  piVar4[0xd5] = (int)(piVar4 + 600);
  *(undefined2 *)(iVar5 + (int)piVar4) = 7;
  local_54 = s_cState_Wait_0030f614;
  local_58 = iVar14;
  func_0010BEC4((int)(piVar4 + 600),0,&local_58);
  puVar6 = (undefined4 *)piVar4[0x25e];
  uVar13 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  uVar17 = puVar2[4];
  uVar15 = puVar2[5];
  *puVar6 = *puVar2;
  puVar6[1] = uVar13;
  puVar6 = (undefined4 *)piVar4[0x25f];
  *puVar6 = uVar10;
  puVar6[1] = uVar11;
  puVar6 = (undefined4 *)piVar4[0x260];
  *puVar6 = uVar17;
  puVar6[1] = uVar15;
  local_54 = s_cState_Walk_0030f620;
  local_58 = iVar14;
  func_0010BEC4((int)(piVar4 + 600),1,&local_58);
  iVar5 = piVar4[0x25e];
  uVar13 = puVar2[9];
  uVar10 = puVar2[8];
  uVar11 = puVar2[7];
  *(undefined4 *)(iVar5 + 8) = puVar2[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar11;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 8) = uVar10;
  *(undefined4 *)(iVar5 + 0xc) = uVar13;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 8) = uVar17;
  *(undefined4 *)(iVar5 + 0xc) = uVar15;
  local_54 = s_cState_Event_0030f62c;
  local_58 = iVar14;
  func_0010BEC4((int)(piVar4 + 600),2,&local_58);
  iVar5 = piVar4[0x25e];
  uVar10 = puVar2[0xb];
  uVar11 = puVar2[0xc];
  uVar13 = puVar2[0xd];
  *(undefined4 *)(iVar5 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar10;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x10) = uVar11;
  *(undefined4 *)(iVar5 + 0x14) = uVar13;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x10) = uVar17;
  *(undefined4 *)(iVar5 + 0x14) = uVar15;
  local_54 = s_cState_EventEnd_0030f63c;
  local_58 = iVar14;
  func_0010BEC4((int)(piVar4 + 600),3,&local_58);
  iVar5 = piVar4[0x25e];
  uVar15 = puVar2[0xf];
  uVar10 = puVar2[0x10];
  uVar17 = puVar2[0x11];
  uVar13 = puVar2[0x13];
  uVar11 = puVar2[0x12];
  *(undefined4 *)(iVar5 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar5 + 0x1c) = uVar15;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x18) = uVar10;
  *(undefined4 *)(iVar5 + 0x1c) = uVar17;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x18) = uVar11;
  *(undefined4 *)(iVar5 + 0x1c) = uVar13;
  local_54 = s_cState_Hide_0030f64c;
  local_58 = iVar14;
  func_0010BEC4((int)(piVar4 + 600),6,&local_58);
  iVar5 = piVar4[0x25e];
  uVar13 = puVar2[0x17];
  uVar15 = puVar2[0x18];
  uVar17 = puVar2[0x19];
  uVar10 = puVar2[0x16];
  uVar11 = puVar2[0x15];
  *(undefined4 *)(iVar5 + 0x30) = puVar2[0x14];
  *(undefined4 *)(iVar5 + 0x34) = uVar11;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x30) = uVar10;
  *(undefined4 *)(iVar5 + 0x34) = uVar13;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x30) = uVar15;
  *(undefined4 *)(iVar5 + 0x34) = uVar17;
  local_54 = s_cState_CheckPlayer_0030f658;
  local_58 = iVar14;
  func_0010BEC4((int)(piVar4 + 600),5,&local_58);
  iVar5 = piVar4[0x25e];
  uVar13 = puVar2[0x1b];
  uVar10 = puVar2[0x1c];
  uVar11 = puVar2[0x1d];
  uVar16 = *(undefined8 *)(puVar2 + 4);
  *(undefined4 *)(iVar5 + 0x28) = puVar2[0x1a];
  *(undefined4 *)(iVar5 + 0x2c) = uVar13;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x28) = uVar10;
  *(undefined4 *)(iVar5 + 0x2c) = uVar11;
  iVar5 = piVar4[0x260];
  *(int *)(iVar5 + 0x28) = (int)uVar16;
  *(int *)(iVar5 + 0x2c) = (int)((ulonglong)uVar16 >> 0x20);
  local_54 = s_cState_Hide_0030f64c;
  local_58 = iVar14;
  func_0010BEC4((int)(piVar4 + 600),6,&local_58);
  iVar14 = piVar4[0x25e];
  uVar10 = puVar2[0x15];
  uVar13 = puVar2[0x16];
  uVar11 = puVar2[0x17];
  *(undefined4 *)(iVar14 + 0x30) = puVar2[0x14];
  *(undefined4 *)(iVar14 + 0x34) = uVar10;
  iVar14 = piVar4[0x25f];
  *(undefined4 *)(iVar14 + 0x30) = uVar13;
  *(undefined4 *)(iVar14 + 0x34) = uVar11;
  iVar14 = piVar4[0x260];
  *(int *)(iVar14 + 0x30) = (int)uVar16;
  *(int *)(iVar14 + 0x34) = (int)((ulonglong)uVar16 >> 0x20);
  bVar3 = func_00584B94(*DAT_0030f760,0x3b4);
  if (bVar3) {
    piVar4[0x261] = 6;
  }
  func_0062440C((int)piVar4,piVar4[0x261],0);
  piVar8 = (int *)func_00521028((int)piVar4);
  (**(code **)(*piVar8 + 8))(piVar8);
  func_003529A0(auStack_50,piVar8[1],piVar4 + 200);
  local_38 = 0;
  func_002C41BC(piVar4 + 200,auStack_50,0);
  func_004C03B8((int)piVar4,DAT_0030f764);
  func_004BC7BC((int)piVar4);
  func_004BC8D8((int)piVar4);
  piVar4[0x22b] = piVar4[0x22b] & 0xfffffff7U | 0x40;
  return piVar4;
}

