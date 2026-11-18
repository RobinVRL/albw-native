#include "ghidra_types.h"

extern undefined4 DAT_003cbbf0;
extern undefined4 DAT_003cbbf4;

// USA 003CBB00 <- EU 003CBADC (Ghidra, non-matching)
// GLOBAL DAT_003cbbf0 undefined4
// GLOBAL DAT_003cbbf4 undefined4

undefined1 * func_003CBB00(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 6;
  param_1[4] = 6;
  param_1[5] = 7;
  param_1[6] = 7;
  param_1[7] = 0xff;
  param_1[8] = 0xff;
  param_1[9] = 0xff;
  param_1[10] = 0xff;
  *(undefined1 **)(param_1 + 0xc) = param_1;
  param_1[0x10] = 0;
  param_1[0x11] = 6;
  *(undefined1 **)(param_1 + 0x14) = param_1;
  param_1[0x18] = 0;
  uVar2 = DAT_003cbbf4;
  uVar1 = DAT_003cbbf0;
  param_1[0x19] = 1;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined1 **)(param_1 + 0x2c) = param_1;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 **)(param_1 + 0x34) = param_1;
  param_1[0x38] = 0;
  param_1[0x39] = 0xff;
  param_1[0x3c] = 1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xff;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined1 **)(param_1 + 0x4c) = param_1;
  param_1[0x50] = 0xf;
  param_1[0x54] = 1;
  param_1[0x55] = 1;
  param_1[0x56] = 4;
  *(undefined1 **)(param_1 + 0x58) = param_1;
  param_1[0x5c] = 1;
  param_1[0x5d] = 1;
  param_1[0x5e] = 1;
  *(undefined1 **)(param_1 + 0x60) = param_1;
  *(undefined4 *)(param_1 + 100) = uVar1;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  param_1[0x78] = 0x18;
  *(undefined1 **)(param_1 + 0x7c) = param_1;
  return param_1;
}

