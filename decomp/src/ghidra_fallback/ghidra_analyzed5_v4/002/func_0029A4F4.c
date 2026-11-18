#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_0029a6ec;
extern undefined4 DAT_0029a6f0;
extern undefined4 DAT_0029a6f4;
extern int DAT_0029a6f8;
extern undefined *DAT_0029a6fc;
extern undefined *DAT_0029a700;
extern char s_TagSoundPlayer__d_0029a704[];
extern char s_cf_0029a704[];

// USA 0029A4F4 <- EU 0029A4D0 (Ghidra, non-matching)
// GLOBAL DAT_0029a6ec int
// GLOBAL DAT_0029a6f0 undefined4
// GLOBAL DAT_0029a6f4 undefined4
// GLOBAL DAT_0029a6f8 int
// GLOBAL DAT_0029a6fc undefined *
// GLOBAL DAT_0029a700 undefined *
// GLOBAL s_cf_0029a704 string

int func_0029A4F4(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  piVar1 = func_00150E40(param_1,param_2);
  iVar4 = DAT_0029a6ec;
  *piVar1 = DAT_0029a6ec;
  piVar1[200] = iVar4 + 0x54;
  piVar1[0x104] = (int)(piVar1 + 0x106);
  piVar1[0x105] = 0x20;
  *(undefined1 *)(piVar1[0x104] + 0x1f) = 0;
  iVar4 = DAT_0029a6f8;
  *(undefined1 *)piVar1[0x104] = 0;
  piVar1[0x103] = iVar4;
  *(undefined1 *)(piVar1 + 0x10e) = 0;
  piVar2 = piVar1 + 0x10f;
  piVar1[0x110] = (int)piVar2;
  piVar1[0x111] = 0;
  piVar3 = piVar1 + 0x115;
  piVar1[0x112] = 0;
  *piVar2 = (int)piVar2;
  piVar1[0x113] = 0;
  piVar1[0x114] = 0;
  if (piVar3 != (int *)0x0) {
    iVar4 = 0;
    iVar6 = 7;
    piVar1[0x112] = (int)piVar3;
    do {
      iVar6 = iVar6 + -1;
      piVar3[iVar4] = (int)(piVar3 + iVar4 + 3);
      iVar4 = iVar4 + 3;
    } while (iVar6 != 0);
    piVar1[0x12a] = 0;
    piVar1[0x113] = (int)piVar3;
    piVar1[0x114] = 8;
  }
  piVar2 = piVar1 + 0x12d;
  piVar1[0x12e] = (int)piVar2;
  piVar1[0x12f] = 0;
  piVar3 = piVar1 + 0x133;
  piVar1[0x130] = 0;
  *piVar2 = (int)piVar2;
  piVar1[0x131] = 0;
  piVar1[0x132] = 0;
  if (piVar3 != (int *)0x0) {
    iVar4 = 0;
    iVar6 = 3;
    piVar1[0x130] = (int)piVar3;
    do {
      iVar6 = iVar6 + -1;
      piVar3[iVar4] = (int)(piVar3 + iVar4 + 3);
      iVar4 = iVar4 + 3;
    } while (iVar6 != 0);
    piVar1[0x13c] = 0;
    piVar1[0x131] = (int)piVar3;
    piVar1[0x132] = 4;
  }
  piVar1[0x13f] = 0;
  piVar1[0x140] = 0;
  piVar1[0x141] = 0;
  piVar1[0x142] = 0;
  iVar4 = func_00100118((int)(piVar1 + 0x143),DAT_0029a6fc,0x14,5);
  uVar5 = 5;
  iVar4 = func_00100118(iVar4 + 0x78,DAT_0029a700,0x60,5);
  *(undefined1 *)(iVar4 + 0x1e4) = 0;
  *(bool *)(iVar4 + 0x1e5) = *(short *)((int)param_2 + 0x2a) != 0;
  *(bool *)(iVar4 + 0x1e6) = (short)param_2[0xb] == 1;
  *(undefined1 *)(iVar4 + 0x1e7) = 0;
  *(undefined1 *)(iVar4 + 0x1e8) = 1;
  *(undefined1 *)(iVar4 + 0x1e9) = 0;
  func_004994B0(iVar4 + -0x178,s_TagSoundPlayer__d_0029a704,(int)(short)param_2[10],uVar5);
  if ((short)param_2[10] == 2000) {
    *(undefined1 *)(iVar4 + -0x14c) = 1;
  }
  else if ((short)param_2[10] == 4000) {
    *(undefined1 *)(iVar4 + -0x14c) = 2;
  }
  if ((short)param_2[0xb] == 1) {
    *(undefined4 *)(iVar4 + 0x1e0) = 1;
  }
  else if ((short)param_2[0xb] == 2) {
    *(undefined4 *)(iVar4 + 0x1e0) = 2;
  }
  *(undefined4 *)(iVar4 + -0x88) = 0;
  *(undefined4 *)(iVar4 + -0x84) = 0xffffffff;
  *(undefined4 *)(iVar4 + -0x80) = 0;
  *(undefined4 *)(iVar4 + -0x7c) = 0xffffffff;
  *(undefined4 *)(iVar4 + -0x14) = 0xffffffff;
  *(undefined4 *)(iVar4 + -0x10) = 0xffffffff;
  *(undefined4 *)(iVar4 + -0xc) = 0xffffffff;
  *(undefined4 *)(iVar4 + -8) = 0xffffffff;
  *(undefined4 *)(iVar4 + -4) = 0xffffffff;
  return iVar4 + -0x584;
}

