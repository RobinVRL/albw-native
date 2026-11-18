#include "ghidra_types.h"

extern undefined4 DAT_0040d40c;
extern undefined4 DAT_0040d410;
extern undefined4 DAT_0040d414;
extern undefined4 *DAT_0040d418;
extern undefined4 DAT_0040d41c;

// USA 0040D2DC <- EU 0040D2BC (Ghidra, non-matching)
// GLOBAL DAT_0040d40c undefined4
// GLOBAL DAT_0040d410 undefined4
// GLOBAL DAT_0040d414 undefined4
// GLOBAL DAT_0040d418 undefined4 *
// GLOBAL DAT_0040d41c undefined4

undefined4 func_0040D2DC(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_0040d40c;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = uVar2;
  param_1[3] = 0x3c;
  param_1[4] = 4000;
  param_1[5] = 100;
  puVar1 = DAT_0040d418;
  uVar2 = DAT_0040d414;
  param_1[6] = DAT_0040d410;
  uVar3 = DAT_0040d41c;
  param_1[7] = uVar2;
  param_1[8] = puVar1;
  param_1[9] = uVar3;
  param_1[10] = uVar2;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  param_1[0xc] = 0;
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  param_1[0x3a] = 0;
  param_1[0xe] = uVar4;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar3;
  param_1[0x40] = 0xbe0;
  param_1[0x41] = 0xe60;
  param_1[0x42] = 0x820;
  *(undefined1 *)((int)param_1 + 0x10d) = 4;
  *(undefined1 *)((int)param_1 + 0x10e) = 0;
  param_1[0x29] = 0xa0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0xa0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0xa0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0xa0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0xa0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x11] = 0;
  param_1[0x15] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x21] = 0;
  param_1[0x25] = 0;
  param_1[0x36] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x22] = 0;
  param_1[0x26] = 0;
  param_1[0x37] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x23] = 0;
  param_1[0x27] = 0;
  param_1[0x38] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x24] = 0;
  param_1[0x28] = 0;
  param_1[0x39] = 0;
  return (undefined4)param_1;
}

