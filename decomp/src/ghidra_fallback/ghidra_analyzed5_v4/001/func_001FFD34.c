#include "ghidra_types.h"

extern undefined4 DAT_001ffe10;
extern undefined4 DAT_001ffe14;
extern undefined4 DAT_001ffe18;
extern undefined4 *DAT_001ffe1c;
extern undefined4 DAT_001ffe20;
extern undefined4 DAT_001ffe24;
extern undefined4 DAT_001ffe28;

// USA 001FFD34 <- EU 001FFD34 (Ghidra, non-matching)
// GLOBAL DAT_001ffe10 undefined4
// GLOBAL DAT_001ffe14 undefined4
// GLOBAL DAT_001ffe18 undefined4
// GLOBAL DAT_001ffe1c undefined4 *
// GLOBAL DAT_001ffe20 undefined4
// GLOBAL DAT_001ffe24 undefined4
// GLOBAL DAT_001ffe28 undefined4

undefined4 func_001FFD34(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  uVar4 = DAT_001ffe14;
  param_1[7] = 0;
  param_1[8] = 0xffffffff;
  param_1[10] = 0;
  param_1[9] = 0xffffffff;
  param_1[0xb] = 0;
  uVar3 = DAT_001ffe10;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  *param_1 = uVar3;
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar4;
  param_1[0x10] = uVar4;
  param_1[0x11] = uVar4;
  param_1[0x12] = uVar4;
  uVar2 = DAT_001ffe20;
  puVar1 = DAT_001ffe1c;
  uVar3 = DAT_001ffe18;
  param_1[0x13] = uVar4;
  param_1[0x14] = uVar3;
  param_1[0x15] = uVar4;
  param_1[0x19] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = param_1 + 0x1a;
  param_1[0x1a] = uVar2;
  param_1[0x20] = 0;
  uVar3 = DAT_001ffe24;
  param_1[0x21] = 0;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = uVar3;
  uVar3 = DAT_001ffe28;
  param_1[0x24] = DAT_001ffe28;
  param_1[0x25] = uVar3;
  param_1[0x26] = uVar4;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((int)param_1 + 0x9d) = 1;
  *(undefined1 *)((int)param_1 + 0x9e) = 0;
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  param_1[0x1b] = param_1;
  param_1[0x1c] = uVar3;
  param_1[0x1d] = uVar4;
  return (undefined4)param_1;
}

