#include "ghidra_types.h"

extern undefined4 *DAT_00507004;
extern undefined4 DAT_00507008;

// USA 00506FE4 <- EU 00506FBC (Ghidra, non-matching)
// GLOBAL DAT_00507004 undefined4 *
// GLOBAL DAT_00507008 undefined4

undefined4 func_00506FE4(undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  puVar1 = DAT_00507004;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  *(undefined1 **)(param_1 + 0x18) = param_1;
  uVar2 = DAT_00507008;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined2 *)(param_1 + 0x28) = 1;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0;
  return (undefined4)param_1;
}

