#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005c4040;
extern undefined4 *DAT_005c4044;
extern undefined4 DAT_005c4054;
extern undefined4 DAT_005c4108;
extern undefined4 DAT_005c410c;
extern char s_flash_005c4100[];
extern char s_getevent_normal_005c40a0[];
extern char s_hit_stamp_005c4094[];
extern char s_hit_swordA_005c4048[];
extern char s_hit_swordB_005c4058[];
extern char s_kandelaar_005c40c8[];
extern char s_rebound_shield_005c4084[];
extern char s_rebound_swordA_005c4064[];
extern char s_rebound_swordB_005c4074[];
extern char s_rodfire_005c40b0[];
extern char s_rodfire_snow_005c40b8[];
extern char s_rodfireball_005c40e0[];
extern char s_rodfireball_snow_005c40ec[];
extern char s_treasurebox_005c40d4[];

// USA 005C3F70 <- EU 005C3F48 (Ghidra, non-matching)
// GLOBAL DAT_005c4040 int
// GLOBAL DAT_005c4044 undefined4 *
// GLOBAL DAT_005c4054 undefined4
// GLOBAL DAT_005c4108 undefined4
// GLOBAL DAT_005c410c undefined4
// GLOBAL s_flash_005c4100 string
// GLOBAL s_getevent_normal_005c40a0 string
// GLOBAL s_hit_stamp_005c4094 string
// GLOBAL s_hit_swordA_005c4048 string
// GLOBAL s_hit_swordB_005c4058 string
// GLOBAL s_kandelaar_005c40c8 string
// GLOBAL s_rebound_shield_005c4084 string
// GLOBAL s_rebound_swordA_005c4064 string
// GLOBAL s_rebound_swordB_005c4074 string
// GLOBAL s_rodfire_005c40b0 string
// GLOBAL s_rodfire_snow_005c40b8 string
// GLOBAL s_rodfireball_005c40e0 string
// GLOBAL s_rodfireball_snow_005c40ec string
// GLOBAL s_treasurebox_005c40d4 string

undefined4 func_005C3F70(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005c4040;
  *(undefined4 *)(DAT_005c4040 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005c4044;
  *DAT_005c4044 = 0;
  puVar2[1] = 0;
  uVar3 = DAT_005c4054;
  puVar2[3] = DAT_005c4054;
  puVar2[4] = s_hit_swordA_005c4048;
  puVar2[6] = uVar3;
  puVar2[7] = s_hit_swordB_005c4058;
  puVar2[9] = uVar3;
  puVar2[10] = s_rebound_swordA_005c4064;
  puVar2[0xc] = uVar3;
  puVar2[0xd] = s_rebound_swordB_005c4074;
  puVar2[0xf] = uVar3;
  puVar2[0x10] = s_rebound_shield_005c4084;
  puVar2[0x12] = uVar3;
  puVar2[0x13] = s_hit_stamp_005c4094;
  puVar2[0x15] = uVar3;
  puVar2[0x16] = s_getevent_normal_005c40a0;
  puVar2[0x18] = uVar3;
  puVar2[0x19] = s_rodfire_005c40b0;
  puVar2[0x1b] = uVar3;
  puVar2[0x1c] = s_rodfire_snow_005c40b8;
  puVar2[0x1e] = uVar3;
  puVar2[0x1f] = s_kandelaar_005c40c8;
  puVar2[0x21] = uVar3;
  puVar2[0x22] = s_rodfire_005c40b0;
  puVar2[0x24] = uVar3;
  puVar2[0x25] = s_treasurebox_005c40d4;
  puVar2[0x27] = uVar3;
  puVar2[0x28] = s_treasurebox_005c40d4;
  puVar2[0x2a] = uVar3;
  puVar2[0x2b] = s_rodfireball_005c40e0;
  puVar2[0x2d] = uVar3;
  puVar2[0x2e] = s_rodfireball_snow_005c40ec;
  puVar2[0x30] = uVar3;
  puVar2[0x31] = s_flash_005c4100;
  return func_005902C0(0);
}

