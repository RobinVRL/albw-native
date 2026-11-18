#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005f8b90;
extern undefined4 *DAT_005f8b94;
extern undefined4 DAT_005f8ba8;
extern undefined4 DAT_005f8bac;
extern undefined4 DAT_005f8bb0;
extern undefined4 *DAT_005f8bb4;
extern undefined DAT_005f8bb8;
extern undefined DAT_005f8bbc;
extern undefined DAT_005f8bc8;
extern undefined4 DAT_005f8be8;
extern undefined4 *DAT_005f8bec;
extern undefined4 DAT_005f8c30;
extern undefined4 *DAT_005f8c34;
extern undefined DAT_005f8c38;
extern undefined DAT_005f8c3c;
extern undefined DAT_005f8c40;
extern undefined DAT_005f8c44;
extern undefined4 DAT_005f8c48;
extern undefined4 *DAT_005f8c4c;
extern undefined4 DAT_005f8c78;
extern undefined4 *DAT_005f8c7c;
extern undefined4 DAT_005f8ca4;
extern char s_Gm_SRCStartT_005f8b98[];
extern char s_Heart1Line_005f8bd0[];
extern char s_Heart2Line_005f8bdc[];
extern char s_InInfo_005f8bc0[];
extern char s_L_Clothes_00_005f8c08[];
extern char s_L_ItemX_00_005f8c24[];
extern char s_L_ItemY_00_005f8c18[];
extern char s_L_Shield_00_005f8bfc[];
extern char s_L_Sword_00_005f8bf0[];
extern char s_N_Item_00_005f8c80[];
extern char s_N_Item_01_005f8c8c[];
extern char s_N_Item_02_005f8c98[];
extern char s_P_Bee_00_005f8c50[];
extern char s_P_Boots_00_005f8c5c[];
extern char s_P_Torisetsu_00_005f8c68[];

// USA 005F8A08 <- EU 005F89E0 (Ghidra, non-matching)
// GLOBAL DAT_005f8b90 undefined4 *
// GLOBAL DAT_005f8b94 undefined4 *
// GLOBAL DAT_005f8ba8 undefined4
// GLOBAL DAT_005f8bac undefined4
// GLOBAL DAT_005f8bb0 undefined4
// GLOBAL DAT_005f8bb4 undefined4 *
// GLOBAL DAT_005f8bb8 undefined
// GLOBAL DAT_005f8bbc undefined
// GLOBAL DAT_005f8bc8 undefined
// GLOBAL DAT_005f8be8 undefined4
// GLOBAL DAT_005f8bec undefined4 *
// GLOBAL DAT_005f8c30 undefined4
// GLOBAL DAT_005f8c34 undefined4 *
// GLOBAL DAT_005f8c38 undefined
// GLOBAL DAT_005f8c3c undefined
// GLOBAL DAT_005f8c40 undefined
// GLOBAL DAT_005f8c44 undefined
// GLOBAL DAT_005f8c48 undefined4
// GLOBAL DAT_005f8c4c undefined4 *
// GLOBAL DAT_005f8c78 undefined4
// GLOBAL DAT_005f8c7c undefined4 *
// GLOBAL DAT_005f8ca4 undefined4
// GLOBAL s_Gm_SRCStartT_005f8b98 string
// GLOBAL s_Heart1Line_005f8bd0 string
// GLOBAL s_Heart2Line_005f8bdc string
// GLOBAL s_InInfo_005f8bc0 string
// GLOBAL s_L_Clothes_00_005f8c08 string
// GLOBAL s_L_ItemX_00_005f8c24 string
// GLOBAL s_L_ItemY_00_005f8c18 string
// GLOBAL s_L_Shield_00_005f8bfc string
// GLOBAL s_L_Sword_00_005f8bf0 string
// GLOBAL s_N_Item_00_005f8c80 string
// GLOBAL s_N_Item_01_005f8c8c string
// GLOBAL s_N_Item_02_005f8c98 string
// GLOBAL s_P_Bee_00_005f8c50 string
// GLOBAL s_P_Boots_00_005f8c5c string
// GLOBAL s_P_Torisetsu_00_005f8c68 string

undefined4 func_005F8A08(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005f8b90;
  *DAT_005f8b90 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005f8ba8;
  puVar1 = DAT_005f8b94;
  *DAT_005f8b94 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_Gm_SRCStartT_005f8b98;
  puVar1[2] = uVar2;
  puVar1 = DAT_005f8bb4;
  DAT_005f8bb4[1] = &DAT_005f8bb8;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005f8bbc;
  puVar1[2] = uVar2;
  puVar1[5] = s_InInfo_005f8bc0;
  puVar1[4] = uVar2;
  puVar1[7] = &DAT_005f8bc8;
  puVar1[6] = uVar2;
  puVar1[9] = s_Heart1Line_005f8bd0;
  puVar1[8] = uVar2;
  puVar1[10] = uVar2;
  puVar1[0xb] = s_Heart2Line_005f8bdc;
  puVar1 = DAT_005f8bec;
  DAT_005f8bec[1] = s_L_Sword_00_005f8bf0;
  *puVar1 = uVar2;
  puVar1[3] = s_L_Shield_00_005f8bfc;
  puVar1[2] = uVar2;
  puVar1[5] = s_L_Clothes_00_005f8c08;
  puVar1[4] = uVar2;
  puVar1[7] = s_L_ItemY_00_005f8c18;
  puVar1[6] = uVar2;
  puVar1[8] = uVar2;
  puVar1[9] = s_L_ItemX_00_005f8c24;
  puVar1 = DAT_005f8c34;
  DAT_005f8c34[1] = &DAT_005f8c38;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005f8c3c;
  puVar1[2] = uVar2;
  puVar1[5] = &DAT_005f8c40;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = &DAT_005f8c44;
  puVar1 = DAT_005f8c4c;
  DAT_005f8c4c[1] = s_P_Bee_00_005f8c50;
  *puVar1 = uVar2;
  puVar1[3] = s_P_Boots_00_005f8c5c;
  puVar1[2] = uVar2;
  puVar1[4] = uVar2;
  puVar1[5] = s_P_Torisetsu_00_005f8c68;
  puVar1 = DAT_005f8c7c;
  DAT_005f8c7c[1] = s_N_Item_00_005f8c80;
  *puVar1 = uVar2;
  puVar1[3] = s_N_Item_01_005f8c8c;
  puVar1[2] = uVar2;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_Item_02_005f8c98;
  return func_005902C0(0);
}

