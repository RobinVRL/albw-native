#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005c2a1c;
extern undefined4 *DAT_005c2a20;
extern undefined4 DAT_005c2a30;
extern undefined4 DAT_005c2a34;
extern undefined4 DAT_005c2a38;
extern undefined4 *DAT_005c2a3c;
extern undefined4 *DAT_005c2a4c;
extern undefined4 *DAT_005c2a60;
extern undefined4 *DAT_005c2a70;
extern undefined4 *DAT_005c2a80;
extern undefined4 *DAT_005c2a94;
extern undefined4 *DAT_005c2aa4;
extern undefined4 *DAT_005c2ab4;
extern undefined4 *DAT_005c2ac4;
extern char s_ac_Break_005c2a24[];
extern char s_ac_HammerBreak_005c2a84[];
extern char s_ac_IceBreak_005c2a74[];
extern char s_ac_LavaFall_005c2a64[];
extern char s_ac_OffSw0_005c2ab8[];
extern char s_ac_OffSw1_005c2ac8[];
extern char s_ac_OnSw0_005c2a98[];
extern char s_ac_OnSw1_005c2aa8[];
extern char s_ac_Valley_005c2a40[];
extern char s_ac_WaterFall_005c2a50[];

// USA 005C2900 <- EU 005C28D8 (Ghidra, non-matching)
// GLOBAL DAT_005c2a1c int
// GLOBAL DAT_005c2a20 undefined4 *
// GLOBAL DAT_005c2a30 undefined4
// GLOBAL DAT_005c2a34 undefined4
// GLOBAL DAT_005c2a38 undefined4
// GLOBAL DAT_005c2a3c undefined4 *
// GLOBAL DAT_005c2a4c undefined4 *
// GLOBAL DAT_005c2a60 undefined4 *
// GLOBAL DAT_005c2a70 undefined4 *
// GLOBAL DAT_005c2a80 undefined4 *
// GLOBAL DAT_005c2a94 undefined4 *
// GLOBAL DAT_005c2aa4 undefined4 *
// GLOBAL DAT_005c2ab4 undefined4 *
// GLOBAL DAT_005c2ac4 undefined4 *
// GLOBAL s_ac_Break_005c2a24 string
// GLOBAL s_ac_HammerBreak_005c2a84 string
// GLOBAL s_ac_IceBreak_005c2a74 string
// GLOBAL s_ac_LavaFall_005c2a64 string
// GLOBAL s_ac_OffSw0_005c2ab8 string
// GLOBAL s_ac_OffSw1_005c2ac8 string
// GLOBAL s_ac_OnSw0_005c2a98 string
// GLOBAL s_ac_OnSw1_005c2aa8 string
// GLOBAL s_ac_Valley_005c2a40 string
// GLOBAL s_ac_WaterFall_005c2a50 string

undefined4 func_005C2900(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005c2a1c;
  *(undefined4 *)(DAT_005c2a1c + 0x50) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x54) = 0xffffffff;
  uVar3 = DAT_005c2a30;
  puVar2 = DAT_005c2a20;
  *DAT_005c2a20 = 0;
  puVar2[1] = 0;
  puVar2[-0x15] = s_ac_Break_005c2a24;
  puVar2[-0x16] = uVar3;
  puVar2 = DAT_005c2a3c;
  DAT_005c2a3c[1] = s_ac_Valley_005c2a40;
  *puVar2 = uVar3;
  puVar2 = DAT_005c2a4c;
  DAT_005c2a4c[1] = s_ac_WaterFall_005c2a50;
  *puVar2 = uVar3;
  puVar2 = DAT_005c2a60;
  DAT_005c2a60[1] = s_ac_LavaFall_005c2a64;
  *puVar2 = uVar3;
  puVar2 = DAT_005c2a70;
  DAT_005c2a70[1] = s_ac_IceBreak_005c2a74;
  *puVar2 = uVar3;
  puVar2 = DAT_005c2a80;
  DAT_005c2a80[1] = s_ac_HammerBreak_005c2a84;
  *puVar2 = uVar3;
  puVar2 = DAT_005c2a94;
  DAT_005c2a94[1] = s_ac_OnSw0_005c2a98;
  *puVar2 = uVar3;
  puVar2 = DAT_005c2aa4;
  DAT_005c2aa4[1] = s_ac_OnSw1_005c2aa8;
  *puVar2 = uVar3;
  puVar2 = DAT_005c2ab4;
  DAT_005c2ab4[1] = s_ac_OffSw0_005c2ab8;
  *puVar2 = uVar3;
  puVar2 = DAT_005c2ac4;
  DAT_005c2ac4[1] = s_ac_OffSw1_005c2ac8;
  *puVar2 = uVar3;
  return func_005902C0(puVar2);
}

