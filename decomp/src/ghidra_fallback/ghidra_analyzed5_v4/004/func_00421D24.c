#include "ghidra_types.h"

extern undefined4 DAT_00421d64;

// USA 00421D24 <- EU 00421D04 (Ghidra, non-matching)
// GLOBAL DAT_00421d64 undefined4

undefined4 func_00421D24(undefined2 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00421d64;
  *param_1 = 0;
  param_1[1] = 0xffff;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[7] = 0xffff;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 **)(param_1 + 0x14) = param_1;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((int)param_1 + 0x3d) = 1;
  return (undefined4)param_1;
}

