#include "ghidra_types.h"

extern undefined4 DAT_0040e2a4;
extern undefined4 DAT_0040e2a8;
extern undefined4 DAT_0040e2ac;

// USA 0040E208 <- EU 0040E1E8 (Ghidra, non-matching)
// GLOBAL DAT_0040e2a4 undefined4
// GLOBAL DAT_0040e2a8 undefined4
// GLOBAL DAT_0040e2ac undefined4

undefined4 * func_0040E208(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_0040e2ac;
  uVar1 = DAT_0040e2a8;
  *param_1 = DAT_0040e2a4;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar1;
  param_1[0x18] = uVar2;
  param_1[0x19] = uVar2;
  param_1[0x1a] = uVar2;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = uVar2;
  param_1[0x1e] = uVar2;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = uVar2;
  param_1[0x22] = uVar2;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)((int)param_1 + 0x9b) = 0;
  param_1[0x2d] = uVar2;
  param_1[0x2e] = uVar2;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  return param_1;
}

