#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined4 DAT_00418990;
extern undefined *DAT_00418994;
extern undefined *DAT_00418998;
extern undefined *DAT_0041899c;
extern undefined *DAT_004189a0;
extern undefined4 DAT_004189a4;

// USA 004188A4 <- EU 00418884 (Ghidra, non-matching)
// GLOBAL DAT_00418990 undefined4
// GLOBAL DAT_00418994 undefined *
// GLOBAL DAT_00418998 undefined *
// GLOBAL DAT_0041899c undefined *
// GLOBAL DAT_004189a0 undefined *
// GLOBAL DAT_004189a4 undefined4

void func_004188A4(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *param_1 = 0;
  param_1[1] = 1;
  uVar1 = DAT_00418990;
  param_1[2] = 2;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar2 = func_00100118((int)(param_1 + 0x14),DAT_00418994,0x10,2);
  iVar2 = func_00100118(iVar2 + 0x20,DAT_00418994,0x10,2);
  iVar2 = func_00100118(iVar2 + 0x20,DAT_00418998,0xc,2);
  iVar2 = func_00100118(iVar2 + 0x22c,DAT_0041899c,8,2);
  iVar2 = func_00100118(iVar2 + 0x10,DAT_004189a0,8,4);
  uVar1 = DAT_004189a4;
  iVar3 = iVar2 + -0x290;
  iVar4 = 0;
  *(undefined4 *)(iVar2 + -0x28c) = DAT_004189a4;
  *(undefined4 *)(iVar2 + -0x288) = uVar1;
  *(undefined4 *)(iVar2 + -0x284) = 0;
  *(undefined4 *)(iVar2 + -0x280) = 0;
  do {
    iVar2 = iVar3 + iVar4 * 0x10;
    *(undefined4 *)(iVar2 + 0x14) = uVar1;
    *(undefined4 *)(iVar2 + 0x18) = uVar1;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x34) = uVar1;
    *(undefined4 *)(iVar2 + 0x38) = uVar1;
    iVar5 = iVar3 + iVar4 * 4;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    iVar6 = iVar3 + iVar4 * 8;
    *(undefined4 *)(iVar2 + 0x40) = 0;
    *(undefined4 *)(iVar5 + 0x6c) = 0;
    *(undefined4 *)(iVar5 + 0x274) = 0;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar6 + 0x280) = 0;
    *(undefined4 *)(iVar6 + 0x284) = 0;
  } while (iVar4 < 2);
  return;
}

