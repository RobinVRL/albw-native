#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0011fd74;
extern undefined4 *DAT_0011fd78;
extern undefined4 DAT_0011fd7c;
extern undefined DAT_0011fe20;
extern undefined DAT_0011fe60;
extern undefined DAT_0011fe8c;
extern undefined4 DAT_0011fe90;
extern undefined4 DAT_0011fe94;
extern char s_Empty_0011fd80[];
extern char s_Fairy_0011fe10[];
extern char s_Grass_0011fe24[];
extern char s_Grass_Giri_Dark_0011fe7c[];
extern char s_Grass_Giri_Light_0011fe68[];
extern char s_Heart_0011fdc8[];
extern char s_LiverBlue_0011fe48[];
extern char s_LiverPurple_0011fe3c[];
extern char s_LiverYellow_0011fe54[];
extern char s_Magic_0011fe18[];
extern char s_MediumSoldier_0011fe2c[];
extern char s_Normal_0011fd94[];
extern char s_Normal_High_0011fd9c[];
extern char s_Normal_Low_0011fd88[];
extern char s_Rupee_0011fdb4[];
extern char s_Rupee_100_0011fdf8[];
extern char s_Rupee_1_0011fdd0[];
extern char s_Rupee_20_0011fde0[];
extern char s_Rupee_300_0011fe04[];
extern char s_Rupee_50_0011fdec[];
extern char s_Rupee_5_0011fdd8[];
extern char s_Rupee_High_0011fdbc[];
extern char s_Rupee_Low_0011fda8[];

// USA 0011FBD4 <- EU 0011FBD4 (Ghidra, non-matching)
// GLOBAL DAT_0011fd74 uint *
// GLOBAL DAT_0011fd78 undefined4 *
// GLOBAL DAT_0011fd7c undefined4
// GLOBAL DAT_0011fe20 undefined
// GLOBAL DAT_0011fe60 undefined
// GLOBAL DAT_0011fe8c undefined
// GLOBAL DAT_0011fe90 undefined4
// GLOBAL DAT_0011fe94 undefined4
// GLOBAL s_Empty_0011fd80 string
// GLOBAL s_Fairy_0011fe10 string
// GLOBAL s_Grass_0011fe24 string
// GLOBAL s_Grass_Giri_Dark_0011fe7c string
// GLOBAL s_Grass_Giri_Light_0011fe68 string
// GLOBAL s_Heart_0011fdc8 string
// GLOBAL s_LiverBlue_0011fe48 string
// GLOBAL s_LiverPurple_0011fe3c string
// GLOBAL s_LiverYellow_0011fe54 string
// GLOBAL s_Magic_0011fe18 string
// GLOBAL s_MediumSoldier_0011fe2c string
// GLOBAL s_Normal_0011fd94 string
// GLOBAL s_Normal_High_0011fd9c string
// GLOBAL s_Normal_Low_0011fd88 string
// GLOBAL s_Rupee_0011fdb4 string
// GLOBAL s_Rupee_100_0011fdf8 string
// GLOBAL s_Rupee_1_0011fdd0 string
// GLOBAL s_Rupee_20_0011fde0 string
// GLOBAL s_Rupee_300_0011fe04 string
// GLOBAL s_Rupee_50_0011fdec string
// GLOBAL s_Rupee_5_0011fdd8 string
// GLOBAL s_Rupee_High_0011fdbc string
// GLOBAL s_Rupee_Low_0011fda8 string

void func_0011FBD4(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = DAT_0011fd7c;
  puVar1 = DAT_0011fd78;
  if (((*DAT_0011fd74 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0011fd74), iVar3 != 0)) {
    puVar1[1] = s_Empty_0011fd80;
    *puVar1 = uVar2;
    puVar1[3] = s_Normal_Low_0011fd88;
    puVar1[2] = uVar2;
    puVar1[5] = s_Normal_0011fd94;
    puVar1[4] = uVar2;
    puVar1[7] = s_Normal_High_0011fd9c;
    puVar1[6] = uVar2;
    puVar1[9] = s_Rupee_Low_0011fda8;
    puVar1[8] = uVar2;
    puVar1[0xb] = s_Rupee_0011fdb4;
    puVar1[10] = uVar2;
    puVar1[0xd] = s_Rupee_High_0011fdbc;
    puVar1[0xc] = uVar2;
    puVar1[0xf] = s_Heart_0011fdc8;
    puVar1[0xe] = uVar2;
    puVar1[0x11] = s_Rupee_1_0011fdd0;
    puVar1[0x10] = uVar2;
    puVar1[0x13] = s_Rupee_5_0011fdd8;
    puVar1[0x12] = uVar2;
    puVar1[0x15] = s_Rupee_20_0011fde0;
    puVar1[0x14] = uVar2;
    puVar1[0x17] = s_Rupee_50_0011fdec;
    puVar1[0x16] = uVar2;
    puVar1[0x19] = s_Rupee_100_0011fdf8;
    puVar1[0x18] = uVar2;
    puVar1[0x1b] = s_Rupee_300_0011fe04;
    puVar1[0x1a] = uVar2;
    puVar1[0x1d] = s_Fairy_0011fe10;
    puVar1[0x1c] = uVar2;
    puVar1[0x1f] = s_Magic_0011fe18;
    puVar1[0x1e] = uVar2;
    puVar1[0x21] = &DAT_0011fe20;
    puVar1[0x20] = uVar2;
    puVar1[0x23] = s_Grass_0011fe24;
    puVar1[0x22] = uVar2;
    puVar1[0x25] = s_MediumSoldier_0011fe2c;
    puVar1[0x24] = uVar2;
    puVar1[0x27] = s_LiverPurple_0011fe3c;
    puVar1[0x26] = uVar2;
    puVar1[0x29] = s_LiverBlue_0011fe48;
    puVar1[0x28] = uVar2;
    puVar1[0x2b] = s_LiverYellow_0011fe54;
    puVar1[0x2a] = uVar2;
    puVar1[0x2d] = &DAT_0011fe60;
    puVar1[0x2c] = uVar2;
    puVar1[0x2f] = s_Grass_Giri_Light_0011fe68;
    puVar1[0x2e] = uVar2;
    puVar1[0x30] = uVar2;
    puVar1[0x31] = s_Grass_Giri_Dark_0011fe7c;
    puVar1[0x33] = &DAT_0011fe8c;
    puVar1[0x32] = uVar2;
  }
  *param_1 = uVar2;
  param_1[1] = puVar1[param_2 * 2 + 1];
  return;
}

