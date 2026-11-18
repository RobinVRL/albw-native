#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC8D8(int param_1);
extern float func_004BDB2C(undefined4 param_1,int param_2,float fparam_0);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_004C081C(int param_1,int param_2,int param_3,int *param_4,int param_5,undefined4 param_6);
extern int func_004C173C(int *param_1,int param_2,undefined4 param_3);
extern int func_00632AC4(int param_1,int param_2,undefined1 param_3);
extern int func_00633748(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_004da158;
extern int DAT_004da15c;
extern undefined4 DAT_004da168;
extern undefined4 *DAT_004da16c;
extern undefined *DAT_004da170;
extern int DAT_004da174;
extern undefined4 *DAT_004da1bc;
extern int *DAT_004da250;
extern float DAT_004da254;
extern undefined4 DAT_004da258;
extern char s_cState_EventEnd_004da1a0[];
extern char s_cState_Event_004da190[];
extern char s_cState_Hide_004da1b0[];
extern char s_cState_Wait_004da178[];
extern char s_cState_Walk_004da184[];

// USA 004D9DF8 <- EU 004D9DD0 (Ghidra, non-matching)
// GLOBAL DAT_004da158 int
// GLOBAL DAT_004da15c int
// GLOBAL DAT_004da168 undefined4
// GLOBAL DAT_004da16c undefined4 *
// GLOBAL DAT_004da170 undefined *
// GLOBAL DAT_004da174 int
// GLOBAL DAT_004da1bc undefined4 *
// GLOBAL DAT_004da250 int *
// GLOBAL DAT_004da254 float
// GLOBAL DAT_004da258 undefined4
// GLOBAL s_cState_EventEnd_004da1a0 string
// GLOBAL s_cState_Event_004da190 string
// GLOBAL s_cState_Hide_004da1b0 string
// GLOBAL s_cState_Wait_004da178 string
// GLOBAL s_cState_Walk_004da184 string

int * func_004D9DF8(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ushort uVar13;
  uint uVar14;
  undefined4 uVar15;
  bool bVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
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
  piVar4 = (int *)func_00633748(param_1,param_2,0,0xff,&local_40);
  iVar2 = DAT_004da15c;
  iVar5 = DAT_004da158;
  uVar13 = *(ushort *)((int)piVar4 + 0x32);
  bVar16 = 2 < uVar13;
  piVar4[200] = DAT_004da158 + 0xb8;
  if (bVar16) {
    uVar13 = 0;
  }
  *piVar4 = iVar5;
  if (!bVar16) {
    if (uVar13 == 2) {
      *(undefined1 *)((int)piVar4 + 0x855) = 5;
      *(undefined1 *)((int)piVar4 + 0x853) = 4;
      piVar4[0x22b] = piVar4[0x22b] | 0x14;
    }
    else if (uVar13 != 0 && uVar13 != 2) {
      func_004C173C(piVar4,6,DAT_004da168);
      goto LAB_004d9e80;
    }
  }
  func_004C081C((int)piVar4,6,(int)(DAT_004da250 + 0x14),DAT_004da250,1,0);
  func_004C173C(piVar4,6,0);
LAB_004d9e80:
  piVar4[0x25d] = (int)piVar4;
  *(undefined1 *)((int)piVar4 + 0x966) = 5;
  iVar5 = func_0010BA78(0x50);
  puVar3 = DAT_004da16c;
  piVar4[0x25e] = iVar5;
  piVar4[0x25f] = iVar5 + (uint)*(byte *)((int)piVar4 + 0x966) * 8;
  iVar8 = 5;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar15 = puVar3[0x1b];
    iVar8 = iVar8 + -1;
    puVar6[2] = puVar3[0x1a];
    puVar6[3] = uVar15;
    uVar15 = puVar3[0x1b];
    puVar6[4] = puVar3[0x1a];
    puVar6[5] = uVar15;
    puVar6 = puVar6 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)piVar4 + 0x966);
  uVar14 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar14 << 3);
  piVar4[0x260] = (int)puVar6;
  if (uVar14 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar15 = puVar3[5];
      *puVar6 = puVar3[4];
      puVar6[1] = uVar15;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar14 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar15 = puVar3[5];
      puVar7[2] = puVar3[4];
      puVar7[3] = uVar15;
      uVar15 = puVar3[5];
      puVar7[4] = puVar3[4];
      puVar7[5] = uVar15;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 5;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_004da170,0x24,5);
  }
  if (iVar5 != 0) {
    piVar4[0x25a] = 5;
    piVar4[0x25b] = iVar5;
  }
  iVar5 = DAT_004da174;
  piVar4[0xd5] = (int)(piVar4 + 600);
  *(undefined2 *)(iVar5 + (int)piVar4) = 5;
  local_4c = s_cState_Wait_004da178;
  local_50 = iVar2;
  func_0010BEC4((int)(piVar4 + 600),0,&local_50);
  puVar6 = (undefined4 *)piVar4[0x25e];
  uVar10 = puVar3[1];
  uVar15 = puVar3[2];
  uVar9 = puVar3[3];
  uVar17 = *(undefined8 *)(puVar3 + 4);
  *puVar6 = *puVar3;
  puVar6[1] = uVar10;
  puVar6 = (undefined4 *)piVar4[0x25f];
  *puVar6 = uVar15;
  puVar6[1] = uVar9;
  puVar6 = (undefined4 *)piVar4[0x260];
  *puVar6 = (int)uVar17;
  puVar6[1] = (int)((ulonglong)uVar17 >> 0x20);
  local_4c = s_cState_Walk_004da184;
  local_50 = iVar2;
  func_0010BEC4((int)(piVar4 + 600),1,&local_50);
  iVar5 = piVar4[0x25e];
  uVar15 = puVar3[7];
  uVar9 = puVar3[8];
  uVar10 = puVar3[9];
  *(undefined4 *)(iVar5 + 8) = puVar3[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar15;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 8) = uVar9;
  *(undefined4 *)(iVar5 + 0xc) = uVar10;
  iVar5 = piVar4[0x260];
  *(int *)(iVar5 + 8) = (int)uVar17;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar17 >> 0x20);
  local_4c = s_cState_Event_004da190;
  local_50 = iVar2;
  func_0010BEC4((int)(piVar4 + 600),2,&local_50);
  iVar5 = piVar4[0x25e];
  uVar15 = puVar3[0xc];
  uVar10 = puVar3[0xd];
  uVar9 = puVar3[0xb];
  *(undefined4 *)(iVar5 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x10) = uVar15;
  *(undefined4 *)(iVar5 + 0x14) = uVar10;
  iVar5 = piVar4[0x260];
  *(int *)(iVar5 + 0x10) = (int)uVar17;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar17 >> 0x20);
  local_4c = s_cState_EventEnd_004da1a0;
  local_50 = iVar2;
  func_0010BEC4((int)(piVar4 + 600),3,&local_50);
  iVar5 = piVar4[0x25e];
  uVar15 = puVar3[0x10];
  uVar12 = puVar3[0x11];
  uVar9 = puVar3[0x12];
  uVar10 = puVar3[0x13];
  uVar11 = puVar3[0xf];
  *(undefined4 *)(iVar5 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar5 + 0x1c) = uVar11;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x18) = uVar15;
  *(undefined4 *)(iVar5 + 0x1c) = uVar12;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x18) = uVar9;
  *(undefined4 *)(iVar5 + 0x1c) = uVar10;
  local_4c = s_cState_Hide_004da1b0;
  local_50 = iVar2;
  func_0010BEC4((int)(piVar4 + 600),4,&local_50);
  iVar5 = piVar4[0x25e];
  uVar15 = puVar3[0x15];
  uVar9 = puVar3[0x16];
  uVar10 = puVar3[0x17];
  uVar11 = puVar3[0x18];
  uVar12 = puVar3[0x19];
  *(undefined4 *)(iVar5 + 0x20) = puVar3[0x14];
  *(undefined4 *)(iVar5 + 0x24) = uVar15;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x20) = uVar9;
  *(undefined4 *)(iVar5 + 0x24) = uVar10;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x20) = uVar11;
  *(undefined4 *)(iVar5 + 0x24) = uVar12;
  func_00632AC4((int)piVar4,piVar4[0x261],0);
  func_004C03B8((int)piVar4,DAT_004da1bc);
  if (uVar13 == 2) {
    func_004BDB2C(piVar4,piVar4[0x1e2],DAT_004da254);
    *(undefined4 *)(piVar4[0x1e8] + 0x134) = DAT_004da258;
  }
  func_004BC8D8((int)piVar4);
  return piVar4;
}

