#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005f2718;
extern undefined4 *DAT_005f271c;
extern undefined4 *DAT_005f2720;
extern undefined4 DAT_005f2730;
extern undefined4 DAT_005f2758;
extern undefined4 DAT_005f275c;
extern undefined4 *DAT_005f2760;
extern undefined4 DAT_005f277c;
extern undefined4 *DAT_005f2780;
extern undefined DAT_005f27ac;
extern undefined4 DAT_005f27b4;
extern undefined4 *DAT_005f27b8;
extern undefined DAT_005f27bc;
extern undefined DAT_005f27c0;
extern undefined DAT_005f27c4;
extern undefined DAT_005f27c8;
extern undefined4 DAT_005f27cc;
extern undefined4 *DAT_005f27d0;
extern undefined4 DAT_005f2834;
extern undefined4 *DAT_005f2838;
extern undefined4 DAT_005f2878;
extern undefined4 *DAT_005f287c;
extern undefined4 DAT_005f28a8;
extern undefined4 *DAT_005f28ac;
extern undefined4 DAT_005f28d4;
extern char s_Gm_SRCMainSystemBaseB_005f2764[];
extern char s_Heart1Line_005f2798[];
extern char s_Heart2Line_005f278c[];
extern char s_InIcon_005f2784[];
extern char s_L_Clothes_00_005f27ec[];
extern char s_L_ItemX_00_005f2808[];
extern char s_L_ItemY_00_005f27fc[];
extern char s_L_Shield_00_005f27e0[];
extern char s_L_Sword_00_005f27d4[];
extern char s_L_XbtnItem_00_005f2824[];
extern char s_L_YbtnItem_00_005f2814[];
extern char s_N_ArrowB_00_005f2734[];
extern char s_N_ArrowL_00_005f2740[];
extern char s_N_ArrowR_00_005f274c[];
extern char s_N_ArrowT_00_005f2724[];
extern char s_N_Item_00_005f28b0[];
extern char s_N_Item_01_005f28bc[];
extern char s_N_Item_02_005f28c8[];
extern char s_OutIcon_005f27a4[];
extern char s_P_Bee_00_005f2880[];
extern char s_P_Boots_00_005f288c[];
extern char s_P_MSword_00_005f2848[];
extern char s_P_MSword_01_005f2854[];
extern char s_P_MSword_02_005f2860[];
extern char s_P_Swim_00_005f286c[];
extern char s_P_Sword_00_005f283c[];
extern char s_P_Torisetsu_00_005f2898[];

// USA 005F24F0 <- EU 005F24C8 (Ghidra, non-matching)
// GLOBAL DAT_005f2718 undefined4 *
// GLOBAL DAT_005f271c undefined4 *
// GLOBAL DAT_005f2720 undefined4 *
// GLOBAL DAT_005f2730 undefined4
// GLOBAL DAT_005f2758 undefined4
// GLOBAL DAT_005f275c undefined4
// GLOBAL DAT_005f2760 undefined4 *
// GLOBAL DAT_005f277c undefined4
// GLOBAL DAT_005f2780 undefined4 *
// GLOBAL DAT_005f27ac undefined
// GLOBAL DAT_005f27b4 undefined4
// GLOBAL DAT_005f27b8 undefined4 *
// GLOBAL DAT_005f27bc undefined
// GLOBAL DAT_005f27c0 undefined
// GLOBAL DAT_005f27c4 undefined
// GLOBAL DAT_005f27c8 undefined
// GLOBAL DAT_005f27cc undefined4
// GLOBAL DAT_005f27d0 undefined4 *
// GLOBAL DAT_005f2834 undefined4
// GLOBAL DAT_005f2838 undefined4 *
// GLOBAL DAT_005f2878 undefined4
// GLOBAL DAT_005f287c undefined4 *
// GLOBAL DAT_005f28a8 undefined4
// GLOBAL DAT_005f28ac undefined4 *
// GLOBAL DAT_005f28d4 undefined4
// GLOBAL s_Gm_SRCMainSystemBaseB_005f2764 string
// GLOBAL s_Heart1Line_005f2798 string
// GLOBAL s_Heart2Line_005f278c string
// GLOBAL s_InIcon_005f2784 string
// GLOBAL s_L_Clothes_00_005f27ec string
// GLOBAL s_L_ItemX_00_005f2808 string
// GLOBAL s_L_ItemY_00_005f27fc string
// GLOBAL s_L_Shield_00_005f27e0 string
// GLOBAL s_L_Sword_00_005f27d4 string
// GLOBAL s_L_XbtnItem_00_005f2824 string
// GLOBAL s_L_YbtnItem_00_005f2814 string
// GLOBAL s_N_ArrowB_00_005f2734 string
// GLOBAL s_N_ArrowL_00_005f2740 string
// GLOBAL s_N_ArrowR_00_005f274c string
// GLOBAL s_N_ArrowT_00_005f2724 string
// GLOBAL s_N_Item_00_005f28b0 string
// GLOBAL s_N_Item_01_005f28bc string
// GLOBAL s_N_Item_02_005f28c8 string
// GLOBAL s_OutIcon_005f27a4 string
// GLOBAL s_P_Bee_00_005f2880 string
// GLOBAL s_P_Boots_00_005f288c string
// GLOBAL s_P_MSword_00_005f2848 string
// GLOBAL s_P_MSword_01_005f2854 string
// GLOBAL s_P_MSword_02_005f2860 string
// GLOBAL s_P_Swim_00_005f286c string
// GLOBAL s_P_Sword_00_005f283c string
// GLOBAL s_P_Torisetsu_00_005f2898 string

undefined4 func_005F24F0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005f2718;
  *DAT_005f2718 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005f2730;
  puVar1 = DAT_005f271c;
  *DAT_005f271c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f2720;
  DAT_005f2720[1] = s_N_ArrowT_00_005f2724;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005f2734;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005f2740;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005f274c;
  puVar1 = DAT_005f2760;
  DAT_005f2760[1] = s_Gm_SRCMainSystemBaseB_005f2764;
  *puVar1 = uVar2;
  puVar1 = DAT_005f2780;
  DAT_005f2780[1] = s_InIcon_005f2784;
  *puVar1 = uVar2;
  puVar1[3] = s_Heart2Line_005f278c;
  puVar1[2] = uVar2;
  puVar1[5] = s_Heart1Line_005f2798;
  puVar1[4] = uVar2;
  puVar1[7] = s_OutIcon_005f27a4;
  puVar1[6] = uVar2;
  puVar1[8] = uVar2;
  puVar1[9] = &DAT_005f27ac;
  puVar1 = DAT_005f27b8;
  DAT_005f27b8[1] = &DAT_005f27bc;
  *puVar1 = uVar2;
  puVar1[3] = &DAT_005f27c0;
  puVar1[2] = uVar2;
  puVar1[5] = &DAT_005f27c4;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = &DAT_005f27c8;
  puVar1 = DAT_005f27d0;
  DAT_005f27d0[1] = s_L_Sword_00_005f27d4;
  *puVar1 = uVar2;
  puVar1[3] = s_L_Shield_00_005f27e0;
  puVar1[2] = uVar2;
  puVar1[5] = s_L_Clothes_00_005f27ec;
  puVar1[4] = uVar2;
  puVar1[7] = s_L_ItemY_00_005f27fc;
  puVar1[6] = uVar2;
  puVar1[9] = s_L_ItemX_00_005f2808;
  puVar1[8] = uVar2;
  puVar1[0xb] = s_L_YbtnItem_00_005f2814;
  puVar1[10] = uVar2;
  puVar1[0xc] = uVar2;
  puVar1[0xd] = s_L_XbtnItem_00_005f2824;
  puVar1 = DAT_005f2838;
  DAT_005f2838[1] = s_P_Sword_00_005f283c;
  *puVar1 = uVar2;
  puVar1[3] = s_P_MSword_00_005f2848;
  puVar1[2] = uVar2;
  puVar1[5] = s_P_MSword_01_005f2854;
  puVar1[4] = uVar2;
  puVar1[7] = s_P_MSword_02_005f2860;
  puVar1[6] = uVar2;
  puVar1[8] = uVar2;
  puVar1[9] = s_P_Swim_00_005f286c;
  puVar1 = DAT_005f287c;
  DAT_005f287c[1] = s_P_Bee_00_005f2880;
  *puVar1 = uVar2;
  puVar1[3] = s_P_Boots_00_005f288c;
  puVar1[2] = uVar2;
  puVar1[4] = uVar2;
  puVar1[5] = s_P_Torisetsu_00_005f2898;
  puVar1 = DAT_005f28ac;
  DAT_005f28ac[1] = s_N_Item_00_005f28b0;
  *puVar1 = uVar2;
  puVar1[3] = s_N_Item_01_005f28bc;
  puVar1[2] = uVar2;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_Item_02_005f28c8;
  return func_005902C0(0);
}

