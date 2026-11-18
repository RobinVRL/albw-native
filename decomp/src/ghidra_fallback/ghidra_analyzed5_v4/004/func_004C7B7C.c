#include "ghidra_types.h"

extern undefined4 DAT_004c7bc4;
extern undefined4 DAT_004c7bc8;

// USA 004C7B7C <- EU 004C7B54 (Ghidra, non-matching)
// GLOBAL DAT_004c7bc4 undefined4
// GLOBAL DAT_004c7bc8 undefined4

undefined4 func_004C7B7C(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  uVar2 = DAT_004c7bc8;
  param_1[7] = 0;
  param_1[8] = 0xffffffff;
  param_1[10] = 0;
  param_1[9] = 0xffffffff;
  param_1[0xb] = 0;
  uVar1 = DAT_004c7bc4;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  *param_1 = uVar1;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar2;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  return (undefined4)param_1;
}

