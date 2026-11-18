#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005fe3c0;
extern undefined4 *DAT_005fe3c4;
extern undefined4 *DAT_005fe3c8;
extern undefined DAT_005fe3cc;
extern undefined4 DAT_005fe3d4;
extern undefined DAT_005fe3d8;
extern undefined DAT_005fe3dc;
extern undefined DAT_005fe3e0;
extern undefined DAT_005fe3e4;
extern undefined DAT_005fe3f0;
extern undefined DAT_005fe3fc;
extern undefined DAT_005fe410;
extern undefined DAT_005fe420;
extern undefined DAT_005fe430;
extern undefined DAT_005fe444;
extern undefined DAT_005fe450;
extern undefined DAT_005fe460;
extern undefined DAT_005fe470;
extern undefined DAT_005fe478;
extern undefined DAT_005fe484;
extern undefined DAT_005fe494;
extern undefined DAT_005fe4a0;
extern undefined DAT_005fe4ac;
extern undefined DAT_005fe4b8;
extern undefined DAT_005fe4c4;
extern undefined DAT_005fe4d0;
extern undefined DAT_005fe4d8;
extern undefined DAT_005fe4e0;
extern undefined DAT_005fe4ec;
extern undefined DAT_005fe4f8;
extern undefined DAT_005fe500;
extern undefined DAT_005fe508;
extern undefined DAT_005fe514;
extern undefined DAT_005fe520;
extern undefined DAT_005fe534;
extern undefined DAT_005fe53c;
extern undefined4 DAT_005fe548;
extern undefined4 DAT_005fe54c;

// USA 005FE234 <- EU 005FE20C (Ghidra, non-matching)
// GLOBAL DAT_005fe3c0 undefined4 *
// GLOBAL DAT_005fe3c4 undefined4 *
// GLOBAL DAT_005fe3c8 undefined4 *
// GLOBAL DAT_005fe3cc undefined
// GLOBAL DAT_005fe3d4 undefined4
// GLOBAL DAT_005fe3d8 undefined
// GLOBAL DAT_005fe3dc undefined
// GLOBAL DAT_005fe3e0 undefined
// GLOBAL DAT_005fe3e4 undefined
// GLOBAL DAT_005fe3f0 undefined
// GLOBAL DAT_005fe3fc undefined
// GLOBAL DAT_005fe410 undefined
// GLOBAL DAT_005fe420 undefined
// GLOBAL DAT_005fe430 undefined
// GLOBAL DAT_005fe444 undefined
// GLOBAL DAT_005fe450 undefined
// GLOBAL DAT_005fe460 undefined
// GLOBAL DAT_005fe470 undefined
// GLOBAL DAT_005fe478 undefined
// GLOBAL DAT_005fe484 undefined
// GLOBAL DAT_005fe494 undefined
// GLOBAL DAT_005fe4a0 undefined
// GLOBAL DAT_005fe4ac undefined
// GLOBAL DAT_005fe4b8 undefined
// GLOBAL DAT_005fe4c4 undefined
// GLOBAL DAT_005fe4d0 undefined
// GLOBAL DAT_005fe4d8 undefined
// GLOBAL DAT_005fe4e0 undefined
// GLOBAL DAT_005fe4ec undefined
// GLOBAL DAT_005fe4f8 undefined
// GLOBAL DAT_005fe500 undefined
// GLOBAL DAT_005fe508 undefined
// GLOBAL DAT_005fe514 undefined
// GLOBAL DAT_005fe520 undefined
// GLOBAL DAT_005fe534 undefined
// GLOBAL DAT_005fe53c undefined
// GLOBAL DAT_005fe548 undefined4
// GLOBAL DAT_005fe54c undefined4

undefined4 func_005FE234(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005fe3c0;
  *DAT_005fe3c0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fe3c4;
  *DAT_005fe3c4 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005fe3d4;
  puVar1 = DAT_005fe3c8;
  *DAT_005fe3c8 = DAT_005fe3d4;
  puVar1[1] = &DAT_005fe3cc;
  puVar1[2] = uVar2;
  puVar1[3] = &DAT_005fe3d8;
  puVar1[4] = uVar2;
  puVar1[5] = &DAT_005fe3dc;
  puVar1[6] = uVar2;
  puVar1[7] = &DAT_005fe3e0;
  puVar1[8] = uVar2;
  puVar1[9] = &DAT_005fe3e4;
  puVar1[10] = uVar2;
  puVar1[0xb] = &DAT_005fe3f0;
  puVar1[0xc] = uVar2;
  puVar1[0xd] = &DAT_005fe3fc;
  puVar1[0xe] = uVar2;
  puVar1[0xf] = &DAT_005fe410;
  puVar1[0x10] = uVar2;
  puVar1[0x11] = &DAT_005fe420;
  puVar1[0x12] = uVar2;
  puVar1[0x13] = &DAT_005fe430;
  puVar1[0x14] = uVar2;
  puVar1[0x15] = &DAT_005fe444;
  puVar1[0x16] = uVar2;
  puVar1[0x17] = &DAT_005fe450;
  puVar1[0x18] = uVar2;
  puVar1[0x19] = &DAT_005fe460;
  puVar1[0x1a] = uVar2;
  puVar1[0x1b] = &DAT_005fe470;
  puVar1[0x1c] = uVar2;
  puVar1[0x1d] = &DAT_005fe478;
  puVar1[0x1e] = uVar2;
  puVar1[0x1f] = &DAT_005fe484;
  puVar1[0x20] = uVar2;
  puVar1[0x21] = &DAT_005fe494;
  puVar1[0x22] = uVar2;
  puVar1[0x23] = &DAT_005fe4a0;
  puVar1[0x24] = uVar2;
  puVar1[0x25] = &DAT_005fe4ac;
  puVar1[0x26] = uVar2;
  puVar1[0x27] = &DAT_005fe4b8;
  puVar1[0x28] = uVar2;
  puVar1[0x29] = &DAT_005fe4c4;
  puVar1[0x2a] = uVar2;
  puVar1[0x2b] = &DAT_005fe4d0;
  puVar1[0x2c] = uVar2;
  puVar1[0x2d] = &DAT_005fe4d8;
  puVar1[0x2e] = uVar2;
  puVar1[0x2f] = &DAT_005fe4e0;
  puVar1[0x30] = uVar2;
  puVar1[0x31] = &DAT_005fe4ec;
  puVar1[0x32] = uVar2;
  puVar1[0x33] = &DAT_005fe4f8;
  puVar1[0x34] = uVar2;
  puVar1[0x35] = &DAT_005fe500;
  puVar1[0x36] = uVar2;
  puVar1[0x37] = &DAT_005fe508;
  puVar1[0x38] = uVar2;
  puVar1[0x39] = &DAT_005fe514;
  puVar1[0x3a] = uVar2;
  puVar1[0x3b] = &DAT_005fe520;
  puVar1[0x3c] = uVar2;
  puVar1[0x3d] = &DAT_005fe534;
  puVar1[0x3e] = uVar2;
  puVar1[0x3f] = &DAT_005fe53c;
  return func_005902C0(0);
}

