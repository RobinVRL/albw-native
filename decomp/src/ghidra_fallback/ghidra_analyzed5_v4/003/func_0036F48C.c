#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0036E490(byte *param_1,uint param_2,undefined4 param_3);
extern undefined4 DAT_0036f550;
extern undefined *DAT_0036f554;
extern undefined4 DAT_0036f558;
extern undefined4 DAT_0036f55c;
extern int DAT_0036f560;
extern undefined4 DAT_0036f564;
extern undefined4 DAT_0036f568;

// USA 0036F48C <- EU 0036F468 (Ghidra, non-matching)
// GLOBAL DAT_0036f550 undefined4
// GLOBAL DAT_0036f554 undefined *
// GLOBAL DAT_0036f558 undefined4
// GLOBAL DAT_0036f55c undefined4
// GLOBAL DAT_0036f560 int
// GLOBAL DAT_0036f564 undefined4
// GLOBAL DAT_0036f568 undefined4

byte * func_0036F48C(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = DAT_0036f550;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  iVar1 = func_00100118((int)(param_1 + 0x1c),DAT_0036f554,0xc,3);
  uVar3 = DAT_0036f558;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = uVar3;
  uVar4 = DAT_0036f568;
  uVar3 = DAT_0036f564;
  *(undefined4 *)(iVar1 + 0x2c) = DAT_0036f55c;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  uVar2 = *(undefined4 *)(DAT_0036f560 + 0xc);
  *(undefined4 *)(iVar1 + 0x38) = uVar2;
  *(undefined4 *)(iVar1 + 0x3c) = uVar2;
  *(undefined4 *)(iVar1 + 0x40) = uVar3;
  *(undefined4 *)(iVar1 + 0x44) = uVar4;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined1 *)(iVar1 + 0x4c) = 0;
  *(undefined1 *)(iVar1 + 0x4d) = 0;
  *(char *)(iVar1 + 0x4e) = (char)param_3;
  *(undefined1 *)(iVar1 + 0x4f) = 0;
  *(undefined1 *)(iVar1 + 0x50) = 0;
  *(undefined1 *)(iVar1 + 0x51) = 0;
  *(undefined1 *)(iVar1 + 0x52) = 0;
  uVar3 = *(undefined4 *)(param_2 + 0x3d4);
  uVar4 = *(undefined4 *)(param_2 + 0x3d8);
  *(undefined4 *)(iVar1 + -0x18) = *(undefined4 *)(param_2 + 0x3d0);
  *(undefined4 *)(iVar1 + -0x14) = uVar3;
  *(undefined4 *)(iVar1 + -0x10) = uVar4;
  *(undefined4 *)(iVar1 + -0x14) = *(undefined4 *)(param_2 + 0xc);
  func_0036E490((byte *)(iVar1 + -0x1c),0,param_2);
  if (param_3 == 0) {
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -0x80000000;
  }
  return (byte *)(iVar1 + -0x1c);
}

