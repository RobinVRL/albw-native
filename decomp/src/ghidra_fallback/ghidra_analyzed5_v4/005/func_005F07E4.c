#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern undefined4 *DAT_005f09ac;
extern undefined4 *DAT_005f09b0;
extern undefined4 *DAT_005f09b4;
extern undefined DAT_005f09b8;
extern undefined4 DAT_005f09c0;
extern undefined DAT_005f09c4;
extern undefined DAT_005f09c8;
extern undefined DAT_005f09cc;
extern undefined DAT_005f09d0;
extern undefined DAT_005f09dc;
extern undefined DAT_005f09e8;
extern undefined DAT_005f09fc;
extern undefined DAT_005f0a0c;
extern undefined DAT_005f0a1c;
extern undefined DAT_005f0a30;
extern undefined DAT_005f0a3c;
extern undefined DAT_005f0a4c;
extern undefined DAT_005f0a5c;
extern undefined DAT_005f0a64;
extern undefined DAT_005f0a70;
extern undefined DAT_005f0a80;
extern undefined DAT_005f0a8c;
extern undefined DAT_005f0a98;
extern undefined DAT_005f0aa4;
extern undefined DAT_005f0ab0;
extern undefined DAT_005f0abc;
extern undefined DAT_005f0ac4;
extern undefined DAT_005f0acc;
extern undefined DAT_005f0ad8;
extern undefined DAT_005f0ae4;
extern undefined DAT_005f0aec;
extern undefined DAT_005f0af4;
extern undefined DAT_005f0b00;
extern undefined DAT_005f0b0c;
extern undefined DAT_005f0b20;
extern undefined DAT_005f0b28;
extern undefined4 DAT_005f0b34;
extern uint DAT_005f0b38;
extern undefined4 DAT_005f0b3c;
extern undefined4 *DAT_005f0b40;
extern undefined4 DAT_005f0b44;
extern undefined4 DAT_005f0b48;
extern undefined4 DAT_005f0b4c;
extern uint DAT_005f0b50;

// USA 005F07E4 <- EU 005F07BC (Ghidra, non-matching)
// GLOBAL DAT_005f09ac undefined4 *
// GLOBAL DAT_005f09b0 undefined4 *
// GLOBAL DAT_005f09b4 undefined4 *
// GLOBAL DAT_005f09b8 undefined
// GLOBAL DAT_005f09c0 undefined4
// GLOBAL DAT_005f09c4 undefined
// GLOBAL DAT_005f09c8 undefined
// GLOBAL DAT_005f09cc undefined
// GLOBAL DAT_005f09d0 undefined
// GLOBAL DAT_005f09dc undefined
// GLOBAL DAT_005f09e8 undefined
// GLOBAL DAT_005f09fc undefined
// GLOBAL DAT_005f0a0c undefined
// GLOBAL DAT_005f0a1c undefined
// GLOBAL DAT_005f0a30 undefined
// GLOBAL DAT_005f0a3c undefined
// GLOBAL DAT_005f0a4c undefined
// GLOBAL DAT_005f0a5c undefined
// GLOBAL DAT_005f0a64 undefined
// GLOBAL DAT_005f0a70 undefined
// GLOBAL DAT_005f0a80 undefined
// GLOBAL DAT_005f0a8c undefined
// GLOBAL DAT_005f0a98 undefined
// GLOBAL DAT_005f0aa4 undefined
// GLOBAL DAT_005f0ab0 undefined
// GLOBAL DAT_005f0abc undefined
// GLOBAL DAT_005f0ac4 undefined
// GLOBAL DAT_005f0acc undefined
// GLOBAL DAT_005f0ad8 undefined
// GLOBAL DAT_005f0ae4 undefined
// GLOBAL DAT_005f0aec undefined
// GLOBAL DAT_005f0af4 undefined
// GLOBAL DAT_005f0b00 undefined
// GLOBAL DAT_005f0b0c undefined
// GLOBAL DAT_005f0b20 undefined
// GLOBAL DAT_005f0b28 undefined
// GLOBAL DAT_005f0b34 undefined4
// GLOBAL DAT_005f0b38 uint
// GLOBAL DAT_005f0b3c undefined4
// GLOBAL DAT_005f0b40 undefined4 *
// GLOBAL DAT_005f0b44 undefined4
// GLOBAL DAT_005f0b48 undefined4
// GLOBAL DAT_005f0b4c undefined4
// GLOBAL DAT_005f0b50 uint

void func_005F07E4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  puVar1 = DAT_005f09ac;
  DAT_005f09ac[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1 = DAT_005f09b0;
  *DAT_005f09b0 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005f09c0;
  puVar1 = DAT_005f09b4;
  *DAT_005f09b4 = DAT_005f09c0;
  puVar1[1] = &DAT_005f09b8;
  puVar1[2] = uVar2;
  puVar1[3] = &DAT_005f09c4;
  puVar1[4] = uVar2;
  puVar1[5] = &DAT_005f09c8;
  puVar1[6] = uVar2;
  puVar1[7] = &DAT_005f09cc;
  puVar1[8] = uVar2;
  puVar1[9] = &DAT_005f09d0;
  puVar1[10] = uVar2;
  puVar1[0xb] = &DAT_005f09dc;
  puVar1[0xc] = uVar2;
  puVar1[0xd] = &DAT_005f09e8;
  puVar1[0xe] = uVar2;
  puVar1[0xf] = &DAT_005f09fc;
  puVar1[0x10] = uVar2;
  puVar1[0x11] = &DAT_005f0a0c;
  puVar1[0x12] = uVar2;
  puVar1[0x13] = &DAT_005f0a1c;
  puVar1[0x14] = uVar2;
  puVar1[0x15] = &DAT_005f0a30;
  puVar1[0x16] = uVar2;
  puVar1[0x17] = &DAT_005f0a3c;
  puVar1[0x18] = uVar2;
  puVar1[0x19] = &DAT_005f0a4c;
  puVar1[0x1a] = uVar2;
  puVar1[0x1b] = &DAT_005f0a5c;
  puVar1[0x1c] = uVar2;
  puVar1[0x1d] = &DAT_005f0a64;
  puVar1[0x1e] = uVar2;
  puVar1[0x1f] = &DAT_005f0a70;
  puVar1[0x20] = uVar2;
  puVar1[0x21] = &DAT_005f0a80;
  puVar1[0x22] = uVar2;
  puVar1[0x23] = &DAT_005f0a8c;
  puVar1[0x24] = uVar2;
  puVar1[0x25] = &DAT_005f0a98;
  puVar1[0x26] = uVar2;
  puVar1[0x27] = &DAT_005f0aa4;
  puVar1[0x28] = uVar2;
  puVar1[0x29] = &DAT_005f0ab0;
  puVar1[0x2a] = uVar2;
  puVar1[0x2b] = &DAT_005f0abc;
  puVar1[0x2c] = uVar2;
  puVar1[0x2d] = &DAT_005f0ac4;
  puVar1[0x2e] = uVar2;
  puVar1[0x2f] = &DAT_005f0acc;
  puVar1[0x30] = uVar2;
  puVar1[0x31] = &DAT_005f0ad8;
  puVar1[0x32] = uVar2;
  puVar1[0x33] = &DAT_005f0ae4;
  puVar1[0x34] = uVar2;
  puVar1[0x35] = &DAT_005f0aec;
  puVar1[0x36] = uVar2;
  puVar1[0x37] = &DAT_005f0af4;
  puVar1[0x38] = uVar2;
  puVar1[0x39] = &DAT_005f0b00;
  puVar1[0x3a] = uVar2;
  puVar1[0x3b] = &DAT_005f0b0c;
  puVar1[0x3c] = uVar2;
  puVar1[0x3d] = &DAT_005f0b20;
  puVar1[0x3e] = uVar2;
  puVar1[0x3f] = &DAT_005f0b28;
  uVar6 = DAT_005f0b48;
  uVar5 = DAT_005f0b44;
  puVar4 = DAT_005f0b40;
  uVar2 = DAT_005f0b3c;
  uVar3 = DAT_005f0b38;
  puVar1 = DAT_005f09ac;
  *DAT_005f0b40 = DAT_005f0b3c;
  puVar4[1] = uVar5;
  puVar4[2] = uVar6;
  uVar5 = DAT_005f0b4c;
  puVar4[3] = uVar2;
  puVar4[4] = uVar2;
  puVar4[5] = uVar5;
  uVar7 = func_00114608(DAT_005f0b50,uVar3);
  *puVar1 = (int)uVar7;
  return;
}

