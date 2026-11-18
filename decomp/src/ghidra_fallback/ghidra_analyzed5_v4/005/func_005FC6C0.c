#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int func_005FC9BC(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4);
extern undefined4 *DAT_005fc84c;
extern undefined4 *DAT_005fc850;
extern undefined4 *DAT_005fc854;
extern undefined DAT_005fc858;
extern undefined4 DAT_005fc860;
extern undefined DAT_005fc864;
extern undefined DAT_005fc868;
extern undefined DAT_005fc86c;
extern undefined DAT_005fc870;
extern undefined DAT_005fc87c;
extern undefined DAT_005fc888;
extern undefined DAT_005fc89c;
extern undefined DAT_005fc8ac;
extern undefined DAT_005fc8bc;
extern undefined DAT_005fc8d0;
extern undefined DAT_005fc8dc;
extern undefined DAT_005fc8ec;
extern undefined DAT_005fc8fc;
extern undefined DAT_005fc904;
extern undefined DAT_005fc910;
extern undefined DAT_005fc920;
extern undefined DAT_005fc92c;
extern undefined DAT_005fc938;
extern undefined DAT_005fc944;
extern undefined DAT_005fc950;
extern undefined DAT_005fc95c;
extern undefined DAT_005fc964;
extern undefined DAT_005fc96c;
extern undefined DAT_005fc978;
extern undefined DAT_005fc984;
extern undefined DAT_005fc98c;
extern undefined4 DAT_005fc9d4;
extern undefined4 DAT_005fc9d8;

// USA 005FC6C0 <- EU 005FC698 (Ghidra, non-matching)
// GLOBAL DAT_005fc84c undefined4 *
// GLOBAL DAT_005fc850 undefined4 *
// GLOBAL DAT_005fc854 undefined4 *
// GLOBAL DAT_005fc858 undefined
// GLOBAL DAT_005fc860 undefined4
// GLOBAL DAT_005fc864 undefined
// GLOBAL DAT_005fc868 undefined
// GLOBAL DAT_005fc86c undefined
// GLOBAL DAT_005fc870 undefined
// GLOBAL DAT_005fc87c undefined
// GLOBAL DAT_005fc888 undefined
// GLOBAL DAT_005fc89c undefined
// GLOBAL DAT_005fc8ac undefined
// GLOBAL DAT_005fc8bc undefined
// GLOBAL DAT_005fc8d0 undefined
// GLOBAL DAT_005fc8dc undefined
// GLOBAL DAT_005fc8ec undefined
// GLOBAL DAT_005fc8fc undefined
// GLOBAL DAT_005fc904 undefined
// GLOBAL DAT_005fc910 undefined
// GLOBAL DAT_005fc920 undefined
// GLOBAL DAT_005fc92c undefined
// GLOBAL DAT_005fc938 undefined
// GLOBAL DAT_005fc944 undefined
// GLOBAL DAT_005fc950 undefined
// GLOBAL DAT_005fc95c undefined
// GLOBAL DAT_005fc964 undefined
// GLOBAL DAT_005fc96c undefined
// GLOBAL DAT_005fc978 undefined
// GLOBAL DAT_005fc984 undefined
// GLOBAL DAT_005fc98c undefined
// GLOBAL DAT_005fc9d4 undefined4
// GLOBAL DAT_005fc9d8 undefined4
// GLOBAL func_005FC9BC undefined

undefined4 func_005FC6C0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005fc84c;
  *DAT_005fc84c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005fc850;
  *DAT_005fc850 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005fc860;
  puVar1 = DAT_005fc854;
  *DAT_005fc854 = DAT_005fc860;
  puVar1[1] = &DAT_005fc858;
  puVar1[2] = uVar2;
  puVar1[3] = &DAT_005fc864;
  puVar1[4] = uVar2;
  puVar1[5] = &DAT_005fc868;
  puVar1[6] = uVar2;
  puVar1[7] = &DAT_005fc86c;
  puVar1[8] = uVar2;
  puVar1[9] = &DAT_005fc870;
  puVar1[10] = uVar2;
  puVar1[0xb] = &DAT_005fc87c;
  puVar1[0xc] = uVar2;
  puVar1[0xd] = &DAT_005fc888;
  puVar1[0xe] = uVar2;
  puVar1[0xf] = &DAT_005fc89c;
  puVar1[0x10] = uVar2;
  puVar1[0x11] = &DAT_005fc8ac;
  puVar1[0x12] = uVar2;
  puVar1[0x13] = &DAT_005fc8bc;
  puVar1[0x14] = uVar2;
  puVar1[0x15] = &DAT_005fc8d0;
  puVar1[0x16] = uVar2;
  puVar1[0x17] = &DAT_005fc8dc;
  puVar1[0x18] = uVar2;
  puVar1[0x19] = &DAT_005fc8ec;
  puVar1[0x1a] = uVar2;
  puVar1[0x1b] = &DAT_005fc8fc;
  puVar1[0x1c] = uVar2;
  puVar1[0x1d] = &DAT_005fc904;
  puVar1[0x1e] = uVar2;
  puVar1[0x1f] = &DAT_005fc910;
  puVar1[0x20] = uVar2;
  puVar1[0x21] = &DAT_005fc920;
  puVar1[0x22] = uVar2;
  puVar1[0x23] = &DAT_005fc92c;
  puVar1[0x24] = uVar2;
  puVar1[0x25] = &DAT_005fc938;
  puVar1[0x26] = uVar2;
  puVar1[0x27] = &DAT_005fc944;
  puVar1[0x28] = uVar2;
  puVar1[0x29] = &DAT_005fc950;
  puVar1[0x2a] = uVar2;
  puVar1[0x2b] = &DAT_005fc95c;
  puVar1[0x2c] = uVar2;
  puVar1[0x2d] = &DAT_005fc964;
  puVar1[0x2e] = uVar2;
  puVar1[0x2f] = &DAT_005fc96c;
  puVar1[0x30] = uVar2;
  puVar1[0x31] = &DAT_005fc978;
  puVar1[0x32] = uVar2;
  puVar1[0x33] = &DAT_005fc984;
  puVar1[0x34] = uVar2;
  puVar1[0x35] = &DAT_005fc98c;
  puVar1[0x36] = uVar2;
  puVar1[0x37] = func_005FC9BC;
  puVar1[0x38] = uVar2;
  puVar1[0x39] = 0x5fc9a0;
  puVar1[0x3a] = uVar2;
  puVar1[0x3b] = 0x5fc9ac;
  puVar1[0x3c] = uVar2;
  puVar1[0x3d] = 0x5fc9c0;
  puVar1[0x3e] = uVar2;
  puVar1[0x3f] = 0x5fc9c8;
  return func_005902C0(0);
}

