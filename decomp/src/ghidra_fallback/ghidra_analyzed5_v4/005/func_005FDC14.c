#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005fdda0;
extern undefined4 *DAT_005fdda4;
extern undefined4 *DAT_005fdda8;
extern undefined DAT_005fddac;
extern undefined4 DAT_005fddb4;
extern undefined DAT_005fddb8;
extern undefined DAT_005fddbc;
extern undefined DAT_005fddc0;
extern undefined DAT_005fddc4;
extern undefined DAT_005fddd0;
extern undefined DAT_005fdddc;
extern undefined DAT_005fddf0;
extern undefined DAT_005fde00;
extern undefined DAT_005fde10;
extern undefined DAT_005fde24;
extern undefined DAT_005fde30;
extern undefined DAT_005fde40;
extern undefined DAT_005fde50;
extern undefined DAT_005fde58;
extern undefined DAT_005fde64;
extern undefined DAT_005fde74;
extern undefined DAT_005fde80;
extern undefined DAT_005fde8c;
extern undefined DAT_005fde98;
extern undefined DAT_005fdea4;
extern undefined DAT_005fdeb0;
extern undefined DAT_005fdeb8;
extern undefined DAT_005fdec0;
extern undefined DAT_005fdecc;
extern undefined DAT_005fded8;
extern undefined DAT_005fdee0;
extern undefined DAT_005fdee8;
extern undefined DAT_005fdef4;
extern undefined DAT_005fdf00;
extern undefined DAT_005fdf14;
extern undefined DAT_005fdf1c;
extern undefined4 DAT_005fdf28;
extern undefined4 DAT_005fdf2c;

// USA 005FDC14 <- EU 005FDBEC (Ghidra, non-matching)
// GLOBAL DAT_005fdda0 undefined4 *
// GLOBAL DAT_005fdda4 undefined4 *
// GLOBAL DAT_005fdda8 undefined4 *
// GLOBAL DAT_005fddac undefined
// GLOBAL DAT_005fddb4 undefined4
// GLOBAL DAT_005fddb8 undefined
// GLOBAL DAT_005fddbc undefined
// GLOBAL DAT_005fddc0 undefined
// GLOBAL DAT_005fddc4 undefined
// GLOBAL DAT_005fddd0 undefined
// GLOBAL DAT_005fdddc undefined
// GLOBAL DAT_005fddf0 undefined
// GLOBAL DAT_005fde00 undefined
// GLOBAL DAT_005fde10 undefined
// GLOBAL DAT_005fde24 undefined
// GLOBAL DAT_005fde30 undefined
// GLOBAL DAT_005fde40 undefined
// GLOBAL DAT_005fde50 undefined
// GLOBAL DAT_005fde58 undefined
// GLOBAL DAT_005fde64 undefined
// GLOBAL DAT_005fde74 undefined
// GLOBAL DAT_005fde80 undefined
// GLOBAL DAT_005fde8c undefined
// GLOBAL DAT_005fde98 undefined
// GLOBAL DAT_005fdea4 undefined
// GLOBAL DAT_005fdeb0 undefined
// GLOBAL DAT_005fdeb8 undefined
// GLOBAL DAT_005fdec0 undefined
// GLOBAL DAT_005fdecc undefined
// GLOBAL DAT_005fded8 undefined
// GLOBAL DAT_005fdee0 undefined
// GLOBAL DAT_005fdee8 undefined
// GLOBAL DAT_005fdef4 undefined
// GLOBAL DAT_005fdf00 undefined
// GLOBAL DAT_005fdf14 undefined
// GLOBAL DAT_005fdf1c undefined
// GLOBAL DAT_005fdf28 undefined4
// GLOBAL DAT_005fdf2c undefined4

undefined4 func_005FDC14(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005fdda0;
  *DAT_005fdda0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fdda4;
  *DAT_005fdda4 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005fddb4;
  puVar1 = DAT_005fdda8;
  *DAT_005fdda8 = DAT_005fddb4;
  puVar1[1] = &DAT_005fddac;
  puVar1[2] = uVar2;
  puVar1[3] = &DAT_005fddb8;
  puVar1[4] = uVar2;
  puVar1[5] = &DAT_005fddbc;
  puVar1[6] = uVar2;
  puVar1[7] = &DAT_005fddc0;
  puVar1[8] = uVar2;
  puVar1[9] = &DAT_005fddc4;
  puVar1[10] = uVar2;
  puVar1[0xb] = &DAT_005fddd0;
  puVar1[0xc] = uVar2;
  puVar1[0xd] = &DAT_005fdddc;
  puVar1[0xe] = uVar2;
  puVar1[0xf] = &DAT_005fddf0;
  puVar1[0x10] = uVar2;
  puVar1[0x11] = &DAT_005fde00;
  puVar1[0x12] = uVar2;
  puVar1[0x13] = &DAT_005fde10;
  puVar1[0x14] = uVar2;
  puVar1[0x15] = &DAT_005fde24;
  puVar1[0x16] = uVar2;
  puVar1[0x17] = &DAT_005fde30;
  puVar1[0x18] = uVar2;
  puVar1[0x19] = &DAT_005fde40;
  puVar1[0x1a] = uVar2;
  puVar1[0x1b] = &DAT_005fde50;
  puVar1[0x1c] = uVar2;
  puVar1[0x1d] = &DAT_005fde58;
  puVar1[0x1e] = uVar2;
  puVar1[0x1f] = &DAT_005fde64;
  puVar1[0x20] = uVar2;
  puVar1[0x21] = &DAT_005fde74;
  puVar1[0x22] = uVar2;
  puVar1[0x23] = &DAT_005fde80;
  puVar1[0x24] = uVar2;
  puVar1[0x25] = &DAT_005fde8c;
  puVar1[0x26] = uVar2;
  puVar1[0x27] = &DAT_005fde98;
  puVar1[0x28] = uVar2;
  puVar1[0x29] = &DAT_005fdea4;
  puVar1[0x2a] = uVar2;
  puVar1[0x2b] = &DAT_005fdeb0;
  puVar1[0x2c] = uVar2;
  puVar1[0x2d] = &DAT_005fdeb8;
  puVar1[0x2e] = uVar2;
  puVar1[0x2f] = &DAT_005fdec0;
  puVar1[0x30] = uVar2;
  puVar1[0x31] = &DAT_005fdecc;
  puVar1[0x32] = uVar2;
  puVar1[0x33] = &DAT_005fded8;
  puVar1[0x34] = uVar2;
  puVar1[0x35] = &DAT_005fdee0;
  puVar1[0x36] = uVar2;
  puVar1[0x37] = &DAT_005fdee8;
  puVar1[0x38] = uVar2;
  puVar1[0x39] = &DAT_005fdef4;
  puVar1[0x3a] = uVar2;
  puVar1[0x3b] = &DAT_005fdf00;
  puVar1[0x3c] = uVar2;
  puVar1[0x3d] = &DAT_005fdf14;
  puVar1[0x3e] = uVar2;
  puVar1[0x3f] = &DAT_005fdf1c;
  return func_005902C0(0);
}

