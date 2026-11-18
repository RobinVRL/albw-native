#include "ghidra_types.h"

extern undefined4 *DAT_005cfbd8;
extern undefined4 *DAT_005cfbdc;
extern undefined4 *DAT_005cfbe0;
extern undefined4 DAT_005cfc00;
extern undefined4 DAT_005cfc58;
extern undefined4 DAT_005cfc5c;
extern undefined4 *DAT_005cfc60;
extern undefined4 DAT_005cfc64;
extern undefined4 DAT_005cfc68;
extern undefined4 DAT_005cfc6c;
extern undefined4 DAT_005cfc70;
extern char s_PlayerItem_FlatLinkLv1_bch_005cfbe4[];
extern char s_PlayerItem_FlatLinkLv2_bch_005cfc04[];
extern char s_PlayerItem_FlatLinkLv3_bch_005cfc20[];
extern char s_PlayerItem_FlatLinkLv4_bch_005cfc3c[];
extern char s_cf_005cfbe4[];
extern char s_cf_005cfc04[];
extern char s_cf_005cfc20[];
extern char s_cf_005cfc3c[];

// USA 005CFB78 <- EU 005CFB50 (Ghidra, non-matching)
// GLOBAL DAT_005cfbd8 undefined4 *
// GLOBAL DAT_005cfbdc undefined4 *
// GLOBAL DAT_005cfbe0 undefined4 *
// GLOBAL DAT_005cfc00 undefined4
// GLOBAL DAT_005cfc58 undefined4
// GLOBAL DAT_005cfc5c undefined4
// GLOBAL DAT_005cfc60 undefined4 *
// GLOBAL DAT_005cfc64 undefined4
// GLOBAL DAT_005cfc68 undefined4
// GLOBAL DAT_005cfc6c undefined4
// GLOBAL DAT_005cfc70 undefined4
// GLOBAL s_cf_005cfbe4 string
// GLOBAL s_cf_005cfc04 string
// GLOBAL s_cf_005cfc20 string
// GLOBAL s_cf_005cfc3c string

void func_005CFB78(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = DAT_005cfbd8;
  *DAT_005cfbd8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cfbdc;
  *DAT_005cfbdc = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005cfc00;
  puVar1 = DAT_005cfbe0;
  DAT_005cfbe0[1] = s_PlayerItem_FlatLinkLv1_bch_005cfbe4;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_PlayerItem_FlatLinkLv2_bch_005cfc04;
  puVar1[4] = uVar2;
  puVar1[5] = s_PlayerItem_FlatLinkLv3_bch_005cfc20;
  puVar1[6] = uVar2;
  puVar1[7] = s_PlayerItem_FlatLinkLv4_bch_005cfc3c;
  uVar4 = DAT_005cfc70;
  uVar3 = DAT_005cfc6c;
  uVar2 = DAT_005cfc68;
  puVar1 = DAT_005cfc60;
  *DAT_005cfc60 = DAT_005cfc64;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  return;
}

