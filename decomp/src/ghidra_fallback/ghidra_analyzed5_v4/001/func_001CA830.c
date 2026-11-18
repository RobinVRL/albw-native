#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_00547B20(int param_1);
extern int func_00615A90(int param_1,int param_2,undefined1 param_3);
extern int func_00616714(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_001cabc4;
extern undefined DAT_001cabc8;
extern int DAT_001cabd4;
extern undefined4 DAT_001cabd8;
extern undefined4 *DAT_001cabdc;
extern undefined *DAT_001cabe0;
extern int DAT_001cabe4;
extern undefined4 *DAT_001cac2c;
extern char s_cState_EventEnd_001cac10[];
extern char s_cState_Event_001cac00[];
extern char s_cState_Hide_001cac20[];
extern char s_cState_Wait_001cabe8[];
extern char s_cState_Walk_001cabf4[];

// USA 001CA830 <- EU 001CA830 (Ghidra, non-matching)
// GLOBAL DAT_001cabc4 int
// GLOBAL DAT_001cabc8 undefined
// GLOBAL DAT_001cabd4 int
// GLOBAL DAT_001cabd8 undefined4
// GLOBAL DAT_001cabdc undefined4 *
// GLOBAL DAT_001cabe0 undefined *
// GLOBAL DAT_001cabe4 int
// GLOBAL DAT_001cac2c undefined4 *
// GLOBAL s_cState_EventEnd_001cac10 string
// GLOBAL s_cState_Event_001cac00 string
// GLOBAL s_cState_Hide_001cac20 string
// GLOBAL s_cState_Wait_001cabe8 string
// GLOBAL s_cState_Walk_001cabf4 string

int * func_001CA830(undefined4 *param_1,uint *param_2)

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
  int iVar14;
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
  piVar4 = (int *)func_00616714(param_1,param_2,0,0xff,&local_38);
  iVar14 = DAT_001cabc4;
  piVar4[200] = DAT_001cabc4 + 0xb8;
  *piVar4 = iVar14;
  *(undefined1 *)((int)piVar4 + 0x989) = 0;
  *(undefined1 *)((int)piVar4 + 0x98a) = 0;
  *(undefined1 *)((int)piVar4 + 0x98b) = 0;
  iVar14 = DAT_001cabd4;
  local_3c = &DAT_001cabc8;
  local_40 = DAT_001cabd4;
  func_004BE114(piVar4,3,0,0,DAT_001cabd8);
  *(undefined1 *)((int)piVar4 + 0x966) = 5;
  piVar4[0x25d] = (int)piVar4;
  iVar5 = func_0010BA78(0x50);
  piVar4[0x25e] = iVar5;
  puVar2 = DAT_001cabdc;
  piVar4[0x25f] = iVar5 + (uint)*(byte *)((int)piVar4 + 0x966) * 8;
  iVar8 = 5;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar15 = puVar2[0x1b];
    iVar8 = iVar8 + -1;
    puVar6[2] = puVar2[0x1a];
    puVar6[3] = uVar15;
    uVar15 = puVar2[0x1b];
    puVar6[4] = puVar2[0x1a];
    puVar6[5] = uVar15;
    puVar6 = puVar6 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)piVar4 + 0x966);
  uVar12 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar12 << 3);
  piVar4[0x260] = (int)puVar6;
  if (uVar12 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = puVar2[5];
      *puVar6 = puVar2[4];
      puVar6[1] = uVar15;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar12 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar15 = puVar2[5];
      puVar7[2] = puVar2[4];
      puVar7[3] = uVar15;
      uVar15 = puVar2[5];
      puVar7[4] = puVar2[4];
      puVar7[5] = uVar15;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 5;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_001cabe0,0x24,5);
  }
  if (iVar5 != 0) {
    piVar4[0x25a] = 5;
    piVar4[0x25b] = iVar5;
  }
  iVar5 = DAT_001cabe4;
  piVar4[0xd5] = (int)(piVar4 + 600);
  *(undefined2 *)(iVar5 + (int)piVar4) = 5;
  local_3c = s_cState_Wait_001cabe8;
  local_40 = iVar14;
  func_0010BEC4((int)(piVar4 + 600),0,&local_40);
  puVar6 = (undefined4 *)piVar4[0x25e];
  uVar9 = *puVar2;
  uVar15 = puVar2[2];
  uVar10 = puVar2[3];
  uVar16 = *(undefined8 *)(puVar2 + 4);
  puVar6[1] = puVar2[1];
  *puVar6 = uVar9;
  puVar6 = (undefined4 *)piVar4[0x25f];
  *puVar6 = uVar15;
  puVar6[1] = uVar10;
  puVar6 = (undefined4 *)piVar4[0x260];
  *puVar6 = (int)uVar16;
  puVar6[1] = (int)((ulonglong)uVar16 >> 0x20);
  local_3c = s_cState_Walk_001cabf4;
  local_40 = iVar14;
  func_0010BEC4((int)(piVar4 + 600),1,&local_40);
  iVar5 = piVar4[0x25e];
  uVar15 = puVar2[8];
  uVar10 = puVar2[9];
  uVar9 = puVar2[7];
  *(undefined4 *)(iVar5 + 8) = puVar2[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar9;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 8) = uVar15;
  *(undefined4 *)(iVar5 + 0xc) = uVar10;
  iVar5 = piVar4[0x260];
  *(int *)(iVar5 + 8) = (int)uVar16;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar16 >> 0x20);
  local_3c = s_cState_Event_001cac00;
  local_40 = iVar14;
  func_0010BEC4((int)(piVar4 + 600),2,&local_40);
  iVar5 = piVar4[0x25e];
  uVar10 = puVar2[0xb];
  uVar15 = puVar2[0xc];
  uVar9 = puVar2[0xd];
  *(undefined4 *)(iVar5 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar10;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x10) = uVar15;
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  iVar5 = piVar4[0x260];
  *(int *)(iVar5 + 0x10) = (int)uVar16;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar16 >> 0x20);
  local_3c = s_cState_EventEnd_001cac10;
  local_40 = iVar14;
  func_0010BEC4((int)(piVar4 + 600),3,&local_40);
  iVar5 = piVar4[0x25e];
  uVar15 = puVar2[0x11];
  uVar10 = puVar2[0x12];
  uVar13 = puVar2[0x13];
  uVar9 = puVar2[0xf];
  uVar11 = puVar2[0x10];
  *(undefined4 *)(iVar5 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar5 + 0x1c) = uVar9;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x18) = uVar11;
  *(undefined4 *)(iVar5 + 0x1c) = uVar15;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x18) = uVar10;
  *(undefined4 *)(iVar5 + 0x1c) = uVar13;
  local_3c = s_cState_Hide_001cac20;
  local_40 = iVar14;
  func_0010BEC4((int)(piVar4 + 600),4,&local_40);
  iVar14 = piVar4[0x25e];
  uVar10 = puVar2[0x15];
  uVar15 = puVar2[0x16];
  uVar13 = puVar2[0x17];
  uVar9 = puVar2[0x18];
  uVar11 = puVar2[0x19];
  *(undefined4 *)(iVar14 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar14 + 0x24) = uVar10;
  iVar14 = piVar4[0x25f];
  *(undefined4 *)(iVar14 + 0x20) = uVar15;
  *(undefined4 *)(iVar14 + 0x24) = uVar13;
  iVar14 = piVar4[0x260];
  *(undefined4 *)(iVar14 + 0x20) = uVar9;
  *(undefined4 *)(iVar14 + 0x24) = uVar11;
  func_00615A90((int)piVar4,piVar4[0x261],0);
  func_004C03B8((int)piVar4,DAT_001cac2c);
  bVar3 = func_00547B20((int)(piVar4 + 1));
  if (!bVar3) {
    *(undefined1 *)((int)piVar4 + 0x98b) = 1;
  }
  func_004BC8D8((int)piVar4);
  return piVar4;
}

