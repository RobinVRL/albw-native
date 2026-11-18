#include "ghidra_types.h"

extern undefined4 DAT_003e0abc;
extern undefined4 DAT_003e0ac0;
extern undefined4 DAT_003e0ac4;
extern undefined4 *DAT_003e0ac8;
extern undefined4 DAT_003e0acc;

// USA 003E099C <- EU 003E097C (Ghidra, non-matching)
// GLOBAL DAT_003e0abc undefined4
// GLOBAL DAT_003e0ac0 undefined4
// GLOBAL DAT_003e0ac4 undefined4
// GLOBAL DAT_003e0ac8 undefined4 *
// GLOBAL DAT_003e0acc undefined4

undefined4 func_003E099C(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = DAT_003e0abc;
  param_1[1] = 0x3c;
  param_1[2] = 4000;
  param_1[3] = 100;
  puVar1 = DAT_003e0ac8;
  uVar2 = DAT_003e0ac0;
  param_1[4] = DAT_003e0ac4;
  uVar3 = DAT_003e0acc;
  param_1[5] = uVar2;
  param_1[6] = puVar1;
  param_1[7] = uVar3;
  param_1[8] = uVar2;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  param_1[0x38] = 0;
  param_1[0xe] = uVar3;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar4;
  param_1[0x3e] = 0xbe0;
  param_1[0x3f] = 0xe60;
  param_1[0x40] = 0x820;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x27] = 0xa0;
  param_1[0x28] = 0;
  param_1[0x29] = 0xa0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0xa0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0xa0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0xa0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0xf] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1f] = 0;
  param_1[0x23] = 0;
  param_1[0x34] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x20] = 0;
  param_1[0x24] = 0;
  param_1[0x35] = 0;
  param_1[0x11] = 0;
  param_1[0x15] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x21] = 0;
  param_1[0x25] = 0;
  param_1[0x36] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x22] = 0;
  param_1[0x26] = 0;
  param_1[0x37] = 0;
  return (undefined4)param_1;
}

