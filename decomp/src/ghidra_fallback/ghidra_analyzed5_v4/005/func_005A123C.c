#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005a1314;
extern undefined4 *DAT_005a1318;
extern undefined4 *DAT_005a131c;
extern undefined4 DAT_005a132c;
extern undefined4 DAT_005a13e4;
extern undefined4 DAT_005a13e8;
extern char s_Lyt_Boot_005a1320[];
extern char s_Lyt_Collect_005a1330[];
extern char s_Lyt_Common_005a133c[];
extern char s_Lyt_Dark_005a1348[];
extern char s_Lyt_Demo_005a1354[];
extern char s_Lyt_Dungeon_005a1360[];
extern char s_Lyt_Ending_005a136c[];
extern char s_Lyt_Field_005a1378[];
extern char s_Lyt_Game_005a1384[];
extern char s_Lyt_Light_005a1390[];
extern char s_Lyt_Menu_005a139c[];
extern char s_Lyt_Obaba_005a13b4[];
extern char s_Lyt_PowerUp_005a13c0[];
extern char s_Lyt_Rental_005a13cc[];
extern char s_Lyt_Stadium_005a13d8[];
extern char s_Lyt_Versus_005a13a8[];

// USA 005A123C <- EU 005A1214 (Ghidra, non-matching)
// GLOBAL DAT_005a1314 int
// GLOBAL DAT_005a1318 undefined4 *
// GLOBAL DAT_005a131c undefined4 *
// GLOBAL DAT_005a132c undefined4
// GLOBAL DAT_005a13e4 undefined4
// GLOBAL DAT_005a13e8 undefined4
// GLOBAL s_Lyt_Boot_005a1320 string
// GLOBAL s_Lyt_Collect_005a1330 string
// GLOBAL s_Lyt_Common_005a133c string
// GLOBAL s_Lyt_Dark_005a1348 string
// GLOBAL s_Lyt_Demo_005a1354 string
// GLOBAL s_Lyt_Dungeon_005a1360 string
// GLOBAL s_Lyt_Ending_005a136c string
// GLOBAL s_Lyt_Field_005a1378 string
// GLOBAL s_Lyt_Game_005a1384 string
// GLOBAL s_Lyt_Light_005a1390 string
// GLOBAL s_Lyt_Menu_005a139c string
// GLOBAL s_Lyt_Obaba_005a13b4 string
// GLOBAL s_Lyt_PowerUp_005a13c0 string
// GLOBAL s_Lyt_Rental_005a13cc string
// GLOBAL s_Lyt_Stadium_005a13d8 string
// GLOBAL s_Lyt_Versus_005a13a8 string

undefined4 func_005A123C(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005a1314;
  *(undefined4 *)(DAT_005a1314 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005a1318;
  *DAT_005a1318 = 0;
  puVar2[1] = 0;
  uVar3 = DAT_005a132c;
  puVar2 = DAT_005a131c;
  *DAT_005a131c = DAT_005a132c;
  puVar2[1] = s_Lyt_Boot_005a1320;
  puVar2[2] = uVar3;
  puVar2[3] = s_Lyt_Collect_005a1330;
  puVar2[4] = uVar3;
  puVar2[5] = s_Lyt_Common_005a133c;
  puVar2[6] = uVar3;
  puVar2[7] = s_Lyt_Dark_005a1348;
  puVar2[8] = uVar3;
  puVar2[9] = s_Lyt_Demo_005a1354;
  puVar2[10] = uVar3;
  puVar2[0xb] = s_Lyt_Dungeon_005a1360;
  puVar2[0xc] = uVar3;
  puVar2[0xd] = s_Lyt_Ending_005a136c;
  puVar2[0xe] = uVar3;
  puVar2[0xf] = s_Lyt_Field_005a1378;
  puVar2[0x10] = uVar3;
  puVar2[0x11] = s_Lyt_Game_005a1384;
  puVar2[0x12] = uVar3;
  puVar2[0x13] = s_Lyt_Light_005a1390;
  puVar2[0x14] = uVar3;
  puVar2[0x15] = s_Lyt_Menu_005a139c;
  puVar2[0x16] = uVar3;
  puVar2[0x17] = s_Lyt_Versus_005a13a8;
  puVar2[0x18] = uVar3;
  puVar2[0x19] = s_Lyt_Obaba_005a13b4;
  puVar2[0x1a] = uVar3;
  puVar2[0x1b] = s_Lyt_PowerUp_005a13c0;
  puVar2[0x1c] = uVar3;
  puVar2[0x1d] = s_Lyt_Rental_005a13cc;
  puVar2[0x1e] = uVar3;
  puVar2[0x1f] = s_Lyt_Stadium_005a13d8;
  puVar2[0x20] = uVar3;
  puVar2[0x21] = s_Lyt_Boot_005a1320 + 8;
  return func_005902C0(0);
}

