#include "ghidra_types.h"

extern undefined4 DAT_004f2054;
extern undefined4 DAT_004f2058;

// USA 004F1FB4 <- EU 004F1F8C (Ghidra, non-matching)
// GLOBAL DAT_004f2054 undefined4
// GLOBAL DAT_004f2058 undefined4

undefined4 func_004F1FB4(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_1 = 0xff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xff;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xff;
  param_1[0xd] = 0;
  uVar1 = DAT_004f2054;
  param_1[0xe] = 0;
  uVar2 = DAT_004f2058;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  param_1[0x18] = 0xff;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0xff;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0xff;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0xff;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  return (undefined4)param_1;
}

