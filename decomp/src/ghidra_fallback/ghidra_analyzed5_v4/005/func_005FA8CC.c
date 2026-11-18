#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005faa5c;
extern undefined4 *DAT_005faa60;
extern undefined4 DAT_005faa70;
extern undefined4 DAT_005faa74;
extern undefined4 DAT_005faa78;
extern int DAT_005faa7c;
extern undefined4 DAT_005fadac;
extern char s_CrossBoard_005faa64[];
extern char s_cross_board_hint_dark_01_005fac78[];
extern char s_cross_board_hint_dark_03_005fad74[];
extern char s_cross_board_hint_dark_07_005fac94[];
extern char s_cross_board_hint_dark_14_005fad90[];
extern char s_cross_board_hint_dark_18_005facb0[];
extern char s_cross_board_hint_dark_23_005faccc[];
extern char s_cross_board_hint_dark_26_005face8[];
extern char s_cross_board_hint_dark_2C_005fad58[];
extern char s_cross_board_hint_dark_36_005fad04[];
extern char s_cross_board_hint_dark_38_005fad20[];
extern char s_cross_board_hint_dark_3B_005fad3c[];
extern char s_cross_board_hint_light_03_005fab0c[];
extern char s_cross_board_hint_light_08_005fab28[];
extern char s_cross_board_hint_light_0A_005fab44[];
extern char s_cross_board_hint_light_11_005fab60[];
extern char s_cross_board_hint_light_12_005fab7c[];
extern char s_cross_board_hint_light_13_005faa80[];
extern char s_cross_board_hint_light_14_005faaf0[];
extern char s_cross_board_hint_light_16_005fab98[];
extern char s_cross_board_hint_light_22_005fabb4[];
extern char s_cross_board_hint_light_23_005faad4[];
extern char s_cross_board_hint_light_27_005fabd0[];
extern char s_cross_board_hint_light_2A_005fabec[];
extern char s_cross_board_hint_light_2B_005faab8[];
extern char s_cross_board_hint_light_2C_005faa9c[];
extern char s_cross_board_hint_light_2D_005fac08[];
extern char s_cross_board_hint_light_36_005fac24[];
extern char s_cross_board_hint_light_37_005fac40[];
extern char s_cross_board_hint_light_39_005fac5c[];

// USA 005FA8CC <- EU 005FA8A4 (Ghidra, non-matching)
// GLOBAL DAT_005faa5c undefined4 *
// GLOBAL DAT_005faa60 undefined4 *
// GLOBAL DAT_005faa70 undefined4
// GLOBAL DAT_005faa74 undefined4
// GLOBAL DAT_005faa78 undefined4
// GLOBAL DAT_005faa7c int
// GLOBAL DAT_005fadac undefined4
// GLOBAL s_CrossBoard_005faa64 string
// GLOBAL s_cross_board_hint_dark_01_005fac78 string
// GLOBAL s_cross_board_hint_dark_03_005fad74 string
// GLOBAL s_cross_board_hint_dark_07_005fac94 string
// GLOBAL s_cross_board_hint_dark_14_005fad90 string
// GLOBAL s_cross_board_hint_dark_18_005facb0 string
// GLOBAL s_cross_board_hint_dark_23_005faccc string
// GLOBAL s_cross_board_hint_dark_26_005face8 string
// GLOBAL s_cross_board_hint_dark_2C_005fad58 string
// GLOBAL s_cross_board_hint_dark_36_005fad04 string
// GLOBAL s_cross_board_hint_dark_38_005fad20 string
// GLOBAL s_cross_board_hint_dark_3B_005fad3c string
// GLOBAL s_cross_board_hint_light_03_005fab0c string
// GLOBAL s_cross_board_hint_light_08_005fab28 string
// GLOBAL s_cross_board_hint_light_0A_005fab44 string
// GLOBAL s_cross_board_hint_light_11_005fab60 string
// GLOBAL s_cross_board_hint_light_12_005fab7c string
// GLOBAL s_cross_board_hint_light_13_005faa80 string
// GLOBAL s_cross_board_hint_light_14_005faaf0 string
// GLOBAL s_cross_board_hint_light_16_005fab98 string
// GLOBAL s_cross_board_hint_light_22_005fabb4 string
// GLOBAL s_cross_board_hint_light_23_005faad4 string
// GLOBAL s_cross_board_hint_light_27_005fabd0 string
// GLOBAL s_cross_board_hint_light_2A_005fabec string
// GLOBAL s_cross_board_hint_light_2B_005faab8 string
// GLOBAL s_cross_board_hint_light_2C_005faa9c string
// GLOBAL s_cross_board_hint_light_2D_005fac08 string
// GLOBAL s_cross_board_hint_light_36_005fac24 string
// GLOBAL s_cross_board_hint_light_37_005fac40 string
// GLOBAL s_cross_board_hint_light_39_005fac5c string

undefined4 func_005FA8CC(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = DAT_005faa5c;
  *DAT_005faa5c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005faa70;
  puVar1 = DAT_005faa60;
  *DAT_005faa60 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_CrossBoard_005faa64;
  puVar1[2] = uVar2;
  iVar3 = DAT_005faa7c;
  *(char **)(DAT_005faa7c + 8) = s_cross_board_hint_light_13_005faa80;
  *(undefined4 *)(iVar3 + 4) = uVar2;
  *(char **)(iVar3 + 0x18) = s_cross_board_hint_light_2C_005faa9c;
  *(undefined4 *)(iVar3 + 0x14) = uVar2;
  *(char **)(iVar3 + 0x28) = s_cross_board_hint_light_2B_005faab8;
  *(undefined4 *)(iVar3 + 0x24) = uVar2;
  *(char **)(iVar3 + 0x38) = s_cross_board_hint_light_23_005faad4;
  *(undefined4 *)(iVar3 + 0x34) = uVar2;
  *(char **)(iVar3 + 0x48) = s_cross_board_hint_light_14_005faaf0;
  *(undefined4 *)(iVar3 + 0x44) = uVar2;
  *(char **)(iVar3 + 0x58) = s_cross_board_hint_light_03_005fab0c;
  *(undefined4 *)(iVar3 + 0x54) = uVar2;
  *(char **)(iVar3 + 0x68) = s_cross_board_hint_light_08_005fab28;
  *(undefined4 *)(iVar3 + 100) = uVar2;
  *(char **)(iVar3 + 0x78) = s_cross_board_hint_light_0A_005fab44;
  *(undefined4 *)(iVar3 + 0x74) = uVar2;
  *(char **)(iVar3 + 0x88) = s_cross_board_hint_light_11_005fab60;
  *(undefined4 *)(iVar3 + 0x84) = uVar2;
  *(char **)(iVar3 + 0x98) = s_cross_board_hint_light_12_005fab7c;
  *(undefined4 *)(iVar3 + 0x94) = uVar2;
  *(char **)(iVar3 + 0xa8) = s_cross_board_hint_light_16_005fab98;
  *(undefined4 *)(iVar3 + 0xa4) = uVar2;
  *(char **)(iVar3 + 0xb8) = s_cross_board_hint_light_22_005fabb4;
  *(undefined4 *)(iVar3 + 0xb4) = uVar2;
  *(char **)(iVar3 + 200) = s_cross_board_hint_light_27_005fabd0;
  *(undefined4 *)(iVar3 + 0xc4) = uVar2;
  *(char **)(iVar3 + 0xd8) = s_cross_board_hint_light_2A_005fabec;
  *(undefined4 *)(iVar3 + 0xd4) = uVar2;
  *(char **)(iVar3 + 0xe8) = s_cross_board_hint_light_2D_005fac08;
  *(undefined4 *)(iVar3 + 0xe4) = uVar2;
  *(char **)(iVar3 + 0xf8) = s_cross_board_hint_light_36_005fac24;
  *(undefined4 *)(iVar3 + 0xf4) = uVar2;
  *(char **)(iVar3 + 0x108) = s_cross_board_hint_light_37_005fac40;
  *(undefined4 *)(iVar3 + 0x104) = uVar2;
  *(char **)(iVar3 + 0x118) = s_cross_board_hint_light_39_005fac5c;
  *(undefined4 *)(iVar3 + 0x114) = uVar2;
  *(char **)(iVar3 + 0x128) = s_cross_board_hint_dark_01_005fac78;
  *(undefined4 *)(iVar3 + 0x124) = uVar2;
  *(char **)(iVar3 + 0x138) = s_cross_board_hint_dark_07_005fac94;
  *(undefined4 *)(iVar3 + 0x134) = uVar2;
  *(char **)(iVar3 + 0x148) = s_cross_board_hint_dark_18_005facb0;
  *(undefined4 *)(iVar3 + 0x144) = uVar2;
  *(char **)(iVar3 + 0x158) = s_cross_board_hint_dark_23_005faccc;
  *(undefined4 *)(iVar3 + 0x154) = uVar2;
  *(char **)(iVar3 + 0x168) = s_cross_board_hint_dark_26_005face8;
  *(undefined4 *)(iVar3 + 0x164) = uVar2;
  *(char **)(iVar3 + 0x178) = s_cross_board_hint_dark_36_005fad04;
  *(undefined4 *)(iVar3 + 0x174) = uVar2;
  *(char **)(iVar3 + 0x188) = s_cross_board_hint_dark_38_005fad20;
  *(undefined4 *)(iVar3 + 0x184) = uVar2;
  *(char **)(iVar3 + 0x198) = s_cross_board_hint_dark_3B_005fad3c;
  *(undefined4 *)(iVar3 + 0x194) = uVar2;
  *(char **)(iVar3 + 0x1a8) = s_cross_board_hint_dark_2C_005fad58;
  *(undefined4 *)(iVar3 + 0x1a4) = uVar2;
  *(char **)(iVar3 + 0x1b8) = s_cross_board_hint_dark_03_005fad74;
  *(undefined4 *)(iVar3 + 0x1b4) = uVar2;
  *(undefined4 *)(iVar3 + 0x1c4) = uVar2;
  *(char **)(iVar3 + 0x1c8) = s_cross_board_hint_dark_14_005fad90;
  return func_005902C0(0);
}

