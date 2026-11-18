#include "ghidra_types.h"

extern undefined4 DAT_0010c7c8;
extern undefined4 DAT_0010c7cc;
extern undefined4 DAT_0010c7d0;
extern undefined4 DAT_0010c7d4;
extern undefined4 DAT_0010c7d8;
extern undefined4 DAT_0010c7dc;

// USA 0010C67C <- EU 0010C67C (Ghidra, non-matching)
// GLOBAL DAT_0010c7c8 undefined4
// GLOBAL DAT_0010c7cc undefined4
// GLOBAL DAT_0010c7d0 undefined4
// GLOBAL DAT_0010c7d4 undefined4
// GLOBAL DAT_0010c7d8 undefined4
// GLOBAL DAT_0010c7dc undefined4

undefined4 * func_0010C67C(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_0010c7cc;
  *param_1 = DAT_0010c7c8;
  param_1[1] = 0;
  param_1[2] = uVar1;
  param_1[3] = param_1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_1 + 0xb;
  param_1[0xc] = param_1 + 0xb;
  param_1[0xd] = 0;
  param_1[0xe] = param_1 + 0xe;
  param_1[0x11] = 0;
  param_1[0xf] = param_1 + 0xe;
  uVar1 = DAT_0010c7d0;
  param_1[0x12] = 0;
  param_1[0x10] = uVar1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = param_1 + 0x16;
  param_1[0x17] = param_1 + 0x16;
  param_1[0x18] = 0;
  param_1[0x19] = param_1 + 0x19;
  param_1[0x1b] = 0;
  param_1[0x1a] = param_1 + 0x19;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = param_1 + 0x1e;
  param_1[0x1f] = param_1 + 0x1e;
  param_1[0x20] = 0;
  param_1[0x21] = param_1 + 0x21;
  param_1[0x24] = 0;
  param_1[0x22] = param_1 + 0x21;
  uVar1 = DAT_0010c7d4;
  param_1[0x25] = 0;
  param_1[0x23] = uVar1;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = param_1 + 0x29;
  param_1[0x2a] = param_1 + 0x29;
  param_1[0x2b] = 0;
  param_1[0x2c] = param_1 + 0x2c;
  param_1[0x2e] = 0;
  param_1[0x2d] = param_1 + 0x2c;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = param_1 + 0x31;
  param_1[0x32] = param_1 + 0x31;
  param_1[0x33] = 0;
  param_1[0x34] = param_1 + 0x34;
  param_1[0x3c] = 0;
  param_1[0x35] = param_1 + 0x34;
  param_1[0x3e] = param_1 + 0x40;
  uVar2 = DAT_0010c7dc;
  uVar1 = DAT_0010c7d8;
  param_1[0x3f] = 0;
  param_1[0x40] = uVar2;
  param_1[0x3d] = uVar1;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  return param_1;
}

