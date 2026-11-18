#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BD280();
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C081C(int param_1,int param_2,int param_3,int *param_4,int param_5,undefined4 param_6);
extern int func_00588BE4(int param_1);
extern int func_0061010C(int param_1,int param_2,undefined1 param_3);
extern int func_00610F88(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_00183234;
extern int DAT_00183238;
extern int *DAT_0018323c;
extern undefined DAT_00183240;
extern int DAT_00183254;
extern undefined4 DAT_00183258;
extern int *DAT_0018325c;
extern undefined4 *DAT_00183260;
extern undefined *DAT_00183264;
extern int DAT_00183268;
extern int *DAT_0018333c;
extern char s_cState_EventEnd_00183294[];
extern char s_cState_Event_00183284[];
extern char s_cState_Hide_001832a4[];
extern char s_cState_Normal_001832b0[];
extern char s_cState_Wait_0018326c[];
extern char s_cState_Walk_00183278[];

// USA 00182E50 <- EU 00182E50 (Ghidra, non-matching)
// GLOBAL DAT_00183234 int
// GLOBAL DAT_00183238 int
// GLOBAL DAT_0018323c int *
// GLOBAL DAT_00183240 undefined
// GLOBAL DAT_00183254 int
// GLOBAL DAT_00183258 undefined4
// GLOBAL DAT_0018325c int *
// GLOBAL DAT_00183260 undefined4 *
// GLOBAL DAT_00183264 undefined *
// GLOBAL DAT_00183268 int
// GLOBAL DAT_0018333c int *
// GLOBAL s_cState_EventEnd_00183294 string
// GLOBAL s_cState_Event_00183284 string
// GLOBAL s_cState_Hide_001832a4 string
// GLOBAL s_cState_Normal_001832b0 string
// GLOBAL s_cState_Wait_0018326c string
// GLOBAL s_cState_Walk_00183278 string

int * func_00182E50(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
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
  piVar3 = (int *)func_00610F88(param_1,param_2,5,0xff,&local_38);
  iVar11 = DAT_00183238;
  iVar6 = DAT_00183234 + 0xb8;
  *piVar3 = DAT_00183234;
  piVar3[200] = iVar6;
  piVar3[0x263] = 0;
  piVar3[0x264] = 0;
  piVar3[0x265] = iVar11;
  func_004C081C((int)piVar3,5,(int)(DAT_0018323c + 0x11),DAT_0018323c,1,1);
  iVar11 = DAT_00183254;
  local_3c = &DAT_00183240;
  local_40 = DAT_00183254;
  func_004BE114(piVar3,5,0,0,DAT_00183258);
  *(undefined1 *)((int)piVar3 + 0x911) = 3;
  if (*(char *)(*DAT_0018325c + 0x70) == '\x04') {
    func_004BD280((int)piVar3,4,-1);
    iVar6 = func_00588BE4((int)piVar3);
    if (iVar6 == *DAT_0018333c) {
      piVar3[0x22b] = piVar3[0x22b] | 0x10;
    }
  }
  else {
    func_004BD280((int)piVar3,0,-1);
  }
  piVar3[0x25d] = (int)piVar3;
  *(undefined1 *)((int)piVar3 + 0x966) = 6;
  iVar6 = func_0010BA78(0x60);
  puVar2 = DAT_00183260;
  piVar3[0x25e] = iVar6;
  piVar3[0x25f] = iVar6 + (uint)*(byte *)((int)piVar3 + 0x966) * 8;
  iVar7 = 6;
  puVar4 = (undefined4 *)(iVar6 + -8);
  do {
    uVar13 = puVar2[0x1f];
    iVar7 = iVar7 + -1;
    puVar4[2] = puVar2[0x1e];
    puVar4[3] = uVar13;
    uVar13 = puVar2[0x1f];
    puVar4[4] = puVar2[0x1e];
    puVar4[5] = uVar13;
    puVar4 = puVar4 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)piVar3 + 0x966);
  uVar12 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar12 << 3);
  piVar3[0x260] = (int)puVar4;
  if (uVar12 != 0) {
    puVar5 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar2[5];
      *puVar4 = puVar2[4];
      puVar4[1] = uVar13;
      puVar5 = puVar4;
    }
    for (iVar6 = (int)uVar12 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar13 = puVar2[5];
      puVar5[2] = puVar2[4];
      puVar5[3] = uVar13;
      uVar13 = puVar2[5];
      puVar5[4] = puVar2[4];
      puVar5[5] = uVar13;
      puVar5 = puVar5 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar6 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x24;
    puVar4[1] = 6;
    iVar6 = func_00100118((int)(puVar4 + 2),DAT_00183264,0x24,6);
  }
  if (iVar6 != 0) {
    piVar3[0x25a] = 6;
    piVar3[0x25b] = iVar6;
  }
  iVar6 = DAT_00183268;
  piVar3[0xd5] = (int)(piVar3 + 600);
  *(undefined2 *)(iVar6 + (int)piVar3) = 6;
  local_3c = s_cState_Wait_0018326c;
  local_40 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),0,&local_40);
  puVar4 = (undefined4 *)piVar3[0x25e];
  uVar8 = puVar2[2];
  uVar13 = *puVar2;
  uVar9 = puVar2[3];
  uVar15 = *(undefined8 *)(puVar2 + 4);
  puVar4[1] = puVar2[1];
  *puVar4 = uVar13;
  puVar4 = (undefined4 *)piVar3[0x25f];
  *puVar4 = uVar8;
  puVar4[1] = uVar9;
  puVar4 = (undefined4 *)piVar3[0x260];
  *puVar4 = (int)uVar15;
  puVar4[1] = (int)((ulonglong)uVar15 >> 0x20);
  local_3c = s_cState_Walk_00183278;
  local_40 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),1,&local_40);
  iVar6 = piVar3[0x25e];
  uVar8 = puVar2[7];
  uVar9 = puVar2[8];
  uVar13 = puVar2[9];
  *(undefined4 *)(iVar6 + 8) = puVar2[6];
  *(undefined4 *)(iVar6 + 0xc) = uVar8;
  iVar6 = piVar3[0x25f];
  *(undefined4 *)(iVar6 + 8) = uVar9;
  *(undefined4 *)(iVar6 + 0xc) = uVar13;
  iVar6 = piVar3[0x260];
  *(int *)(iVar6 + 8) = (int)uVar15;
  *(int *)(iVar6 + 0xc) = (int)((ulonglong)uVar15 >> 0x20);
  local_3c = s_cState_Event_00183284;
  local_40 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),2,&local_40);
  iVar6 = piVar3[0x25e];
  uVar13 = puVar2[0xb];
  uVar8 = puVar2[0xc];
  uVar9 = puVar2[0xd];
  *(undefined4 *)(iVar6 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar6 + 0x14) = uVar13;
  iVar6 = piVar3[0x25f];
  *(undefined4 *)(iVar6 + 0x10) = uVar8;
  *(undefined4 *)(iVar6 + 0x14) = uVar9;
  iVar6 = piVar3[0x260];
  *(int *)(iVar6 + 0x10) = (int)uVar15;
  *(int *)(iVar6 + 0x14) = (int)((ulonglong)uVar15 >> 0x20);
  local_3c = s_cState_EventEnd_00183294;
  local_40 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),3,&local_40);
  iVar6 = piVar3[0x25e];
  uVar10 = puVar2[0xf];
  uVar14 = puVar2[0x10];
  uVar13 = puVar2[0x12];
  uVar9 = puVar2[0x13];
  uVar8 = puVar2[0x11];
  *(undefined4 *)(iVar6 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar6 + 0x1c) = uVar10;
  iVar6 = piVar3[0x25f];
  *(undefined4 *)(iVar6 + 0x18) = uVar14;
  *(undefined4 *)(iVar6 + 0x1c) = uVar8;
  iVar6 = piVar3[0x260];
  *(undefined4 *)(iVar6 + 0x18) = uVar13;
  *(undefined4 *)(iVar6 + 0x1c) = uVar9;
  local_3c = s_cState_Hide_001832a4;
  local_40 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),4,&local_40);
  iVar6 = piVar3[0x25e];
  uVar13 = puVar2[0x18];
  uVar9 = puVar2[0x19];
  uVar8 = puVar2[0x15];
  uVar14 = puVar2[0x16];
  uVar10 = puVar2[0x17];
  *(undefined4 *)(iVar6 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar6 + 0x24) = uVar8;
  iVar6 = piVar3[0x25f];
  *(undefined4 *)(iVar6 + 0x20) = uVar14;
  *(undefined4 *)(iVar6 + 0x24) = uVar10;
  iVar6 = piVar3[0x260];
  *(undefined4 *)(iVar6 + 0x20) = uVar13;
  *(undefined4 *)(iVar6 + 0x24) = uVar9;
  local_3c = s_cState_Normal_001832b0;
  local_40 = iVar11;
  func_0010BEC4((int)(piVar3 + 600),5,&local_40);
  iVar11 = piVar3[0x25e];
  uVar13 = puVar2[0x1b];
  uVar8 = puVar2[0x1c];
  uVar14 = puVar2[0x1d];
  uVar9 = puVar2[4];
  uVar10 = puVar2[5];
  *(undefined4 *)(iVar11 + 0x28) = puVar2[0x1a];
  *(undefined4 *)(iVar11 + 0x2c) = uVar13;
  iVar11 = piVar3[0x25f];
  *(undefined4 *)(iVar11 + 0x28) = uVar8;
  *(undefined4 *)(iVar11 + 0x2c) = uVar14;
  iVar11 = piVar3[0x260];
  *(undefined4 *)(iVar11 + 0x28) = uVar9;
  *(undefined4 *)(iVar11 + 0x2c) = uVar10;
  func_0061010C((int)piVar3,piVar3[0x261],0);
  func_004BC8D8((int)piVar3);
  piVar3[0x22b] = piVar3[0x22b] | 0x20;
  return piVar3;
}

