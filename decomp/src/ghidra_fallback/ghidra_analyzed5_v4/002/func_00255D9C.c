#include "ghidra_types.h"

extern int DAT_00255e90;

// GLOBAL DAT_00255e90 int
// USA 00255D9C <- EU 00255D70 (Ghidra, function missing from the decomp table)

undefined4 * func_00255D9C(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x21) = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)((int)param_1 + 0xf9) = 0;
  iVar1 = DAT_00255e90;
  *(undefined1 *)((int)param_1 + 0xfa) = 0;
  *(undefined1 *)((int)param_1 + 0xfb) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)((int)param_1 + 0xfd) = 0;
  *(undefined2 *)(iVar1 + (int)param_1) = 0;
  iVar2 = 0;
  param_1[0x41] = 0;
  iVar1 = 0;
  param_1[0x42] = 0;
  do {
    *(undefined1 *)((int)param_1 + iVar2 + 0x10c) = 0;
    iVar1 = iVar1 + 2;
    *(undefined1 *)((int)param_1 + iVar2 + 0x10d) = 0;
    iVar2 = iVar2 + 2;
  } while (iVar1 < 0x40);
  iVar2 = 0;
  iVar1 = 0;
  do {
    *(undefined1 *)((int)param_1 + iVar2 + 0x14c) = 0;
    iVar1 = iVar1 + 2;
    *(undefined1 *)((int)param_1 + iVar2 + 0x14d) = 0;
    iVar2 = iVar2 + 2;
  } while (iVar1 < 0x40);
  iVar2 = 1;
  param_1[10] = 2;
  iVar1 = 1;
  do {
    iVar2 = iVar2 + 2;
    param_1[iVar1 + 10] = 2;
    param_1[iVar1 + 0xb] = 2;
    iVar1 = iVar1 + 2;
  } while (iVar2 < 0x2d);
  param_1[0x27] = 0;
  param_1[0x30] = 0;
  param_1[0x28] = 3;
  *(undefined1 *)((int)param_1 + 0x21) = 1;
  param_1[0x37] = 8;
  param_1[0x3a] = 3;
  param_1[0x3b] = 4;
  param_1[10] = 3;
  param_1[0x38] = 9;
  param_1[0x39] = 10;
  *(undefined2 *)(param_1 + 0x3c) = 999;
  return param_1;
}

