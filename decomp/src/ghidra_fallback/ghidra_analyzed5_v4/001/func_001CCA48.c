#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004BC7BC(int param_1);
extern int func_004BC8D8(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_006194E8(int param_1,int param_2,undefined1 param_3);
extern int func_0061A16C(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4, undefined4 *param_5);
extern int DAT_001ccdd0;
extern undefined DAT_001ccdd4;
extern int DAT_001ccde0;
extern undefined4 DAT_001ccde4;
extern int DAT_001ccde8;
extern undefined *DAT_001ccdec;
extern int DAT_001ccdf0;
extern undefined4 *DAT_001cce38;
extern char s_cState_EventEnd_001cce1c[];
extern char s_cState_Event_001cce0c[];
extern char s_cState_Hide_001cce2c[];
extern char s_cState_Wait_001ccdf4[];
extern char s_cState_Walk_001cce00[];

// USA 001CCA48 <- EU 001CCA48 (Ghidra, non-matching)
// GLOBAL DAT_001ccdd0 int
// GLOBAL DAT_001ccdd4 undefined
// GLOBAL DAT_001ccde0 int
// GLOBAL DAT_001ccde4 undefined4
// GLOBAL DAT_001ccde8 int
// GLOBAL DAT_001ccdec undefined *
// GLOBAL DAT_001ccdf0 int
// GLOBAL DAT_001cce38 undefined4 *
// GLOBAL s_cState_EventEnd_001cce1c string
// GLOBAL s_cState_Event_001cce0c string
// GLOBAL s_cState_Hide_001cce2c string
// GLOBAL s_cState_Wait_001ccdf4 string
// GLOBAL s_cState_Walk_001cce00 string

int * func_001CCA48(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
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
  piVar2 = (int *)func_0061A16C(param_1,param_2,0,0xff,&local_38);
  iVar10 = DAT_001ccde0;
  iVar8 = DAT_001ccdd0;
  piVar2[200] = DAT_001ccdd0 + 0xb8;
  *piVar2 = iVar8;
  local_3c = &DAT_001ccdd4;
  local_40 = iVar10;
  func_004BE114(piVar2,7,0,0,DAT_001ccde4);
  *(undefined1 *)((int)piVar2 + 0x966) = 5;
  piVar2[0x25d] = (int)piVar2;
  iVar3 = func_0010BA78(0x50);
  piVar2[0x25e] = iVar3;
  iVar8 = DAT_001ccde8;
  piVar2[0x25f] = iVar3 + (uint)*(byte *)((int)piVar2 + 0x966) * 8;
  iVar6 = 5;
  puVar4 = (undefined4 *)(iVar3 + -8);
  do {
    uVar12 = *(undefined4 *)(iVar8 + 0xdc);
    iVar6 = iVar6 + -1;
    puVar4[2] = *(undefined4 *)(iVar8 + 0xd8);
    puVar4[3] = uVar12;
    uVar12 = *(undefined4 *)(iVar8 + 0xdc);
    puVar4[4] = *(undefined4 *)(iVar8 + 0xd8);
    puVar4[5] = uVar12;
    puVar4 = puVar4 + 4;
  } while (iVar6 != 0);
  bVar1 = *(byte *)((int)piVar2 + 0x966);
  uVar11 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar11 << 3);
  piVar2[0x260] = (int)puVar4;
  if (uVar11 != 0) {
    puVar5 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = *(undefined4 *)(iVar8 + 0x7c);
      *puVar4 = *(undefined4 *)(iVar8 + 0x78);
      puVar4[1] = uVar12;
      puVar5 = puVar4;
    }
    for (iVar3 = (int)uVar11 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar12 = *(undefined4 *)(iVar8 + 0x7c);
      puVar5[2] = *(undefined4 *)(iVar8 + 0x78);
      puVar5[3] = uVar12;
      uVar12 = *(undefined4 *)(iVar8 + 0x7c);
      puVar5[4] = *(undefined4 *)(iVar8 + 0x78);
      puVar5[5] = uVar12;
      puVar5 = puVar5 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar3 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x24;
    puVar4[1] = 5;
    iVar3 = func_00100118((int)(puVar4 + 2),DAT_001ccdec,0x24,5);
  }
  if (iVar3 != 0) {
    piVar2[0x25a] = 5;
    piVar2[0x25b] = iVar3;
  }
  iVar3 = DAT_001ccdf0;
  piVar2[0xd5] = (int)(piVar2 + 600);
  *(undefined2 *)(iVar3 + (int)piVar2) = 5;
  local_3c = s_cState_Wait_001ccdf4;
  local_40 = iVar10;
  func_0010BEC4((int)(piVar2 + 600),0,&local_40);
  puVar4 = (undefined4 *)piVar2[0x25e];
  uVar7 = *(undefined4 *)(iVar8 + 0x68);
  uVar12 = *(undefined4 *)(iVar8 + 0x70);
  uVar13 = *(undefined4 *)(iVar8 + 0x74);
  uVar15 = *(undefined8 *)(iVar8 + 0x78);
  puVar4[1] = *(undefined4 *)(iVar8 + 0x6c);
  *puVar4 = uVar7;
  puVar4 = (undefined4 *)piVar2[0x25f];
  *puVar4 = uVar12;
  puVar4[1] = uVar13;
  puVar4 = (undefined4 *)piVar2[0x260];
  *puVar4 = (int)uVar15;
  puVar4[1] = (int)((ulonglong)uVar15 >> 0x20);
  local_3c = s_cState_Walk_001cce00;
  local_40 = iVar10;
  func_0010BEC4((int)(piVar2 + 600),1,&local_40);
  iVar3 = piVar2[0x25e];
  uVar7 = *(undefined4 *)(iVar8 + 0x84);
  uVar12 = *(undefined4 *)(iVar8 + 0x88);
  uVar13 = *(undefined4 *)(iVar8 + 0x8c);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar8 + 0x80);
  *(undefined4 *)(iVar3 + 0xc) = uVar7;
  iVar3 = piVar2[0x25f];
  *(undefined4 *)(iVar3 + 8) = uVar12;
  *(undefined4 *)(iVar3 + 0xc) = uVar13;
  iVar3 = piVar2[0x260];
  *(int *)(iVar3 + 8) = (int)uVar15;
  *(int *)(iVar3 + 0xc) = (int)((ulonglong)uVar15 >> 0x20);
  local_3c = s_cState_Event_001cce0c;
  local_40 = iVar10;
  func_0010BEC4((int)(piVar2 + 600),2,&local_40);
  iVar3 = piVar2[0x25e];
  uVar12 = *(undefined4 *)(iVar8 + 0x94);
  uVar7 = *(undefined4 *)(iVar8 + 0x98);
  uVar13 = *(undefined4 *)(iVar8 + 0x9c);
  *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar8 + 0x90);
  *(undefined4 *)(iVar3 + 0x14) = uVar12;
  iVar3 = piVar2[0x25f];
  *(undefined4 *)(iVar3 + 0x10) = uVar7;
  *(undefined4 *)(iVar3 + 0x14) = uVar13;
  iVar3 = piVar2[0x260];
  *(int *)(iVar3 + 0x10) = (int)uVar15;
  *(int *)(iVar3 + 0x14) = (int)((ulonglong)uVar15 >> 0x20);
  local_3c = s_cState_EventEnd_001cce1c;
  local_40 = iVar10;
  func_0010BEC4((int)(piVar2 + 600),3,&local_40);
  iVar3 = piVar2[0x25e];
  uVar14 = *(undefined4 *)(iVar8 + 0xa4);
  uVar12 = *(undefined4 *)(iVar8 + 0xac);
  uVar9 = *(undefined4 *)(iVar8 + 0xb0);
  uVar7 = *(undefined4 *)(iVar8 + 0xb4);
  uVar13 = *(undefined4 *)(iVar8 + 0xa8);
  *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar8 + 0xa0);
  *(undefined4 *)(iVar3 + 0x1c) = uVar14;
  iVar3 = piVar2[0x25f];
  *(undefined4 *)(iVar3 + 0x18) = uVar13;
  *(undefined4 *)(iVar3 + 0x1c) = uVar12;
  iVar3 = piVar2[0x260];
  *(undefined4 *)(iVar3 + 0x18) = uVar9;
  *(undefined4 *)(iVar3 + 0x1c) = uVar7;
  local_3c = s_cState_Hide_001cce2c;
  local_40 = iVar10;
  func_0010BEC4((int)(piVar2 + 600),4,&local_40);
  iVar10 = piVar2[0x25e];
  uVar12 = *(undefined4 *)(iVar8 + 0xc0);
  uVar7 = *(undefined4 *)(iVar8 + 0xc4);
  uVar14 = *(undefined4 *)(iVar8 + 200);
  uVar9 = *(undefined4 *)(iVar8 + 0xcc);
  uVar13 = *(undefined4 *)(iVar8 + 0xbc);
  *(undefined4 *)(iVar10 + 0x20) = *(undefined4 *)(iVar8 + 0xb8);
  *(undefined4 *)(iVar10 + 0x24) = uVar13;
  iVar8 = piVar2[0x25f];
  *(undefined4 *)(iVar8 + 0x20) = uVar12;
  *(undefined4 *)(iVar8 + 0x24) = uVar7;
  iVar8 = piVar2[0x260];
  *(undefined4 *)(iVar8 + 0x20) = uVar14;
  *(undefined4 *)(iVar8 + 0x24) = uVar9;
  func_006194E8((int)piVar2,piVar2[0x261],0);
  func_004C03B8((int)piVar2,DAT_001cce38);
  func_004BC8D8((int)piVar2);
  piVar2[0xb8] = piVar2[0xb8] | 2;
  piVar2[0x22b] = piVar2[0x22b] | 0x1000;
  func_004BC7BC((int)piVar2);
  return piVar2;
}

