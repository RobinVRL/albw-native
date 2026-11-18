#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005e5f2c;
extern undefined4 *DAT_005e5f30;
extern undefined4 *DAT_005e5f34;
extern undefined4 DAT_005e5f44;
extern undefined4 DAT_005e5f6c;
extern undefined4 DAT_005e5f70;
extern undefined4 *DAT_005e5f74;
extern undefined DAT_005e5f78;
extern undefined DAT_005e5f80;
extern undefined DAT_005e5f84;
extern undefined DAT_005e5f88;
extern undefined DAT_005e5f8c;
extern undefined DAT_005e5f98;
extern undefined DAT_005e5fa4;
extern undefined DAT_005e5fb8;
extern undefined DAT_005e5fc8;
extern undefined DAT_005e5fd8;
extern undefined DAT_005e5fec;
extern undefined DAT_005e5ff8;
extern undefined DAT_005e6008;
extern undefined DAT_005e6018;
extern undefined DAT_005e6020;
extern undefined DAT_005e602c;
extern undefined DAT_005e603c;
extern undefined DAT_005e6048;
extern undefined DAT_005e6054;
extern undefined DAT_005e6060;
extern undefined DAT_005e606c;
extern undefined DAT_005e6078;
extern undefined DAT_005e6080;
extern undefined DAT_005e6088;
extern undefined DAT_005e6094;
extern undefined DAT_005e60a0;
extern undefined DAT_005e60a8;
extern undefined DAT_005e60b0;
extern undefined DAT_005e60bc;
extern undefined DAT_005e60c8;
extern undefined DAT_005e60dc;
extern undefined DAT_005e60e4;
extern undefined4 DAT_005e60f0;
extern undefined4 *DAT_005e60f4;
extern undefined4 DAT_005e610c;
extern char s_CrossBattleResult_005e60f8[];
extern char s_N_ArrowB_00_005e5f48[];
extern char s_N_ArrowL_00_005e5f54[];
extern char s_N_ArrowR_00_005e5f60[];
extern char s_N_ArrowT_00_005e5f38[];

// USA 005E5D34 <- EU 005E5D0C (Ghidra, non-matching)
// GLOBAL DAT_005e5f2c undefined4 *
// GLOBAL DAT_005e5f30 undefined4 *
// GLOBAL DAT_005e5f34 undefined4 *
// GLOBAL DAT_005e5f44 undefined4
// GLOBAL DAT_005e5f6c undefined4
// GLOBAL DAT_005e5f70 undefined4
// GLOBAL DAT_005e5f74 undefined4 *
// GLOBAL DAT_005e5f78 undefined
// GLOBAL DAT_005e5f80 undefined
// GLOBAL DAT_005e5f84 undefined
// GLOBAL DAT_005e5f88 undefined
// GLOBAL DAT_005e5f8c undefined
// GLOBAL DAT_005e5f98 undefined
// GLOBAL DAT_005e5fa4 undefined
// GLOBAL DAT_005e5fb8 undefined
// GLOBAL DAT_005e5fc8 undefined
// GLOBAL DAT_005e5fd8 undefined
// GLOBAL DAT_005e5fec undefined
// GLOBAL DAT_005e5ff8 undefined
// GLOBAL DAT_005e6008 undefined
// GLOBAL DAT_005e6018 undefined
// GLOBAL DAT_005e6020 undefined
// GLOBAL DAT_005e602c undefined
// GLOBAL DAT_005e603c undefined
// GLOBAL DAT_005e6048 undefined
// GLOBAL DAT_005e6054 undefined
// GLOBAL DAT_005e6060 undefined
// GLOBAL DAT_005e606c undefined
// GLOBAL DAT_005e6078 undefined
// GLOBAL DAT_005e6080 undefined
// GLOBAL DAT_005e6088 undefined
// GLOBAL DAT_005e6094 undefined
// GLOBAL DAT_005e60a0 undefined
// GLOBAL DAT_005e60a8 undefined
// GLOBAL DAT_005e60b0 undefined
// GLOBAL DAT_005e60bc undefined
// GLOBAL DAT_005e60c8 undefined
// GLOBAL DAT_005e60dc undefined
// GLOBAL DAT_005e60e4 undefined
// GLOBAL DAT_005e60f0 undefined4
// GLOBAL DAT_005e60f4 undefined4 *
// GLOBAL DAT_005e610c undefined4
// GLOBAL s_CrossBattleResult_005e60f8 string
// GLOBAL s_N_ArrowB_00_005e5f48 string
// GLOBAL s_N_ArrowL_00_005e5f54 string
// GLOBAL s_N_ArrowR_00_005e5f60 string
// GLOBAL s_N_ArrowT_00_005e5f38 string

undefined4 func_005E5D34(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005e5f2c;
  *DAT_005e5f2c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005e5f44;
  puVar1 = DAT_005e5f30;
  *DAT_005e5f30 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e5f34;
  DAT_005e5f34[1] = s_N_ArrowT_00_005e5f38;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005e5f48;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005e5f54;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005e5f60;
  puVar1 = DAT_005e5f74;
  DAT_005e5f74[1] = &DAT_005e5f78;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005e5f80;
  puVar1[2] = uVar2;
  puVar1[5] = &DAT_005e5f84;
  puVar1[4] = uVar2;
  puVar1[7] = &DAT_005e5f88;
  puVar1[6] = uVar2;
  puVar1[9] = &DAT_005e5f8c;
  puVar1[8] = uVar2;
  puVar1[0xb] = &DAT_005e5f98;
  puVar1[10] = uVar2;
  puVar1[0xd] = &DAT_005e5fa4;
  puVar1[0xc] = uVar2;
  puVar1[0xf] = &DAT_005e5fb8;
  puVar1[0xe] = uVar2;
  puVar1[0x11] = &DAT_005e5fc8;
  puVar1[0x10] = uVar2;
  puVar1[0x13] = &DAT_005e5fd8;
  puVar1[0x12] = uVar2;
  puVar1[0x15] = &DAT_005e5fec;
  puVar1[0x14] = uVar2;
  puVar1[0x17] = &DAT_005e5ff8;
  puVar1[0x16] = uVar2;
  puVar1[0x19] = &DAT_005e6008;
  puVar1[0x18] = uVar2;
  puVar1[0x1b] = &DAT_005e6018;
  puVar1[0x1a] = uVar2;
  puVar1[0x1d] = &DAT_005e6020;
  puVar1[0x1c] = uVar2;
  puVar1[0x1f] = &DAT_005e602c;
  puVar1[0x1e] = uVar2;
  puVar1[0x21] = &DAT_005e603c;
  puVar1[0x20] = uVar2;
  puVar1[0x23] = &DAT_005e6048;
  puVar1[0x22] = uVar2;
  puVar1[0x25] = &DAT_005e6054;
  puVar1[0x24] = uVar2;
  puVar1[0x27] = &DAT_005e6060;
  puVar1[0x26] = uVar2;
  puVar1[0x29] = &DAT_005e606c;
  puVar1[0x28] = uVar2;
  puVar1[0x2b] = &DAT_005e6078;
  puVar1[0x2a] = uVar2;
  puVar1[0x2d] = &DAT_005e6080;
  puVar1[0x2c] = uVar2;
  puVar1[0x2f] = &DAT_005e6088;
  puVar1[0x2e] = uVar2;
  puVar1[0x31] = &DAT_005e6094;
  puVar1[0x30] = uVar2;
  puVar1[0x33] = &DAT_005e60a0;
  puVar1[0x32] = uVar2;
  puVar1[0x35] = &DAT_005e60a8;
  puVar1[0x34] = uVar2;
  puVar1[0x37] = &DAT_005e60b0;
  puVar1[0x36] = uVar2;
  puVar1[0x39] = &DAT_005e60bc;
  puVar1[0x38] = uVar2;
  puVar1[0x3b] = &DAT_005e60c8;
  puVar1[0x3a] = uVar2;
  puVar1[0x3d] = &DAT_005e60dc;
  puVar1[0x3c] = uVar2;
  puVar1[0x3e] = uVar2;
  puVar1[0x3f] = &DAT_005e60e4;
  puVar1 = DAT_005e60f4;
  DAT_005e60f4[1] = s_CrossBattleResult_005e60f8;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

