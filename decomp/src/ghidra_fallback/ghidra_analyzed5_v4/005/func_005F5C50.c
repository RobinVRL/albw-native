#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005f5cec;
extern undefined4 *DAT_005f5cf0;
extern undefined4 *DAT_005f5cf4;
extern undefined4 DAT_005f5d04;
extern undefined4 DAT_005f5d2c;
extern undefined4 DAT_005f5d30;
extern undefined4 *DAT_005f5d34;
extern undefined4 DAT_005f5d4c;
extern undefined4 *DAT_005f5d50;
extern undefined4 *DAT_005f5d64;
extern char s_L_NumGameCoin_00_005f5d38[];
extern char s_N_ArrowB_00_005f5d08[];
extern char s_N_ArrowL_00_005f5d14[];
extern char s_N_ArrowR_00_005f5d20[];
extern char s_N_ArrowT_00_005f5cf8[];
extern char s_N_GameCoin_00_005f5d54[];
extern char s_SE_S_GAME_COIN_COUNT_005f5d68[];

// USA 005F5C50 <- EU 005F5C28 (Ghidra, non-matching)
// GLOBAL DAT_005f5cec undefined4 *
// GLOBAL DAT_005f5cf0 undefined4 *
// GLOBAL DAT_005f5cf4 undefined4 *
// GLOBAL DAT_005f5d04 undefined4
// GLOBAL DAT_005f5d2c undefined4
// GLOBAL DAT_005f5d30 undefined4
// GLOBAL DAT_005f5d34 undefined4 *
// GLOBAL DAT_005f5d4c undefined4
// GLOBAL DAT_005f5d50 undefined4 *
// GLOBAL DAT_005f5d64 undefined4 *
// GLOBAL s_L_NumGameCoin_00_005f5d38 string
// GLOBAL s_N_ArrowB_00_005f5d08 string
// GLOBAL s_N_ArrowL_00_005f5d14 string
// GLOBAL s_N_ArrowR_00_005f5d20 string
// GLOBAL s_N_ArrowT_00_005f5cf8 string
// GLOBAL s_N_GameCoin_00_005f5d54 string
// GLOBAL s_SE_S_GAME_COIN_COUNT_005f5d68 string

undefined4 func_005F5C50(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005f5cec;
  *DAT_005f5cec = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005f5d04;
  puVar1 = DAT_005f5cf0;
  *DAT_005f5cf0 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f5cf4;
  DAT_005f5cf4[1] = s_N_ArrowT_00_005f5cf8;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005f5d08;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005f5d14;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005f5d20;
  puVar1 = DAT_005f5d34;
  DAT_005f5d34[1] = s_L_NumGameCoin_00_005f5d38;
  *puVar1 = uVar2;
  puVar1 = DAT_005f5d50;
  DAT_005f5d50[1] = s_N_GameCoin_00_005f5d54;
  *puVar1 = uVar2;
  puVar1 = DAT_005f5d64;
  DAT_005f5d64[1] = s_SE_S_GAME_COIN_COUNT_005f5d68;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

