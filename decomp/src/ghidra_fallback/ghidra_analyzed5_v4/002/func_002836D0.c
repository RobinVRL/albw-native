#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_0061FBC4(int param_1,int param_2,undefined1 param_3);
extern int func_00620848(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_00283ab8;
extern undefined DAT_00283abc;
extern int DAT_00283acc;
extern undefined4 DAT_00283ad0;
extern undefined4 *DAT_00283ad4;
extern undefined *DAT_00283ad8;
extern int DAT_00283adc;
extern undefined4 *DAT_00283b3c;
extern char s_cState_EventEnd_00283b08[];
extern char s_cState_Event_00283af8[];
extern char s_cState_Hide_00283b18[];
extern char s_cState_MiniGameState_00283b24[];
extern char s_cState_Wait_00283ae0[];
extern char s_cState_Walk_00283aec[];

// USA 002836D0 <- EU 002836F8 (Ghidra, non-matching)
// GLOBAL DAT_00283ab8 int
// GLOBAL DAT_00283abc undefined
// GLOBAL DAT_00283acc int
// GLOBAL DAT_00283ad0 undefined4
// GLOBAL DAT_00283ad4 undefined4 *
// GLOBAL DAT_00283ad8 undefined *
// GLOBAL DAT_00283adc int
// GLOBAL DAT_00283b3c undefined4 *
// GLOBAL s_cState_EventEnd_00283b08 string
// GLOBAL s_cState_Event_00283af8 string
// GLOBAL s_cState_Hide_00283b18 string
// GLOBAL s_cState_MiniGameState_00283b24 string
// GLOBAL s_cState_Wait_00283ae0 string
// GLOBAL s_cState_Walk_00283aec string

int * func_002836D0(undefined4 *param_1,uint *param_2)

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
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
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
  piVar4 = (int *)func_00620848(param_1,param_2,5,0xff,&local_38);
  iVar2 = DAT_00283acc;
  iVar5 = DAT_00283ab8;
  piVar4[200] = DAT_00283ab8 + 0xb8;
  *piVar4 = iVar5;
  local_3c = &DAT_00283abc;
  local_40 = iVar2;
  func_004BE114(piVar4,4,0,0,DAT_00283ad0);
  *(undefined1 *)((int)piVar4 + 0x966) = 6;
  piVar4[0x25d] = (int)piVar4;
  iVar5 = func_0010BA78(0x60);
  piVar4[0x25e] = iVar5;
  puVar3 = DAT_00283ad4;
  piVar4[0x25f] = iVar5 + (uint)*(byte *)((int)piVar4 + 0x966) * 8;
  iVar8 = 6;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar12 = puVar3[0x1f];
    iVar8 = iVar8 + -1;
    puVar6[2] = puVar3[0x1e];
    puVar6[3] = uVar12;
    uVar12 = puVar3[0x1f];
    puVar6[4] = puVar3[0x1e];
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
      uVar12 = puVar3[5];
      *puVar6 = puVar3[4];
      puVar6[1] = uVar12;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar11 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar12 = puVar3[5];
      puVar7[2] = puVar3[4];
      puVar7[3] = uVar12;
      uVar12 = puVar3[5];
      puVar7[4] = puVar3[4];
      puVar7[5] = uVar12;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 6;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_00283ad8,0x24,6);
  }
  if (iVar5 != 0) {
    piVar4[0x25a] = 6;
    piVar4[0x25b] = iVar5;
  }
  iVar5 = DAT_00283adc;
  piVar4[0xd5] = (int)(piVar4 + 600);
  *(undefined2 *)(iVar5 + (int)piVar4) = 6;
  local_3c = s_cState_Wait_00283ae0;
  local_40 = iVar2;
  func_0010BEC4((int)(piVar4 + 600),0,&local_40);
  puVar6 = (undefined4 *)piVar4[0x25e];
  uVar12 = puVar3[1];
  uVar9 = puVar3[2];
  uVar10 = puVar3[3];
  uVar14 = puVar3[4];
  uVar13 = puVar3[5];
  *puVar6 = *puVar3;
  puVar6[1] = uVar12;
  puVar6 = (undefined4 *)piVar4[0x25f];
  *puVar6 = uVar9;
  puVar6[1] = uVar10;
  puVar6 = (undefined4 *)piVar4[0x260];
  *puVar6 = uVar14;
  puVar6[1] = uVar13;
  local_3c = s_cState_Walk_00283aec;
  local_40 = iVar2;
  func_0010BEC4((int)(piVar4 + 600),1,&local_40);
  iVar5 = piVar4[0x25e];
  uVar10 = puVar3[7];
  uVar12 = puVar3[8];
  uVar9 = puVar3[9];
  *(undefined4 *)(iVar5 + 8) = puVar3[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar10;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 8) = uVar12;
  *(undefined4 *)(iVar5 + 0xc) = uVar9;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 8) = uVar14;
  *(undefined4 *)(iVar5 + 0xc) = uVar13;
  local_3c = s_cState_Event_00283af8;
  local_40 = iVar2;
  func_0010BEC4((int)(piVar4 + 600),2,&local_40);
  iVar5 = piVar4[0x25e];
  uVar12 = puVar3[0xc];
  uVar9 = puVar3[0xd];
  uVar10 = puVar3[0xb];
  *(undefined4 *)(iVar5 + 0x10) = puVar3[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar10;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x10) = uVar12;
  *(undefined4 *)(iVar5 + 0x14) = uVar9;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x10) = uVar14;
  *(undefined4 *)(iVar5 + 0x14) = uVar13;
  local_3c = s_cState_EventEnd_00283b08;
  local_40 = iVar2;
  func_0010BEC4((int)(piVar4 + 600),3,&local_40);
  iVar5 = piVar4[0x25e];
  uVar12 = puVar3[0xf];
  uVar13 = puVar3[0x10];
  uVar9 = puVar3[0x11];
  uVar14 = puVar3[0x12];
  uVar10 = puVar3[0x13];
  *(undefined4 *)(iVar5 + 0x18) = puVar3[0xe];
  *(undefined4 *)(iVar5 + 0x1c) = uVar12;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x18) = uVar13;
  *(undefined4 *)(iVar5 + 0x1c) = uVar9;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x18) = uVar14;
  *(undefined4 *)(iVar5 + 0x1c) = uVar10;
  local_3c = s_cState_Hide_00283b18;
  local_40 = iVar2;
  func_0010BEC4((int)(piVar4 + 600),4,&local_40);
  iVar5 = piVar4[0x25e];
  uVar12 = puVar3[0x15];
  uVar14 = puVar3[0x16];
  uVar10 = puVar3[0x17];
  uVar13 = puVar3[0x18];
  uVar9 = puVar3[0x19];
  *(undefined4 *)(iVar5 + 0x20) = puVar3[0x14];
  *(undefined4 *)(iVar5 + 0x24) = uVar12;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x20) = uVar14;
  *(undefined4 *)(iVar5 + 0x24) = uVar10;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x20) = uVar13;
  *(undefined4 *)(iVar5 + 0x24) = uVar9;
  local_3c = s_cState_MiniGameState_00283b24;
  local_40 = iVar2;
  func_0010BEC4((int)(piVar4 + 600),5,&local_40);
  iVar5 = piVar4[0x25e];
  uVar12 = puVar3[4];
  uVar14 = puVar3[5];
  uVar9 = puVar3[0x1c];
  uVar13 = puVar3[0x1d];
  uVar10 = puVar3[0x1b];
  *(undefined4 *)(iVar5 + 0x28) = puVar3[0x1a];
  *(undefined4 *)(iVar5 + 0x2c) = uVar10;
  iVar5 = piVar4[0x25f];
  *(undefined4 *)(iVar5 + 0x28) = uVar9;
  *(undefined4 *)(iVar5 + 0x2c) = uVar13;
  iVar5 = piVar4[0x260];
  *(undefined4 *)(iVar5 + 0x28) = uVar12;
  *(undefined4 *)(iVar5 + 0x2c) = uVar14;
  func_0061FBC4((int)piVar4,piVar4[0x261],0);
  func_004C03B8((int)piVar4,DAT_00283b3c);
  func_004BC8D8((int)piVar4);
  return piVar4;
}

