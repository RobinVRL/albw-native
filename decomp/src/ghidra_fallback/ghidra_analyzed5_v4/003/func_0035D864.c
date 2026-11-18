#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_00588BE4(int param_1);
extern int func_00629D84(int param_1,int param_2,undefined1 param_3);
extern int func_0062AC00(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_0035dc20;
extern int *DAT_0035dc24;
extern int DAT_0035dc28;
extern undefined4 DAT_0035dc4c;
extern undefined4 DAT_0035dc70;
extern undefined4 *DAT_0035dc74;
extern undefined *DAT_0035dc78;
extern int DAT_0035dc7c;
extern int DAT_0035dcd4;
extern char s_cState_EventEnd_0035dca8[];
extern char s_cState_Event_0035dc98[];
extern char s_cState_Hide_0035dcb8[];
extern char s_cState_Swing_0035dcc4[];
extern char s_cState_Wait_0035dc80[];
extern char s_cState_Walk_0035dc8c[];

// USA 0035D864 <- EU 0035D840 (Ghidra, non-matching)
// GLOBAL DAT_0035dc20 int
// GLOBAL DAT_0035dc24 int *
// GLOBAL DAT_0035dc28 int
// GLOBAL DAT_0035dc4c undefined4
// GLOBAL DAT_0035dc70 undefined4
// GLOBAL DAT_0035dc74 undefined4 *
// GLOBAL DAT_0035dc78 undefined *
// GLOBAL DAT_0035dc7c int
// GLOBAL DAT_0035dcd4 int
// GLOBAL s_cState_EventEnd_0035dca8 string
// GLOBAL s_cState_Event_0035dc98 string
// GLOBAL s_cState_Hide_0035dcb8 string
// GLOBAL s_cState_Swing_0035dcc4 string
// GLOBAL s_cState_Wait_0035dc80 string
// GLOBAL s_cState_Walk_0035dc8c string

int * func_0035D864(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(char * *)(albw_frame + 0xc))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined1 *)(albw_frame + 0x24))
  #define local_2b (*(undefined1 *)(albw_frame + 0x25))
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_2c = 0;
  local_2b = 1;
  piVar3 = (int *)func_0062AC00(param_1,param_2,param_3,param_4,&local_38);
  iVar10 = DAT_0035dc20;
  piVar3[200] = DAT_0035dc20 + 0xb8;
  *piVar3 = iVar10;
  iVar4 = func_00588BE4((int)piVar3);
  iVar10 = DAT_0035dc28;
  if (iVar4 == *DAT_0035dc24) {
    func_004BE114(piVar3,6,0,0,DAT_0035dc4c);
  }
  else {
    func_004BE114(piVar3,3,0,0,DAT_0035dc70);
  }
  piVar3[0x25d] = (int)piVar3;
  *(undefined1 *)((int)piVar3 + 0x966) = 6;
  iVar4 = func_0010BA78(0x60);
  puVar2 = DAT_0035dc74;
  piVar3[0x25e] = iVar4;
  piVar3[0x25f] = iVar4 + (uint)*(byte *)((int)piVar3 + 0x966) * 8;
  iVar7 = 6;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar12 = puVar2[0x1f];
    iVar7 = iVar7 + -1;
    puVar5[2] = puVar2[0x1e];
    puVar5[3] = uVar12;
    uVar12 = puVar2[0x1f];
    puVar5[4] = puVar2[0x1e];
    puVar5[5] = uVar12;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)piVar3 + 0x966);
  uVar11 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar11 << 3);
  piVar3[0x260] = (int)puVar5;
  if (uVar11 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = puVar2[5];
      *puVar5 = puVar2[4];
      puVar5[1] = uVar12;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar11 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar12 = puVar2[5];
      puVar6[2] = puVar2[4];
      puVar6[3] = uVar12;
      uVar12 = puVar2[5];
      puVar6[4] = puVar2[4];
      puVar6[5] = uVar12;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 6;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_0035dc78,0x24,6);
  }
  if (iVar4 != 0) {
    piVar3[0x25a] = 6;
    piVar3[0x25b] = iVar4;
  }
  iVar4 = DAT_0035dc7c;
  piVar3[0xd5] = (int)(piVar3 + 600);
  *(undefined2 *)(iVar4 + (int)piVar3) = 6;
  local_44 = s_cState_Wait_0035dc80;
  local_48 = iVar10;
  func_0010BEC4((int)(piVar3 + 600),0,&local_48);
  puVar5 = (undefined4 *)piVar3[0x25e];
  uVar8 = puVar2[1];
  uVar12 = puVar2[2];
  uVar9 = puVar2[3];
  uVar14 = puVar2[4];
  uVar13 = puVar2[5];
  *puVar5 = *puVar2;
  puVar5[1] = uVar8;
  puVar5 = (undefined4 *)piVar3[0x25f];
  *puVar5 = uVar12;
  puVar5[1] = uVar9;
  puVar5 = (undefined4 *)piVar3[0x260];
  *puVar5 = uVar14;
  puVar5[1] = uVar13;
  local_44 = s_cState_Walk_0035dc8c;
  local_48 = iVar10;
  func_0010BEC4((int)(piVar3 + 600),1,&local_48);
  iVar4 = piVar3[0x25e];
  uVar12 = puVar2[7];
  uVar8 = puVar2[8];
  uVar9 = puVar2[9];
  *(undefined4 *)(iVar4 + 8) = puVar2[6];
  *(undefined4 *)(iVar4 + 0xc) = uVar12;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 8) = uVar8;
  *(undefined4 *)(iVar4 + 0xc) = uVar9;
  iVar4 = piVar3[0x260];
  *(undefined4 *)(iVar4 + 8) = uVar14;
  *(undefined4 *)(iVar4 + 0xc) = uVar13;
  local_44 = s_cState_Event_0035dc98;
  local_48 = iVar10;
  func_0010BEC4((int)(piVar3 + 600),2,&local_48);
  iVar4 = piVar3[0x25e];
  uVar12 = puVar2[0xb];
  uVar9 = puVar2[0xc];
  uVar8 = puVar2[0xd];
  *(undefined4 *)(iVar4 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar4 + 0x14) = uVar12;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x10) = uVar9;
  *(undefined4 *)(iVar4 + 0x14) = uVar8;
  iVar4 = piVar3[0x260];
  *(undefined4 *)(iVar4 + 0x10) = uVar14;
  *(undefined4 *)(iVar4 + 0x14) = uVar13;
  local_44 = s_cState_EventEnd_0035dca8;
  local_48 = iVar10;
  func_0010BEC4((int)(piVar3 + 600),3,&local_48);
  iVar4 = piVar3[0x25e];
  uVar12 = puVar2[0xf];
  uVar8 = puVar2[0x10];
  uVar9 = puVar2[0x11];
  uVar13 = puVar2[0x12];
  uVar14 = puVar2[0x13];
  *(undefined4 *)(iVar4 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar4 + 0x1c) = uVar12;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x18) = uVar8;
  *(undefined4 *)(iVar4 + 0x1c) = uVar9;
  iVar4 = piVar3[0x260];
  *(undefined4 *)(iVar4 + 0x18) = uVar13;
  *(undefined4 *)(iVar4 + 0x1c) = uVar14;
  local_44 = s_cState_Hide_0035dcb8;
  local_48 = iVar10;
  func_0010BEC4((int)(piVar3 + 600),4,&local_48);
  iVar4 = piVar3[0x25e];
  uVar8 = puVar2[0x15];
  uVar9 = puVar2[0x16];
  uVar14 = puVar2[0x17];
  uVar12 = puVar2[0x19];
  uVar13 = puVar2[0x18];
  *(undefined4 *)(iVar4 + 0x20) = puVar2[0x14];
  *(undefined4 *)(iVar4 + 0x24) = uVar8;
  iVar4 = piVar3[0x25f];
  *(undefined4 *)(iVar4 + 0x20) = uVar9;
  *(undefined4 *)(iVar4 + 0x24) = uVar14;
  iVar4 = piVar3[0x260];
  *(undefined4 *)(iVar4 + 0x20) = uVar13;
  *(undefined4 *)(iVar4 + 0x24) = uVar12;
  local_44 = s_cState_Swing_0035dcc4;
  local_48 = iVar10;
  func_0010BEC4((int)(piVar3 + 600),5,&local_48);
  iVar10 = piVar3[0x25e];
  uVar14 = puVar2[0x1b];
  uVar12 = puVar2[0x1d];
  uVar8 = puVar2[5];
  uVar9 = puVar2[0x1c];
  uVar13 = puVar2[4];
  *(undefined4 *)(iVar10 + 0x28) = puVar2[0x1a];
  *(undefined4 *)(iVar10 + 0x2c) = uVar14;
  iVar10 = piVar3[0x25f];
  *(undefined4 *)(iVar10 + 0x28) = uVar9;
  *(undefined4 *)(iVar10 + 0x2c) = uVar12;
  iVar10 = piVar3[0x260];
  *(undefined4 *)(iVar10 + 0x28) = uVar13;
  *(undefined4 *)(iVar10 + 0x2c) = uVar8;
  func_00629D84((int)piVar3,piVar3[0x261],0);
  piVar3[0x22e] = DAT_0035dcd4;
  func_004BC8D8((int)piVar3);
  return piVar3;
}

