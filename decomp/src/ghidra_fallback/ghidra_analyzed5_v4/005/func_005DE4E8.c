#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005de6c4;
extern undefined4 *DAT_005de6c8;
extern undefined4 *DAT_005de6cc;
extern undefined4 DAT_005de6dc;
extern undefined4 DAT_005de704;
extern undefined4 DAT_005de708;
extern undefined4 *DAT_005de70c;
extern undefined DAT_005de710;
extern undefined DAT_005de718;
extern undefined DAT_005de71c;
extern undefined DAT_005de720;
extern undefined DAT_005de724;
extern undefined DAT_005de730;
extern undefined DAT_005de73c;
extern undefined DAT_005de750;
extern undefined DAT_005de760;
extern undefined DAT_005de770;
extern undefined DAT_005de784;
extern undefined DAT_005de790;
extern undefined DAT_005de7a0;
extern undefined DAT_005de7b0;
extern undefined DAT_005de7b8;
extern undefined DAT_005de7c4;
extern undefined DAT_005de7d4;
extern undefined DAT_005de7e0;
extern undefined DAT_005de7ec;
extern undefined DAT_005de7f8;
extern undefined DAT_005de804;
extern undefined DAT_005de810;
extern undefined DAT_005de818;
extern undefined DAT_005de820;
extern undefined DAT_005de82c;
extern undefined DAT_005de838;
extern undefined DAT_005de840;
extern undefined DAT_005de848;
extern undefined DAT_005de854;
extern undefined DAT_005de860;
extern undefined DAT_005de874;
extern undefined DAT_005de87c;
extern undefined4 DAT_005de888;
extern char s_N_ArrowB_00_005de6e0[];
extern char s_N_ArrowL_00_005de6ec[];
extern char s_N_ArrowR_00_005de6f8[];
extern char s_N_ArrowT_00_005de6d0[];

// USA 005DE4E8 <- EU 005DE4C0 (Ghidra, non-matching)
// GLOBAL DAT_005de6c4 undefined4 *
// GLOBAL DAT_005de6c8 undefined4 *
// GLOBAL DAT_005de6cc undefined4 *
// GLOBAL DAT_005de6dc undefined4
// GLOBAL DAT_005de704 undefined4
// GLOBAL DAT_005de708 undefined4
// GLOBAL DAT_005de70c undefined4 *
// GLOBAL DAT_005de710 undefined
// GLOBAL DAT_005de718 undefined
// GLOBAL DAT_005de71c undefined
// GLOBAL DAT_005de720 undefined
// GLOBAL DAT_005de724 undefined
// GLOBAL DAT_005de730 undefined
// GLOBAL DAT_005de73c undefined
// GLOBAL DAT_005de750 undefined
// GLOBAL DAT_005de760 undefined
// GLOBAL DAT_005de770 undefined
// GLOBAL DAT_005de784 undefined
// GLOBAL DAT_005de790 undefined
// GLOBAL DAT_005de7a0 undefined
// GLOBAL DAT_005de7b0 undefined
// GLOBAL DAT_005de7b8 undefined
// GLOBAL DAT_005de7c4 undefined
// GLOBAL DAT_005de7d4 undefined
// GLOBAL DAT_005de7e0 undefined
// GLOBAL DAT_005de7ec undefined
// GLOBAL DAT_005de7f8 undefined
// GLOBAL DAT_005de804 undefined
// GLOBAL DAT_005de810 undefined
// GLOBAL DAT_005de818 undefined
// GLOBAL DAT_005de820 undefined
// GLOBAL DAT_005de82c undefined
// GLOBAL DAT_005de838 undefined
// GLOBAL DAT_005de840 undefined
// GLOBAL DAT_005de848 undefined
// GLOBAL DAT_005de854 undefined
// GLOBAL DAT_005de860 undefined
// GLOBAL DAT_005de874 undefined
// GLOBAL DAT_005de87c undefined
// GLOBAL DAT_005de888 undefined4
// GLOBAL s_N_ArrowB_00_005de6e0 string
// GLOBAL s_N_ArrowL_00_005de6ec string
// GLOBAL s_N_ArrowR_00_005de6f8 string
// GLOBAL s_N_ArrowT_00_005de6d0 string

undefined4 func_005DE4E8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005de6c4;
  *DAT_005de6c4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005de6dc;
  puVar1 = DAT_005de6c8;
  *DAT_005de6c8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005de6cc;
  DAT_005de6cc[1] = s_N_ArrowT_00_005de6d0;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005de6e0;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005de6ec;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005de6f8;
  puVar1 = DAT_005de70c;
  DAT_005de70c[1] = &DAT_005de710;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005de718;
  puVar1[2] = uVar2;
  puVar1[5] = &DAT_005de71c;
  puVar1[4] = uVar2;
  puVar1[7] = &DAT_005de720;
  puVar1[6] = uVar2;
  puVar1[9] = &DAT_005de724;
  puVar1[8] = uVar2;
  puVar1[0xb] = &DAT_005de730;
  puVar1[10] = uVar2;
  puVar1[0xd] = &DAT_005de73c;
  puVar1[0xc] = uVar2;
  puVar1[0xf] = &DAT_005de750;
  puVar1[0xe] = uVar2;
  puVar1[0x11] = &DAT_005de760;
  puVar1[0x10] = uVar2;
  puVar1[0x13] = &DAT_005de770;
  puVar1[0x12] = uVar2;
  puVar1[0x15] = &DAT_005de784;
  puVar1[0x14] = uVar2;
  puVar1[0x17] = &DAT_005de790;
  puVar1[0x16] = uVar2;
  puVar1[0x19] = &DAT_005de7a0;
  puVar1[0x18] = uVar2;
  puVar1[0x1b] = &DAT_005de7b0;
  puVar1[0x1a] = uVar2;
  puVar1[0x1d] = &DAT_005de7b8;
  puVar1[0x1c] = uVar2;
  puVar1[0x1f] = &DAT_005de7c4;
  puVar1[0x1e] = uVar2;
  puVar1[0x21] = &DAT_005de7d4;
  puVar1[0x20] = uVar2;
  puVar1[0x23] = &DAT_005de7e0;
  puVar1[0x22] = uVar2;
  puVar1[0x25] = &DAT_005de7ec;
  puVar1[0x24] = uVar2;
  puVar1[0x27] = &DAT_005de7f8;
  puVar1[0x26] = uVar2;
  puVar1[0x29] = &DAT_005de804;
  puVar1[0x28] = uVar2;
  puVar1[0x2b] = &DAT_005de810;
  puVar1[0x2a] = uVar2;
  puVar1[0x2d] = &DAT_005de818;
  puVar1[0x2c] = uVar2;
  puVar1[0x2f] = &DAT_005de820;
  puVar1[0x2e] = uVar2;
  puVar1[0x31] = &DAT_005de82c;
  puVar1[0x30] = uVar2;
  puVar1[0x33] = &DAT_005de838;
  puVar1[0x32] = uVar2;
  puVar1[0x35] = &DAT_005de840;
  puVar1[0x34] = uVar2;
  puVar1[0x37] = &DAT_005de848;
  puVar1[0x36] = uVar2;
  puVar1[0x39] = &DAT_005de854;
  puVar1[0x38] = uVar2;
  puVar1[0x3b] = &DAT_005de860;
  puVar1[0x3a] = uVar2;
  puVar1[0x3d] = &DAT_005de874;
  puVar1[0x3c] = uVar2;
  puVar1[0x3e] = uVar2;
  puVar1[0x3f] = &DAT_005de87c;
  return func_005902C0(0);
}

