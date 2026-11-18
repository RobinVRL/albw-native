#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005fc1c4;
extern undefined4 *DAT_005fc1c8;
extern undefined4 *DAT_005fc1cc;
extern undefined DAT_005fc1d0;
extern undefined4 DAT_005fc1d8;
extern undefined DAT_005fc1dc;
extern undefined DAT_005fc1e0;
extern undefined DAT_005fc1e4;
extern undefined DAT_005fc1e8;
extern undefined DAT_005fc1f4;
extern undefined DAT_005fc200;
extern undefined DAT_005fc214;
extern undefined DAT_005fc224;
extern undefined DAT_005fc234;
extern undefined DAT_005fc248;
extern undefined DAT_005fc254;
extern undefined DAT_005fc264;
extern undefined DAT_005fc274;
extern undefined DAT_005fc27c;
extern undefined DAT_005fc288;
extern undefined DAT_005fc298;
extern undefined DAT_005fc2a4;
extern undefined DAT_005fc2b0;
extern undefined DAT_005fc2bc;
extern undefined DAT_005fc2c8;
extern undefined DAT_005fc2d4;
extern undefined DAT_005fc2dc;
extern undefined DAT_005fc2e4;
extern undefined DAT_005fc2f0;
extern undefined DAT_005fc2fc;
extern undefined DAT_005fc304;
extern undefined DAT_005fc30c;
extern undefined DAT_005fc318;
extern undefined DAT_005fc324;
extern undefined DAT_005fc338;
extern undefined DAT_005fc340;
extern undefined4 DAT_005fc34c;
extern undefined4 DAT_005fc350;

// USA 005FC038 <- EU 005FC010 (Ghidra, non-matching)
// GLOBAL DAT_005fc1c4 undefined4 *
// GLOBAL DAT_005fc1c8 undefined4 *
// GLOBAL DAT_005fc1cc undefined4 *
// GLOBAL DAT_005fc1d0 undefined
// GLOBAL DAT_005fc1d8 undefined4
// GLOBAL DAT_005fc1dc undefined
// GLOBAL DAT_005fc1e0 undefined
// GLOBAL DAT_005fc1e4 undefined
// GLOBAL DAT_005fc1e8 undefined
// GLOBAL DAT_005fc1f4 undefined
// GLOBAL DAT_005fc200 undefined
// GLOBAL DAT_005fc214 undefined
// GLOBAL DAT_005fc224 undefined
// GLOBAL DAT_005fc234 undefined
// GLOBAL DAT_005fc248 undefined
// GLOBAL DAT_005fc254 undefined
// GLOBAL DAT_005fc264 undefined
// GLOBAL DAT_005fc274 undefined
// GLOBAL DAT_005fc27c undefined
// GLOBAL DAT_005fc288 undefined
// GLOBAL DAT_005fc298 undefined
// GLOBAL DAT_005fc2a4 undefined
// GLOBAL DAT_005fc2b0 undefined
// GLOBAL DAT_005fc2bc undefined
// GLOBAL DAT_005fc2c8 undefined
// GLOBAL DAT_005fc2d4 undefined
// GLOBAL DAT_005fc2dc undefined
// GLOBAL DAT_005fc2e4 undefined
// GLOBAL DAT_005fc2f0 undefined
// GLOBAL DAT_005fc2fc undefined
// GLOBAL DAT_005fc304 undefined
// GLOBAL DAT_005fc30c undefined
// GLOBAL DAT_005fc318 undefined
// GLOBAL DAT_005fc324 undefined
// GLOBAL DAT_005fc338 undefined
// GLOBAL DAT_005fc340 undefined
// GLOBAL DAT_005fc34c undefined4
// GLOBAL DAT_005fc350 undefined4

undefined4 func_005FC038(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005fc1c4;
  *DAT_005fc1c4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fc1c8;
  *DAT_005fc1c8 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005fc1d8;
  puVar1 = DAT_005fc1cc;
  *DAT_005fc1cc = DAT_005fc1d8;
  puVar1[1] = &DAT_005fc1d0;
  puVar1[2] = uVar2;
  puVar1[3] = &DAT_005fc1dc;
  puVar1[4] = uVar2;
  puVar1[5] = &DAT_005fc1e0;
  puVar1[6] = uVar2;
  puVar1[7] = &DAT_005fc1e4;
  puVar1[8] = uVar2;
  puVar1[9] = &DAT_005fc1e8;
  puVar1[10] = uVar2;
  puVar1[0xb] = &DAT_005fc1f4;
  puVar1[0xc] = uVar2;
  puVar1[0xd] = &DAT_005fc200;
  puVar1[0xe] = uVar2;
  puVar1[0xf] = &DAT_005fc214;
  puVar1[0x10] = uVar2;
  puVar1[0x11] = &DAT_005fc224;
  puVar1[0x12] = uVar2;
  puVar1[0x13] = &DAT_005fc234;
  puVar1[0x14] = uVar2;
  puVar1[0x15] = &DAT_005fc248;
  puVar1[0x16] = uVar2;
  puVar1[0x17] = &DAT_005fc254;
  puVar1[0x18] = uVar2;
  puVar1[0x19] = &DAT_005fc264;
  puVar1[0x1a] = uVar2;
  puVar1[0x1b] = &DAT_005fc274;
  puVar1[0x1c] = uVar2;
  puVar1[0x1d] = &DAT_005fc27c;
  puVar1[0x1e] = uVar2;
  puVar1[0x1f] = &DAT_005fc288;
  puVar1[0x20] = uVar2;
  puVar1[0x21] = &DAT_005fc298;
  puVar1[0x22] = uVar2;
  puVar1[0x23] = &DAT_005fc2a4;
  puVar1[0x24] = uVar2;
  puVar1[0x25] = &DAT_005fc2b0;
  puVar1[0x26] = uVar2;
  puVar1[0x27] = &DAT_005fc2bc;
  puVar1[0x28] = uVar2;
  puVar1[0x29] = &DAT_005fc2c8;
  puVar1[0x2a] = uVar2;
  puVar1[0x2b] = &DAT_005fc2d4;
  puVar1[0x2c] = uVar2;
  puVar1[0x2d] = &DAT_005fc2dc;
  puVar1[0x2e] = uVar2;
  puVar1[0x2f] = &DAT_005fc2e4;
  puVar1[0x30] = uVar2;
  puVar1[0x31] = &DAT_005fc2f0;
  puVar1[0x32] = uVar2;
  puVar1[0x33] = &DAT_005fc2fc;
  puVar1[0x34] = uVar2;
  puVar1[0x35] = &DAT_005fc304;
  puVar1[0x36] = uVar2;
  puVar1[0x37] = &DAT_005fc30c;
  puVar1[0x38] = uVar2;
  puVar1[0x39] = &DAT_005fc318;
  puVar1[0x3a] = uVar2;
  puVar1[0x3b] = &DAT_005fc324;
  puVar1[0x3c] = uVar2;
  puVar1[0x3d] = &DAT_005fc338;
  puVar1[0x3e] = uVar2;
  puVar1[0x3f] = &DAT_005fc340;
  return func_005902C0(0);
}

