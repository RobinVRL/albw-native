#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005e529c;
extern undefined4 *DAT_005e52a0;
extern undefined4 *DAT_005e52a4;
extern undefined4 DAT_005e52b4;
extern undefined4 DAT_005e52dc;
extern undefined4 DAT_005e52e0;
extern undefined4 *DAT_005e52e4;
extern undefined DAT_005e52e8;
extern undefined DAT_005e52f0;
extern undefined DAT_005e52f4;
extern undefined DAT_005e52f8;
extern undefined DAT_005e52fc;
extern undefined DAT_005e5308;
extern undefined DAT_005e5314;
extern undefined DAT_005e5328;
extern undefined DAT_005e5338;
extern undefined DAT_005e5348;
extern undefined DAT_005e535c;
extern undefined DAT_005e5368;
extern undefined DAT_005e5378;
extern undefined DAT_005e5388;
extern undefined DAT_005e5390;
extern undefined DAT_005e539c;
extern undefined DAT_005e53ac;
extern undefined DAT_005e53b8;
extern undefined DAT_005e53c4;
extern undefined DAT_005e53d0;
extern undefined DAT_005e53dc;
extern undefined DAT_005e53e8;
extern undefined DAT_005e53f0;
extern undefined DAT_005e53f8;
extern undefined DAT_005e5404;
extern undefined DAT_005e5410;
extern undefined DAT_005e5418;
extern undefined DAT_005e5420;
extern undefined DAT_005e542c;
extern undefined DAT_005e5438;
extern undefined DAT_005e544c;
extern undefined DAT_005e5454;
extern undefined4 DAT_005e5460;
extern char s_N_ArrowB_00_005e52b8[];
extern char s_N_ArrowL_00_005e52c4[];
extern char s_N_ArrowR_00_005e52d0[];
extern char s_N_ArrowT_00_005e52a8[];

// USA 005E50C0 <- EU 005E5098 (Ghidra, non-matching)
// GLOBAL DAT_005e529c undefined4 *
// GLOBAL DAT_005e52a0 undefined4 *
// GLOBAL DAT_005e52a4 undefined4 *
// GLOBAL DAT_005e52b4 undefined4
// GLOBAL DAT_005e52dc undefined4
// GLOBAL DAT_005e52e0 undefined4
// GLOBAL DAT_005e52e4 undefined4 *
// GLOBAL DAT_005e52e8 undefined
// GLOBAL DAT_005e52f0 undefined
// GLOBAL DAT_005e52f4 undefined
// GLOBAL DAT_005e52f8 undefined
// GLOBAL DAT_005e52fc undefined
// GLOBAL DAT_005e5308 undefined
// GLOBAL DAT_005e5314 undefined
// GLOBAL DAT_005e5328 undefined
// GLOBAL DAT_005e5338 undefined
// GLOBAL DAT_005e5348 undefined
// GLOBAL DAT_005e535c undefined
// GLOBAL DAT_005e5368 undefined
// GLOBAL DAT_005e5378 undefined
// GLOBAL DAT_005e5388 undefined
// GLOBAL DAT_005e5390 undefined
// GLOBAL DAT_005e539c undefined
// GLOBAL DAT_005e53ac undefined
// GLOBAL DAT_005e53b8 undefined
// GLOBAL DAT_005e53c4 undefined
// GLOBAL DAT_005e53d0 undefined
// GLOBAL DAT_005e53dc undefined
// GLOBAL DAT_005e53e8 undefined
// GLOBAL DAT_005e53f0 undefined
// GLOBAL DAT_005e53f8 undefined
// GLOBAL DAT_005e5404 undefined
// GLOBAL DAT_005e5410 undefined
// GLOBAL DAT_005e5418 undefined
// GLOBAL DAT_005e5420 undefined
// GLOBAL DAT_005e542c undefined
// GLOBAL DAT_005e5438 undefined
// GLOBAL DAT_005e544c undefined
// GLOBAL DAT_005e5454 undefined
// GLOBAL DAT_005e5460 undefined4
// GLOBAL s_N_ArrowB_00_005e52b8 string
// GLOBAL s_N_ArrowL_00_005e52c4 string
// GLOBAL s_N_ArrowR_00_005e52d0 string
// GLOBAL s_N_ArrowT_00_005e52a8 string

undefined4 func_005E50C0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005e529c;
  *DAT_005e529c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005e52b4;
  puVar1 = DAT_005e52a0;
  *DAT_005e52a0 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e52a4;
  DAT_005e52a4[1] = s_N_ArrowT_00_005e52a8;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005e52b8;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005e52c4;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005e52d0;
  puVar1 = DAT_005e52e4;
  DAT_005e52e4[1] = &DAT_005e52e8;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005e52f0;
  puVar1[2] = uVar2;
  puVar1[5] = &DAT_005e52f4;
  puVar1[4] = uVar2;
  puVar1[7] = &DAT_005e52f8;
  puVar1[6] = uVar2;
  puVar1[9] = &DAT_005e52fc;
  puVar1[8] = uVar2;
  puVar1[0xb] = &DAT_005e5308;
  puVar1[10] = uVar2;
  puVar1[0xd] = &DAT_005e5314;
  puVar1[0xc] = uVar2;
  puVar1[0xf] = &DAT_005e5328;
  puVar1[0xe] = uVar2;
  puVar1[0x11] = &DAT_005e5338;
  puVar1[0x10] = uVar2;
  puVar1[0x13] = &DAT_005e5348;
  puVar1[0x12] = uVar2;
  puVar1[0x15] = &DAT_005e535c;
  puVar1[0x14] = uVar2;
  puVar1[0x17] = &DAT_005e5368;
  puVar1[0x16] = uVar2;
  puVar1[0x19] = &DAT_005e5378;
  puVar1[0x18] = uVar2;
  puVar1[0x1b] = &DAT_005e5388;
  puVar1[0x1a] = uVar2;
  puVar1[0x1d] = &DAT_005e5390;
  puVar1[0x1c] = uVar2;
  puVar1[0x1f] = &DAT_005e539c;
  puVar1[0x1e] = uVar2;
  puVar1[0x21] = &DAT_005e53ac;
  puVar1[0x20] = uVar2;
  puVar1[0x23] = &DAT_005e53b8;
  puVar1[0x22] = uVar2;
  puVar1[0x25] = &DAT_005e53c4;
  puVar1[0x24] = uVar2;
  puVar1[0x27] = &DAT_005e53d0;
  puVar1[0x26] = uVar2;
  puVar1[0x29] = &DAT_005e53dc;
  puVar1[0x28] = uVar2;
  puVar1[0x2b] = &DAT_005e53e8;
  puVar1[0x2a] = uVar2;
  puVar1[0x2d] = &DAT_005e53f0;
  puVar1[0x2c] = uVar2;
  puVar1[0x2f] = &DAT_005e53f8;
  puVar1[0x2e] = uVar2;
  puVar1[0x31] = &DAT_005e5404;
  puVar1[0x30] = uVar2;
  puVar1[0x33] = &DAT_005e5410;
  puVar1[0x32] = uVar2;
  puVar1[0x35] = &DAT_005e5418;
  puVar1[0x34] = uVar2;
  puVar1[0x37] = &DAT_005e5420;
  puVar1[0x36] = uVar2;
  puVar1[0x39] = &DAT_005e542c;
  puVar1[0x38] = uVar2;
  puVar1[0x3b] = &DAT_005e5438;
  puVar1[0x3a] = uVar2;
  puVar1[0x3d] = &DAT_005e544c;
  puVar1[0x3c] = uVar2;
  puVar1[0x3e] = uVar2;
  puVar1[0x3f] = &DAT_005e5454;
  return func_005902C0(0);
}

