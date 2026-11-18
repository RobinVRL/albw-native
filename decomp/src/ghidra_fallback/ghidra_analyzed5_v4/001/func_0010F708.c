#include "ghidra_types.h"

extern undefined4 DAT_0010f7e4;
extern undefined4 DAT_0010f7e8;

// USA 0010F708 <- EU 0010F708 (Ghidra, non-matching)
// GLOBAL DAT_0010f7e4 undefined4
// GLOBAL DAT_0010f7e8 undefined4

undefined4 * func_0010F708(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  uVar1 = DAT_0010f7e4;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0xffffffff;
  param_1[0x3e] = 0;
  param_1[0x2e] = uVar1;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  uVar2 = DAT_0010f7e8;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0xffffffff;
  param_1[3] = 0;
  param_1[0x3d] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = uVar2;
  param_1[7] = 0;
  return param_1;
}

