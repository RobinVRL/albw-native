#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005c2238;
extern undefined4 *DAT_005c223c;
extern undefined DAT_005c2240;
extern undefined4 DAT_005c2244;
extern undefined4 DAT_005c23a0;
extern undefined4 DAT_005c23a4;
extern char s_itt_tutorial_bee_005c2360[];
extern char s_itt_tutorial_bottle_005c225c[];
extern char s_itt_tutorial_escape_fruit_005c22fc[];
extern char s_itt_tutorial_fairy_005c234c[];
extern char s_itt_tutorial_golden_bee_005c2374[];
extern char s_itt_tutorial_milk_005c238c[];
extern char s_itt_tutorial_potshop_blue_005c228c[];
extern char s_itt_tutorial_potshop_heart_005c22e0[];
extern char s_itt_tutorial_potshop_purple_005c22a8[];
extern char s_itt_tutorial_potshop_red_005c2270[];
extern char s_itt_tutorial_potshop_yellow_005c22c4[];
extern char s_itt_tutorial_shield_005c2248[];
extern char s_itt_tutorial_stone_beauty_005c2330[];
extern char s_itt_tutorial_stop_fruit_005c2318[];

// USA 005C2118 <- EU 005C20F0 (Ghidra, non-matching)
// GLOBAL DAT_005c2238 undefined4 *
// GLOBAL DAT_005c223c undefined4 *
// GLOBAL DAT_005c2240 undefined
// GLOBAL DAT_005c2244 undefined4
// GLOBAL DAT_005c23a0 undefined4
// GLOBAL DAT_005c23a4 undefined4
// GLOBAL s_itt_tutorial_bee_005c2360 string
// GLOBAL s_itt_tutorial_bottle_005c225c string
// GLOBAL s_itt_tutorial_escape_fruit_005c22fc string
// GLOBAL s_itt_tutorial_fairy_005c234c string
// GLOBAL s_itt_tutorial_golden_bee_005c2374 string
// GLOBAL s_itt_tutorial_milk_005c238c string
// GLOBAL s_itt_tutorial_potshop_blue_005c228c string
// GLOBAL s_itt_tutorial_potshop_heart_005c22e0 string
// GLOBAL s_itt_tutorial_potshop_purple_005c22a8 string
// GLOBAL s_itt_tutorial_potshop_red_005c2270 string
// GLOBAL s_itt_tutorial_potshop_yellow_005c22c4 string
// GLOBAL s_itt_tutorial_shield_005c2248 string
// GLOBAL s_itt_tutorial_stone_beauty_005c2330 string
// GLOBAL s_itt_tutorial_stop_fruit_005c2318 string

undefined4 func_005C2118(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005c2238;
  *DAT_005c2238 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c223c;
  *DAT_005c223c = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005c2244;
  puVar1[2] = DAT_005c2244;
  puVar1[3] = &DAT_005c2240;
  puVar1[5] = uVar2;
  puVar1[6] = &DAT_005c2240;
  puVar1[8] = uVar2;
  puVar1[9] = &DAT_005c2240;
  puVar1[0xb] = uVar2;
  puVar1[0xc] = &DAT_005c2240;
  puVar1[0xe] = uVar2;
  puVar1[0xf] = &DAT_005c2240;
  puVar1[0x11] = uVar2;
  puVar1[0x12] = &DAT_005c2240;
  puVar1[0x14] = uVar2;
  puVar1[0x15] = &DAT_005c2240;
  puVar1[0x17] = uVar2;
  puVar1[0x18] = &DAT_005c2240;
  puVar1[0x1a] = uVar2;
  puVar1[0x1b] = &DAT_005c2240;
  puVar1[0x1d] = uVar2;
  puVar1[0x1e] = s_itt_tutorial_shield_005c2248;
  puVar1[0x20] = uVar2;
  puVar1[0x21] = s_itt_tutorial_bottle_005c225c;
  puVar1[0x23] = uVar2;
  puVar1[0x24] = s_itt_tutorial_potshop_red_005c2270;
  puVar1[0x26] = uVar2;
  puVar1[0x27] = s_itt_tutorial_potshop_blue_005c228c;
  puVar1[0x29] = uVar2;
  puVar1[0x2a] = s_itt_tutorial_potshop_purple_005c22a8;
  puVar1[0x2c] = uVar2;
  puVar1[0x2d] = s_itt_tutorial_potshop_yellow_005c22c4;
  puVar1[0x2f] = uVar2;
  puVar1[0x30] = s_itt_tutorial_potshop_heart_005c22e0;
  puVar1[0x32] = uVar2;
  puVar1[0x33] = s_itt_tutorial_escape_fruit_005c22fc;
  puVar1[0x35] = uVar2;
  puVar1[0x36] = s_itt_tutorial_stop_fruit_005c2318;
  puVar1[0x38] = uVar2;
  puVar1[0x39] = s_itt_tutorial_stone_beauty_005c2330;
  puVar1[0x3b] = uVar2;
  puVar1[0x3c] = s_itt_tutorial_fairy_005c234c;
  puVar1[0x3e] = uVar2;
  puVar1[0x3f] = s_itt_tutorial_bee_005c2360;
  puVar1[0x41] = uVar2;
  puVar1[0x42] = s_itt_tutorial_golden_bee_005c2374;
  puVar1[0x44] = uVar2;
  puVar1[0x45] = s_itt_tutorial_milk_005c238c;
  return func_005902C0(0);
}

