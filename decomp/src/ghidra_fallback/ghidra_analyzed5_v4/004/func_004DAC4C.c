#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_006339A0(int param_1,int param_2,undefined1 param_3);
extern int func_00634624(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_004db010;
extern int DAT_004db014;
extern int DAT_004db018;
extern int DAT_004db01c;
extern int *DAT_004db020;
extern int *DAT_004db024;
extern undefined DAT_004db028;
extern undefined4 DAT_004db038;
extern undefined4 *DAT_004db03c;
extern undefined *DAT_004db040;
extern int DAT_004db044;
extern undefined4 *DAT_004db168;
extern char s_cState_EventEnd_004db070[];
extern char s_cState_Event_004db060[];
extern char s_cState_Hide_004db080[];
extern char s_cState_Main_004db15c[];
extern char s_cState_Wait_004db048[];
extern char s_cState_Walk_004db054[];

// USA 004DAC4C <- EU 004DAC24 (Ghidra, non-matching)
// GLOBAL DAT_004db010 int
// GLOBAL DAT_004db014 int
// GLOBAL DAT_004db018 int
// GLOBAL DAT_004db01c int
// GLOBAL DAT_004db020 int *
// GLOBAL DAT_004db024 int *
// GLOBAL DAT_004db028 undefined
// GLOBAL DAT_004db038 undefined4
// GLOBAL DAT_004db03c undefined4 *
// GLOBAL DAT_004db040 undefined *
// GLOBAL DAT_004db044 int
// GLOBAL DAT_004db168 undefined4 *
// GLOBAL s_cState_EventEnd_004db070 string
// GLOBAL s_cState_Event_004db060 string
// GLOBAL s_cState_Hide_004db080 string
// GLOBAL s_cState_Main_004db15c string
// GLOBAL s_cState_Wait_004db048 string
// GLOBAL s_cState_Walk_004db054 string

int * func_004DAC4C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
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
  piVar4 = (int *)func_00634624(param_1,param_2,5,0xff,&local_38);
  iVar13 = DAT_004db010;
  *piVar4 = DAT_004db010;
  piVar4[200] = iVar13 + 0xb8;
  piVar4[0x263] = 4;
  iVar13 = DAT_004db014;
  piVar4[0x264] = 0;
  iVar7 = DAT_004db018;
  piVar4[0x265] = iVar13;
  piVar4[0x266] = iVar13;
  piVar4[0x267] = iVar13;
  piVar4[0x268] = 0;
  piVar4[0x269] = iVar13;
  piVar4[0x26a] = iVar13;
  piVar4[0x26b] = iVar13;
  piVar4[0x26c] = 0;
  *(undefined1 *)(piVar4 + 0x26d) = 0;
  *(undefined1 *)((int)piVar4 + 0x9b5) = 1;
  *(undefined1 *)((int)piVar4 + 0x9b6) = 0;
  *(undefined1 *)((int)piVar4 + 0x9b7) = 0;
  *(undefined2 *)(iVar7 + (int)piVar4) = 0;
  piVar4[0x26f] = 0;
  piVar4[0x270] = 0;
  bVar3 = func_00588BF0((int)piVar4,0);
  *(bool *)((int)piVar4 + 0x9b5) = !bVar3;
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  piVar2 = DAT_004db020;
  iVar13 = DAT_004db01c;
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)(*DAT_004db020 + 8))(DAT_004db020);
    local_3c = (char *)piVar2[1];
    local_40 = iVar13;
    puVar6 = func_0016A2FC(puVar5,1,&local_40,1);
  }
  piVar4[0x26f] = (int)puVar6;
  func_00169608((uint *)piVar4[0x26f],0,DAT_004db024,*(int *)(piVar4[0xb4] + 0x1c8));
  func_0016A02C(piVar4[0x26f],-1,(int *)0xffffffff,0);
  local_3c = &DAT_004db028;
  local_40 = iVar13;
  func_004BE114(piVar4,0xb,0,0,DAT_004db038);
  *(undefined1 *)((int)piVar4 + 0x966) = 6;
  piVar4[0x25d] = (int)piVar4;
  iVar7 = func_0010BA78(0x60);
  piVar4[0x25e] = iVar7;
  puVar6 = DAT_004db03c;
  piVar4[0x25f] = iVar7 + (uint)*(byte *)((int)piVar4 + 0x966) * 8;
  iVar9 = 6;
  puVar5 = (undefined4 *)(iVar7 + -8);
  do {
    uVar15 = puVar6[0x1f];
    iVar9 = iVar9 + -1;
    puVar5[2] = puVar6[0x1e];
    puVar5[3] = uVar15;
    uVar15 = puVar6[0x1f];
    puVar5[4] = puVar6[0x1e];
    puVar5[5] = uVar15;
    puVar5 = puVar5 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)piVar4 + 0x966);
  uVar14 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar14 << 3);
  piVar4[0x260] = (int)puVar5;
  if (uVar14 != 0) {
    puVar8 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = puVar6[5];
      *puVar5 = puVar6[4];
      puVar5[1] = uVar15;
      puVar8 = puVar5;
    }
    for (iVar7 = (int)uVar14 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar15 = puVar6[5];
      puVar8[2] = puVar6[4];
      puVar8[3] = uVar15;
      uVar15 = puVar6[5];
      puVar8[4] = puVar6[4];
      puVar8[5] = uVar15;
      puVar8 = puVar8 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 6;
    iVar7 = func_00100118((int)(puVar5 + 2),DAT_004db040,0x24,6);
  }
  if (iVar7 != 0) {
    piVar4[0x25a] = 6;
    piVar4[0x25b] = iVar7;
  }
  iVar7 = DAT_004db044;
  piVar4[0xd5] = (int)(piVar4 + 600);
  *(undefined2 *)(iVar7 + (int)piVar4) = 6;
  local_3c = s_cState_Wait_004db048;
  local_40 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),0,&local_40);
  puVar5 = (undefined4 *)piVar4[0x25e];
  uVar10 = puVar6[1];
  uVar15 = puVar6[2];
  uVar11 = puVar6[3];
  uVar17 = *(undefined8 *)(puVar6 + 4);
  *puVar5 = *puVar6;
  puVar5[1] = uVar10;
  puVar5 = (undefined4 *)piVar4[0x25f];
  *puVar5 = uVar15;
  puVar5[1] = uVar11;
  puVar5 = (undefined4 *)piVar4[0x260];
  *puVar5 = (int)uVar17;
  puVar5[1] = (int)((ulonglong)uVar17 >> 0x20);
  local_3c = s_cState_Walk_004db054;
  local_40 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),1,&local_40);
  iVar7 = piVar4[0x25e];
  uVar15 = puVar6[7];
  uVar10 = puVar6[8];
  uVar11 = puVar6[9];
  *(undefined4 *)(iVar7 + 8) = puVar6[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar15;
  iVar7 = piVar4[0x25f];
  *(undefined4 *)(iVar7 + 8) = uVar10;
  *(undefined4 *)(iVar7 + 0xc) = uVar11;
  iVar7 = piVar4[0x260];
  *(int *)(iVar7 + 8) = (int)uVar17;
  *(int *)(iVar7 + 0xc) = (int)((ulonglong)uVar17 >> 0x20);
  local_3c = s_cState_Event_004db060;
  local_40 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),2,&local_40);
  iVar7 = piVar4[0x25e];
  uVar15 = puVar6[0xc];
  uVar11 = puVar6[0xd];
  uVar10 = puVar6[0xb];
  *(undefined4 *)(iVar7 + 0x10) = puVar6[10];
  *(undefined4 *)(iVar7 + 0x14) = uVar10;
  iVar7 = piVar4[0x25f];
  *(undefined4 *)(iVar7 + 0x10) = uVar15;
  *(undefined4 *)(iVar7 + 0x14) = uVar11;
  iVar7 = piVar4[0x260];
  *(int *)(iVar7 + 0x10) = (int)uVar17;
  *(int *)(iVar7 + 0x14) = (int)((ulonglong)uVar17 >> 0x20);
  local_3c = s_cState_EventEnd_004db070;
  local_40 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),3,&local_40);
  iVar7 = piVar4[0x25e];
  uVar16 = puVar6[0xf];
  uVar11 = puVar6[0x10];
  uVar12 = puVar6[0x11];
  uVar15 = puVar6[0x13];
  uVar10 = puVar6[0x12];
  *(undefined4 *)(iVar7 + 0x18) = puVar6[0xe];
  *(undefined4 *)(iVar7 + 0x1c) = uVar16;
  iVar7 = piVar4[0x25f];
  *(undefined4 *)(iVar7 + 0x18) = uVar11;
  *(undefined4 *)(iVar7 + 0x1c) = uVar12;
  iVar7 = piVar4[0x260];
  *(undefined4 *)(iVar7 + 0x18) = uVar10;
  *(undefined4 *)(iVar7 + 0x1c) = uVar15;
  local_3c = s_cState_Hide_004db080;
  local_40 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),4,&local_40);
  iVar7 = piVar4[0x25e];
  uVar15 = puVar6[0x15];
  uVar10 = puVar6[0x16];
  uVar11 = puVar6[0x17];
  uVar12 = puVar6[0x18];
  uVar16 = puVar6[0x19];
  *(undefined4 *)(iVar7 + 0x20) = puVar6[0x14];
  *(undefined4 *)(iVar7 + 0x24) = uVar15;
  iVar7 = piVar4[0x25f];
  *(undefined4 *)(iVar7 + 0x20) = uVar10;
  *(undefined4 *)(iVar7 + 0x24) = uVar11;
  iVar7 = piVar4[0x260];
  *(undefined4 *)(iVar7 + 0x20) = uVar12;
  *(undefined4 *)(iVar7 + 0x24) = uVar16;
  local_3c = s_cState_Main_004db15c;
  local_40 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),5,&local_40);
  iVar13 = piVar4[0x25e];
  uVar16 = puVar6[0x1b];
  uVar15 = puVar6[0x1c];
  uVar10 = puVar6[0x1d];
  uVar11 = puVar6[4];
  uVar12 = puVar6[5];
  *(undefined4 *)(iVar13 + 0x28) = puVar6[0x1a];
  *(undefined4 *)(iVar13 + 0x2c) = uVar16;
  iVar13 = piVar4[0x25f];
  *(undefined4 *)(iVar13 + 0x28) = uVar15;
  *(undefined4 *)(iVar13 + 0x2c) = uVar10;
  iVar13 = piVar4[0x260];
  *(undefined4 *)(iVar13 + 0x28) = uVar11;
  *(undefined4 *)(iVar13 + 0x2c) = uVar12;
  func_006339A0((int)piVar4,piVar4[0x261],0);
  puVar6 = DAT_004db168;
  piVar4[0x22b] = piVar4[0x22b] | 4;
  func_004C03B8((int)piVar4,puVar6);
  func_004BC8D8((int)piVar4);
  return piVar4;
}

