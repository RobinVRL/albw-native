#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BD280();
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_00547538(int param_1);
extern int func_00547B20(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0063741C(int param_1,int param_2,undefined1 param_3);
extern int func_00638194(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_0050daa8;
extern undefined DAT_0050daac;
extern int DAT_0050dabc;
extern undefined4 DAT_0050dac0;
extern undefined4 *DAT_0050dac4;
extern undefined *DAT_0050dac8;
extern int DAT_0050dacc;
extern undefined4 *DAT_0050dbe8;
extern int DAT_0050dbec;
extern char s_cState_EventEnd_0050daf8[];
extern char s_cState_Event_0050dae8[];
extern char s_cState_FearEnemy_0050db14[];
extern char s_cState_Hide_0050db08[];
extern char s_cState_Wait_0050dad0[];
extern char s_cState_Walk_0050dadc[];

// USA 0050D6C0 <- EU 0050D698 (Ghidra, non-matching)
// GLOBAL DAT_0050daa8 int
// GLOBAL DAT_0050daac undefined
// GLOBAL DAT_0050dabc int
// GLOBAL DAT_0050dac0 undefined4
// GLOBAL DAT_0050dac4 undefined4 *
// GLOBAL DAT_0050dac8 undefined *
// GLOBAL DAT_0050dacc int
// GLOBAL DAT_0050dbe8 undefined4 *
// GLOBAL DAT_0050dbec int
// GLOBAL s_cState_EventEnd_0050daf8 string
// GLOBAL s_cState_Event_0050dae8 string
// GLOBAL s_cState_FearEnemy_0050db14 string
// GLOBAL s_cState_Hide_0050db08 string
// GLOBAL s_cState_Wait_0050dad0 string
// GLOBAL s_cState_Walk_0050dadc string

int * func_0050D6C0(undefined4 *param_1,uint *param_2)

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
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
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
  piVar4 = (int *)func_00638194(param_1,param_2,0,4,&local_40);
  iVar13 = DAT_0050dabc;
  iVar5 = DAT_0050daa8 + 0xb8;
  *piVar4 = DAT_0050daa8;
  piVar4[200] = iVar5;
  piVar4[0x263] = 0;
  *(undefined2 *)(piVar4 + 0x264) = 0;
  *(char *)((int)piVar4 + 0x992) = (char)*(ushort *)(piVar4 + 0xc);
  if (3 < (*(ushort *)(piVar4 + 0xc) & 0xff)) {
    *(undefined1 *)((int)piVar4 + 0x992) = 0;
  }
  local_44 = &DAT_0050daac;
  local_48 = iVar13;
  func_004BE114(piVar4,8,0,0,DAT_0050dac0);
  if (*(char *)((int)piVar4 + 0x992) == '\x01') {
    *(undefined1 *)((int)piVar4 + 0x855) = 7;
    *(undefined1 *)((int)piVar4 + 0x853) = 5;
    func_004BD280((int)piVar4,5,0);
    piVar4[0x22b] = piVar4[0x22b] & 0xfffffffeU | 0x20;
  }
  bVar3 = func_00588BF0((int)piVar4,0);
  if ((bVar3) && (bVar3 = func_00588BF0((int)piVar4,1), !bVar3)) {
    if (*(short *)((int)piVar4 + 0x32) == 0) {
      *(undefined1 *)((int)piVar4 + 0x853) = 5;
      piVar4[0x22b] = piVar4[0x22b] & 0xfffffffeU | 0x20;
    }
    else {
      *(undefined1 *)((int)piVar4 + 0x853) = 6;
    }
    *(undefined1 *)((int)piVar4 + 0x855) = 7;
  }
  piVar4[0x25d] = (int)piVar4;
  *(undefined1 *)((int)piVar4 + 0x966) = 6;
  iVar5 = func_0010BA78(0x60);
  puVar2 = DAT_0050dac4;
  piVar4[0x25e] = iVar5;
  piVar4[0x25f] = iVar5 + (uint)*(byte *)((int)piVar4 + 0x966) * 8;
  iVar8 = 6;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar12 = puVar2[0x1f];
    iVar8 = iVar8 + -1;
    puVar6[2] = puVar2[0x1e];
    puVar6[3] = uVar12;
    uVar12 = puVar2[0x1f];
    puVar6[4] = puVar2[0x1e];
    puVar6[5] = uVar12;
    puVar6 = puVar6 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)piVar4 + 0x966);
  uVar11 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar11 << 3);
  piVar4[0x260] = (int)puVar6;
  if (uVar11 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = puVar2[5];
      *puVar6 = puVar2[4];
      puVar6[1] = uVar12;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar11 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar12 = puVar2[5];
      puVar7[2] = puVar2[4];
      puVar7[3] = uVar12;
      uVar12 = puVar2[5];
      puVar7[4] = puVar2[4];
      puVar7[5] = uVar12;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 6;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_0050dac8,0x24,6);
  }
  if (iVar5 != 0) {
    piVar4[0x25a] = 6;
    piVar4[0x25b] = iVar5;
  }
  iVar5 = DAT_0050dacc;
  piVar4[0xd5] = (int)(piVar4 + 600);
  *(undefined2 *)(iVar5 + (int)piVar4) = 6;
  local_44 = s_cState_Wait_0050dad0;
  local_48 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),0,&local_48);
  puVar6 = (undefined4 *)piVar4[0x25e];
  uVar9 = puVar2[1];
  uVar12 = puVar2[2];
  uVar10 = puVar2[3];
  uVar16 = *(undefined8 *)(puVar2 + 4);
  *puVar6 = *puVar2;
  puVar6[1] = uVar9;
  puVar6 = (undefined4 *)piVar4[0x25f];
  *puVar6 = uVar12;
  puVar6[1] = uVar10;
  puVar6 = (undefined4 *)piVar4[0x260];
  *puVar6 = (int)uVar16;
  puVar6[1] = (int)((ulonglong)uVar16 >> 0x20);
  local_44 = s_cState_Walk_0050dadc;
  local_48 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),1,&local_48);
  iVar5 = piVar4[0x25e];
  uVar12 = puVar2[8];
  uVar9 = puVar2[9];
  uVar10 = puVar2[7];
  *(undefined4 *)(iVar5 + 8) = puVar2[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar10;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 8) = uVar12;
  *(undefined4 *)(iVar5 + 0xc) = uVar9;
  iVar5 = piVar4[0x260];
  *(int *)(iVar5 + 8) = (int)uVar16;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar16 >> 0x20);
  local_44 = s_cState_Event_0050dae8;
  local_48 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),2,&local_48);
  iVar5 = piVar4[0x25e];
  uVar12 = puVar2[0xd];
  uVar9 = puVar2[0xc];
  uVar10 = puVar2[0xb];
  *(undefined4 *)(iVar5 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar10;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x10) = uVar9;
  *(undefined4 *)(iVar5 + 0x14) = uVar12;
  iVar5 = piVar4[0x260];
  *(int *)(iVar5 + 0x10) = (int)uVar16;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar16 >> 0x20);
  local_44 = s_cState_EventEnd_0050daf8;
  local_48 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),3,&local_48);
  iVar5 = piVar4[0x25e];
  uVar12 = puVar2[0xf];
  uVar9 = puVar2[0x10];
  uVar10 = puVar2[0x11];
  uVar14 = puVar2[0x12];
  uVar15 = puVar2[0x13];
  *(undefined4 *)(iVar5 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar5 + 0x1c) = uVar12;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x18) = uVar9;
  *(undefined4 *)(iVar5 + 0x1c) = uVar10;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x18) = uVar14;
  *(undefined4 *)(iVar5 + 0x1c) = uVar15;
  local_44 = s_cState_Hide_0050db08;
  local_48 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),4,&local_48);
  iVar5 = piVar4[0x25e];
  uVar12 = puVar2[0x15];
  uVar9 = puVar2[0x16];
  uVar10 = puVar2[0x17];
  uVar14 = puVar2[0x18];
  uVar15 = puVar2[0x19];
  *(undefined4 *)(iVar5 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar5 + 0x24) = uVar12;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x20) = uVar9;
  *(undefined4 *)(iVar5 + 0x24) = uVar10;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x20) = uVar14;
  *(undefined4 *)(iVar5 + 0x24) = uVar15;
  local_44 = s_cState_FearEnemy_0050db14;
  local_48 = iVar13;
  func_0010BEC4((int)(piVar4 + 600),5,&local_48);
  iVar13 = piVar4[0x25e];
  uVar12 = puVar2[0x1b];
  uVar9 = puVar2[0x1c];
  uVar14 = puVar2[0x1d];
  uVar10 = puVar2[4];
  uVar15 = puVar2[5];
  *(undefined4 *)(iVar13 + 0x28) = puVar2[0x1a];
  *(undefined4 *)(iVar13 + 0x2c) = uVar12;
  iVar13 = piVar4[0x25f];
  *(undefined4 *)(iVar13 + 0x28) = uVar9;
  *(undefined4 *)(iVar13 + 0x2c) = uVar14;
  iVar13 = piVar4[0x260];
  *(undefined4 *)(iVar13 + 0x28) = uVar10;
  *(undefined4 *)(iVar13 + 0x2c) = uVar15;
  if (*(char *)((int)piVar4 + 0x992) == '\x02') {
    piVar4[0x261] = 5;
    func_0063741C((int)piVar4,5,0);
  }
  else {
    func_0063741C((int)piVar4,piVar4[0x261],0);
  }
  func_004C03B8((int)piVar4,DAT_0050dbe8);
  piVar4[0x22e] = DAT_0050dbec;
  func_004BC8D8((int)piVar4);
  if (*(char *)((int)piVar4 + 0x992) == '\x01' || *(char *)((int)piVar4 + 0x992) == '\x03') {
    piVar4[0x22b] = piVar4[0x22b] | 0x10000;
    bVar3 = func_00547B20((int)(piVar4 + 1));
    if ((!bVar3) || (bVar3 = func_00547538((int)(piVar4 + 1)), bVar3)) {
      *(undefined1 *)((int)piVar4 + 0x2d7) = 1;
    }
  }
  return piVar4;
}

