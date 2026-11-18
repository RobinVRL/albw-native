#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern undefined4 *DAT_005f94c4;
extern undefined4 *DAT_005f94c8;
extern undefined4 *DAT_005f94cc;
extern undefined DAT_005f94d0;
extern undefined4 DAT_005f94d8;
extern undefined DAT_005f94dc;
extern undefined DAT_005f94e0;
extern undefined DAT_005f94e4;
extern undefined DAT_005f94e8;
extern undefined DAT_005f94f4;
extern undefined DAT_005f9500;
extern undefined DAT_005f9514;
extern undefined DAT_005f9524;
extern undefined DAT_005f9534;
extern undefined DAT_005f9548;
extern undefined DAT_005f9554;
extern undefined DAT_005f9564;
extern undefined DAT_005f9574;
extern undefined DAT_005f957c;
extern undefined DAT_005f9588;
extern undefined DAT_005f9598;
extern undefined DAT_005f95a4;
extern undefined DAT_005f95b0;
extern undefined DAT_005f95bc;
extern undefined DAT_005f95c8;
extern undefined DAT_005f95d4;
extern undefined DAT_005f95dc;
extern undefined DAT_005f95e4;
extern undefined DAT_005f95f0;
extern undefined DAT_005f95fc;
extern undefined DAT_005f9604;
extern undefined DAT_005f960c;
extern undefined DAT_005f9618;
extern undefined DAT_005f9624;
extern undefined DAT_005f9638;
extern undefined DAT_005f9640;
extern undefined4 DAT_005f964c;
extern uint DAT_005f9650;

// USA 005F9320 <- EU 005F92F8 (Ghidra, non-matching)
// GLOBAL DAT_005f94c4 undefined4 *
// GLOBAL DAT_005f94c8 undefined4 *
// GLOBAL DAT_005f94cc undefined4 *
// GLOBAL DAT_005f94d0 undefined
// GLOBAL DAT_005f94d8 undefined4
// GLOBAL DAT_005f94dc undefined
// GLOBAL DAT_005f94e0 undefined
// GLOBAL DAT_005f94e4 undefined
// GLOBAL DAT_005f94e8 undefined
// GLOBAL DAT_005f94f4 undefined
// GLOBAL DAT_005f9500 undefined
// GLOBAL DAT_005f9514 undefined
// GLOBAL DAT_005f9524 undefined
// GLOBAL DAT_005f9534 undefined
// GLOBAL DAT_005f9548 undefined
// GLOBAL DAT_005f9554 undefined
// GLOBAL DAT_005f9564 undefined
// GLOBAL DAT_005f9574 undefined
// GLOBAL DAT_005f957c undefined
// GLOBAL DAT_005f9588 undefined
// GLOBAL DAT_005f9598 undefined
// GLOBAL DAT_005f95a4 undefined
// GLOBAL DAT_005f95b0 undefined
// GLOBAL DAT_005f95bc undefined
// GLOBAL DAT_005f95c8 undefined
// GLOBAL DAT_005f95d4 undefined
// GLOBAL DAT_005f95dc undefined
// GLOBAL DAT_005f95e4 undefined
// GLOBAL DAT_005f95f0 undefined
// GLOBAL DAT_005f95fc undefined
// GLOBAL DAT_005f9604 undefined
// GLOBAL DAT_005f960c undefined
// GLOBAL DAT_005f9618 undefined
// GLOBAL DAT_005f9624 undefined
// GLOBAL DAT_005f9638 undefined
// GLOBAL DAT_005f9640 undefined
// GLOBAL DAT_005f964c undefined4
// GLOBAL DAT_005f9650 uint

void func_005F9320(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  puVar1 = DAT_005f94c4;
  DAT_005f94c4[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1 = DAT_005f94c8;
  *DAT_005f94c8 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005f94d8;
  puVar1 = DAT_005f94cc;
  *DAT_005f94cc = DAT_005f94d8;
  puVar1[1] = &DAT_005f94d0;
  puVar1[2] = uVar2;
  puVar1[3] = &DAT_005f94dc;
  puVar1[4] = uVar2;
  puVar1[5] = &DAT_005f94e0;
  puVar1[6] = uVar2;
  puVar1[7] = &DAT_005f94e4;
  puVar1[8] = uVar2;
  puVar1[9] = &DAT_005f94e8;
  puVar1[10] = uVar2;
  puVar1[0xb] = &DAT_005f94f4;
  puVar1[0xc] = uVar2;
  puVar1[0xd] = &DAT_005f9500;
  puVar1[0xe] = uVar2;
  puVar1[0xf] = &DAT_005f9514;
  puVar1[0x10] = uVar2;
  puVar1[0x11] = &DAT_005f9524;
  puVar1[0x12] = uVar2;
  puVar1[0x13] = &DAT_005f9534;
  puVar1[0x14] = uVar2;
  puVar1[0x15] = &DAT_005f9548;
  puVar1[0x16] = uVar2;
  puVar1[0x17] = &DAT_005f9554;
  puVar1[0x18] = uVar2;
  puVar1[0x19] = &DAT_005f9564;
  puVar1[0x1a] = uVar2;
  puVar1[0x1b] = &DAT_005f9574;
  puVar1[0x1c] = uVar2;
  puVar1[0x1d] = &DAT_005f957c;
  puVar1[0x1e] = uVar2;
  puVar1[0x1f] = &DAT_005f9588;
  puVar1[0x20] = uVar2;
  puVar1[0x21] = &DAT_005f9598;
  puVar1[0x22] = uVar2;
  puVar1[0x23] = &DAT_005f95a4;
  puVar1[0x24] = uVar2;
  puVar1[0x25] = &DAT_005f95b0;
  puVar1[0x26] = uVar2;
  puVar1[0x27] = &DAT_005f95bc;
  puVar1[0x28] = uVar2;
  puVar1[0x29] = &DAT_005f95c8;
  puVar1[0x2a] = uVar2;
  puVar1[0x2b] = &DAT_005f95d4;
  puVar1[0x2c] = uVar2;
  puVar1[0x2d] = &DAT_005f95dc;
  puVar1[0x2e] = uVar2;
  puVar1[0x2f] = &DAT_005f95e4;
  puVar1[0x30] = uVar2;
  puVar1[0x31] = &DAT_005f95f0;
  puVar1[0x32] = uVar2;
  puVar1[0x33] = &DAT_005f95fc;
  puVar1[0x34] = uVar2;
  puVar1[0x35] = &DAT_005f9604;
  puVar1[0x36] = uVar2;
  puVar1[0x37] = &DAT_005f960c;
  puVar1[0x38] = uVar2;
  puVar1[0x39] = &DAT_005f9618;
  puVar1[0x3a] = uVar2;
  puVar1[0x3b] = &DAT_005f9624;
  puVar1[0x3c] = uVar2;
  puVar1[0x3d] = &DAT_005f9638;
  puVar1[0x3e] = uVar2;
  puVar1[0x3f] = &DAT_005f9640;
  puVar1 = DAT_005f94c4;
  uVar3 = func_00114608(0,DAT_005f9650);
  *puVar1 = (int)uVar3;
  return;
}

