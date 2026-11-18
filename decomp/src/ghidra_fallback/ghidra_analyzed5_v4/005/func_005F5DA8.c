#include "ghidra_types.h"

extern int DAT_005f5fd0;
extern undefined4 *DAT_005f5fd4;
extern undefined4 *DAT_005f5fd8;
extern undefined4 DAT_005f5fe8;
extern undefined4 DAT_005f6010;
extern undefined4 DAT_005f6014;
extern undefined4 *DAT_005f6018;
extern undefined4 DAT_005f602c;
extern undefined4 *DAT_005f6030;
extern undefined4 *DAT_005f6040;
extern undefined4 *DAT_005f6050;
extern undefined4 *DAT_005f6064;
extern undefined4 *DAT_005f6074;
extern undefined4 *DAT_005f6084;
extern undefined4 *DAT_005f6094;
extern undefined DAT_005f6098;
extern undefined DAT_005f60a0;
extern undefined4 DAT_005f60bc;
extern undefined4 *DAT_005f60c0;
extern undefined4 DAT_005f6104;
extern undefined4 *DAT_005f6108;
extern undefined DAT_005f610c;
extern undefined DAT_005f6110;
extern undefined DAT_005f6114;
extern undefined DAT_005f6118;
extern undefined4 DAT_005f611c;
extern undefined4 DAT_005f6120;
extern undefined4 DAT_005f6124;
extern undefined4 *DAT_005f6128;
extern undefined4 DAT_005f612c;
extern undefined4 DAT_005f6130;
extern undefined4 DAT_005f6134;
extern char s_Gm_SRCSettingB_005f601c[];
extern char s_Heart1Line_005f60a4[];
extern char s_Heart2Line_005f60b0[];
extern char s_L_Clothes_00_005f60dc[];
extern char s_L_ItemX_00_005f60f8[];
extern char s_L_ItemY_00_005f60ec[];
extern char s_L_Shield_00_005f60d0[];
extern char s_L_Sword_00_005f60c4[];
extern char s_N_ArrowB_00_005f5fec[];
extern char s_N_ArrowL_00_005f5ff8[];
extern char s_N_ArrowR_00_005f6004[];
extern char s_N_ArrowT_00_005f5fdc[];
extern char s_N_Item_00_005f6068[];
extern char s_N_Item_01_005f6078[];
extern char s_N_Item_02_005f6088[];
extern char s_P_Bee_00_005f6034[];
extern char s_P_Boots_00_005f6044[];
extern char s_P_Torisetsu_00_005f6054[];

// USA 005F5DA8 <- EU 005F5D80 (Ghidra, non-matching)
// GLOBAL DAT_005f5fd0 int
// GLOBAL DAT_005f5fd4 undefined4 *
// GLOBAL DAT_005f5fd8 undefined4 *
// GLOBAL DAT_005f5fe8 undefined4
// GLOBAL DAT_005f6010 undefined4
// GLOBAL DAT_005f6014 undefined4
// GLOBAL DAT_005f6018 undefined4 *
// GLOBAL DAT_005f602c undefined4
// GLOBAL DAT_005f6030 undefined4 *
// GLOBAL DAT_005f6040 undefined4 *
// GLOBAL DAT_005f6050 undefined4 *
// GLOBAL DAT_005f6064 undefined4 *
// GLOBAL DAT_005f6074 undefined4 *
// GLOBAL DAT_005f6084 undefined4 *
// GLOBAL DAT_005f6094 undefined4 *
// GLOBAL DAT_005f6098 undefined
// GLOBAL DAT_005f60a0 undefined
// GLOBAL DAT_005f60bc undefined4
// GLOBAL DAT_005f60c0 undefined4 *
// GLOBAL DAT_005f6104 undefined4
// GLOBAL DAT_005f6108 undefined4 *
// GLOBAL DAT_005f610c undefined
// GLOBAL DAT_005f6110 undefined
// GLOBAL DAT_005f6114 undefined
// GLOBAL DAT_005f6118 undefined
// GLOBAL DAT_005f611c undefined4
// GLOBAL DAT_005f6120 undefined4
// GLOBAL DAT_005f6124 undefined4
// GLOBAL DAT_005f6128 undefined4 *
// GLOBAL DAT_005f612c undefined4
// GLOBAL DAT_005f6130 undefined4
// GLOBAL DAT_005f6134 undefined4
// GLOBAL s_Gm_SRCSettingB_005f601c string
// GLOBAL s_Heart1Line_005f60a4 string
// GLOBAL s_Heart2Line_005f60b0 string
// GLOBAL s_L_Clothes_00_005f60dc string
// GLOBAL s_L_ItemX_00_005f60f8 string
// GLOBAL s_L_ItemY_00_005f60ec string
// GLOBAL s_L_Shield_00_005f60d0 string
// GLOBAL s_L_Sword_00_005f60c4 string
// GLOBAL s_N_ArrowB_00_005f5fec string
// GLOBAL s_N_ArrowL_00_005f5ff8 string
// GLOBAL s_N_ArrowR_00_005f6004 string
// GLOBAL s_N_ArrowT_00_005f5fdc string
// GLOBAL s_N_Item_00_005f6068 string
// GLOBAL s_N_Item_01_005f6078 string
// GLOBAL s_N_Item_02_005f6088 string
// GLOBAL s_P_Bee_00_005f6034 string
// GLOBAL s_P_Boots_00_005f6044 string
// GLOBAL s_P_Torisetsu_00_005f6054 string

void func_005F5DA8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = DAT_005f5fd0;
  *(undefined4 *)(DAT_005f5fd0 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  uVar3 = DAT_005f5fe8;
  puVar2 = DAT_005f5fd4;
  *DAT_005f5fd4 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005f5fd8;
  DAT_005f5fd8[1] = s_N_ArrowT_00_005f5fdc;
  *puVar2 = uVar3;
  puVar2[3] = s_N_ArrowB_00_005f5fec;
  puVar2[2] = uVar3;
  puVar2[5] = s_N_ArrowL_00_005f5ff8;
  puVar2[4] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_005f6004;
  puVar2 = DAT_005f6018;
  DAT_005f6018[1] = s_Gm_SRCSettingB_005f601c;
  *puVar2 = uVar3;
  puVar2 = DAT_005f6030;
  DAT_005f6030[1] = s_P_Bee_00_005f6034;
  *puVar2 = uVar3;
  puVar2 = DAT_005f6040;
  DAT_005f6040[1] = s_P_Boots_00_005f6044;
  *puVar2 = uVar3;
  puVar2 = DAT_005f6050;
  DAT_005f6050[1] = s_P_Torisetsu_00_005f6054;
  *puVar2 = uVar3;
  puVar2 = DAT_005f6064;
  DAT_005f6064[1] = s_N_Item_00_005f6068;
  *puVar2 = uVar3;
  puVar2 = DAT_005f6074;
  DAT_005f6074[1] = s_N_Item_01_005f6078;
  *puVar2 = uVar3;
  puVar2 = DAT_005f6084;
  DAT_005f6084[1] = s_N_Item_02_005f6088;
  *puVar2 = uVar3;
  puVar2 = DAT_005f6094;
  DAT_005f6094[1] = &DAT_005f6098;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005f60a0;
  puVar2[2] = uVar3;
  puVar2[5] = &DAT_005f60a0;
  puVar2[4] = uVar3;
  puVar2[7] = s_Heart1Line_005f60a4;
  puVar2[6] = uVar3;
  puVar2[8] = uVar3;
  puVar2[9] = s_Heart2Line_005f60b0;
  puVar2 = DAT_005f60c0;
  DAT_005f60c0[1] = s_L_Sword_00_005f60c4;
  *puVar2 = uVar3;
  puVar2[3] = s_L_Shield_00_005f60d0;
  puVar2[2] = uVar3;
  puVar2[5] = s_L_Clothes_00_005f60dc;
  puVar2[4] = uVar3;
  puVar2[7] = s_L_ItemY_00_005f60ec;
  puVar2[6] = uVar3;
  puVar2[8] = uVar3;
  puVar2[9] = s_L_ItemX_00_005f60f8;
  puVar2 = DAT_005f6108;
  DAT_005f6108[1] = &DAT_005f610c;
  *puVar2 = uVar3;
  puVar2[3] = &DAT_005f6110;
  puVar2[2] = uVar3;
  puVar2[5] = &DAT_005f6114;
  puVar2[4] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = &DAT_005f6118;
  uVar6 = DAT_005f6130;
  uVar5 = DAT_005f612c;
  puVar2 = DAT_005f6128;
  uVar4 = DAT_005f6124;
  uVar3 = DAT_005f6120;
  *DAT_005f6128 = DAT_005f6120;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  uVar5 = DAT_005f6134;
  puVar2[3] = uVar6;
  puVar2[4] = uVar5;
  puVar2[5] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = uVar4;
  puVar2[8] = uVar3;
  return;
}

